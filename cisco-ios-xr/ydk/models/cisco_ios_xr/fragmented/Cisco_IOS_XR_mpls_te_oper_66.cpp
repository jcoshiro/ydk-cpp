
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_66.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_67.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{
    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-autobackup";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelId' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::ProtectedInterface()
    :
    protected_interface{YType::str, "protected-interface"}
{
    yang_name = "protected-interface"; yang_parent_name = "attribute-set-autobackup";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::~ProtectedInterface()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_data() const
{
    return protected_interface.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protected_interface.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtectedInterface' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protected_interface.is_set || is_set(protected_interface.yfilter)) leaf_name_data.push_back(protected_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protected-interface")
    {
        protected_interface = value;
        protected_interface.value_namespace = name_space;
        protected_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protected-interface")
    {
        protected_interface.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected-interface")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::AttributeSetAutomesh()
    :
    auto_bandwidth_collect{YType::boolean, "auto-bandwidth-collect"},
    auto_route_announce{YType::boolean, "auto-route-announce"},
    bandwidth{YType::uint32, "bandwidth"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    fast_reroute{YType::boolean, "fast-reroute"},
    forward_class{YType::uint32, "forward-class"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    frr_node_protection{YType::boolean, "frr-node-protection"},
    hold_priority{YType::uint8, "hold-priority"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_interface_bw_configured{YType::boolean, "is-interface-bw-configured"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    load_share{YType::uint32, "load-share"},
    policy_class{YType::uint8, "policy-class"},
    record_route{YType::boolean, "record-route"},
    setup_priority{YType::uint8, "setup-priority"},
    soft_preemption_configured{YType::boolean, "soft-preemption-configured"}
    	,
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>())
	,logging(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>())
{
    affinity->parent = this;

    logging->parent = this;

    yang_name = "attribute-set-automesh"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::~AttributeSetAutomesh()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_data() const
{
    for (std::size_t index=0; index<mesh_group_id.size(); index++)
    {
        if(mesh_group_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<policy_class_entry.size(); index++)
    {
        if(policy_class_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    return auto_bandwidth_collect.is_set
	|| auto_route_announce.is_set
	|| bandwidth.is_set
	|| configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| fast_reroute.is_set
	|| forward_class.is_set
	|| frr_bandwidth_protection.is_set
	|| frr_node_protection.is_set
	|| hold_priority.is_set
	|| is_affinity_configured.is_set
	|| is_bandwidth_configured.is_set
	|| is_interface_bw_configured.is_set
	|| is_policyclass_configured.is_set
	|| is_priority_configured.is_set
	|| load_share.is_set
	|| policy_class.is_set
	|| record_route.is_set
	|| setup_priority.is_set
	|| soft_preemption_configured.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_operation() const
{
    for (std::size_t index=0; index<mesh_group_id.size(); index++)
    {
        if(mesh_group_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<policy_class_entry.size(); index++)
    {
        if(policy_class_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(auto_bandwidth_collect.yfilter)
	|| ydk::is_set(auto_route_announce.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(fast_reroute.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(frr_bandwidth_protection.yfilter)
	|| ydk::is_set(frr_node_protection.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(is_interface_bw_configured.yfilter)
	|| ydk::is_set(is_policyclass_configured.yfilter)
	|| ydk::is_set(is_priority_configured.yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| ydk::is_set(policy_class.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(soft_preemption_configured.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-automesh";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetAutomesh' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_bandwidth_collect.is_set || is_set(auto_bandwidth_collect.yfilter)) leaf_name_data.push_back(auto_bandwidth_collect.get_name_leafdata());
    if (auto_route_announce.is_set || is_set(auto_route_announce.yfilter)) leaf_name_data.push_back(auto_route_announce.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (fast_reroute.is_set || is_set(fast_reroute.yfilter)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.yfilter)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (frr_node_protection.is_set || is_set(frr_node_protection.yfilter)) leaf_name_data.push_back(frr_node_protection.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_interface_bw_configured.is_set || is_set(is_interface_bw_configured.yfilter)) leaf_name_data.push_back(is_interface_bw_configured.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.yfilter)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.yfilter)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (soft_preemption_configured.is_set || is_set(soft_preemption_configured.yfilter)) leaf_name_data.push_back(soft_preemption_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "mesh-group-id")
    {
        for(auto const & c : mesh_group_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId>();
        c->parent = this;
        mesh_group_id.push_back(c);
        return c;
    }

    if(child_yang_name == "policy-class-entry")
    {
        for(auto const & c : policy_class_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry>();
        c->parent = this;
        policy_class_entry.push_back(c);
        return c;
    }

    if(child_yang_name == "tunnel-id")
    {
        for(auto const & c : tunnel_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    for (auto const & c : mesh_group_id)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : policy_class_entry)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tunnel_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-bandwidth-collect")
    {
        auto_bandwidth_collect = value;
        auto_bandwidth_collect.value_namespace = name_space;
        auto_bandwidth_collect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-route-announce")
    {
        auto_route_announce = value;
        auto_route_announce.value_namespace = name_space;
        auto_route_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
        fast_reroute.value_namespace = name_space;
        fast_reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
        frr_bandwidth_protection.value_namespace = name_space;
        frr_bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-node-protection")
    {
        frr_node_protection = value;
        frr_node_protection.value_namespace = name_space;
        frr_node_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface-bw-configured")
    {
        is_interface_bw_configured = value;
        is_interface_bw_configured.value_namespace = name_space;
        is_interface_bw_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
        is_policyclass_configured.value_namespace = name_space;
        is_policyclass_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
        is_priority_configured.value_namespace = name_space;
        is_priority_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
        policy_class.value_namespace = name_space;
        policy_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-configured")
    {
        soft_preemption_configured = value;
        soft_preemption_configured.value_namespace = name_space;
        soft_preemption_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-bandwidth-collect")
    {
        auto_bandwidth_collect.yfilter = yfilter;
    }
    if(value_path == "auto-route-announce")
    {
        auto_route_announce.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "frr-node-protection")
    {
        frr_node_protection.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "is-interface-bw-configured")
    {
        is_interface_bw_configured.yfilter = yfilter;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured.yfilter = yfilter;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured.yfilter = yfilter;
    }
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
    if(value_path == "policy-class")
    {
        policy_class.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-configured")
    {
        soft_preemption_configured.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "mesh-group-id" || name == "policy-class-entry" || name == "tunnel-id" || name == "auto-bandwidth-collect" || name == "auto-route-announce" || name == "bandwidth" || name == "configured-bandwidth" || name == "dste-class-type" || name == "fast-reroute" || name == "forward-class" || name == "frr-bandwidth-protection" || name == "frr-node-protection" || name == "hold-priority" || name == "is-affinity-configured" || name == "is-bandwidth-configured" || name == "is-interface-bw-configured" || name == "is-policyclass-configured" || name == "is-priority-configured" || name == "load-share" || name == "policy-class" || name == "record-route" || name == "setup-priority" || name == "soft-preemption-configured")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-automesh";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_data() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        for(auto const & c : constraint_extended_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        for(auto const & c : extended_forward_ref_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : constraint_extended_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_forward_ref_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConstraintExtendedValue' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedForwardRefValue' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::Logging()
    :
    all_logging_enabled{YType::boolean, "all-logging-enabled"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"}
{
    yang_name = "logging"; yang_parent_name = "attribute-set-automesh";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::~Logging()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_data() const
{
    return all_logging_enabled.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| lsp_re_opt.is_set
	|| lsp_re_route.is_set
	|| lsp_state.is_set
	|| s2l_state.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_logging_enabled.yfilter)
	|| ydk::is_set(lsp_bandwidth_change.yfilter)
	|| ydk::is_set(lsp_insufficient_bw.yfilter)
	|| ydk::is_set(lsp_pcalc_failure_logging_enabled.yfilter)
	|| ydk::is_set(lsp_re_opt.yfilter)
	|| ydk::is_set(lsp_re_route.yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(s2l_state.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
        all_logging_enabled.value_namespace = name_space;
        all_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
        lsp_bandwidth_change.value_namespace = name_space;
        lsp_bandwidth_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
        lsp_insufficient_bw.value_namespace = name_space;
        lsp_insufficient_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
        lsp_pcalc_failure_logging_enabled.value_namespace = name_space;
        lsp_pcalc_failure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
        lsp_re_opt.value_namespace = name_space;
        lsp_re_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
        lsp_re_route.value_namespace = name_space;
        lsp_re_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
        s2l_state.value_namespace = name_space;
        s2l_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change.yfilter = yfilter;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw.yfilter = yfilter;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt.yfilter = yfilter;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route.yfilter = yfilter;
    }
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
    if(value_path == "s2l-state")
    {
        s2l_state.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-logging-enabled" || name == "lsp-bandwidth-change" || name == "lsp-insufficient-bw" || name == "lsp-pcalc-failure-logging-enabled" || name == "lsp-re-opt" || name == "lsp-re-route" || name == "lsp-state" || name == "s2l-state")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::PolicyClassEntry()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "policy-class-entry"; yang_parent_name = "attribute-set-automesh";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::~PolicyClassEntry()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-entry";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyClassEntry' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::MeshGroupId()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "mesh-group-id"; yang_parent_name = "attribute-set-automesh";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::~MeshGroupId()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group-id";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MeshGroupId' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{
    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-automesh";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelId' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::AttributeSetXro()
    :
    xro(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro>())
{
    xro->parent = this;

    yang_name = "attribute-set-xro"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::~AttributeSetXro()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::has_data() const
{
    return (xro !=  nullptr && xro->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::has_operation() const
{
    return is_set(yfilter)
	|| (xro !=  nullptr && xro->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-xro";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetXro' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro")
    {
        if(xro == nullptr)
        {
            xro = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro>();
        }
        return xro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xro != nullptr)
    {
        children["xro"] = xro;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::Xro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
{
    yang_name = "xro"; yang_parent_name = "attribute-set-xro";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::~Xro()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_data() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mutual_diversity_flag.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xro' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mutual_diversity_flag.is_set || is_set(mutual_diversity_flag.yfilter)) leaf_name_data.push_back(mutual_diversity_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro-subobject")
    {
        for(auto const & c : xro_subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject>();
        c->parent = this;
        xro_subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xro_subobject)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
        mutual_diversity_flag.value_namespace = name_space;
        mutual_diversity_flag.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro-subobject" || name == "mutual-diversity-flag")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
    	,
    as_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>())
	,ipv4_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>())
	,ipv6_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>())
	,lsp_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>())
	,srlg_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>())
	,unnumbered_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>())
{
    as_subobject->parent = this;

    ipv4_subobject->parent = this;

    ipv6_subobject->parent = this;

    lsp_subobject->parent = this;

    srlg_subobject->parent = this;

    unnumbered_subobject->parent = this;

    yang_name = "xro-subobject"; yang_parent_name = "xro";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::~XroSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_data() const
{
    return type.is_set
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (as_subobject !=  nullptr && as_subobject->has_operation())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_operation())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_operation())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_operation())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_operation())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XroSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-subobject")
    {
        if(as_subobject == nullptr)
        {
            as_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>();
        }
        return as_subobject;
    }

    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject == nullptr)
        {
            ipv4_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>();
        }
        return ipv4_subobject;
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject == nullptr)
        {
            ipv6_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>();
        }
        return ipv6_subobject;
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject == nullptr)
        {
            lsp_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>();
        }
        return lsp_subobject;
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject == nullptr)
        {
            srlg_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>();
        }
        return srlg_subobject;
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject == nullptr)
        {
            unnumbered_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>();
        }
        return unnumbered_subobject;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(as_subobject != nullptr)
    {
        children["as-subobject"] = as_subobject;
    }

    if(ipv4_subobject != nullptr)
    {
        children["ipv4-subobject"] = ipv4_subobject;
    }

    if(ipv6_subobject != nullptr)
    {
        children["ipv6-subobject"] = ipv6_subobject;
    }

    if(lsp_subobject != nullptr)
    {
        children["lsp-subobject"] = lsp_subobject;
    }

    if(srlg_subobject != nullptr)
    {
        children["srlg-subobject"] = srlg_subobject;
    }

    if(unnumbered_subobject != nullptr)
    {
        children["unnumbered-subobject"] = unnumbered_subobject;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-subobject" || name == "ipv4-subobject" || name == "ipv6-subobject" || name == "lsp-subobject" || name == "srlg-subobject" || name == "unnumbered-subobject" || name == "type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{
    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(prefix_len.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Subobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "attribute" || name == "exclusion-type" || name == "prefix-len")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{
    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(prefix_len.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Subobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "attribute" || name == "exclusion-type" || name == "prefix-len")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    interface_id{YType::uint32, "interface-id"},
    te_router_id{YType::str, "te-router-id"}
{
    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_data() const
{
    return attribute.is_set
	|| exclusion_type.is_set
	|| interface_id.is_set
	|| te_router_id.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(te_router_id.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnnumberedSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (te_router_id.is_set || is_set(te_router_id.yfilter)) leaf_name_data.push_back(te_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-router-id")
    {
        te_router_id = value;
        te_router_id.value_namespace = name_space;
        te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "te-router-id")
    {
        te_router_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute" || name == "exclusion-type" || name == "interface-id" || name == "te-router-id")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::AsSubobject()
    :
    as_number{YType::uint16, "as-number"}
{
    yang_name = "as-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::~AsSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_data() const
{
    return as_number.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-subobject";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::SrlgSubobject()
    :
    exclusion_type{YType::enumeration, "exclusion-type"},
    srlg_id{YType::uint32, "srlg-id"}
{
    yang_name = "srlg-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::~SrlgSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_data() const
{
    return exclusion_type.is_set
	|| srlg_id.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(srlg_id.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-subobject";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (srlg_id.is_set || is_set(srlg_id.yfilter)) leaf_name_data.push_back(srlg_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-id")
    {
        srlg_id = value;
        srlg_id.value_namespace = name_space;
        srlg_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
    if(value_path == "srlg-id")
    {
        srlg_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclusion-type" || name == "srlg-id")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::LspSubobject()
    :
    destination_node_exception{YType::boolean, "destination-node-exception"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    ignore_lsp_id{YType::boolean, "ignore-lsp-id"},
    penultimate_node_exception{YType::boolean, "penultimate-node-exception"},
    processing_node_exception{YType::boolean, "processing-node-exception"}
    	,
    fec(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>())
{
    fec->parent = this;

    yang_name = "lsp-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::~LspSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_data() const
{
    return destination_node_exception.is_set
	|| exclusion_type.is_set
	|| ignore_lsp_id.is_set
	|| penultimate_node_exception.is_set
	|| processing_node_exception.is_set
	|| (fec !=  nullptr && fec->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_node_exception.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(ignore_lsp_id.yfilter)
	|| ydk::is_set(penultimate_node_exception.yfilter)
	|| ydk::is_set(processing_node_exception.yfilter)
	|| (fec !=  nullptr && fec->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-subobject";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_node_exception.is_set || is_set(destination_node_exception.yfilter)) leaf_name_data.push_back(destination_node_exception.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (ignore_lsp_id.is_set || is_set(ignore_lsp_id.yfilter)) leaf_name_data.push_back(ignore_lsp_id.get_name_leafdata());
    if (penultimate_node_exception.is_set || is_set(penultimate_node_exception.yfilter)) leaf_name_data.push_back(penultimate_node_exception.get_name_leafdata());
    if (processing_node_exception.is_set || is_set(processing_node_exception.yfilter)) leaf_name_data.push_back(processing_node_exception.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec")
    {
        if(fec == nullptr)
        {
            fec = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>();
        }
        return fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec != nullptr)
    {
        children["fec"] = fec;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-node-exception")
    {
        destination_node_exception = value;
        destination_node_exception.value_namespace = name_space;
        destination_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id = value;
        ignore_lsp_id.value_namespace = name_space;
        ignore_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception = value;
        penultimate_node_exception.value_namespace = name_space;
        penultimate_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception = value;
        processing_node_exception.value_namespace = name_space;
        processing_node_exception.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-node-exception")
    {
        destination_node_exception.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id.yfilter = yfilter;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception.yfilter = yfilter;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec" || name == "destination-node-exception" || name == "exclusion-type" || name == "ignore-lsp-id" || name == "penultimate-node-exception" || name == "processing-node-exception")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::Fec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "fec"; yang_parent_name = "lsp-subobject";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::~Fec()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fec' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
        fec_lsp_id.value_namespace = name_space;
        fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
        fec_vrf.value_namespace = name_space;
        fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-extended-tunnel-id" || name == "fec-lsp-id" || name == "fec-source" || name == "fec-tunnel-id" || name == "fec-vrf")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{
    yang_name = "fec-destination-info"; yang_parent_name = "fec";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FecDestinationInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
        fec_destination_p2mp_id.value_namespace = name_space;
        fec_destination_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
        p2p_lsp_destination.value_namespace = name_space;
        p2p_lsp_destination.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "fec-destination-p2mp-id" || name == "p2p-lsp-destination")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::AttributeSetP2Mpte()
    :
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    fast_reroute{YType::boolean, "fast-reroute"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    hold_priority{YType::uint8, "hold-priority"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    setup_priority{YType::uint8, "setup-priority"}
    	,
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>())
{
    affinity->parent = this;

    yang_name = "attribute-set-p2mpte"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::~AttributeSetP2Mpte()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_data() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    return configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| fast_reroute.is_set
	|| frr_bandwidth_protection.is_set
	|| hold_priority.is_set
	|| is_affinity_configured.is_set
	|| is_bandwidth_configured.is_set
	|| is_priority_configured.is_set
	|| setup_priority.is_set
	|| (affinity !=  nullptr && affinity->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(fast_reroute.yfilter)
	|| ydk::is_set(frr_bandwidth_protection.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(is_priority_configured.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2mpte";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetP2Mpte' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (fast_reroute.is_set || is_set(fast_reroute.yfilter)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.yfilter)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "tunnel-id")
    {
        for(auto const & c : tunnel_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    for (auto const & c : tunnel_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
        fast_reroute.value_namespace = name_space;
        fast_reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
        frr_bandwidth_protection.value_namespace = name_space;
        frr_bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
        is_priority_configured.value_namespace = name_space;
        is_priority_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute.yfilter = yfilter;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "tunnel-id" || name == "configured-bandwidth" || name == "dste-class-type" || name == "fast-reroute" || name == "frr-bandwidth-protection" || name == "hold-priority" || name == "is-affinity-configured" || name == "is-bandwidth-configured" || name == "is-priority-configured" || name == "setup-priority")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-p2mpte";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_data() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        for(auto const & c : constraint_extended_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        for(auto const & c : extended_forward_ref_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : constraint_extended_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_forward_ref_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConstraintExtendedValue' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedForwardRefValue' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{
    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2mpte";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelId' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::AttributeSetApsPp()
    :
    hold_off_time{YType::uint32, "hold-off-time"},
    path_prot_profile_type{YType::enumeration, "path-prot-profile-type"},
    protection_mode{YType::enumeration, "protection-mode"},
    protection_type{YType::enumeration, "protection-type"},
    restoration_style{YType::enumeration, "restoration-style"},
    snc_mode{YType::enumeration, "snc-mode"},
    tcm_id{YType::uint32, "tcm-id"},
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"}
    	,
    revert_schedule(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>())
{
    revert_schedule->parent = this;

    yang_name = "attribute-set-aps-pp"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::~AttributeSetApsPp()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_data() const
{
    return hold_off_time.is_set
	|| path_prot_profile_type.is_set
	|| protection_mode.is_set
	|| protection_type.is_set
	|| restoration_style.is_set
	|| snc_mode.is_set
	|| tcm_id.is_set
	|| wait_to_restore_time.is_set
	|| (revert_schedule !=  nullptr && revert_schedule->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_off_time.yfilter)
	|| ydk::is_set(path_prot_profile_type.yfilter)
	|| ydk::is_set(protection_mode.yfilter)
	|| ydk::is_set(protection_type.yfilter)
	|| ydk::is_set(restoration_style.yfilter)
	|| ydk::is_set(snc_mode.yfilter)
	|| ydk::is_set(tcm_id.yfilter)
	|| ydk::is_set(wait_to_restore_time.yfilter)
	|| (revert_schedule !=  nullptr && revert_schedule->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-aps-pp";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetApsPp' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_off_time.is_set || is_set(hold_off_time.yfilter)) leaf_name_data.push_back(hold_off_time.get_name_leafdata());
    if (path_prot_profile_type.is_set || is_set(path_prot_profile_type.yfilter)) leaf_name_data.push_back(path_prot_profile_type.get_name_leafdata());
    if (protection_mode.is_set || is_set(protection_mode.yfilter)) leaf_name_data.push_back(protection_mode.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.yfilter)) leaf_name_data.push_back(protection_type.get_name_leafdata());
    if (restoration_style.is_set || is_set(restoration_style.yfilter)) leaf_name_data.push_back(restoration_style.get_name_leafdata());
    if (snc_mode.is_set || is_set(snc_mode.yfilter)) leaf_name_data.push_back(snc_mode.get_name_leafdata());
    if (tcm_id.is_set || is_set(tcm_id.yfilter)) leaf_name_data.push_back(tcm_id.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "revert-schedule")
    {
        if(revert_schedule == nullptr)
        {
            revert_schedule = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>();
        }
        return revert_schedule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(revert_schedule != nullptr)
    {
        children["revert-schedule"] = revert_schedule;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-off-time")
    {
        hold_off_time = value;
        hold_off_time.value_namespace = name_space;
        hold_off_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type = value;
        path_prot_profile_type.value_namespace = name_space;
        path_prot_profile_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-mode")
    {
        protection_mode = value;
        protection_mode.value_namespace = name_space;
        protection_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-type")
    {
        protection_type = value;
        protection_type.value_namespace = name_space;
        protection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restoration-style")
    {
        restoration_style = value;
        restoration_style.value_namespace = name_space;
        restoration_style.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snc-mode")
    {
        snc_mode = value;
        snc_mode.value_namespace = name_space;
        snc_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcm-id")
    {
        tcm_id = value;
        tcm_id.value_namespace = name_space;
        tcm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
        wait_to_restore_time.value_namespace = name_space;
        wait_to_restore_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-off-time")
    {
        hold_off_time.yfilter = yfilter;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type.yfilter = yfilter;
    }
    if(value_path == "protection-mode")
    {
        protection_mode.yfilter = yfilter;
    }
    if(value_path == "protection-type")
    {
        protection_type.yfilter = yfilter;
    }
    if(value_path == "restoration-style")
    {
        restoration_style.yfilter = yfilter;
    }
    if(value_path == "snc-mode")
    {
        snc_mode.yfilter = yfilter;
    }
    if(value_path == "tcm-id")
    {
        tcm_id.yfilter = yfilter;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "revert-schedule" || name == "hold-off-time" || name == "path-prot-profile-type" || name == "protection-mode" || name == "protection-type" || name == "restoration-style" || name == "snc-mode" || name == "tcm-id" || name == "wait-to-restore-time")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::RevertSchedule()
    :
    duration{YType::uint32, "duration"},
    max_tries{YType::uint32, "max-tries"},
    schedule_date{YType::uint32, "schedule-date"},
    schedule_frequency{YType::enumeration, "schedule-frequency"},
    schedulename{YType::str, "schedulename"}
{
    yang_name = "revert-schedule"; yang_parent_name = "attribute-set-aps-pp";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::~RevertSchedule()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_data() const
{
    return duration.is_set
	|| max_tries.is_set
	|| schedule_date.is_set
	|| schedule_frequency.is_set
	|| schedulename.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(max_tries.yfilter)
	|| ydk::is_set(schedule_date.yfilter)
	|| ydk::is_set(schedule_frequency.yfilter)
	|| ydk::is_set(schedulename.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RevertSchedule' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (max_tries.is_set || is_set(max_tries.yfilter)) leaf_name_data.push_back(max_tries.get_name_leafdata());
    if (schedule_date.is_set || is_set(schedule_date.yfilter)) leaf_name_data.push_back(schedule_date.get_name_leafdata());
    if (schedule_frequency.is_set || is_set(schedule_frequency.yfilter)) leaf_name_data.push_back(schedule_frequency.get_name_leafdata());
    if (schedulename.is_set || is_set(schedulename.yfilter)) leaf_name_data.push_back(schedulename.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-tries")
    {
        max_tries = value;
        max_tries.value_namespace = name_space;
        max_tries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-date")
    {
        schedule_date = value;
        schedule_date.value_namespace = name_space;
        schedule_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency = value;
        schedule_frequency.value_namespace = name_space;
        schedule_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedulename")
    {
        schedulename = value;
        schedulename.value_namespace = name_space;
        schedulename.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "max-tries")
    {
        max_tries.yfilter = yfilter;
    }
    if(value_path == "schedule-date")
    {
        schedule_date.yfilter = yfilter;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency.yfilter = yfilter;
    }
    if(value_path == "schedulename")
    {
        schedulename.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "max-tries" || name == "schedule-date" || name == "schedule-frequency" || name == "schedulename")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::AttributeSetP2PTe()
    :
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_path_select_configured{YType::boolean, "is-path-select-configured"},
    is_path_selection_metric_configured{YType::boolean, "is-path-selection-metric-configured"},
    is_path_selection_segment_routing_adjacency_protection_configured{YType::boolean, "is-path-selection-segment-routing-adjacency-protection-configured"},
    is_path_selection_segment_routing_margin_configured{YType::boolean, "is-path-selection-segment-routing-margin-configured"},
    is_path_selection_segment_routing_margin_relative{YType::boolean, "is-path-selection-segment-routing-margin-relative"},
    is_path_selection_segment_routing_segment_limit_configured{YType::boolean, "is-path-selection-segment-routing-segment-limit-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    is_prepend_list_configured{YType::boolean, "is-prepend-list-configured"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_selection_invalidation_action{YType::enumeration, "path-selection-invalidation-action"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    path_selection_segment_routing_adjacency_protection{YType::enumeration, "path-selection-segment-routing-adjacency-protection"},
    path_selection_segment_routing_margin{YType::uint32, "path-selection-segment-routing-margin"},
    path_selection_segment_routing_segment_limit{YType::uint32, "path-selection-segment-routing-segment-limit"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"}
    	,
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>())
	,logging(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>())
	,prepend_list(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>())
{
    affinity->parent = this;

    logging->parent = this;

    prepend_list->parent = this;

    yang_name = "attribute-set-p2p-te"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::~AttributeSetP2PTe()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_data() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    return is_affinity_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_path_select_configured.is_set
	|| is_path_selection_metric_configured.is_set
	|| is_path_selection_segment_routing_adjacency_protection_configured.is_set
	|| is_path_selection_segment_routing_margin_configured.is_set
	|| is_path_selection_segment_routing_margin_relative.is_set
	|| is_path_selection_segment_routing_segment_limit_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| is_prepend_list_configured.is_set
	|| path_invalidation_timeout.is_set
	|| path_selection_invalidation_action.is_set
	|| path_selection_metric.is_set
	|| path_selection_segment_routing_adjacency_protection.is_set
	|| path_selection_segment_routing_margin.is_set
	|| path_selection_segment_routing_segment_limit.is_set
	|| pcebd_group_id.is_set
	|| pcebd_source_address.is_set
	|| pcedp_group_id.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (prepend_list !=  nullptr && prepend_list->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(is_path_invalidation_action_configured.yfilter)
	|| ydk::is_set(is_path_invalidation_timeout_configured.yfilter)
	|| ydk::is_set(is_path_select_configured.yfilter)
	|| ydk::is_set(is_path_selection_metric_configured.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_adjacency_protection_configured.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_margin_configured.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_margin_relative.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_segment_limit_configured.yfilter)
	|| ydk::is_set(is_pce_configured.yfilter)
	|| ydk::is_set(is_pce_disj_group_id_configured.yfilter)
	|| ydk::is_set(is_pce_disj_source_configured.yfilter)
	|| ydk::is_set(is_pce_disj_type_configured.yfilter)
	|| ydk::is_set(is_pceb_dj_source_configured.yfilter)
	|| ydk::is_set(is_pcebd_group_id_configured.yfilter)
	|| ydk::is_set(is_prepend_list_configured.yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter)
	|| ydk::is_set(path_selection_invalidation_action.yfilter)
	|| ydk::is_set(path_selection_metric.yfilter)
	|| ydk::is_set(path_selection_segment_routing_adjacency_protection.yfilter)
	|| ydk::is_set(path_selection_segment_routing_margin.yfilter)
	|| ydk::is_set(path_selection_segment_routing_segment_limit.yfilter)
	|| ydk::is_set(pcebd_group_id.yfilter)
	|| ydk::is_set(pcebd_source_address.yfilter)
	|| ydk::is_set(pcedp_group_id.yfilter)
	|| ydk::is_set(pcedp_source_address.yfilter)
	|| ydk::is_set(pcedp_type.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (prepend_list !=  nullptr && prepend_list->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2p-te";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetP2PTe' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_path_select_configured.is_set || is_set(is_path_select_configured.yfilter)) leaf_name_data.push_back(is_path_select_configured.get_name_leafdata());
    if (is_path_selection_metric_configured.is_set || is_set(is_path_selection_metric_configured.yfilter)) leaf_name_data.push_back(is_path_selection_metric_configured.get_name_leafdata());
    if (is_path_selection_segment_routing_adjacency_protection_configured.is_set || is_set(is_path_selection_segment_routing_adjacency_protection_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_adjacency_protection_configured.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_configured.is_set || is_set(is_path_selection_segment_routing_margin_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_configured.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_relative.is_set || is_set(is_path_selection_segment_routing_margin_relative.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_relative.get_name_leafdata());
    if (is_path_selection_segment_routing_segment_limit_configured.is_set || is_set(is_path_selection_segment_routing_segment_limit_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_segment_limit_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.yfilter)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.yfilter)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.yfilter)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (is_prepend_list_configured.is_set || is_set(is_prepend_list_configured.yfilter)) leaf_name_data.push_back(is_prepend_list_configured.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_selection_invalidation_action.is_set || is_set(path_selection_invalidation_action.yfilter)) leaf_name_data.push_back(path_selection_invalidation_action.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.yfilter)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (path_selection_segment_routing_adjacency_protection.is_set || is_set(path_selection_segment_routing_adjacency_protection.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_adjacency_protection.get_name_leafdata());
    if (path_selection_segment_routing_margin.is_set || is_set(path_selection_segment_routing_margin.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_margin.get_name_leafdata());
    if (path_selection_segment_routing_segment_limit.is_set || is_set(path_selection_segment_routing_segment_limit.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_segment_limit.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.yfilter)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.yfilter)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.yfilter)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.yfilter)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.yfilter)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "prepend-list")
    {
        if(prepend_list == nullptr)
        {
            prepend_list = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>();
        }
        return prepend_list;
    }

    if(child_yang_name == "tunnel-id")
    {
        for(auto const & c : tunnel_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(prepend_list != nullptr)
    {
        children["prepend-list"] = prepend_list;
    }

    for (auto const & c : tunnel_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
        is_path_invalidation_action_configured.value_namespace = name_space;
        is_path_invalidation_action_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
        is_path_invalidation_timeout_configured.value_namespace = name_space;
        is_path_invalidation_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-select-configured")
    {
        is_path_select_configured = value;
        is_path_select_configured.value_namespace = name_space;
        is_path_select_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-metric-configured")
    {
        is_path_selection_metric_configured = value;
        is_path_selection_metric_configured.value_namespace = name_space;
        is_path_selection_metric_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-adjacency-protection-configured")
    {
        is_path_selection_segment_routing_adjacency_protection_configured = value;
        is_path_selection_segment_routing_adjacency_protection_configured.value_namespace = name_space;
        is_path_selection_segment_routing_adjacency_protection_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-margin-configured")
    {
        is_path_selection_segment_routing_margin_configured = value;
        is_path_selection_segment_routing_margin_configured.value_namespace = name_space;
        is_path_selection_segment_routing_margin_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-margin-relative")
    {
        is_path_selection_segment_routing_margin_relative = value;
        is_path_selection_segment_routing_margin_relative.value_namespace = name_space;
        is_path_selection_segment_routing_margin_relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-segment-limit-configured")
    {
        is_path_selection_segment_routing_segment_limit_configured = value;
        is_path_selection_segment_routing_segment_limit_configured.value_namespace = name_space;
        is_path_selection_segment_routing_segment_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
        is_pce_configured.value_namespace = name_space;
        is_pce_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
        is_pce_disj_group_id_configured.value_namespace = name_space;
        is_pce_disj_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
        is_pce_disj_source_configured.value_namespace = name_space;
        is_pce_disj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
        is_pce_disj_type_configured.value_namespace = name_space;
        is_pce_disj_type_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
        is_pceb_dj_source_configured.value_namespace = name_space;
        is_pceb_dj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
        is_pcebd_group_id_configured.value_namespace = name_space;
        is_pcebd_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-prepend-list-configured")
    {
        is_prepend_list_configured = value;
        is_prepend_list_configured.value_namespace = name_space;
        is_prepend_list_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-invalidation-action")
    {
        path_selection_invalidation_action = value;
        path_selection_invalidation_action.value_namespace = name_space;
        path_selection_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
        path_selection_metric.value_namespace = name_space;
        path_selection_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection = value;
        path_selection_segment_routing_adjacency_protection.value_namespace = name_space;
        path_selection_segment_routing_adjacency_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-margin")
    {
        path_selection_segment_routing_margin = value;
        path_selection_segment_routing_margin.value_namespace = name_space;
        path_selection_segment_routing_margin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-segment-limit")
    {
        path_selection_segment_routing_segment_limit = value;
        path_selection_segment_routing_segment_limit.value_namespace = name_space;
        path_selection_segment_routing_segment_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
        pcebd_group_id.value_namespace = name_space;
        pcebd_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
        pcebd_source_address.value_namespace = name_space;
        pcebd_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
        pcedp_group_id.value_namespace = name_space;
        pcedp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
        pcedp_source_address.value_namespace = name_space;
        pcedp_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
        pcedp_type.value_namespace = name_space;
        pcedp_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-select-configured")
    {
        is_path_select_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-metric-configured")
    {
        is_path_selection_metric_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-adjacency-protection-configured")
    {
        is_path_selection_segment_routing_adjacency_protection_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-margin-configured")
    {
        is_path_selection_segment_routing_margin_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-margin-relative")
    {
        is_path_selection_segment_routing_margin_relative.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-segment-limit-configured")
    {
        is_path_selection_segment_routing_segment_limit_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured.yfilter = yfilter;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "is-prepend-list-configured")
    {
        is_prepend_list_configured.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
    if(value_path == "path-selection-invalidation-action")
    {
        path_selection_invalidation_action.yfilter = yfilter;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-margin")
    {
        path_selection_segment_routing_margin.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-segment-limit")
    {
        path_selection_segment_routing_segment_limit.yfilter = yfilter;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id.yfilter = yfilter;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address.yfilter = yfilter;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id.yfilter = yfilter;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address.yfilter = yfilter;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "prepend-list" || name == "tunnel-id" || name == "is-affinity-configured" || name == "is-path-invalidation-action-configured" || name == "is-path-invalidation-timeout-configured" || name == "is-path-select-configured" || name == "is-path-selection-metric-configured" || name == "is-path-selection-segment-routing-adjacency-protection-configured" || name == "is-path-selection-segment-routing-margin-configured" || name == "is-path-selection-segment-routing-margin-relative" || name == "is-path-selection-segment-routing-segment-limit-configured" || name == "is-pce-configured" || name == "is-pce-disj-group-id-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "is-prepend-list-configured" || name == "path-invalidation-timeout" || name == "path-selection-invalidation-action" || name == "path-selection-metric" || name == "path-selection-segment-routing-adjacency-protection" || name == "path-selection-segment-routing-margin" || name == "path-selection-segment-routing-segment-limit" || name == "pcebd-group-id" || name == "pcebd-source-address" || name == "pcedp-group-id" || name == "pcedp-source-address" || name == "pcedp-type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-p2p-te";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_data() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        for(auto const & c : constraint_extended_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        for(auto const & c : extended_forward_ref_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : constraint_extended_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_forward_ref_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConstraintExtendedValue' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedForwardRefValue' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::Logging()
    :
    all_logging_enabled{YType::boolean, "all-logging-enabled"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"}
{
    yang_name = "logging"; yang_parent_name = "attribute-set-p2p-te";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::~Logging()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_data() const
{
    return all_logging_enabled.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| lsp_re_opt.is_set
	|| lsp_re_route.is_set
	|| lsp_state.is_set
	|| s2l_state.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_logging_enabled.yfilter)
	|| ydk::is_set(lsp_bandwidth_change.yfilter)
	|| ydk::is_set(lsp_insufficient_bw.yfilter)
	|| ydk::is_set(lsp_pcalc_failure_logging_enabled.yfilter)
	|| ydk::is_set(lsp_re_opt.yfilter)
	|| ydk::is_set(lsp_re_route.yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(s2l_state.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
        all_logging_enabled.value_namespace = name_space;
        all_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
        lsp_bandwidth_change.value_namespace = name_space;
        lsp_bandwidth_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
        lsp_insufficient_bw.value_namespace = name_space;
        lsp_insufficient_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
        lsp_pcalc_failure_logging_enabled.value_namespace = name_space;
        lsp_pcalc_failure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
        lsp_re_opt.value_namespace = name_space;
        lsp_re_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
        lsp_re_route.value_namespace = name_space;
        lsp_re_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
        s2l_state.value_namespace = name_space;
        s2l_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change.yfilter = yfilter;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw.yfilter = yfilter;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt.yfilter = yfilter;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route.yfilter = yfilter;
    }
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
    if(value_path == "s2l-state")
    {
        s2l_state.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-logging-enabled" || name == "lsp-bandwidth-change" || name == "lsp-insufficient-bw" || name == "lsp-pcalc-failure-logging-enabled" || name == "lsp-re-opt" || name == "lsp-re-route" || name == "lsp-state" || name == "s2l-state")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependList()
{
    yang_name = "prepend-list"; yang_parent_name = "attribute-set-p2p-te";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::~PrependList()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_data() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_operation() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-list";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrependList' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prepend-entry")
    {
        for(auto const & c : prepend_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry>();
        c->parent = this;
        prepend_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prepend_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepend-entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::PrependEntry()
    :
    index_{YType::uint32, "index"},
    next_label{YType::uint32, "next-label"},
    type{YType::enumeration, "type"}
{
    yang_name = "prepend-entry"; yang_parent_name = "prepend-list";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::~PrependEntry()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_data() const
{
    return index_.is_set
	|| next_label.is_set
	|| type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(next_label.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-entry";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrependEntry' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (next_label.is_set || is_set(next_label.yfilter)) leaf_name_data.push_back(next_label.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-label")
    {
        next_label = value;
        next_label.value_namespace = name_space;
        next_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "next-label")
    {
        next_label.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "next-label" || name == "type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{
    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2p-te";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelId' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::XroAttributeSet()
    :
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_attribute_set_name_crc32{YType::uint32, "tunnel-attribute-set-name-crc32"}
    	,
    attribute_set_union(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion>())
{
    attribute_set_union->parent = this;

    yang_name = "xro-attribute-set"; yang_parent_name = "path-option";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::~XroAttributeSet()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::has_data() const
{
    return tunnel_attribute_set_name.is_set
	|| tunnel_attribute_set_name_crc32.is_set
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name_crc32.yfilter)
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-attribute-set";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XroAttributeSet' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (tunnel_attribute_set_name_crc32.is_set || is_set(tunnel_attribute_set_name_crc32.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name_crc32.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-union")
    {
        if(attribute_set_union == nullptr)
        {
            attribute_set_union = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion>();
        }
        return attribute_set_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_set_union != nullptr)
    {
        children["attribute-set-union"] = attribute_set_union;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
        tunnel_attribute_set_name.value_namespace = name_space;
        tunnel_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-name-crc32")
    {
        tunnel_attribute_set_name_crc32 = value;
        tunnel_attribute_set_name_crc32.value_namespace = name_space;
        tunnel_attribute_set_name_crc32.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-name-crc32")
    {
        tunnel_attribute_set_name_crc32.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-union" || name == "tunnel-attribute-set-name" || name == "tunnel-attribute-set-name-crc32")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetUnion()
    :
    tunnel_attribute_set_type{YType::enumeration, "tunnel-attribute-set-type"}
    	,
    attribute_set_aps_pp(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp>())
	,attribute_set_autobackup(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup>())
	,attribute_set_automesh(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh>())
	,attribute_set_p2mpte(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte>())
	,attribute_set_p2p_te(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe>())
	,attribute_set_path_option(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption>())
	,attribute_set_xro(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro>())
{
    attribute_set_aps_pp->parent = this;

    attribute_set_autobackup->parent = this;

    attribute_set_automesh->parent = this;

    attribute_set_p2mpte->parent = this;

    attribute_set_p2p_te->parent = this;

    attribute_set_path_option->parent = this;

    attribute_set_xro->parent = this;

    yang_name = "attribute-set-union"; yang_parent_name = "xro-attribute-set";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::~AttributeSetUnion()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::has_data() const
{
    return tunnel_attribute_set_type.is_set
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_data())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_data())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_data())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_data())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_data())
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_data())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_attribute_set_type.yfilter)
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_operation())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_operation())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_operation())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_operation())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_operation())
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_operation())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-union";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetUnion' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_type.is_set || is_set(tunnel_attribute_set_type.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-aps-pp")
    {
        if(attribute_set_aps_pp == nullptr)
        {
            attribute_set_aps_pp = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp>();
        }
        return attribute_set_aps_pp;
    }

    if(child_yang_name == "attribute-set-autobackup")
    {
        if(attribute_set_autobackup == nullptr)
        {
            attribute_set_autobackup = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup>();
        }
        return attribute_set_autobackup;
    }

    if(child_yang_name == "attribute-set-automesh")
    {
        if(attribute_set_automesh == nullptr)
        {
            attribute_set_automesh = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh>();
        }
        return attribute_set_automesh;
    }

    if(child_yang_name == "attribute-set-p2mpte")
    {
        if(attribute_set_p2mpte == nullptr)
        {
            attribute_set_p2mpte = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte>();
        }
        return attribute_set_p2mpte;
    }

    if(child_yang_name == "attribute-set-p2p-te")
    {
        if(attribute_set_p2p_te == nullptr)
        {
            attribute_set_p2p_te = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe>();
        }
        return attribute_set_p2p_te;
    }

    if(child_yang_name == "attribute-set-path-option")
    {
        if(attribute_set_path_option == nullptr)
        {
            attribute_set_path_option = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption>();
        }
        return attribute_set_path_option;
    }

    if(child_yang_name == "attribute-set-xro")
    {
        if(attribute_set_xro == nullptr)
        {
            attribute_set_xro = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro>();
        }
        return attribute_set_xro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_set_aps_pp != nullptr)
    {
        children["attribute-set-aps-pp"] = attribute_set_aps_pp;
    }

    if(attribute_set_autobackup != nullptr)
    {
        children["attribute-set-autobackup"] = attribute_set_autobackup;
    }

    if(attribute_set_automesh != nullptr)
    {
        children["attribute-set-automesh"] = attribute_set_automesh;
    }

    if(attribute_set_p2mpte != nullptr)
    {
        children["attribute-set-p2mpte"] = attribute_set_p2mpte;
    }

    if(attribute_set_p2p_te != nullptr)
    {
        children["attribute-set-p2p-te"] = attribute_set_p2p_te;
    }

    if(attribute_set_path_option != nullptr)
    {
        children["attribute-set-path-option"] = attribute_set_path_option;
    }

    if(attribute_set_xro != nullptr)
    {
        children["attribute-set-xro"] = attribute_set_xro;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type = value;
        tunnel_attribute_set_type.value_namespace = name_space;
        tunnel_attribute_set_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-aps-pp" || name == "attribute-set-autobackup" || name == "attribute-set-automesh" || name == "attribute-set-p2mpte" || name == "attribute-set-p2p-te" || name == "attribute-set-path-option" || name == "attribute-set-xro" || name == "tunnel-attribute-set-type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::AttributeSetPathOption()
    :
    bandwidth_type{YType::enumeration, "bandwidth-type"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    cost_limit{YType::uint32, "cost-limit"},
    dste_class_type{YType::uint8, "dste-class-type"},
    exclude_list_name{YType::str, "exclude-list-name"},
    generation{YType::uint32, "generation"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_bfd_reverse_pat_configured{YType::boolean, "is-bfd-reverse-pat-configured"},
    is_cost_limit_configured{YType::boolean, "is-cost-limit-configured"},
    is_exclude_list_name_configured{YType::boolean, "is-exclude-list-name-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    path_invalidation_action{YType::uint32, "path-invalidation-action"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"}
    	,
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>())
	,bfd_reverse_path(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>())
{
    affinity->parent = this;

    bfd_reverse_path->parent = this;

    yang_name = "attribute-set-path-option"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::~AttributeSetPathOption()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::has_data() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<version_info.size(); index++)
    {
        if(version_info[index]->has_data())
            return true;
    }
    return bandwidth_type.is_set
	|| configured_bandwidth.is_set
	|| cost_limit.is_set
	|| dste_class_type.is_set
	|| exclude_list_name.is_set
	|| generation.is_set
	|| is_affinity_configured.is_set
	|| is_bandwidth_configured.is_set
	|| is_bfd_reverse_pat_configured.is_set
	|| is_cost_limit_configured.is_set
	|| is_exclude_list_name_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| path_invalidation_action.is_set
	|| path_invalidation_timeout.is_set
	|| pcebd_group_id.is_set
	|| pcebd_source_address.is_set
	|| pcedp_group_id.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<version_info.size(); index++)
    {
        if(version_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(cost_limit.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(exclude_list_name.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(is_bfd_reverse_pat_configured.yfilter)
	|| ydk::is_set(is_cost_limit_configured.yfilter)
	|| ydk::is_set(is_exclude_list_name_configured.yfilter)
	|| ydk::is_set(is_path_invalidation_action_configured.yfilter)
	|| ydk::is_set(is_path_invalidation_timeout_configured.yfilter)
	|| ydk::is_set(is_pce_configured.yfilter)
	|| ydk::is_set(is_pce_disj_group_id_configured.yfilter)
	|| ydk::is_set(is_pce_disj_source_configured.yfilter)
	|| ydk::is_set(is_pce_disj_type_configured.yfilter)
	|| ydk::is_set(is_pceb_dj_source_configured.yfilter)
	|| ydk::is_set(is_pcebd_group_id_configured.yfilter)
	|| ydk::is_set(path_invalidation_action.yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter)
	|| ydk::is_set(pcebd_group_id.yfilter)
	|| ydk::is_set(pcebd_source_address.yfilter)
	|| ydk::is_set(pcedp_group_id.yfilter)
	|| ydk::is_set(pcedp_source_address.yfilter)
	|| ydk::is_set(pcedp_type.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-path-option";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetPathOption' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (cost_limit.is_set || is_set(cost_limit.yfilter)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (exclude_list_name.is_set || is_set(exclude_list_name.yfilter)) leaf_name_data.push_back(exclude_list_name.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_bfd_reverse_pat_configured.is_set || is_set(is_bfd_reverse_pat_configured.yfilter)) leaf_name_data.push_back(is_bfd_reverse_pat_configured.get_name_leafdata());
    if (is_cost_limit_configured.is_set || is_set(is_cost_limit_configured.yfilter)) leaf_name_data.push_back(is_cost_limit_configured.get_name_leafdata());
    if (is_exclude_list_name_configured.is_set || is_set(is_exclude_list_name_configured.yfilter)) leaf_name_data.push_back(is_exclude_list_name_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.yfilter)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.yfilter)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.yfilter)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (path_invalidation_action.is_set || is_set(path_invalidation_action.yfilter)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.yfilter)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.yfilter)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.yfilter)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.yfilter)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.yfilter)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path == nullptr)
        {
            bfd_reverse_path = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>();
        }
        return bfd_reverse_path;
    }

    if(child_yang_name == "tunnel-id")
    {
        for(auto const & c : tunnel_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    if(child_yang_name == "version-info")
    {
        for(auto const & c : version_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo>();
        c->parent = this;
        version_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(bfd_reverse_path != nullptr)
    {
        children["bfd-reverse-path"] = bfd_reverse_path;
    }

    for (auto const & c : tunnel_id)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : version_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-limit")
    {
        cost_limit = value;
        cost_limit.value_namespace = name_space;
        cost_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name = value;
        exclude_list_name.value_namespace = name_space;
        exclude_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured = value;
        is_bfd_reverse_pat_configured.value_namespace = name_space;
        is_bfd_reverse_pat_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured = value;
        is_cost_limit_configured.value_namespace = name_space;
        is_cost_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured = value;
        is_exclude_list_name_configured.value_namespace = name_space;
        is_exclude_list_name_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
        is_path_invalidation_action_configured.value_namespace = name_space;
        is_path_invalidation_action_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
        is_path_invalidation_timeout_configured.value_namespace = name_space;
        is_path_invalidation_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
        is_pce_configured.value_namespace = name_space;
        is_pce_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
        is_pce_disj_group_id_configured.value_namespace = name_space;
        is_pce_disj_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
        is_pce_disj_source_configured.value_namespace = name_space;
        is_pce_disj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
        is_pce_disj_type_configured.value_namespace = name_space;
        is_pce_disj_type_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
        is_pceb_dj_source_configured.value_namespace = name_space;
        is_pceb_dj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
        is_pcebd_group_id_configured.value_namespace = name_space;
        is_pcebd_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
        path_invalidation_action.value_namespace = name_space;
        path_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
        pcebd_group_id.value_namespace = name_space;
        pcebd_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
        pcebd_source_address.value_namespace = name_space;
        pcebd_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
        pcedp_group_id.value_namespace = name_space;
        pcedp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
        pcedp_source_address.value_namespace = name_space;
        pcedp_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
        pcedp_type.value_namespace = name_space;
        pcedp_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "cost-limit")
    {
        cost_limit.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured.yfilter = yfilter;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured.yfilter = yfilter;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured.yfilter = yfilter;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id.yfilter = yfilter;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address.yfilter = yfilter;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id.yfilter = yfilter;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address.yfilter = yfilter;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "bfd-reverse-path" || name == "tunnel-id" || name == "version-info" || name == "bandwidth-type" || name == "configured-bandwidth" || name == "cost-limit" || name == "dste-class-type" || name == "exclude-list-name" || name == "generation" || name == "is-affinity-configured" || name == "is-bandwidth-configured" || name == "is-bfd-reverse-pat-configured" || name == "is-cost-limit-configured" || name == "is-exclude-list-name-configured" || name == "is-path-invalidation-action-configured" || name == "is-path-invalidation-timeout-configured" || name == "is-pce-configured" || name == "is-pce-disj-group-id-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "path-invalidation-action" || name == "path-invalidation-timeout" || name == "pcebd-group-id" || name == "pcebd-source-address" || name == "pcedp-group-id" || name == "pcedp-source-address" || name == "pcedp-type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-path-option";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_data() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        for(auto const & c : constraint_extended_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        for(auto const & c : extended_forward_ref_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : constraint_extended_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_forward_ref_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConstraintExtendedValue' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedForwardRefValue' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::BfdReversePath()
    :
    binding_label{YType::uint32, "binding-label"},
    path_type{YType::enumeration, "path-type"}
{
    yang_name = "bfd-reverse-path"; yang_parent_name = "attribute-set-path-option";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::~BfdReversePath()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_data() const
{
    return binding_label.is_set
	|| path_type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(path_type.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdReversePath' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-label" || name == "path-type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{
    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-path-option";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelId' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::VersionInfo()
    :
    attribute_type{YType::str, "attribute-type"},
    generation{YType::uint32, "generation"},
    is_default{YType::boolean, "is-default"}
{
    yang_name = "version-info"; yang_parent_name = "attribute-set-path-option";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::~VersionInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_data() const
{
    return attribute_type.is_set
	|| generation.is_set
	|| is_default.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_type.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(is_default.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-info";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VersionInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.yfilter)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.yfilter)) leaf_name_data.push_back(is_default.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-type")
    {
        attribute_type = value;
        attribute_type.value_namespace = name_space;
        attribute_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default")
    {
        is_default = value;
        is_default.value_namespace = name_space;
        is_default.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-type")
    {
        attribute_type.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
    if(value_path == "is-default")
    {
        is_default.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-type" || name == "generation" || name == "is-default")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::AttributeSetAutobackup()
    :
    hold_priority{YType::uint8, "hold-priority"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    is_signalled_name_configured{YType::boolean, "is-signalled-name-configured"},
    policy_class{YType::uint8, "policy-class"},
    record_route{YType::boolean, "record-route"},
    setup_priority{YType::uint8, "setup-priority"}
    	,
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>())
	,logging(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>())
	,signalled_name(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>())
{
    affinity->parent = this;

    logging->parent = this;

    signalled_name->parent = this;

    yang_name = "attribute-set-autobackup"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::~AttributeSetAutobackup()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_data() const
{
    for (std::size_t index=0; index<policy_class_entry.size(); index++)
    {
        if(policy_class_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<protected_interface.size(); index++)
    {
        if(protected_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    return hold_priority.is_set
	|| is_affinity_configured.is_set
	|| is_policyclass_configured.is_set
	|| is_priority_configured.is_set
	|| is_signalled_name_configured.is_set
	|| policy_class.is_set
	|| record_route.is_set
	|| setup_priority.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (signalled_name !=  nullptr && signalled_name->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_operation() const
{
    for (std::size_t index=0; index<policy_class_entry.size(); index++)
    {
        if(policy_class_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<protected_interface.size(); index++)
    {
        if(protected_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(is_policyclass_configured.yfilter)
	|| ydk::is_set(is_priority_configured.yfilter)
	|| ydk::is_set(is_signalled_name_configured.yfilter)
	|| ydk::is_set(policy_class.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (signalled_name !=  nullptr && signalled_name->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-autobackup";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetAutobackup' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.yfilter)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (is_signalled_name_configured.is_set || is_set(is_signalled_name_configured.yfilter)) leaf_name_data.push_back(is_signalled_name_configured.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.yfilter)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "policy-class-entry")
    {
        for(auto const & c : policy_class_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry>();
        c->parent = this;
        policy_class_entry.push_back(c);
        return c;
    }

    if(child_yang_name == "protected-interface")
    {
        for(auto const & c : protected_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface>();
        c->parent = this;
        protected_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "signalled-name")
    {
        if(signalled_name == nullptr)
        {
            signalled_name = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>();
        }
        return signalled_name;
    }

    if(child_yang_name == "tunnel-id")
    {
        for(auto const & c : tunnel_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    for (auto const & c : policy_class_entry)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : protected_interface)
    {
        children[c->get_segment_path()] = c;
    }

    if(signalled_name != nullptr)
    {
        children["signalled-name"] = signalled_name;
    }

    for (auto const & c : tunnel_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
        is_policyclass_configured.value_namespace = name_space;
        is_policyclass_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
        is_priority_configured.value_namespace = name_space;
        is_priority_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-signalled-name-configured")
    {
        is_signalled_name_configured = value;
        is_signalled_name_configured.value_namespace = name_space;
        is_signalled_name_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
        policy_class.value_namespace = name_space;
        policy_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured.yfilter = yfilter;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured.yfilter = yfilter;
    }
    if(value_path == "is-signalled-name-configured")
    {
        is_signalled_name_configured.yfilter = yfilter;
    }
    if(value_path == "policy-class")
    {
        policy_class.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "policy-class-entry" || name == "protected-interface" || name == "signalled-name" || name == "tunnel-id" || name == "hold-priority" || name == "is-affinity-configured" || name == "is-policyclass-configured" || name == "is-priority-configured" || name == "is-signalled-name-configured" || name == "policy-class" || name == "record-route" || name == "setup-priority")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::SignalledName()
    :
    is_mp_addresses{YType::boolean, "is-mp-addresses"},
    name{YType::str, "name"},
    protected_interface_type{YType::enumeration, "protected-interface-type"},
    source_type{YType::enumeration, "source-type"}
{
    yang_name = "signalled-name"; yang_parent_name = "attribute-set-autobackup";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::~SignalledName()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_data() const
{
    return is_mp_addresses.is_set
	|| name.is_set
	|| protected_interface_type.is_set
	|| source_type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_mp_addresses.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(protected_interface_type.yfilter)
	|| ydk::is_set(source_type.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-name";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SignalledName' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_mp_addresses.is_set || is_set(is_mp_addresses.yfilter)) leaf_name_data.push_back(is_mp_addresses.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (protected_interface_type.is_set || is_set(protected_interface_type.yfilter)) leaf_name_data.push_back(protected_interface_type.get_name_leafdata());
    if (source_type.is_set || is_set(source_type.yfilter)) leaf_name_data.push_back(source_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-mp-addresses")
    {
        is_mp_addresses = value;
        is_mp_addresses.value_namespace = name_space;
        is_mp_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type = value;
        protected_interface_type.value_namespace = name_space;
        protected_interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-type")
    {
        source_type = value;
        source_type.value_namespace = name_space;
        source_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-mp-addresses")
    {
        is_mp_addresses.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type.yfilter = yfilter;
    }
    if(value_path == "source-type")
    {
        source_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-mp-addresses" || name == "name" || name == "protected-interface-type" || name == "source-type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-autobackup";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_data() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        for(auto const & c : constraint_extended_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        for(auto const & c : extended_forward_ref_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : constraint_extended_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_forward_ref_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConstraintExtendedValue' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedForwardRefValue' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::Logging()
    :
    all_logging_enabled{YType::boolean, "all-logging-enabled"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"}
{
    yang_name = "logging"; yang_parent_name = "attribute-set-autobackup";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::~Logging()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_data() const
{
    return all_logging_enabled.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| lsp_re_opt.is_set
	|| lsp_re_route.is_set
	|| lsp_state.is_set
	|| s2l_state.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_logging_enabled.yfilter)
	|| ydk::is_set(lsp_bandwidth_change.yfilter)
	|| ydk::is_set(lsp_insufficient_bw.yfilter)
	|| ydk::is_set(lsp_pcalc_failure_logging_enabled.yfilter)
	|| ydk::is_set(lsp_re_opt.yfilter)
	|| ydk::is_set(lsp_re_route.yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(s2l_state.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
        all_logging_enabled.value_namespace = name_space;
        all_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
        lsp_bandwidth_change.value_namespace = name_space;
        lsp_bandwidth_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
        lsp_insufficient_bw.value_namespace = name_space;
        lsp_insufficient_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
        lsp_pcalc_failure_logging_enabled.value_namespace = name_space;
        lsp_pcalc_failure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
        lsp_re_opt.value_namespace = name_space;
        lsp_re_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
        lsp_re_route.value_namespace = name_space;
        lsp_re_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
        s2l_state.value_namespace = name_space;
        s2l_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change.yfilter = yfilter;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw.yfilter = yfilter;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt.yfilter = yfilter;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route.yfilter = yfilter;
    }
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
    if(value_path == "s2l-state")
    {
        s2l_state.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-logging-enabled" || name == "lsp-bandwidth-change" || name == "lsp-insufficient-bw" || name == "lsp-pcalc-failure-logging-enabled" || name == "lsp-re-opt" || name == "lsp-re-route" || name == "lsp-state" || name == "s2l-state")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::PolicyClassEntry()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "policy-class-entry"; yang_parent_name = "attribute-set-autobackup";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::~PolicyClassEntry()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-entry";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyClassEntry' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{
    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-autobackup";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelId' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::ProtectedInterface()
    :
    protected_interface{YType::str, "protected-interface"}
{
    yang_name = "protected-interface"; yang_parent_name = "attribute-set-autobackup";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::~ProtectedInterface()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_data() const
{
    return protected_interface.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protected_interface.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtectedInterface' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protected_interface.is_set || is_set(protected_interface.yfilter)) leaf_name_data.push_back(protected_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protected-interface")
    {
        protected_interface = value;
        protected_interface.value_namespace = name_space;
        protected_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protected-interface")
    {
        protected_interface.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected-interface")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::AttributeSetAutomesh()
    :
    auto_bandwidth_collect{YType::boolean, "auto-bandwidth-collect"},
    auto_route_announce{YType::boolean, "auto-route-announce"},
    bandwidth{YType::uint32, "bandwidth"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    fast_reroute{YType::boolean, "fast-reroute"},
    forward_class{YType::uint32, "forward-class"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    frr_node_protection{YType::boolean, "frr-node-protection"},
    hold_priority{YType::uint8, "hold-priority"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_interface_bw_configured{YType::boolean, "is-interface-bw-configured"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    load_share{YType::uint32, "load-share"},
    policy_class{YType::uint8, "policy-class"},
    record_route{YType::boolean, "record-route"},
    setup_priority{YType::uint8, "setup-priority"},
    soft_preemption_configured{YType::boolean, "soft-preemption-configured"}
    	,
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>())
	,logging(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>())
{
    affinity->parent = this;

    logging->parent = this;

    yang_name = "attribute-set-automesh"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::~AttributeSetAutomesh()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_data() const
{
    for (std::size_t index=0; index<mesh_group_id.size(); index++)
    {
        if(mesh_group_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<policy_class_entry.size(); index++)
    {
        if(policy_class_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    return auto_bandwidth_collect.is_set
	|| auto_route_announce.is_set
	|| bandwidth.is_set
	|| configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| fast_reroute.is_set
	|| forward_class.is_set
	|| frr_bandwidth_protection.is_set
	|| frr_node_protection.is_set
	|| hold_priority.is_set
	|| is_affinity_configured.is_set
	|| is_bandwidth_configured.is_set
	|| is_interface_bw_configured.is_set
	|| is_policyclass_configured.is_set
	|| is_priority_configured.is_set
	|| load_share.is_set
	|| policy_class.is_set
	|| record_route.is_set
	|| setup_priority.is_set
	|| soft_preemption_configured.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_operation() const
{
    for (std::size_t index=0; index<mesh_group_id.size(); index++)
    {
        if(mesh_group_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<policy_class_entry.size(); index++)
    {
        if(policy_class_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(auto_bandwidth_collect.yfilter)
	|| ydk::is_set(auto_route_announce.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(fast_reroute.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(frr_bandwidth_protection.yfilter)
	|| ydk::is_set(frr_node_protection.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(is_interface_bw_configured.yfilter)
	|| ydk::is_set(is_policyclass_configured.yfilter)
	|| ydk::is_set(is_priority_configured.yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| ydk::is_set(policy_class.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(soft_preemption_configured.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-automesh";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetAutomesh' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_bandwidth_collect.is_set || is_set(auto_bandwidth_collect.yfilter)) leaf_name_data.push_back(auto_bandwidth_collect.get_name_leafdata());
    if (auto_route_announce.is_set || is_set(auto_route_announce.yfilter)) leaf_name_data.push_back(auto_route_announce.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (fast_reroute.is_set || is_set(fast_reroute.yfilter)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.yfilter)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (frr_node_protection.is_set || is_set(frr_node_protection.yfilter)) leaf_name_data.push_back(frr_node_protection.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_interface_bw_configured.is_set || is_set(is_interface_bw_configured.yfilter)) leaf_name_data.push_back(is_interface_bw_configured.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.yfilter)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.yfilter)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (soft_preemption_configured.is_set || is_set(soft_preemption_configured.yfilter)) leaf_name_data.push_back(soft_preemption_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "mesh-group-id")
    {
        for(auto const & c : mesh_group_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId>();
        c->parent = this;
        mesh_group_id.push_back(c);
        return c;
    }

    if(child_yang_name == "policy-class-entry")
    {
        for(auto const & c : policy_class_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry>();
        c->parent = this;
        policy_class_entry.push_back(c);
        return c;
    }

    if(child_yang_name == "tunnel-id")
    {
        for(auto const & c : tunnel_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    for (auto const & c : mesh_group_id)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : policy_class_entry)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tunnel_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-bandwidth-collect")
    {
        auto_bandwidth_collect = value;
        auto_bandwidth_collect.value_namespace = name_space;
        auto_bandwidth_collect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-route-announce")
    {
        auto_route_announce = value;
        auto_route_announce.value_namespace = name_space;
        auto_route_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
        fast_reroute.value_namespace = name_space;
        fast_reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
        frr_bandwidth_protection.value_namespace = name_space;
        frr_bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-node-protection")
    {
        frr_node_protection = value;
        frr_node_protection.value_namespace = name_space;
        frr_node_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface-bw-configured")
    {
        is_interface_bw_configured = value;
        is_interface_bw_configured.value_namespace = name_space;
        is_interface_bw_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
        is_policyclass_configured.value_namespace = name_space;
        is_policyclass_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
        is_priority_configured.value_namespace = name_space;
        is_priority_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
        policy_class.value_namespace = name_space;
        policy_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-configured")
    {
        soft_preemption_configured = value;
        soft_preemption_configured.value_namespace = name_space;
        soft_preemption_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-bandwidth-collect")
    {
        auto_bandwidth_collect.yfilter = yfilter;
    }
    if(value_path == "auto-route-announce")
    {
        auto_route_announce.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "frr-node-protection")
    {
        frr_node_protection.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "is-interface-bw-configured")
    {
        is_interface_bw_configured.yfilter = yfilter;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured.yfilter = yfilter;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured.yfilter = yfilter;
    }
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
    if(value_path == "policy-class")
    {
        policy_class.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-configured")
    {
        soft_preemption_configured.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "mesh-group-id" || name == "policy-class-entry" || name == "tunnel-id" || name == "auto-bandwidth-collect" || name == "auto-route-announce" || name == "bandwidth" || name == "configured-bandwidth" || name == "dste-class-type" || name == "fast-reroute" || name == "forward-class" || name == "frr-bandwidth-protection" || name == "frr-node-protection" || name == "hold-priority" || name == "is-affinity-configured" || name == "is-bandwidth-configured" || name == "is-interface-bw-configured" || name == "is-policyclass-configured" || name == "is-priority-configured" || name == "load-share" || name == "policy-class" || name == "record-route" || name == "setup-priority" || name == "soft-preemption-configured")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-automesh";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_data() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        for(auto const & c : constraint_extended_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        for(auto const & c : extended_forward_ref_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : constraint_extended_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_forward_ref_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConstraintExtendedValue' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedForwardRefValue' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::Logging()
    :
    all_logging_enabled{YType::boolean, "all-logging-enabled"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"}
{
    yang_name = "logging"; yang_parent_name = "attribute-set-automesh";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::~Logging()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_data() const
{
    return all_logging_enabled.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| lsp_re_opt.is_set
	|| lsp_re_route.is_set
	|| lsp_state.is_set
	|| s2l_state.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_logging_enabled.yfilter)
	|| ydk::is_set(lsp_bandwidth_change.yfilter)
	|| ydk::is_set(lsp_insufficient_bw.yfilter)
	|| ydk::is_set(lsp_pcalc_failure_logging_enabled.yfilter)
	|| ydk::is_set(lsp_re_opt.yfilter)
	|| ydk::is_set(lsp_re_route.yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(s2l_state.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
        all_logging_enabled.value_namespace = name_space;
        all_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
        lsp_bandwidth_change.value_namespace = name_space;
        lsp_bandwidth_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
        lsp_insufficient_bw.value_namespace = name_space;
        lsp_insufficient_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
        lsp_pcalc_failure_logging_enabled.value_namespace = name_space;
        lsp_pcalc_failure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
        lsp_re_opt.value_namespace = name_space;
        lsp_re_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
        lsp_re_route.value_namespace = name_space;
        lsp_re_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
        s2l_state.value_namespace = name_space;
        s2l_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change.yfilter = yfilter;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw.yfilter = yfilter;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt.yfilter = yfilter;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route.yfilter = yfilter;
    }
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
    if(value_path == "s2l-state")
    {
        s2l_state.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-logging-enabled" || name == "lsp-bandwidth-change" || name == "lsp-insufficient-bw" || name == "lsp-pcalc-failure-logging-enabled" || name == "lsp-re-opt" || name == "lsp-re-route" || name == "lsp-state" || name == "s2l-state")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::PolicyClassEntry()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "policy-class-entry"; yang_parent_name = "attribute-set-automesh";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::~PolicyClassEntry()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-entry";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyClassEntry' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::MeshGroupId()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "mesh-group-id"; yang_parent_name = "attribute-set-automesh";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::~MeshGroupId()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group-id";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MeshGroupId' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{
    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-automesh";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelId' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::AttributeSetXro()
    :
    xro(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro>())
{
    xro->parent = this;

    yang_name = "attribute-set-xro"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::~AttributeSetXro()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::has_data() const
{
    return (xro !=  nullptr && xro->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::has_operation() const
{
    return is_set(yfilter)
	|| (xro !=  nullptr && xro->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-xro";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetXro' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro")
    {
        if(xro == nullptr)
        {
            xro = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro>();
        }
        return xro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xro != nullptr)
    {
        children["xro"] = xro;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::Xro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
{
    yang_name = "xro"; yang_parent_name = "attribute-set-xro";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::~Xro()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_data() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mutual_diversity_flag.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xro' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mutual_diversity_flag.is_set || is_set(mutual_diversity_flag.yfilter)) leaf_name_data.push_back(mutual_diversity_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro-subobject")
    {
        for(auto const & c : xro_subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject>();
        c->parent = this;
        xro_subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xro_subobject)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
        mutual_diversity_flag.value_namespace = name_space;
        mutual_diversity_flag.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro-subobject" || name == "mutual-diversity-flag")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
    	,
    as_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>())
	,ipv4_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>())
	,ipv6_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>())
	,lsp_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>())
	,srlg_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>())
	,unnumbered_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>())
{
    as_subobject->parent = this;

    ipv4_subobject->parent = this;

    ipv6_subobject->parent = this;

    lsp_subobject->parent = this;

    srlg_subobject->parent = this;

    unnumbered_subobject->parent = this;

    yang_name = "xro-subobject"; yang_parent_name = "xro";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::~XroSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_data() const
{
    return type.is_set
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (as_subobject !=  nullptr && as_subobject->has_operation())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_operation())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_operation())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_operation())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_operation())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XroSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-subobject")
    {
        if(as_subobject == nullptr)
        {
            as_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>();
        }
        return as_subobject;
    }

    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject == nullptr)
        {
            ipv4_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>();
        }
        return ipv4_subobject;
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject == nullptr)
        {
            ipv6_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>();
        }
        return ipv6_subobject;
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject == nullptr)
        {
            lsp_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>();
        }
        return lsp_subobject;
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject == nullptr)
        {
            srlg_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>();
        }
        return srlg_subobject;
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject == nullptr)
        {
            unnumbered_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>();
        }
        return unnumbered_subobject;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(as_subobject != nullptr)
    {
        children["as-subobject"] = as_subobject;
    }

    if(ipv4_subobject != nullptr)
    {
        children["ipv4-subobject"] = ipv4_subobject;
    }

    if(ipv6_subobject != nullptr)
    {
        children["ipv6-subobject"] = ipv6_subobject;
    }

    if(lsp_subobject != nullptr)
    {
        children["lsp-subobject"] = lsp_subobject;
    }

    if(srlg_subobject != nullptr)
    {
        children["srlg-subobject"] = srlg_subobject;
    }

    if(unnumbered_subobject != nullptr)
    {
        children["unnumbered-subobject"] = unnumbered_subobject;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-subobject" || name == "ipv4-subobject" || name == "ipv6-subobject" || name == "lsp-subobject" || name == "srlg-subobject" || name == "unnumbered-subobject" || name == "type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{
    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(prefix_len.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Subobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "attribute" || name == "exclusion-type" || name == "prefix-len")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{
    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(prefix_len.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Subobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "attribute" || name == "exclusion-type" || name == "prefix-len")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    interface_id{YType::uint32, "interface-id"},
    te_router_id{YType::str, "te-router-id"}
{
    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_data() const
{
    return attribute.is_set
	|| exclusion_type.is_set
	|| interface_id.is_set
	|| te_router_id.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(te_router_id.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnnumberedSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (te_router_id.is_set || is_set(te_router_id.yfilter)) leaf_name_data.push_back(te_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-router-id")
    {
        te_router_id = value;
        te_router_id.value_namespace = name_space;
        te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "te-router-id")
    {
        te_router_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute" || name == "exclusion-type" || name == "interface-id" || name == "te-router-id")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::AsSubobject()
    :
    as_number{YType::uint16, "as-number"}
{
    yang_name = "as-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::~AsSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_data() const
{
    return as_number.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-subobject";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::SrlgSubobject()
    :
    exclusion_type{YType::enumeration, "exclusion-type"},
    srlg_id{YType::uint32, "srlg-id"}
{
    yang_name = "srlg-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::~SrlgSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_data() const
{
    return exclusion_type.is_set
	|| srlg_id.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(srlg_id.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-subobject";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (srlg_id.is_set || is_set(srlg_id.yfilter)) leaf_name_data.push_back(srlg_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-id")
    {
        srlg_id = value;
        srlg_id.value_namespace = name_space;
        srlg_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
    if(value_path == "srlg-id")
    {
        srlg_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclusion-type" || name == "srlg-id")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::LspSubobject()
    :
    destination_node_exception{YType::boolean, "destination-node-exception"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    ignore_lsp_id{YType::boolean, "ignore-lsp-id"},
    penultimate_node_exception{YType::boolean, "penultimate-node-exception"},
    processing_node_exception{YType::boolean, "processing-node-exception"}
    	,
    fec(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>())
{
    fec->parent = this;

    yang_name = "lsp-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::~LspSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_data() const
{
    return destination_node_exception.is_set
	|| exclusion_type.is_set
	|| ignore_lsp_id.is_set
	|| penultimate_node_exception.is_set
	|| processing_node_exception.is_set
	|| (fec !=  nullptr && fec->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_node_exception.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(ignore_lsp_id.yfilter)
	|| ydk::is_set(penultimate_node_exception.yfilter)
	|| ydk::is_set(processing_node_exception.yfilter)
	|| (fec !=  nullptr && fec->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-subobject";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_node_exception.is_set || is_set(destination_node_exception.yfilter)) leaf_name_data.push_back(destination_node_exception.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (ignore_lsp_id.is_set || is_set(ignore_lsp_id.yfilter)) leaf_name_data.push_back(ignore_lsp_id.get_name_leafdata());
    if (penultimate_node_exception.is_set || is_set(penultimate_node_exception.yfilter)) leaf_name_data.push_back(penultimate_node_exception.get_name_leafdata());
    if (processing_node_exception.is_set || is_set(processing_node_exception.yfilter)) leaf_name_data.push_back(processing_node_exception.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec")
    {
        if(fec == nullptr)
        {
            fec = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>();
        }
        return fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec != nullptr)
    {
        children["fec"] = fec;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-node-exception")
    {
        destination_node_exception = value;
        destination_node_exception.value_namespace = name_space;
        destination_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id = value;
        ignore_lsp_id.value_namespace = name_space;
        ignore_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception = value;
        penultimate_node_exception.value_namespace = name_space;
        penultimate_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception = value;
        processing_node_exception.value_namespace = name_space;
        processing_node_exception.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-node-exception")
    {
        destination_node_exception.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id.yfilter = yfilter;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception.yfilter = yfilter;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec" || name == "destination-node-exception" || name == "exclusion-type" || name == "ignore-lsp-id" || name == "penultimate-node-exception" || name == "processing-node-exception")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::Fec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "fec"; yang_parent_name = "lsp-subobject";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::~Fec()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fec' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
        fec_lsp_id.value_namespace = name_space;
        fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
        fec_vrf.value_namespace = name_space;
        fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-extended-tunnel-id" || name == "fec-lsp-id" || name == "fec-source" || name == "fec-tunnel-id" || name == "fec-vrf")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{
    yang_name = "fec-destination-info"; yang_parent_name = "fec";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FecDestinationInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
        fec_destination_p2mp_id.value_namespace = name_space;
        fec_destination_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
        p2p_lsp_destination.value_namespace = name_space;
        p2p_lsp_destination.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "fec-destination-p2mp-id" || name == "p2p-lsp-destination")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::AttributeSetP2Mpte()
    :
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    fast_reroute{YType::boolean, "fast-reroute"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    hold_priority{YType::uint8, "hold-priority"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    setup_priority{YType::uint8, "setup-priority"}
    	,
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>())
{
    affinity->parent = this;

    yang_name = "attribute-set-p2mpte"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::~AttributeSetP2Mpte()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_data() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    return configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| fast_reroute.is_set
	|| frr_bandwidth_protection.is_set
	|| hold_priority.is_set
	|| is_affinity_configured.is_set
	|| is_bandwidth_configured.is_set
	|| is_priority_configured.is_set
	|| setup_priority.is_set
	|| (affinity !=  nullptr && affinity->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(fast_reroute.yfilter)
	|| ydk::is_set(frr_bandwidth_protection.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(is_priority_configured.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2mpte";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetP2Mpte' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (fast_reroute.is_set || is_set(fast_reroute.yfilter)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.yfilter)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "tunnel-id")
    {
        for(auto const & c : tunnel_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    for (auto const & c : tunnel_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
        fast_reroute.value_namespace = name_space;
        fast_reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
        frr_bandwidth_protection.value_namespace = name_space;
        frr_bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
        is_priority_configured.value_namespace = name_space;
        is_priority_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute.yfilter = yfilter;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "tunnel-id" || name == "configured-bandwidth" || name == "dste-class-type" || name == "fast-reroute" || name == "frr-bandwidth-protection" || name == "hold-priority" || name == "is-affinity-configured" || name == "is-bandwidth-configured" || name == "is-priority-configured" || name == "setup-priority")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-p2mpte";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_data() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        for(auto const & c : constraint_extended_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        for(auto const & c : extended_forward_ref_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : constraint_extended_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_forward_ref_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConstraintExtendedValue' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedForwardRefValue' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{
    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2mpte";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelId' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::AttributeSetApsPp()
    :
    hold_off_time{YType::uint32, "hold-off-time"},
    path_prot_profile_type{YType::enumeration, "path-prot-profile-type"},
    protection_mode{YType::enumeration, "protection-mode"},
    protection_type{YType::enumeration, "protection-type"},
    restoration_style{YType::enumeration, "restoration-style"},
    snc_mode{YType::enumeration, "snc-mode"},
    tcm_id{YType::uint32, "tcm-id"},
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"}
    	,
    revert_schedule(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>())
{
    revert_schedule->parent = this;

    yang_name = "attribute-set-aps-pp"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::~AttributeSetApsPp()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::has_data() const
{
    return hold_off_time.is_set
	|| path_prot_profile_type.is_set
	|| protection_mode.is_set
	|| protection_type.is_set
	|| restoration_style.is_set
	|| snc_mode.is_set
	|| tcm_id.is_set
	|| wait_to_restore_time.is_set
	|| (revert_schedule !=  nullptr && revert_schedule->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_off_time.yfilter)
	|| ydk::is_set(path_prot_profile_type.yfilter)
	|| ydk::is_set(protection_mode.yfilter)
	|| ydk::is_set(protection_type.yfilter)
	|| ydk::is_set(restoration_style.yfilter)
	|| ydk::is_set(snc_mode.yfilter)
	|| ydk::is_set(tcm_id.yfilter)
	|| ydk::is_set(wait_to_restore_time.yfilter)
	|| (revert_schedule !=  nullptr && revert_schedule->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-aps-pp";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetApsPp' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_off_time.is_set || is_set(hold_off_time.yfilter)) leaf_name_data.push_back(hold_off_time.get_name_leafdata());
    if (path_prot_profile_type.is_set || is_set(path_prot_profile_type.yfilter)) leaf_name_data.push_back(path_prot_profile_type.get_name_leafdata());
    if (protection_mode.is_set || is_set(protection_mode.yfilter)) leaf_name_data.push_back(protection_mode.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.yfilter)) leaf_name_data.push_back(protection_type.get_name_leafdata());
    if (restoration_style.is_set || is_set(restoration_style.yfilter)) leaf_name_data.push_back(restoration_style.get_name_leafdata());
    if (snc_mode.is_set || is_set(snc_mode.yfilter)) leaf_name_data.push_back(snc_mode.get_name_leafdata());
    if (tcm_id.is_set || is_set(tcm_id.yfilter)) leaf_name_data.push_back(tcm_id.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "revert-schedule")
    {
        if(revert_schedule == nullptr)
        {
            revert_schedule = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>();
        }
        return revert_schedule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(revert_schedule != nullptr)
    {
        children["revert-schedule"] = revert_schedule;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-off-time")
    {
        hold_off_time = value;
        hold_off_time.value_namespace = name_space;
        hold_off_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type = value;
        path_prot_profile_type.value_namespace = name_space;
        path_prot_profile_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-mode")
    {
        protection_mode = value;
        protection_mode.value_namespace = name_space;
        protection_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-type")
    {
        protection_type = value;
        protection_type.value_namespace = name_space;
        protection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restoration-style")
    {
        restoration_style = value;
        restoration_style.value_namespace = name_space;
        restoration_style.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snc-mode")
    {
        snc_mode = value;
        snc_mode.value_namespace = name_space;
        snc_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcm-id")
    {
        tcm_id = value;
        tcm_id.value_namespace = name_space;
        tcm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
        wait_to_restore_time.value_namespace = name_space;
        wait_to_restore_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-off-time")
    {
        hold_off_time.yfilter = yfilter;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type.yfilter = yfilter;
    }
    if(value_path == "protection-mode")
    {
        protection_mode.yfilter = yfilter;
    }
    if(value_path == "protection-type")
    {
        protection_type.yfilter = yfilter;
    }
    if(value_path == "restoration-style")
    {
        restoration_style.yfilter = yfilter;
    }
    if(value_path == "snc-mode")
    {
        snc_mode.yfilter = yfilter;
    }
    if(value_path == "tcm-id")
    {
        tcm_id.yfilter = yfilter;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "revert-schedule" || name == "hold-off-time" || name == "path-prot-profile-type" || name == "protection-mode" || name == "protection-type" || name == "restoration-style" || name == "snc-mode" || name == "tcm-id" || name == "wait-to-restore-time")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::RevertSchedule()
    :
    duration{YType::uint32, "duration"},
    max_tries{YType::uint32, "max-tries"},
    schedule_date{YType::uint32, "schedule-date"},
    schedule_frequency{YType::enumeration, "schedule-frequency"},
    schedulename{YType::str, "schedulename"}
{
    yang_name = "revert-schedule"; yang_parent_name = "attribute-set-aps-pp";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::~RevertSchedule()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_data() const
{
    return duration.is_set
	|| max_tries.is_set
	|| schedule_date.is_set
	|| schedule_frequency.is_set
	|| schedulename.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(max_tries.yfilter)
	|| ydk::is_set(schedule_date.yfilter)
	|| ydk::is_set(schedule_frequency.yfilter)
	|| ydk::is_set(schedulename.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RevertSchedule' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (max_tries.is_set || is_set(max_tries.yfilter)) leaf_name_data.push_back(max_tries.get_name_leafdata());
    if (schedule_date.is_set || is_set(schedule_date.yfilter)) leaf_name_data.push_back(schedule_date.get_name_leafdata());
    if (schedule_frequency.is_set || is_set(schedule_frequency.yfilter)) leaf_name_data.push_back(schedule_frequency.get_name_leafdata());
    if (schedulename.is_set || is_set(schedulename.yfilter)) leaf_name_data.push_back(schedulename.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-tries")
    {
        max_tries = value;
        max_tries.value_namespace = name_space;
        max_tries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-date")
    {
        schedule_date = value;
        schedule_date.value_namespace = name_space;
        schedule_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency = value;
        schedule_frequency.value_namespace = name_space;
        schedule_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedulename")
    {
        schedulename = value;
        schedulename.value_namespace = name_space;
        schedulename.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "max-tries")
    {
        max_tries.yfilter = yfilter;
    }
    if(value_path == "schedule-date")
    {
        schedule_date.yfilter = yfilter;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency.yfilter = yfilter;
    }
    if(value_path == "schedulename")
    {
        schedulename.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "max-tries" || name == "schedule-date" || name == "schedule-frequency" || name == "schedulename")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::AttributeSetP2PTe()
    :
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_path_select_configured{YType::boolean, "is-path-select-configured"},
    is_path_selection_metric_configured{YType::boolean, "is-path-selection-metric-configured"},
    is_path_selection_segment_routing_adjacency_protection_configured{YType::boolean, "is-path-selection-segment-routing-adjacency-protection-configured"},
    is_path_selection_segment_routing_margin_configured{YType::boolean, "is-path-selection-segment-routing-margin-configured"},
    is_path_selection_segment_routing_margin_relative{YType::boolean, "is-path-selection-segment-routing-margin-relative"},
    is_path_selection_segment_routing_segment_limit_configured{YType::boolean, "is-path-selection-segment-routing-segment-limit-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    is_prepend_list_configured{YType::boolean, "is-prepend-list-configured"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_selection_invalidation_action{YType::enumeration, "path-selection-invalidation-action"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    path_selection_segment_routing_adjacency_protection{YType::enumeration, "path-selection-segment-routing-adjacency-protection"},
    path_selection_segment_routing_margin{YType::uint32, "path-selection-segment-routing-margin"},
    path_selection_segment_routing_segment_limit{YType::uint32, "path-selection-segment-routing-segment-limit"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"}
    	,
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>())
	,logging(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>())
	,prepend_list(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>())
{
    affinity->parent = this;

    logging->parent = this;

    prepend_list->parent = this;

    yang_name = "attribute-set-p2p-te"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::~AttributeSetP2PTe()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_data() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    return is_affinity_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_path_select_configured.is_set
	|| is_path_selection_metric_configured.is_set
	|| is_path_selection_segment_routing_adjacency_protection_configured.is_set
	|| is_path_selection_segment_routing_margin_configured.is_set
	|| is_path_selection_segment_routing_margin_relative.is_set
	|| is_path_selection_segment_routing_segment_limit_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| is_prepend_list_configured.is_set
	|| path_invalidation_timeout.is_set
	|| path_selection_invalidation_action.is_set
	|| path_selection_metric.is_set
	|| path_selection_segment_routing_adjacency_protection.is_set
	|| path_selection_segment_routing_margin.is_set
	|| path_selection_segment_routing_segment_limit.is_set
	|| pcebd_group_id.is_set
	|| pcebd_source_address.is_set
	|| pcedp_group_id.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (prepend_list !=  nullptr && prepend_list->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(is_path_invalidation_action_configured.yfilter)
	|| ydk::is_set(is_path_invalidation_timeout_configured.yfilter)
	|| ydk::is_set(is_path_select_configured.yfilter)
	|| ydk::is_set(is_path_selection_metric_configured.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_adjacency_protection_configured.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_margin_configured.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_margin_relative.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_segment_limit_configured.yfilter)
	|| ydk::is_set(is_pce_configured.yfilter)
	|| ydk::is_set(is_pce_disj_group_id_configured.yfilter)
	|| ydk::is_set(is_pce_disj_source_configured.yfilter)
	|| ydk::is_set(is_pce_disj_type_configured.yfilter)
	|| ydk::is_set(is_pceb_dj_source_configured.yfilter)
	|| ydk::is_set(is_pcebd_group_id_configured.yfilter)
	|| ydk::is_set(is_prepend_list_configured.yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter)
	|| ydk::is_set(path_selection_invalidation_action.yfilter)
	|| ydk::is_set(path_selection_metric.yfilter)
	|| ydk::is_set(path_selection_segment_routing_adjacency_protection.yfilter)
	|| ydk::is_set(path_selection_segment_routing_margin.yfilter)
	|| ydk::is_set(path_selection_segment_routing_segment_limit.yfilter)
	|| ydk::is_set(pcebd_group_id.yfilter)
	|| ydk::is_set(pcebd_source_address.yfilter)
	|| ydk::is_set(pcedp_group_id.yfilter)
	|| ydk::is_set(pcedp_source_address.yfilter)
	|| ydk::is_set(pcedp_type.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (prepend_list !=  nullptr && prepend_list->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2p-te";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetP2PTe' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_path_select_configured.is_set || is_set(is_path_select_configured.yfilter)) leaf_name_data.push_back(is_path_select_configured.get_name_leafdata());
    if (is_path_selection_metric_configured.is_set || is_set(is_path_selection_metric_configured.yfilter)) leaf_name_data.push_back(is_path_selection_metric_configured.get_name_leafdata());
    if (is_path_selection_segment_routing_adjacency_protection_configured.is_set || is_set(is_path_selection_segment_routing_adjacency_protection_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_adjacency_protection_configured.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_configured.is_set || is_set(is_path_selection_segment_routing_margin_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_configured.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_relative.is_set || is_set(is_path_selection_segment_routing_margin_relative.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_relative.get_name_leafdata());
    if (is_path_selection_segment_routing_segment_limit_configured.is_set || is_set(is_path_selection_segment_routing_segment_limit_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_segment_limit_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.yfilter)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.yfilter)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.yfilter)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (is_prepend_list_configured.is_set || is_set(is_prepend_list_configured.yfilter)) leaf_name_data.push_back(is_prepend_list_configured.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_selection_invalidation_action.is_set || is_set(path_selection_invalidation_action.yfilter)) leaf_name_data.push_back(path_selection_invalidation_action.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.yfilter)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (path_selection_segment_routing_adjacency_protection.is_set || is_set(path_selection_segment_routing_adjacency_protection.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_adjacency_protection.get_name_leafdata());
    if (path_selection_segment_routing_margin.is_set || is_set(path_selection_segment_routing_margin.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_margin.get_name_leafdata());
    if (path_selection_segment_routing_segment_limit.is_set || is_set(path_selection_segment_routing_segment_limit.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_segment_limit.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.yfilter)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.yfilter)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.yfilter)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.yfilter)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.yfilter)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "prepend-list")
    {
        if(prepend_list == nullptr)
        {
            prepend_list = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>();
        }
        return prepend_list;
    }

    if(child_yang_name == "tunnel-id")
    {
        for(auto const & c : tunnel_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(prepend_list != nullptr)
    {
        children["prepend-list"] = prepend_list;
    }

    for (auto const & c : tunnel_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
        is_path_invalidation_action_configured.value_namespace = name_space;
        is_path_invalidation_action_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
        is_path_invalidation_timeout_configured.value_namespace = name_space;
        is_path_invalidation_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-select-configured")
    {
        is_path_select_configured = value;
        is_path_select_configured.value_namespace = name_space;
        is_path_select_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-metric-configured")
    {
        is_path_selection_metric_configured = value;
        is_path_selection_metric_configured.value_namespace = name_space;
        is_path_selection_metric_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-adjacency-protection-configured")
    {
        is_path_selection_segment_routing_adjacency_protection_configured = value;
        is_path_selection_segment_routing_adjacency_protection_configured.value_namespace = name_space;
        is_path_selection_segment_routing_adjacency_protection_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-margin-configured")
    {
        is_path_selection_segment_routing_margin_configured = value;
        is_path_selection_segment_routing_margin_configured.value_namespace = name_space;
        is_path_selection_segment_routing_margin_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-margin-relative")
    {
        is_path_selection_segment_routing_margin_relative = value;
        is_path_selection_segment_routing_margin_relative.value_namespace = name_space;
        is_path_selection_segment_routing_margin_relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-segment-limit-configured")
    {
        is_path_selection_segment_routing_segment_limit_configured = value;
        is_path_selection_segment_routing_segment_limit_configured.value_namespace = name_space;
        is_path_selection_segment_routing_segment_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
        is_pce_configured.value_namespace = name_space;
        is_pce_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
        is_pce_disj_group_id_configured.value_namespace = name_space;
        is_pce_disj_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
        is_pce_disj_source_configured.value_namespace = name_space;
        is_pce_disj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
        is_pce_disj_type_configured.value_namespace = name_space;
        is_pce_disj_type_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
        is_pceb_dj_source_configured.value_namespace = name_space;
        is_pceb_dj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
        is_pcebd_group_id_configured.value_namespace = name_space;
        is_pcebd_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-prepend-list-configured")
    {
        is_prepend_list_configured = value;
        is_prepend_list_configured.value_namespace = name_space;
        is_prepend_list_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-invalidation-action")
    {
        path_selection_invalidation_action = value;
        path_selection_invalidation_action.value_namespace = name_space;
        path_selection_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
        path_selection_metric.value_namespace = name_space;
        path_selection_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection = value;
        path_selection_segment_routing_adjacency_protection.value_namespace = name_space;
        path_selection_segment_routing_adjacency_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-margin")
    {
        path_selection_segment_routing_margin = value;
        path_selection_segment_routing_margin.value_namespace = name_space;
        path_selection_segment_routing_margin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-segment-limit")
    {
        path_selection_segment_routing_segment_limit = value;
        path_selection_segment_routing_segment_limit.value_namespace = name_space;
        path_selection_segment_routing_segment_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
        pcebd_group_id.value_namespace = name_space;
        pcebd_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
        pcebd_source_address.value_namespace = name_space;
        pcebd_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
        pcedp_group_id.value_namespace = name_space;
        pcedp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
        pcedp_source_address.value_namespace = name_space;
        pcedp_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
        pcedp_type.value_namespace = name_space;
        pcedp_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-select-configured")
    {
        is_path_select_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-metric-configured")
    {
        is_path_selection_metric_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-adjacency-protection-configured")
    {
        is_path_selection_segment_routing_adjacency_protection_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-margin-configured")
    {
        is_path_selection_segment_routing_margin_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-margin-relative")
    {
        is_path_selection_segment_routing_margin_relative.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-segment-limit-configured")
    {
        is_path_selection_segment_routing_segment_limit_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured.yfilter = yfilter;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "is-prepend-list-configured")
    {
        is_prepend_list_configured.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
    if(value_path == "path-selection-invalidation-action")
    {
        path_selection_invalidation_action.yfilter = yfilter;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-margin")
    {
        path_selection_segment_routing_margin.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-segment-limit")
    {
        path_selection_segment_routing_segment_limit.yfilter = yfilter;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id.yfilter = yfilter;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address.yfilter = yfilter;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id.yfilter = yfilter;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address.yfilter = yfilter;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "prepend-list" || name == "tunnel-id" || name == "is-affinity-configured" || name == "is-path-invalidation-action-configured" || name == "is-path-invalidation-timeout-configured" || name == "is-path-select-configured" || name == "is-path-selection-metric-configured" || name == "is-path-selection-segment-routing-adjacency-protection-configured" || name == "is-path-selection-segment-routing-margin-configured" || name == "is-path-selection-segment-routing-margin-relative" || name == "is-path-selection-segment-routing-segment-limit-configured" || name == "is-pce-configured" || name == "is-pce-disj-group-id-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "is-prepend-list-configured" || name == "path-invalidation-timeout" || name == "path-selection-invalidation-action" || name == "path-selection-metric" || name == "path-selection-segment-routing-adjacency-protection" || name == "path-selection-segment-routing-margin" || name == "path-selection-segment-routing-segment-limit" || name == "pcebd-group-id" || name == "pcebd-source-address" || name == "pcedp-group-id" || name == "pcedp-source-address" || name == "pcedp-type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-p2p-te";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_data() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        for(auto const & c : constraint_extended_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        for(auto const & c : extended_forward_ref_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : constraint_extended_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_forward_ref_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConstraintExtendedValue' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedForwardRefValue' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::Logging()
    :
    all_logging_enabled{YType::boolean, "all-logging-enabled"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"}
{
    yang_name = "logging"; yang_parent_name = "attribute-set-p2p-te";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::~Logging()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_data() const
{
    return all_logging_enabled.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| lsp_re_opt.is_set
	|| lsp_re_route.is_set
	|| lsp_state.is_set
	|| s2l_state.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_logging_enabled.yfilter)
	|| ydk::is_set(lsp_bandwidth_change.yfilter)
	|| ydk::is_set(lsp_insufficient_bw.yfilter)
	|| ydk::is_set(lsp_pcalc_failure_logging_enabled.yfilter)
	|| ydk::is_set(lsp_re_opt.yfilter)
	|| ydk::is_set(lsp_re_route.yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(s2l_state.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
        all_logging_enabled.value_namespace = name_space;
        all_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
        lsp_bandwidth_change.value_namespace = name_space;
        lsp_bandwidth_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
        lsp_insufficient_bw.value_namespace = name_space;
        lsp_insufficient_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
        lsp_pcalc_failure_logging_enabled.value_namespace = name_space;
        lsp_pcalc_failure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
        lsp_re_opt.value_namespace = name_space;
        lsp_re_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
        lsp_re_route.value_namespace = name_space;
        lsp_re_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
        s2l_state.value_namespace = name_space;
        s2l_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change.yfilter = yfilter;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw.yfilter = yfilter;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt.yfilter = yfilter;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route.yfilter = yfilter;
    }
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
    if(value_path == "s2l-state")
    {
        s2l_state.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-logging-enabled" || name == "lsp-bandwidth-change" || name == "lsp-insufficient-bw" || name == "lsp-pcalc-failure-logging-enabled" || name == "lsp-re-opt" || name == "lsp-re-route" || name == "lsp-state" || name == "s2l-state")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependList()
{
    yang_name = "prepend-list"; yang_parent_name = "attribute-set-p2p-te";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::~PrependList()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_data() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_operation() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-list";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrependList' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prepend-entry")
    {
        for(auto const & c : prepend_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry>();
        c->parent = this;
        prepend_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prepend_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepend-entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::PrependEntry()
    :
    index_{YType::uint32, "index"},
    next_label{YType::uint32, "next-label"},
    type{YType::enumeration, "type"}
{
    yang_name = "prepend-entry"; yang_parent_name = "prepend-list";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::~PrependEntry()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_data() const
{
    return index_.is_set
	|| next_label.is_set
	|| type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(next_label.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-entry";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrependEntry' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (next_label.is_set || is_set(next_label.yfilter)) leaf_name_data.push_back(next_label.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-label")
    {
        next_label = value;
        next_label.value_namespace = name_space;
        next_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "next-label")
    {
        next_label.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "next-label" || name == "type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{
    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2p-te";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelId' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::PathCalculationError()
    :
    error_message{YType::str, "error-message"},
    log_time{YType::uint32, "log-time"},
    lsp_mode{YType::enumeration, "lsp-mode"}
{
    yang_name = "path-calculation-error"; yang_parent_name = "path-option";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::~PathCalculationError()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::has_data() const
{
    return error_message.is_set
	|| log_time.is_set
	|| lsp_mode.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(log_time.yfilter)
	|| ydk::is_set(lsp_mode.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-calculation-error";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathCalculationError' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.yfilter)) leaf_name_data.push_back(log_time.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.yfilter)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-time")
    {
        log_time = value;
        log_time.value_namespace = name_space;
        log_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
        lsp_mode.value_namespace = name_space;
        lsp_mode.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
    if(value_path == "log-time")
    {
        log_time.yfilter = yfilter;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-message" || name == "log-time" || name == "lsp-mode")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::RemergeError()
    :
    error_message{YType::str, "error-message"},
    log_time{YType::uint32, "log-time"},
    lsp_mode{YType::enumeration, "lsp-mode"}
{
    yang_name = "remerge-error"; yang_parent_name = "path-option";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::~RemergeError()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::has_data() const
{
    return error_message.is_set
	|| log_time.is_set
	|| lsp_mode.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(log_time.yfilter)
	|| ydk::is_set(lsp_mode.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remerge-error";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemergeError' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.yfilter)) leaf_name_data.push_back(log_time.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.yfilter)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-time")
    {
        log_time = value;
        log_time.value_namespace = name_space;
        log_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
        lsp_mode.value_namespace = name_space;
        lsp_mode.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
    if(value_path == "log-time")
    {
        log_time.yfilter = yfilter;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-message" || name == "log-time" || name == "lsp-mode")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::SignallingError()
    :
    error{YType::uint8, "error"},
    error_message{YType::str, "error-message"},
    error_node{YType::uint32, "error-node"},
    log_time{YType::uint32, "log-time"},
    lsp_mode{YType::enumeration, "lsp-mode"},
    reverse_lsp{YType::boolean, "reverse-lsp"},
    signalling_lsp_id{YType::uint16, "signalling-lsp-id"},
    sub_code{YType::uint16, "sub-code"}
{
    yang_name = "signalling-error"; yang_parent_name = "path-option";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::~SignallingError()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::has_data() const
{
    return error.is_set
	|| error_message.is_set
	|| error_node.is_set
	|| log_time.is_set
	|| lsp_mode.is_set
	|| reverse_lsp.is_set
	|| signalling_lsp_id.is_set
	|| sub_code.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(error_node.yfilter)
	|| ydk::is_set(log_time.yfilter)
	|| ydk::is_set(lsp_mode.yfilter)
	|| ydk::is_set(reverse_lsp.yfilter)
	|| ydk::is_set(signalling_lsp_id.yfilter)
	|| ydk::is_set(sub_code.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling-error";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SignallingError' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (error_node.is_set || is_set(error_node.yfilter)) leaf_name_data.push_back(error_node.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.yfilter)) leaf_name_data.push_back(log_time.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.yfilter)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());
    if (reverse_lsp.is_set || is_set(reverse_lsp.yfilter)) leaf_name_data.push_back(reverse_lsp.get_name_leafdata());
    if (signalling_lsp_id.is_set || is_set(signalling_lsp_id.yfilter)) leaf_name_data.push_back(signalling_lsp_id.get_name_leafdata());
    if (sub_code.is_set || is_set(sub_code.yfilter)) leaf_name_data.push_back(sub_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-node")
    {
        error_node = value;
        error_node.value_namespace = name_space;
        error_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-time")
    {
        log_time = value;
        log_time.value_namespace = name_space;
        log_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
        lsp_mode.value_namespace = name_space;
        lsp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp")
    {
        reverse_lsp = value;
        reverse_lsp.value_namespace = name_space;
        reverse_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-lsp-id")
    {
        signalling_lsp_id = value;
        signalling_lsp_id.value_namespace = name_space;
        signalling_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-code")
    {
        sub_code = value;
        sub_code.value_namespace = name_space;
        sub_code.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
    if(value_path == "error-node")
    {
        error_node.yfilter = yfilter;
    }
    if(value_path == "log-time")
    {
        log_time.yfilter = yfilter;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp")
    {
        reverse_lsp.yfilter = yfilter;
    }
    if(value_path == "signalling-lsp-id")
    {
        signalling_lsp_id.yfilter = yfilter;
    }
    if(value_path == "sub-code")
    {
        sub_code.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "error-message" || name == "error-node" || name == "log-time" || name == "lsp-mode" || name == "reverse-lsp" || name == "signalling-lsp-id" || name == "sub-code")
        return true;
    return false;
}

MplsTeStandby::TopologyNodes::TopologyNodes()
{
    yang_name = "topology-nodes"; yang_parent_name = "mpls-te-standby";
}

MplsTeStandby::TopologyNodes::~TopologyNodes()
{
}

bool MplsTeStandby::TopologyNodes::has_data() const
{
    for (std::size_t index=0; index<topology_node.size(); index++)
    {
        if(topology_node[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::TopologyNodes::has_operation() const
{
    for (std::size_t index=0; index<topology_node.size(); index++)
    {
        if(topology_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::TopologyNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-nodes";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-node")
    {
        for(auto const & c : topology_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode>();
        c->parent = this;
        topology_node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology_node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::TopologyNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::TopologyNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::TopologyNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-node")
        return true;
    return false;
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNode()
    :
    protocol{YType::enumeration, "protocol"},
    igp_id{YType::str, "igp-id"},
    area{YType::int32, "area"},
    topology_node_type{YType::enumeration, "topology-node-type"},
    igp_node_id{YType::str, "igp-node-id"},
    topology_node_overloaded{YType::boolean, "topology-node-overloaded"},
    topology_node_te_router_id{YType::str, "topology-node-te-router-id"}
    	,
    topology_node_sid_and_srbg(std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg>())
{
    topology_node_sid_and_srbg->parent = this;

    yang_name = "topology-node"; yang_parent_name = "topology-nodes";
}

MplsTeStandby::TopologyNodes::TopologyNode::~TopologyNode()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::has_data() const
{
    for (std::size_t index=0; index<topology_node_link.size(); index++)
    {
        if(topology_node_link[index]->has_data())
            return true;
    }
    return protocol.is_set
	|| igp_id.is_set
	|| area.is_set
	|| topology_node_type.is_set
	|| igp_node_id.is_set
	|| topology_node_overloaded.is_set
	|| topology_node_te_router_id.is_set
	|| (topology_node_sid_and_srbg !=  nullptr && topology_node_sid_and_srbg->has_data());
}

bool MplsTeStandby::TopologyNodes::TopologyNode::has_operation() const
{
    for (std::size_t index=0; index<topology_node_link.size(); index++)
    {
        if(topology_node_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(topology_node_type.yfilter)
	|| ydk::is_set(igp_node_id.yfilter)
	|| ydk::is_set(topology_node_overloaded.yfilter)
	|| ydk::is_set(topology_node_te_router_id.yfilter)
	|| (topology_node_sid_and_srbg !=  nullptr && topology_node_sid_and_srbg->has_operation());
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-node" <<"[protocol='" <<protocol <<"']" <<"[igp-id='" <<igp_id <<"']" <<"[area='" <<area <<"']" <<"[topology-node-type='" <<topology_node_type <<"']" <<"[igp-node-id='" <<igp_node_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology-nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (topology_node_type.is_set || is_set(topology_node_type.yfilter)) leaf_name_data.push_back(topology_node_type.get_name_leafdata());
    if (igp_node_id.is_set || is_set(igp_node_id.yfilter)) leaf_name_data.push_back(igp_node_id.get_name_leafdata());
    if (topology_node_overloaded.is_set || is_set(topology_node_overloaded.yfilter)) leaf_name_data.push_back(topology_node_overloaded.get_name_leafdata());
    if (topology_node_te_router_id.is_set || is_set(topology_node_te_router_id.yfilter)) leaf_name_data.push_back(topology_node_te_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-node-link")
    {
        for(auto const & c : topology_node_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink>();
        c->parent = this;
        topology_node_link.push_back(c);
        return c;
    }

    if(child_yang_name == "topology-node-sid-and-srbg")
    {
        if(topology_node_sid_and_srbg == nullptr)
        {
            topology_node_sid_and_srbg = std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg>();
        }
        return topology_node_sid_and_srbg;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology_node_link)
    {
        children[c->get_segment_path()] = c;
    }

    if(topology_node_sid_and_srbg != nullptr)
    {
        children["topology-node-sid-and-srbg"] = topology_node_sid_and_srbg;
    }

    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-node-type")
    {
        topology_node_type = value;
        topology_node_type.value_namespace = name_space;
        topology_node_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-node-id")
    {
        igp_node_id = value;
        igp_node_id.value_namespace = name_space;
        igp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-node-overloaded")
    {
        topology_node_overloaded = value;
        topology_node_overloaded.value_namespace = name_space;
        topology_node_overloaded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-node-te-router-id")
    {
        topology_node_te_router_id = value;
        topology_node_te_router_id.value_namespace = name_space;
        topology_node_te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::TopologyNodes::TopologyNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "topology-node-type")
    {
        topology_node_type.yfilter = yfilter;
    }
    if(value_path == "igp-node-id")
    {
        igp_node_id.yfilter = yfilter;
    }
    if(value_path == "topology-node-overloaded")
    {
        topology_node_overloaded.yfilter = yfilter;
    }
    if(value_path == "topology-node-te-router-id")
    {
        topology_node_te_router_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::TopologyNodes::TopologyNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-node-link" || name == "topology-node-sid-and-srbg" || name == "protocol" || name == "igp-id" || name == "area" || name == "topology-node-type" || name == "igp-node-id" || name == "topology-node-overloaded" || name == "topology-node-te-router-id")
        return true;
    return false;
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::TopologyNodeSidAndSrbg()
    :
    segment_id{YType::uint32, "segment-id"},
    segment_id_local_absolute_value{YType::uint32, "segment-id-local-absolute-value"},
    srgb_size{YType::uint32, "srgb-size"},
    srgb_start{YType::uint32, "srgb-start"}
{
    yang_name = "topology-node-sid-and-srbg"; yang_parent_name = "topology-node";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::~TopologyNodeSidAndSrbg()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::has_data() const
{
    return segment_id.is_set
	|| segment_id_local_absolute_value.is_set
	|| srgb_size.is_set
	|| srgb_start.is_set;
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment_id.yfilter)
	|| ydk::is_set(segment_id_local_absolute_value.yfilter)
	|| ydk::is_set(srgb_size.yfilter)
	|| ydk::is_set(srgb_start.yfilter);
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-node-sid-and-srbg";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyNodeSidAndSrbg' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_id.is_set || is_set(segment_id.yfilter)) leaf_name_data.push_back(segment_id.get_name_leafdata());
    if (segment_id_local_absolute_value.is_set || is_set(segment_id_local_absolute_value.yfilter)) leaf_name_data.push_back(segment_id_local_absolute_value.get_name_leafdata());
    if (srgb_size.is_set || is_set(srgb_size.yfilter)) leaf_name_data.push_back(srgb_size.get_name_leafdata());
    if (srgb_start.is_set || is_set(srgb_start.yfilter)) leaf_name_data.push_back(srgb_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "segment-id")
    {
        segment_id = value;
        segment_id.value_namespace = name_space;
        segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-local-absolute-value")
    {
        segment_id_local_absolute_value = value;
        segment_id_local_absolute_value.value_namespace = name_space;
        segment_id_local_absolute_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-size")
    {
        srgb_size = value;
        srgb_size.value_namespace = name_space;
        srgb_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-start")
    {
        srgb_start = value;
        srgb_start.value_namespace = name_space;
        srgb_start.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "segment-id")
    {
        segment_id.yfilter = yfilter;
    }
    if(value_path == "segment-id-local-absolute-value")
    {
        segment_id_local_absolute_value.yfilter = yfilter;
    }
    if(value_path == "srgb-size")
    {
        srgb_size.yfilter = yfilter;
    }
    if(value_path == "srgb-start")
    {
        srgb_start.yfilter = yfilter;
    }
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-id" || name == "segment-id-local-absolute-value" || name == "srgb-size" || name == "srgb-start")
        return true;
    return false;
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyNodeLink()
    :
    topology_link_affinity_bits{YType::uint32, "topology-link-affinity-bits"},
    topology_link_bandwidth_model{YType::enumeration, "topology-link-bandwidth-model"},
    topology_link_encoding{YType::uint8, "topology-link-encoding"},
    topology_link_fragment_id{YType::uint32, "topology-link-fragment-id"},
    topology_link_igp_metric{YType::uint32, "topology-link-igp-metric"},
    topology_link_interface_address{YType::str, "topology-link-interface-address"},
    topology_link_interface_id{YType::uint32, "topology-link-interface-id"},
    topology_link_neighbor_address{YType::str, "topology-link-neighbor-address"},
    topology_link_neighbor_generation{YType::uint32, "topology-link-neighbor-generation"},
    topology_link_neighbor_id{YType::uint32, "topology-link-neighbor-id"},
    topology_link_neighbor_node_id{YType::uint32, "topology-link-neighbor-node-id"},
    topology_link_neighbor_system_id{YType::str, "topology-link-neighbor-system-id"},
    topology_link_switching_capability{YType::uint8, "topology-link-switching-capability"},
    topology_link_te_metric{YType::uint32, "topology-link-te-metric"},
    topology_link_type{YType::enumeration, "topology-link-type"},
    topology_link_uni_delay{YType::uint32, "topology-link-uni-delay"}
    	,
    odu_link_capabilities(std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities>())
	,topology_link_bandwidth(std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth>())
{
    odu_link_capabilities->parent = this;

    topology_link_bandwidth->parent = this;

    yang_name = "topology-node-link"; yang_parent_name = "topology-node";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::~TopologyNodeLink()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::has_data() const
{
    for (std::size_t index=0; index<adjacency_sid.size(); index++)
    {
        if(adjacency_sid[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<topology_link_extended_affinity_bit.size(); index++)
    {
        if(topology_link_extended_affinity_bit[index]->has_data())
            return true;
    }
    return topology_link_affinity_bits.is_set
	|| topology_link_bandwidth_model.is_set
	|| topology_link_encoding.is_set
	|| topology_link_fragment_id.is_set
	|| topology_link_igp_metric.is_set
	|| topology_link_interface_address.is_set
	|| topology_link_interface_id.is_set
	|| topology_link_neighbor_address.is_set
	|| topology_link_neighbor_generation.is_set
	|| topology_link_neighbor_id.is_set
	|| topology_link_neighbor_node_id.is_set
	|| topology_link_neighbor_system_id.is_set
	|| topology_link_switching_capability.is_set
	|| topology_link_te_metric.is_set
	|| topology_link_type.is_set
	|| topology_link_uni_delay.is_set
	|| (odu_link_capabilities !=  nullptr && odu_link_capabilities->has_data())
	|| (topology_link_bandwidth !=  nullptr && topology_link_bandwidth->has_data());
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::has_operation() const
{
    for (std::size_t index=0; index<adjacency_sid.size(); index++)
    {
        if(adjacency_sid[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<topology_link_extended_affinity_bit.size(); index++)
    {
        if(topology_link_extended_affinity_bit[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(topology_link_affinity_bits.yfilter)
	|| ydk::is_set(topology_link_bandwidth_model.yfilter)
	|| ydk::is_set(topology_link_encoding.yfilter)
	|| ydk::is_set(topology_link_fragment_id.yfilter)
	|| ydk::is_set(topology_link_igp_metric.yfilter)
	|| ydk::is_set(topology_link_interface_address.yfilter)
	|| ydk::is_set(topology_link_interface_id.yfilter)
	|| ydk::is_set(topology_link_neighbor_address.yfilter)
	|| ydk::is_set(topology_link_neighbor_generation.yfilter)
	|| ydk::is_set(topology_link_neighbor_id.yfilter)
	|| ydk::is_set(topology_link_neighbor_node_id.yfilter)
	|| ydk::is_set(topology_link_neighbor_system_id.yfilter)
	|| ydk::is_set(topology_link_switching_capability.yfilter)
	|| ydk::is_set(topology_link_te_metric.yfilter)
	|| ydk::is_set(topology_link_type.yfilter)
	|| ydk::is_set(topology_link_uni_delay.yfilter)
	|| (odu_link_capabilities !=  nullptr && odu_link_capabilities->has_operation())
	|| (topology_link_bandwidth !=  nullptr && topology_link_bandwidth->has_operation());
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-node-link";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyNodeLink' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_link_affinity_bits.is_set || is_set(topology_link_affinity_bits.yfilter)) leaf_name_data.push_back(topology_link_affinity_bits.get_name_leafdata());
    if (topology_link_bandwidth_model.is_set || is_set(topology_link_bandwidth_model.yfilter)) leaf_name_data.push_back(topology_link_bandwidth_model.get_name_leafdata());
    if (topology_link_encoding.is_set || is_set(topology_link_encoding.yfilter)) leaf_name_data.push_back(topology_link_encoding.get_name_leafdata());
    if (topology_link_fragment_id.is_set || is_set(topology_link_fragment_id.yfilter)) leaf_name_data.push_back(topology_link_fragment_id.get_name_leafdata());
    if (topology_link_igp_metric.is_set || is_set(topology_link_igp_metric.yfilter)) leaf_name_data.push_back(topology_link_igp_metric.get_name_leafdata());
    if (topology_link_interface_address.is_set || is_set(topology_link_interface_address.yfilter)) leaf_name_data.push_back(topology_link_interface_address.get_name_leafdata());
    if (topology_link_interface_id.is_set || is_set(topology_link_interface_id.yfilter)) leaf_name_data.push_back(topology_link_interface_id.get_name_leafdata());
    if (topology_link_neighbor_address.is_set || is_set(topology_link_neighbor_address.yfilter)) leaf_name_data.push_back(topology_link_neighbor_address.get_name_leafdata());
    if (topology_link_neighbor_generation.is_set || is_set(topology_link_neighbor_generation.yfilter)) leaf_name_data.push_back(topology_link_neighbor_generation.get_name_leafdata());
    if (topology_link_neighbor_id.is_set || is_set(topology_link_neighbor_id.yfilter)) leaf_name_data.push_back(topology_link_neighbor_id.get_name_leafdata());
    if (topology_link_neighbor_node_id.is_set || is_set(topology_link_neighbor_node_id.yfilter)) leaf_name_data.push_back(topology_link_neighbor_node_id.get_name_leafdata());
    if (topology_link_neighbor_system_id.is_set || is_set(topology_link_neighbor_system_id.yfilter)) leaf_name_data.push_back(topology_link_neighbor_system_id.get_name_leafdata());
    if (topology_link_switching_capability.is_set || is_set(topology_link_switching_capability.yfilter)) leaf_name_data.push_back(topology_link_switching_capability.get_name_leafdata());
    if (topology_link_te_metric.is_set || is_set(topology_link_te_metric.yfilter)) leaf_name_data.push_back(topology_link_te_metric.get_name_leafdata());
    if (topology_link_type.is_set || is_set(topology_link_type.yfilter)) leaf_name_data.push_back(topology_link_type.get_name_leafdata());
    if (topology_link_uni_delay.is_set || is_set(topology_link_uni_delay.yfilter)) leaf_name_data.push_back(topology_link_uni_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid")
    {
        for(auto const & c : adjacency_sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid>();
        c->parent = this;
        adjacency_sid.push_back(c);
        return c;
    }

    if(child_yang_name == "odu-link-capabilities")
    {
        if(odu_link_capabilities == nullptr)
        {
            odu_link_capabilities = std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities>();
        }
        return odu_link_capabilities;
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        for(auto const & c : shared_risk_link_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(c);
        return c;
    }

    if(child_yang_name == "topology-link-bandwidth")
    {
        if(topology_link_bandwidth == nullptr)
        {
            topology_link_bandwidth = std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth>();
        }
        return topology_link_bandwidth;
    }

    if(child_yang_name == "topology-link-extended-affinity-bit")
    {
        for(auto const & c : topology_link_extended_affinity_bit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit>();
        c->parent = this;
        topology_link_extended_affinity_bit.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : adjacency_sid)
    {
        children[c->get_segment_path()] = c;
    }

    if(odu_link_capabilities != nullptr)
    {
        children["odu-link-capabilities"] = odu_link_capabilities;
    }

    for (auto const & c : shared_risk_link_group)
    {
        children[c->get_segment_path()] = c;
    }

    if(topology_link_bandwidth != nullptr)
    {
        children["topology-link-bandwidth"] = topology_link_bandwidth;
    }

    for (auto const & c : topology_link_extended_affinity_bit)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-link-affinity-bits")
    {
        topology_link_affinity_bits = value;
        topology_link_affinity_bits.value_namespace = name_space;
        topology_link_affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-bandwidth-model")
    {
        topology_link_bandwidth_model = value;
        topology_link_bandwidth_model.value_namespace = name_space;
        topology_link_bandwidth_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-encoding")
    {
        topology_link_encoding = value;
        topology_link_encoding.value_namespace = name_space;
        topology_link_encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-fragment-id")
    {
        topology_link_fragment_id = value;
        topology_link_fragment_id.value_namespace = name_space;
        topology_link_fragment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-igp-metric")
    {
        topology_link_igp_metric = value;
        topology_link_igp_metric.value_namespace = name_space;
        topology_link_igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-interface-address")
    {
        topology_link_interface_address = value;
        topology_link_interface_address.value_namespace = name_space;
        topology_link_interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-interface-id")
    {
        topology_link_interface_id = value;
        topology_link_interface_id.value_namespace = name_space;
        topology_link_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-neighbor-address")
    {
        topology_link_neighbor_address = value;
        topology_link_neighbor_address.value_namespace = name_space;
        topology_link_neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-neighbor-generation")
    {
        topology_link_neighbor_generation = value;
        topology_link_neighbor_generation.value_namespace = name_space;
        topology_link_neighbor_generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-neighbor-id")
    {
        topology_link_neighbor_id = value;
        topology_link_neighbor_id.value_namespace = name_space;
        topology_link_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-neighbor-node-id")
    {
        topology_link_neighbor_node_id = value;
        topology_link_neighbor_node_id.value_namespace = name_space;
        topology_link_neighbor_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-neighbor-system-id")
    {
        topology_link_neighbor_system_id = value;
        topology_link_neighbor_system_id.value_namespace = name_space;
        topology_link_neighbor_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-switching-capability")
    {
        topology_link_switching_capability = value;
        topology_link_switching_capability.value_namespace = name_space;
        topology_link_switching_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-te-metric")
    {
        topology_link_te_metric = value;
        topology_link_te_metric.value_namespace = name_space;
        topology_link_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-type")
    {
        topology_link_type = value;
        topology_link_type.value_namespace = name_space;
        topology_link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-uni-delay")
    {
        topology_link_uni_delay = value;
        topology_link_uni_delay.value_namespace = name_space;
        topology_link_uni_delay.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-link-affinity-bits")
    {
        topology_link_affinity_bits.yfilter = yfilter;
    }
    if(value_path == "topology-link-bandwidth-model")
    {
        topology_link_bandwidth_model.yfilter = yfilter;
    }
    if(value_path == "topology-link-encoding")
    {
        topology_link_encoding.yfilter = yfilter;
    }
    if(value_path == "topology-link-fragment-id")
    {
        topology_link_fragment_id.yfilter = yfilter;
    }
    if(value_path == "topology-link-igp-metric")
    {
        topology_link_igp_metric.yfilter = yfilter;
    }
    if(value_path == "topology-link-interface-address")
    {
        topology_link_interface_address.yfilter = yfilter;
    }
    if(value_path == "topology-link-interface-id")
    {
        topology_link_interface_id.yfilter = yfilter;
    }
    if(value_path == "topology-link-neighbor-address")
    {
        topology_link_neighbor_address.yfilter = yfilter;
    }
    if(value_path == "topology-link-neighbor-generation")
    {
        topology_link_neighbor_generation.yfilter = yfilter;
    }
    if(value_path == "topology-link-neighbor-id")
    {
        topology_link_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "topology-link-neighbor-node-id")
    {
        topology_link_neighbor_node_id.yfilter = yfilter;
    }
    if(value_path == "topology-link-neighbor-system-id")
    {
        topology_link_neighbor_system_id.yfilter = yfilter;
    }
    if(value_path == "topology-link-switching-capability")
    {
        topology_link_switching_capability.yfilter = yfilter;
    }
    if(value_path == "topology-link-te-metric")
    {
        topology_link_te_metric.yfilter = yfilter;
    }
    if(value_path == "topology-link-type")
    {
        topology_link_type.yfilter = yfilter;
    }
    if(value_path == "topology-link-uni-delay")
    {
        topology_link_uni_delay.yfilter = yfilter;
    }
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid" || name == "odu-link-capabilities" || name == "shared-risk-link-group" || name == "topology-link-bandwidth" || name == "topology-link-extended-affinity-bit" || name == "topology-link-affinity-bits" || name == "topology-link-bandwidth-model" || name == "topology-link-encoding" || name == "topology-link-fragment-id" || name == "topology-link-igp-metric" || name == "topology-link-interface-address" || name == "topology-link-interface-id" || name == "topology-link-neighbor-address" || name == "topology-link-neighbor-generation" || name == "topology-link-neighbor-id" || name == "topology-link-neighbor-node-id" || name == "topology-link-neighbor-system-id" || name == "topology-link-switching-capability" || name == "topology-link-te-metric" || name == "topology-link-type" || name == "topology-link-uni-delay")
        return true;
    return false;
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidth()
    :
    bandwidth_migration_mode{YType::enumeration, "bandwidth-migration-mode"}
    	,
    topology_link_bandwidth_prestandard(std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard>())
	,topology_link_bandwidth_standard(std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard>())
{
    topology_link_bandwidth_prestandard->parent = this;

    topology_link_bandwidth_standard->parent = this;

    yang_name = "topology-link-bandwidth"; yang_parent_name = "topology-node-link";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::~TopologyLinkBandwidth()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::has_data() const
{
    return bandwidth_migration_mode.is_set
	|| (topology_link_bandwidth_prestandard !=  nullptr && topology_link_bandwidth_prestandard->has_data())
	|| (topology_link_bandwidth_standard !=  nullptr && topology_link_bandwidth_standard->has_data());
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_migration_mode.yfilter)
	|| (topology_link_bandwidth_prestandard !=  nullptr && topology_link_bandwidth_prestandard->has_operation())
	|| (topology_link_bandwidth_standard !=  nullptr && topology_link_bandwidth_standard->has_operation());
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-bandwidth";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyLinkBandwidth' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_migration_mode.is_set || is_set(bandwidth_migration_mode.yfilter)) leaf_name_data.push_back(bandwidth_migration_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-link-bandwidth-prestandard")
    {
        if(topology_link_bandwidth_prestandard == nullptr)
        {
            topology_link_bandwidth_prestandard = std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard>();
        }
        return topology_link_bandwidth_prestandard;
    }

    if(child_yang_name == "topology-link-bandwidth-standard")
    {
        if(topology_link_bandwidth_standard == nullptr)
        {
            topology_link_bandwidth_standard = std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard>();
        }
        return topology_link_bandwidth_standard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(topology_link_bandwidth_prestandard != nullptr)
    {
        children["topology-link-bandwidth-prestandard"] = topology_link_bandwidth_prestandard;
    }

    if(topology_link_bandwidth_standard != nullptr)
    {
        children["topology-link-bandwidth-standard"] = topology_link_bandwidth_standard;
    }

    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-migration-mode")
    {
        bandwidth_migration_mode = value;
        bandwidth_migration_mode.value_namespace = name_space;
        bandwidth_migration_mode.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-migration-mode")
    {
        bandwidth_migration_mode.yfilter = yfilter;
    }
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-link-bandwidth-prestandard" || name == "topology-link-bandwidth-standard" || name == "bandwidth-migration-mode")
        return true;
    return false;
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkBandwidthPrestandard()
    :
    topology_link_prestandard_bandwidth_physical{YType::uint32, "topology-link-prestandard-bandwidth-physical"},
    topology_link_prestandard_bandwidth_reservation_global{YType::uint32, "topology-link-prestandard-bandwidth-reservation-global"},
    topology_link_prestandard_bandwidth_reservation_subpool{YType::uint32, "topology-link-prestandard-bandwidth-reservation-subpool"}
    	,
    topology_link_prestandard_bandwidth_detail(std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail>())
{
    topology_link_prestandard_bandwidth_detail->parent = this;

    yang_name = "topology-link-bandwidth-prestandard"; yang_parent_name = "topology-link-bandwidth";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::~TopologyLinkBandwidthPrestandard()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::has_data() const
{
    return topology_link_prestandard_bandwidth_physical.is_set
	|| topology_link_prestandard_bandwidth_reservation_global.is_set
	|| topology_link_prestandard_bandwidth_reservation_subpool.is_set
	|| (topology_link_prestandard_bandwidth_detail !=  nullptr && topology_link_prestandard_bandwidth_detail->has_data());
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topology_link_prestandard_bandwidth_physical.yfilter)
	|| ydk::is_set(topology_link_prestandard_bandwidth_reservation_global.yfilter)
	|| ydk::is_set(topology_link_prestandard_bandwidth_reservation_subpool.yfilter)
	|| (topology_link_prestandard_bandwidth_detail !=  nullptr && topology_link_prestandard_bandwidth_detail->has_operation());
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-bandwidth-prestandard";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyLinkBandwidthPrestandard' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_link_prestandard_bandwidth_physical.is_set || is_set(topology_link_prestandard_bandwidth_physical.yfilter)) leaf_name_data.push_back(topology_link_prestandard_bandwidth_physical.get_name_leafdata());
    if (topology_link_prestandard_bandwidth_reservation_global.is_set || is_set(topology_link_prestandard_bandwidth_reservation_global.yfilter)) leaf_name_data.push_back(topology_link_prestandard_bandwidth_reservation_global.get_name_leafdata());
    if (topology_link_prestandard_bandwidth_reservation_subpool.is_set || is_set(topology_link_prestandard_bandwidth_reservation_subpool.yfilter)) leaf_name_data.push_back(topology_link_prestandard_bandwidth_reservation_subpool.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-link-prestandard-bandwidth-detail")
    {
        if(topology_link_prestandard_bandwidth_detail == nullptr)
        {
            topology_link_prestandard_bandwidth_detail = std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail>();
        }
        return topology_link_prestandard_bandwidth_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(topology_link_prestandard_bandwidth_detail != nullptr)
    {
        children["topology-link-prestandard-bandwidth-detail"] = topology_link_prestandard_bandwidth_detail;
    }

    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-link-prestandard-bandwidth-physical")
    {
        topology_link_prestandard_bandwidth_physical = value;
        topology_link_prestandard_bandwidth_physical.value_namespace = name_space;
        topology_link_prestandard_bandwidth_physical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-prestandard-bandwidth-reservation-global")
    {
        topology_link_prestandard_bandwidth_reservation_global = value;
        topology_link_prestandard_bandwidth_reservation_global.value_namespace = name_space;
        topology_link_prestandard_bandwidth_reservation_global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-prestandard-bandwidth-reservation-subpool")
    {
        topology_link_prestandard_bandwidth_reservation_subpool = value;
        topology_link_prestandard_bandwidth_reservation_subpool.value_namespace = name_space;
        topology_link_prestandard_bandwidth_reservation_subpool.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-link-prestandard-bandwidth-physical")
    {
        topology_link_prestandard_bandwidth_physical.yfilter = yfilter;
    }
    if(value_path == "topology-link-prestandard-bandwidth-reservation-global")
    {
        topology_link_prestandard_bandwidth_reservation_global.yfilter = yfilter;
    }
    if(value_path == "topology-link-prestandard-bandwidth-reservation-subpool")
    {
        topology_link_prestandard_bandwidth_reservation_subpool.yfilter = yfilter;
    }
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-link-prestandard-bandwidth-detail" || name == "topology-link-prestandard-bandwidth-physical" || name == "topology-link-prestandard-bandwidth-reservation-global" || name == "topology-link-prestandard-bandwidth-reservation-subpool")
        return true;
    return false;
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthDetail()
{
    yang_name = "topology-link-prestandard-bandwidth-detail"; yang_parent_name = "topology-link-bandwidth-prestandard";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::~TopologyLinkPrestandardBandwidthDetail()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::has_data() const
{
    for (std::size_t index=0; index<topology_link_prestandard_bandwidth_allocated.size(); index++)
    {
        if(topology_link_prestandard_bandwidth_allocated[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<topology_link_prestandard_bandwidth_available_global.size(); index++)
    {
        if(topology_link_prestandard_bandwidth_available_global[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<topology_link_prestandard_bandwidth_available_subpool.size(); index++)
    {
        if(topology_link_prestandard_bandwidth_available_subpool[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::has_operation() const
{
    for (std::size_t index=0; index<topology_link_prestandard_bandwidth_allocated.size(); index++)
    {
        if(topology_link_prestandard_bandwidth_allocated[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<topology_link_prestandard_bandwidth_available_global.size(); index++)
    {
        if(topology_link_prestandard_bandwidth_available_global[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<topology_link_prestandard_bandwidth_available_subpool.size(); index++)
    {
        if(topology_link_prestandard_bandwidth_available_subpool[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-prestandard-bandwidth-detail";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyLinkPrestandardBandwidthDetail' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-link-prestandard-bandwidth-allocated")
    {
        for(auto const & c : topology_link_prestandard_bandwidth_allocated)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated>();
        c->parent = this;
        topology_link_prestandard_bandwidth_allocated.push_back(c);
        return c;
    }

    if(child_yang_name == "topology-link-prestandard-bandwidth-available-global")
    {
        for(auto const & c : topology_link_prestandard_bandwidth_available_global)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal>();
        c->parent = this;
        topology_link_prestandard_bandwidth_available_global.push_back(c);
        return c;
    }

    if(child_yang_name == "topology-link-prestandard-bandwidth-available-subpool")
    {
        for(auto const & c : topology_link_prestandard_bandwidth_available_subpool)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool>();
        c->parent = this;
        topology_link_prestandard_bandwidth_available_subpool.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology_link_prestandard_bandwidth_allocated)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : topology_link_prestandard_bandwidth_available_global)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : topology_link_prestandard_bandwidth_available_subpool)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-link-prestandard-bandwidth-allocated" || name == "topology-link-prestandard-bandwidth-available-global" || name == "topology-link-prestandard-bandwidth-available-subpool")
        return true;
    return false;
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::TopologyLinkPrestandardBandwidthAllocated()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "topology-link-prestandard-bandwidth-allocated"; yang_parent_name = "topology-link-prestandard-bandwidth-detail";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::~TopologyLinkPrestandardBandwidthAllocated()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-prestandard-bandwidth-allocated";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyLinkPrestandardBandwidthAllocated' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::TopologyLinkPrestandardBandwidthAvailableGlobal()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "topology-link-prestandard-bandwidth-available-global"; yang_parent_name = "topology-link-prestandard-bandwidth-detail";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::~TopologyLinkPrestandardBandwidthAvailableGlobal()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-prestandard-bandwidth-available-global";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyLinkPrestandardBandwidthAvailableGlobal' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::TopologyLinkPrestandardBandwidthAvailableSubpool()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "topology-link-prestandard-bandwidth-available-subpool"; yang_parent_name = "topology-link-prestandard-bandwidth-detail";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::~TopologyLinkPrestandardBandwidthAvailableSubpool()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-prestandard-bandwidth-available-subpool";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyLinkPrestandardBandwidthAvailableSubpool' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopologyLinkBandwidthStandard()
    :
    topo_link_std_bw_physical{YType::uint32, "topo-link-std-bw-physical"},
    topo_link_std_bw_res_max{YType::uint32, "topo-link-std-bw-res-max"},
    topo_link_std_bw_res_pool0{YType::uint32, "topo-link-std-bw-res-pool0"},
    topo_link_std_bw_res_pool1{YType::uint32, "topo-link-std-bw-res-pool1"}
    	,
    topo_link_std_bw_detail(std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail>())
{
    topo_link_std_bw_detail->parent = this;

    yang_name = "topology-link-bandwidth-standard"; yang_parent_name = "topology-link-bandwidth";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::~TopologyLinkBandwidthStandard()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::has_data() const
{
    return topo_link_std_bw_physical.is_set
	|| topo_link_std_bw_res_max.is_set
	|| topo_link_std_bw_res_pool0.is_set
	|| topo_link_std_bw_res_pool1.is_set
	|| (topo_link_std_bw_detail !=  nullptr && topo_link_std_bw_detail->has_data());
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topo_link_std_bw_physical.yfilter)
	|| ydk::is_set(topo_link_std_bw_res_max.yfilter)
	|| ydk::is_set(topo_link_std_bw_res_pool0.yfilter)
	|| ydk::is_set(topo_link_std_bw_res_pool1.yfilter)
	|| (topo_link_std_bw_detail !=  nullptr && topo_link_std_bw_detail->has_operation());
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-bandwidth-standard";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyLinkBandwidthStandard' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topo_link_std_bw_physical.is_set || is_set(topo_link_std_bw_physical.yfilter)) leaf_name_data.push_back(topo_link_std_bw_physical.get_name_leafdata());
    if (topo_link_std_bw_res_max.is_set || is_set(topo_link_std_bw_res_max.yfilter)) leaf_name_data.push_back(topo_link_std_bw_res_max.get_name_leafdata());
    if (topo_link_std_bw_res_pool0.is_set || is_set(topo_link_std_bw_res_pool0.yfilter)) leaf_name_data.push_back(topo_link_std_bw_res_pool0.get_name_leafdata());
    if (topo_link_std_bw_res_pool1.is_set || is_set(topo_link_std_bw_res_pool1.yfilter)) leaf_name_data.push_back(topo_link_std_bw_res_pool1.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topo-link-std-bw-detail")
    {
        if(topo_link_std_bw_detail == nullptr)
        {
            topo_link_std_bw_detail = std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail>();
        }
        return topo_link_std_bw_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(topo_link_std_bw_detail != nullptr)
    {
        children["topo-link-std-bw-detail"] = topo_link_std_bw_detail;
    }

    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topo-link-std-bw-physical")
    {
        topo_link_std_bw_physical = value;
        topo_link_std_bw_physical.value_namespace = name_space;
        topo_link_std_bw_physical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-link-std-bw-res-max")
    {
        topo_link_std_bw_res_max = value;
        topo_link_std_bw_res_max.value_namespace = name_space;
        topo_link_std_bw_res_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-link-std-bw-res-pool0")
    {
        topo_link_std_bw_res_pool0 = value;
        topo_link_std_bw_res_pool0.value_namespace = name_space;
        topo_link_std_bw_res_pool0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-link-std-bw-res-pool1")
    {
        topo_link_std_bw_res_pool1 = value;
        topo_link_std_bw_res_pool1.value_namespace = name_space;
        topo_link_std_bw_res_pool1.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topo-link-std-bw-physical")
    {
        topo_link_std_bw_physical.yfilter = yfilter;
    }
    if(value_path == "topo-link-std-bw-res-max")
    {
        topo_link_std_bw_res_max.yfilter = yfilter;
    }
    if(value_path == "topo-link-std-bw-res-pool0")
    {
        topo_link_std_bw_res_pool0.yfilter = yfilter;
    }
    if(value_path == "topo-link-std-bw-res-pool1")
    {
        topo_link_std_bw_res_pool1.yfilter = yfilter;
    }
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topo-link-std-bw-detail" || name == "topo-link-std-bw-physical" || name == "topo-link-std-bw-res-max" || name == "topo-link-std-bw-res-pool0" || name == "topo-link-std-bw-res-pool1")
        return true;
    return false;
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwDetail()
{
    yang_name = "topo-link-std-bw-detail"; yang_parent_name = "topology-link-bandwidth-standard";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::~TopoLinkStdBwDetail()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::has_data() const
{
    for (std::size_t index=0; index<topo_link_std_bw_allocated.size(); index++)
    {
        if(topo_link_std_bw_allocated[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<topo_link_std_bw_available.size(); index++)
    {
        if(topo_link_std_bw_available[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::has_operation() const
{
    for (std::size_t index=0; index<topo_link_std_bw_allocated.size(); index++)
    {
        if(topo_link_std_bw_allocated[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<topo_link_std_bw_available.size(); index++)
    {
        if(topo_link_std_bw_available[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topo-link-std-bw-detail";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopoLinkStdBwDetail' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topo-link-std-bw-allocated")
    {
        for(auto const & c : topo_link_std_bw_allocated)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated>();
        c->parent = this;
        topo_link_std_bw_allocated.push_back(c);
        return c;
    }

    if(child_yang_name == "topo-link-std-bw-available")
    {
        for(auto const & c : topo_link_std_bw_available)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable>();
        c->parent = this;
        topo_link_std_bw_available.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topo_link_std_bw_allocated)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : topo_link_std_bw_available)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topo-link-std-bw-allocated" || name == "topo-link-std-bw-available")
        return true;
    return false;
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::TopoLinkStdBwAllocated()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "topo-link-std-bw-allocated"; yang_parent_name = "topo-link-std-bw-detail";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::~TopoLinkStdBwAllocated()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topo-link-std-bw-allocated";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopoLinkStdBwAllocated' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::TopoLinkStdBwAvailable()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "topo-link-std-bw-available"; yang_parent_name = "topo-link-std-bw-detail";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::~TopoLinkStdBwAvailable()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topo-link-std-bw-available";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopoLinkStdBwAvailable' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduLinkCapabilities()
{
    yang_name = "odu-link-capabilities"; yang_parent_name = "topology-node-link";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::~OduLinkCapabilities()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::has_data() const
{
    for (std::size_t index=0; index<max_lsp_bandwidth.size(); index++)
    {
        if(max_lsp_bandwidth[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<odu_capability.size(); index++)
    {
        if(odu_capability[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::has_operation() const
{
    for (std::size_t index=0; index<max_lsp_bandwidth.size(); index++)
    {
        if(max_lsp_bandwidth[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<odu_capability.size(); index++)
    {
        if(odu_capability[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-link-capabilities";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduLinkCapabilities' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-lsp-bandwidth")
    {
        for(auto const & c : max_lsp_bandwidth)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth>();
        c->parent = this;
        max_lsp_bandwidth.push_back(c);
        return c;
    }

    if(child_yang_name == "odu-capability")
    {
        for(auto const & c : odu_capability)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability>();
        c->parent = this;
        odu_capability.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : max_lsp_bandwidth)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : odu_capability)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-lsp-bandwidth" || name == "odu-capability")
        return true;
    return false;
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::MaxLspBandwidth()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "max-lsp-bandwidth"; yang_parent_name = "odu-link-capabilities";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::~MaxLspBandwidth()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lsp-bandwidth";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxLspBandwidth' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::OduCapability()
    :
    lcas_capable{YType::boolean, "lcas-capable"},
    signal_type{YType::enumeration, "signal-type"},
    stage1{YType::enumeration, "stage1"},
    stage2{YType::enumeration, "stage2"},
    stage3{YType::enumeration, "stage3"},
    stage4{YType::enumeration, "stage4"},
    switchable{YType::boolean, "switchable"},
    terminable{YType::boolean, "terminable"},
    tsg1p25{YType::boolean, "tsg1p25"},
    tsg2p5{YType::boolean, "tsg2p5"},
    vcat_capable{YType::boolean, "vcat-capable"}
    	,
    bandwidth_info(std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo>())
{
    bandwidth_info->parent = this;

    yang_name = "odu-capability"; yang_parent_name = "odu-link-capabilities";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::~OduCapability()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::has_data() const
{
    return lcas_capable.is_set
	|| signal_type.is_set
	|| stage1.is_set
	|| stage2.is_set
	|| stage3.is_set
	|| stage4.is_set
	|| switchable.is_set
	|| terminable.is_set
	|| tsg1p25.is_set
	|| tsg2p5.is_set
	|| vcat_capable.is_set
	|| (bandwidth_info !=  nullptr && bandwidth_info->has_data());
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lcas_capable.yfilter)
	|| ydk::is_set(signal_type.yfilter)
	|| ydk::is_set(stage1.yfilter)
	|| ydk::is_set(stage2.yfilter)
	|| ydk::is_set(stage3.yfilter)
	|| ydk::is_set(stage4.yfilter)
	|| ydk::is_set(switchable.yfilter)
	|| ydk::is_set(terminable.yfilter)
	|| ydk::is_set(tsg1p25.yfilter)
	|| ydk::is_set(tsg2p5.yfilter)
	|| ydk::is_set(vcat_capable.yfilter)
	|| (bandwidth_info !=  nullptr && bandwidth_info->has_operation());
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-capability";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduCapability' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lcas_capable.is_set || is_set(lcas_capable.yfilter)) leaf_name_data.push_back(lcas_capable.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.yfilter)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage1.is_set || is_set(stage1.yfilter)) leaf_name_data.push_back(stage1.get_name_leafdata());
    if (stage2.is_set || is_set(stage2.yfilter)) leaf_name_data.push_back(stage2.get_name_leafdata());
    if (stage3.is_set || is_set(stage3.yfilter)) leaf_name_data.push_back(stage3.get_name_leafdata());
    if (stage4.is_set || is_set(stage4.yfilter)) leaf_name_data.push_back(stage4.get_name_leafdata());
    if (switchable.is_set || is_set(switchable.yfilter)) leaf_name_data.push_back(switchable.get_name_leafdata());
    if (terminable.is_set || is_set(terminable.yfilter)) leaf_name_data.push_back(terminable.get_name_leafdata());
    if (tsg1p25.is_set || is_set(tsg1p25.yfilter)) leaf_name_data.push_back(tsg1p25.get_name_leafdata());
    if (tsg2p5.is_set || is_set(tsg2p5.yfilter)) leaf_name_data.push_back(tsg2p5.get_name_leafdata());
    if (vcat_capable.is_set || is_set(vcat_capable.yfilter)) leaf_name_data.push_back(vcat_capable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-info")
    {
        if(bandwidth_info == nullptr)
        {
            bandwidth_info = std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo>();
        }
        return bandwidth_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth_info != nullptr)
    {
        children["bandwidth-info"] = bandwidth_info;
    }

    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lcas-capable")
    {
        lcas_capable = value;
        lcas_capable.value_namespace = name_space;
        lcas_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
        signal_type.value_namespace = name_space;
        signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage1")
    {
        stage1 = value;
        stage1.value_namespace = name_space;
        stage1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage2")
    {
        stage2 = value;
        stage2.value_namespace = name_space;
        stage2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage3")
    {
        stage3 = value;
        stage3.value_namespace = name_space;
        stage3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage4")
    {
        stage4 = value;
        stage4.value_namespace = name_space;
        stage4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchable")
    {
        switchable = value;
        switchable.value_namespace = name_space;
        switchable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminable")
    {
        terminable = value;
        terminable.value_namespace = name_space;
        terminable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg1p25")
    {
        tsg1p25 = value;
        tsg1p25.value_namespace = name_space;
        tsg1p25.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg2p5")
    {
        tsg2p5 = value;
        tsg2p5.value_namespace = name_space;
        tsg2p5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcat-capable")
    {
        vcat_capable = value;
        vcat_capable.value_namespace = name_space;
        vcat_capable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lcas-capable")
    {
        lcas_capable.yfilter = yfilter;
    }
    if(value_path == "signal-type")
    {
        signal_type.yfilter = yfilter;
    }
    if(value_path == "stage1")
    {
        stage1.yfilter = yfilter;
    }
    if(value_path == "stage2")
    {
        stage2.yfilter = yfilter;
    }
    if(value_path == "stage3")
    {
        stage3.yfilter = yfilter;
    }
    if(value_path == "stage4")
    {
        stage4.yfilter = yfilter;
    }
    if(value_path == "switchable")
    {
        switchable.yfilter = yfilter;
    }
    if(value_path == "terminable")
    {
        terminable.yfilter = yfilter;
    }
    if(value_path == "tsg1p25")
    {
        tsg1p25.yfilter = yfilter;
    }
    if(value_path == "tsg2p5")
    {
        tsg2p5.yfilter = yfilter;
    }
    if(value_path == "vcat-capable")
    {
        vcat_capable.yfilter = yfilter;
    }
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-info" || name == "lcas-capable" || name == "signal-type" || name == "stage1" || name == "stage2" || name == "stage3" || name == "stage4" || name == "switchable" || name == "terminable" || name == "tsg1p25" || name == "tsg2p5" || name == "vcat-capable")
        return true;
    return false;
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::BandwidthInfo()
    :
    type{YType::enumeration, "type"}
    	,
    fixed(std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed>())
	,flex(std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex>())
{
    fixed->parent = this;

    flex->parent = this;

    yang_name = "bandwidth-info"; yang_parent_name = "odu-capability";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::~BandwidthInfo()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_data() const
{
    return type.is_set
	|| (fixed !=  nullptr && fixed->has_data())
	|| (flex !=  nullptr && flex->has_data());
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (fixed !=  nullptr && fixed->has_operation())
	|| (flex !=  nullptr && flex->has_operation());
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-info";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fixed")
    {
        if(fixed == nullptr)
        {
            fixed = std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed>();
        }
        return fixed;
    }

    if(child_yang_name == "flex")
    {
        if(flex == nullptr)
        {
            flex = std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex>();
        }
        return flex;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fixed != nullptr)
    {
        children["fixed"] = fixed;
    }

    if(flex != nullptr)
    {
        children["flex"] = flex;
    }

    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed" || name == "flex" || name == "type")
        return true;
    return false;
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::Fixed()
    :
    maximum_od_us{YType::uint8, "maximum-od-us"},
    unreserved_od_us{YType::uint8, "unreserved-od-us"}
{
    yang_name = "fixed"; yang_parent_name = "bandwidth-info";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::~Fixed()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_data() const
{
    return maximum_od_us.is_set
	|| unreserved_od_us.is_set;
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_od_us.yfilter)
	|| ydk::is_set(unreserved_od_us.yfilter);
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fixed' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_od_us.is_set || is_set(maximum_od_us.yfilter)) leaf_name_data.push_back(maximum_od_us.get_name_leafdata());
    if (unreserved_od_us.is_set || is_set(unreserved_od_us.yfilter)) leaf_name_data.push_back(unreserved_od_us.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-od-us")
    {
        maximum_od_us = value;
        maximum_od_us.value_namespace = name_space;
        maximum_od_us.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreserved-od-us")
    {
        unreserved_od_us = value;
        unreserved_od_us.value_namespace = name_space;
        unreserved_od_us.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-od-us")
    {
        maximum_od_us.yfilter = yfilter;
    }
    if(value_path == "unreserved-od-us")
    {
        unreserved_od_us.yfilter = yfilter;
    }
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-od-us" || name == "unreserved-od-us")
        return true;
    return false;
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::Flex()
    :
    max_bandwidth{YType::uint32, "max-bandwidth"},
    max_lsp_bandwidth{YType::uint32, "max-lsp-bandwidth"},
    unreserved_bandwidth{YType::uint32, "unreserved-bandwidth"}
{
    yang_name = "flex"; yang_parent_name = "bandwidth-info";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::~Flex()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_data() const
{
    return max_bandwidth.is_set
	|| max_lsp_bandwidth.is_set
	|| unreserved_bandwidth.is_set;
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_lsp_bandwidth.yfilter)
	|| ydk::is_set(unreserved_bandwidth.yfilter);
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flex' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_lsp_bandwidth.is_set || is_set(max_lsp_bandwidth.yfilter)) leaf_name_data.push_back(max_lsp_bandwidth.get_name_leafdata());
    if (unreserved_bandwidth.is_set || is_set(unreserved_bandwidth.yfilter)) leaf_name_data.push_back(unreserved_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsp-bandwidth")
    {
        max_lsp_bandwidth = value;
        max_lsp_bandwidth.value_namespace = name_space;
        max_lsp_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth = value;
        unreserved_bandwidth.value_namespace = name_space;
        unreserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-lsp-bandwidth")
    {
        max_lsp_bandwidth.yfilter = yfilter;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth.yfilter = yfilter;
    }
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-bandwidth" || name == "max-lsp-bandwidth" || name == "unreserved-bandwidth")
        return true;
    return false;
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit::TopologyLinkExtendedAffinityBit()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "topology-link-extended-affinity-bit"; yang_parent_name = "topology-node-link";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit::~TopologyLinkExtendedAffinityBit()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-extended-affinity-bit";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyLinkExtendedAffinityBit' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{
    yang_name = "shared-risk-link-group"; yang_parent_name = "topology-node-link";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SharedRiskLinkGroup' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
        shared_risk_group.value_namespace = name_space;
        shared_risk_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::AdjacencySid()
    :
    adjacency_sid{YType::uint32, "adjacency-sid"},
    flag_b{YType::boolean, "flag-b"},
    flag_f{YType::boolean, "flag-f"},
    flag_l{YType::boolean, "flag-l"},
    flag_s{YType::boolean, "flag-s"},
    flag_v{YType::boolean, "flag-v"},
    link_type{YType::enumeration, "link-type"},
    local_addr{YType::str, "local-addr"},
    nbr_node_igpid{YType::str, "nbr-node-igpid"},
    nbr_node_te_router_id{YType::str, "nbr-node-te-router-id"},
    remote_addr{YType::str, "remote-addr"}
{
    yang_name = "adjacency-sid"; yang_parent_name = "topology-node-link";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::~AdjacencySid()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::has_data() const
{
    return adjacency_sid.is_set
	|| flag_b.is_set
	|| flag_f.is_set
	|| flag_l.is_set
	|| flag_s.is_set
	|| flag_v.is_set
	|| link_type.is_set
	|| local_addr.is_set
	|| nbr_node_igpid.is_set
	|| nbr_node_te_router_id.is_set
	|| remote_addr.is_set;
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_sid.yfilter)
	|| ydk::is_set(flag_b.yfilter)
	|| ydk::is_set(flag_f.yfilter)
	|| ydk::is_set(flag_l.yfilter)
	|| ydk::is_set(flag_s.yfilter)
	|| ydk::is_set(flag_v.yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(local_addr.yfilter)
	|| ydk::is_set(nbr_node_igpid.yfilter)
	|| ydk::is_set(nbr_node_te_router_id.yfilter)
	|| ydk::is_set(remote_addr.yfilter);
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySid' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid.is_set || is_set(adjacency_sid.yfilter)) leaf_name_data.push_back(adjacency_sid.get_name_leafdata());
    if (flag_b.is_set || is_set(flag_b.yfilter)) leaf_name_data.push_back(flag_b.get_name_leafdata());
    if (flag_f.is_set || is_set(flag_f.yfilter)) leaf_name_data.push_back(flag_f.get_name_leafdata());
    if (flag_l.is_set || is_set(flag_l.yfilter)) leaf_name_data.push_back(flag_l.get_name_leafdata());
    if (flag_s.is_set || is_set(flag_s.yfilter)) leaf_name_data.push_back(flag_s.get_name_leafdata());
    if (flag_v.is_set || is_set(flag_v.yfilter)) leaf_name_data.push_back(flag_v.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.yfilter)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (nbr_node_igpid.is_set || is_set(nbr_node_igpid.yfilter)) leaf_name_data.push_back(nbr_node_igpid.get_name_leafdata());
    if (nbr_node_te_router_id.is_set || is_set(nbr_node_te_router_id.yfilter)) leaf_name_data.push_back(nbr_node_te_router_id.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.yfilter)) leaf_name_data.push_back(remote_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-sid")
    {
        adjacency_sid = value;
        adjacency_sid.value_namespace = name_space;
        adjacency_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-b")
    {
        flag_b = value;
        flag_b.value_namespace = name_space;
        flag_b.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-f")
    {
        flag_f = value;
        flag_f.value_namespace = name_space;
        flag_f.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-l")
    {
        flag_l = value;
        flag_l.value_namespace = name_space;
        flag_l.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-s")
    {
        flag_s = value;
        flag_s.value_namespace = name_space;
        flag_s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-v")
    {
        flag_v = value;
        flag_v.value_namespace = name_space;
        flag_v.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
        local_addr.value_namespace = name_space;
        local_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-node-igpid")
    {
        nbr_node_igpid = value;
        nbr_node_igpid.value_namespace = name_space;
        nbr_node_igpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-node-te-router-id")
    {
        nbr_node_te_router_id = value;
        nbr_node_te_router_id.value_namespace = name_space;
        nbr_node_te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
        remote_addr.value_namespace = name_space;
        remote_addr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-sid")
    {
        adjacency_sid.yfilter = yfilter;
    }
    if(value_path == "flag-b")
    {
        flag_b.yfilter = yfilter;
    }
    if(value_path == "flag-f")
    {
        flag_f.yfilter = yfilter;
    }
    if(value_path == "flag-l")
    {
        flag_l.yfilter = yfilter;
    }
    if(value_path == "flag-s")
    {
        flag_s.yfilter = yfilter;
    }
    if(value_path == "flag-v")
    {
        flag_v.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "local-addr")
    {
        local_addr.yfilter = yfilter;
    }
    if(value_path == "nbr-node-igpid")
    {
        nbr_node_igpid.yfilter = yfilter;
    }
    if(value_path == "nbr-node-te-router-id")
    {
        nbr_node_te_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-addr")
    {
        remote_addr.yfilter = yfilter;
    }
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid" || name == "flag-b" || name == "flag-f" || name == "flag-l" || name == "flag-s" || name == "flag-v" || name == "link-type" || name == "local-addr" || name == "nbr-node-igpid" || name == "nbr-node-te-router-id" || name == "remote-addr")
        return true;
    return false;
}

MplsTeStandby::AnnounceTunnelsInfo::AnnounceTunnelsInfo()
    :
    all_autoroute_table(std::make_shared<MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable>())
	,autoroute_announce_table(std::make_shared<MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable>())
{
    all_autoroute_table->parent = this;

    autoroute_announce_table->parent = this;

    yang_name = "announce-tunnels-info"; yang_parent_name = "mpls-te-standby";
}

MplsTeStandby::AnnounceTunnelsInfo::~AnnounceTunnelsInfo()
{
}

bool MplsTeStandby::AnnounceTunnelsInfo::has_data() const
{
    return (all_autoroute_table !=  nullptr && all_autoroute_table->has_data())
	|| (autoroute_announce_table !=  nullptr && autoroute_announce_table->has_data());
}

bool MplsTeStandby::AnnounceTunnelsInfo::has_operation() const
{
    return is_set(yfilter)
	|| (all_autoroute_table !=  nullptr && all_autoroute_table->has_operation())
	|| (autoroute_announce_table !=  nullptr && autoroute_announce_table->has_operation());
}

std::string MplsTeStandby::AnnounceTunnelsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce-tunnels-info";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AnnounceTunnelsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AnnounceTunnelsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-autoroute-table")
    {
        if(all_autoroute_table == nullptr)
        {
            all_autoroute_table = std::make_shared<MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable>();
        }
        return all_autoroute_table;
    }

    if(child_yang_name == "autoroute-announce-table")
    {
        if(autoroute_announce_table == nullptr)
        {
            autoroute_announce_table = std::make_shared<MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable>();
        }
        return autoroute_announce_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AnnounceTunnelsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all_autoroute_table != nullptr)
    {
        children["all-autoroute-table"] = all_autoroute_table;
    }

    if(autoroute_announce_table != nullptr)
    {
        children["autoroute-announce-table"] = autoroute_announce_table;
    }

    return children;
}

void MplsTeStandby::AnnounceTunnelsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AnnounceTunnelsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AnnounceTunnelsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-autoroute-table" || name == "autoroute-announce-table")
        return true;
    return false;
}

MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AutorouteAnnounceTable()
{
    yang_name = "autoroute-announce-table"; yang_parent_name = "announce-tunnels-info";
}

MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::~AutorouteAnnounceTable()
{
}

bool MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::has_data() const
{
    for (std::size_t index=0; index<announce_dest.size(); index++)
    {
        if(announce_dest[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::has_operation() const
{
    for (std::size_t index=0; index<announce_dest.size(); index++)
    {
        if(announce_dest[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute-announce-table";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/announce-tunnels-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "announce-dest")
    {
        for(auto const & c : announce_dest)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest>();
        c->parent = this;
        announce_dest.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : announce_dest)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announce-dest")
        return true;
    return false;
}

MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::AnnounceDest()
    :
    destination_address{YType::str, "destination-address"},
    protocol{YType::enumeration, "protocol"},
    area{YType::int32, "area"},
    igp_id{YType::str, "igp-id"},
    announced_tunnels_count{YType::uint16, "announced-tunnels-count"},
    area_format{YType::enumeration, "area-format"},
    autorouted_tunnels_count{YType::uint16, "autorouted-tunnels-count"},
    destination{YType::str, "destination"},
    forwarding_adjacency_tunnels_count{YType::uint16, "forwarding-adjacency-tunnels-count"},
    igp_area{YType::uint32, "igp-area"},
    igp_instance{YType::str, "igp-instance"},
    igp_type{YType::enumeration, "igp-type"}
{
    yang_name = "announce-dest"; yang_parent_name = "autoroute-announce-table";
}

MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::~AnnounceDest()
{
}

bool MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::has_data() const
{
    for (std::size_t index=0; index<total_tunnel.size(); index++)
    {
        if(total_tunnel[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| protocol.is_set
	|| area.is_set
	|| igp_id.is_set
	|| announced_tunnels_count.is_set
	|| area_format.is_set
	|| autorouted_tunnels_count.is_set
	|| destination.is_set
	|| forwarding_adjacency_tunnels_count.is_set
	|| igp_area.is_set
	|| igp_instance.is_set
	|| igp_type.is_set;
}

bool MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::has_operation() const
{
    for (std::size_t index=0; index<total_tunnel.size(); index++)
    {
        if(total_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| ydk::is_set(announced_tunnels_count.yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(autorouted_tunnels_count.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(forwarding_adjacency_tunnels_count.yfilter)
	|| ydk::is_set(igp_area.yfilter)
	|| ydk::is_set(igp_instance.yfilter)
	|| ydk::is_set(igp_type.yfilter);
}

std::string MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce-dest" <<"[destination-address='" <<destination_address <<"']" <<"[protocol='" <<protocol <<"']" <<"[area='" <<area <<"']" <<"[igp-id='" <<igp_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/announce-tunnels-info/autoroute-announce-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());
    if (announced_tunnels_count.is_set || is_set(announced_tunnels_count.yfilter)) leaf_name_data.push_back(announced_tunnels_count.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (autorouted_tunnels_count.is_set || is_set(autorouted_tunnels_count.yfilter)) leaf_name_data.push_back(autorouted_tunnels_count.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (forwarding_adjacency_tunnels_count.is_set || is_set(forwarding_adjacency_tunnels_count.yfilter)) leaf_name_data.push_back(forwarding_adjacency_tunnels_count.get_name_leafdata());
    if (igp_area.is_set || is_set(igp_area.yfilter)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.yfilter)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "total-tunnel")
    {
        for(auto const & c : total_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel>();
        c->parent = this;
        total_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : total_tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announced-tunnels-count")
    {
        announced_tunnels_count = value;
        announced_tunnels_count.value_namespace = name_space;
        announced_tunnels_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorouted-tunnels-count")
    {
        autorouted_tunnels_count = value;
        autorouted_tunnels_count.value_namespace = name_space;
        autorouted_tunnels_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-adjacency-tunnels-count")
    {
        forwarding_adjacency_tunnels_count = value;
        forwarding_adjacency_tunnels_count.value_namespace = name_space;
        forwarding_adjacency_tunnels_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area")
    {
        igp_area = value;
        igp_area.value_namespace = name_space;
        igp_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
        igp_instance.value_namespace = name_space;
        igp_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
    if(value_path == "announced-tunnels-count")
    {
        announced_tunnels_count.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "autorouted-tunnels-count")
    {
        autorouted_tunnels_count.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "forwarding-adjacency-tunnels-count")
    {
        forwarding_adjacency_tunnels_count.yfilter = yfilter;
    }
    if(value_path == "igp-area")
    {
        igp_area.yfilter = yfilter;
    }
    if(value_path == "igp-instance")
    {
        igp_instance.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-tunnel" || name == "destination-address" || name == "protocol" || name == "area" || name == "igp-id" || name == "announced-tunnels-count" || name == "area-format" || name == "autorouted-tunnels-count" || name == "destination" || name == "forwarding-adjacency-tunnels-count" || name == "igp-area" || name == "igp-instance" || name == "igp-type")
        return true;
    return false;
}

MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::TotalTunnel()
    :
    announce_type{YType::enumeration, "announce-type"},
    area_format{YType::enumeration, "area-format"},
    hold_time{YType::uint32, "hold-time"},
    igp_metric{YType::int32, "igp-metric"},
    is_auto_mesh_aa{YType::boolean, "is-auto-mesh-aa"},
    is_exclude_segment_routing{YType::boolean, "is-exclude-segment-routing"},
    is_sr{YType::boolean, "is-sr"},
    is_sr_strict{YType::boolean, "is-sr-strict"},
    mesh_group_idaa{YType::uint32, "mesh-group-idaa"},
    mode{YType::enumeration, "mode"},
    next_hop_address{YType::str, "next-hop-address"},
    tunnel_loadshare{YType::uint32, "tunnel-loadshare"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_sig_name{YType::str, "tunnel-sig-name"}
{
    yang_name = "total-tunnel"; yang_parent_name = "announce-dest";
}

MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::~TotalTunnel()
{
}

bool MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::has_data() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_data())
            return true;
    }
    return announce_type.is_set
	|| area_format.is_set
	|| hold_time.is_set
	|| igp_metric.is_set
	|| is_auto_mesh_aa.is_set
	|| is_exclude_segment_routing.is_set
	|| is_sr.is_set
	|| is_sr_strict.is_set
	|| mesh_group_idaa.is_set
	|| mode.is_set
	|| next_hop_address.is_set
	|| tunnel_loadshare.is_set
	|| tunnel_name.is_set
	|| tunnel_sig_name.is_set;
}

bool MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::has_operation() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(announce_type.yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(is_auto_mesh_aa.yfilter)
	|| ydk::is_set(is_exclude_segment_routing.yfilter)
	|| ydk::is_set(is_sr.yfilter)
	|| ydk::is_set(is_sr_strict.yfilter)
	|| ydk::is_set(mesh_group_idaa.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(tunnel_loadshare.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_sig_name.yfilter);
}

std::string MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-tunnel";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TotalTunnel' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announce_type.is_set || is_set(announce_type.yfilter)) leaf_name_data.push_back(announce_type.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (is_auto_mesh_aa.is_set || is_set(is_auto_mesh_aa.yfilter)) leaf_name_data.push_back(is_auto_mesh_aa.get_name_leafdata());
    if (is_exclude_segment_routing.is_set || is_set(is_exclude_segment_routing.yfilter)) leaf_name_data.push_back(is_exclude_segment_routing.get_name_leafdata());
    if (is_sr.is_set || is_set(is_sr.yfilter)) leaf_name_data.push_back(is_sr.get_name_leafdata());
    if (is_sr_strict.is_set || is_set(is_sr_strict.yfilter)) leaf_name_data.push_back(is_sr_strict.get_name_leafdata());
    if (mesh_group_idaa.is_set || is_set(mesh_group_idaa.yfilter)) leaf_name_data.push_back(mesh_group_idaa.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (tunnel_loadshare.is_set || is_set(tunnel_loadshare.yfilter)) leaf_name_data.push_back(tunnel_loadshare.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_sig_name.is_set || is_set(tunnel_sig_name.yfilter)) leaf_name_data.push_back(tunnel_sig_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ig-ps")
    {
        for(auto const & c : ig_ps)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs>();
        c->parent = this;
        ig_ps.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ig_ps)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "announce-type")
    {
        announce_type = value;
        announce_type.value_namespace = name_space;
        announce_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-auto-mesh-aa")
    {
        is_auto_mesh_aa = value;
        is_auto_mesh_aa.value_namespace = name_space;
        is_auto_mesh_aa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-exclude-segment-routing")
    {
        is_exclude_segment_routing = value;
        is_exclude_segment_routing.value_namespace = name_space;
        is_exclude_segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr")
    {
        is_sr = value;
        is_sr.value_namespace = name_space;
        is_sr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-strict")
    {
        is_sr_strict = value;
        is_sr_strict.value_namespace = name_space;
        is_sr_strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group-idaa")
    {
        mesh_group_idaa = value;
        mesh_group_idaa.value_namespace = name_space;
        mesh_group_idaa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-loadshare")
    {
        tunnel_loadshare = value;
        tunnel_loadshare.value_namespace = name_space;
        tunnel_loadshare.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name = value;
        tunnel_sig_name.value_namespace = name_space;
        tunnel_sig_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "announce-type")
    {
        announce_type.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "is-auto-mesh-aa")
    {
        is_auto_mesh_aa.yfilter = yfilter;
    }
    if(value_path == "is-exclude-segment-routing")
    {
        is_exclude_segment_routing.yfilter = yfilter;
    }
    if(value_path == "is-sr")
    {
        is_sr.yfilter = yfilter;
    }
    if(value_path == "is-sr-strict")
    {
        is_sr_strict.yfilter = yfilter;
    }
    if(value_path == "mesh-group-idaa")
    {
        mesh_group_idaa.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-loadshare")
    {
        tunnel_loadshare.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name.yfilter = yfilter;
    }
}

bool MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ig-ps" || name == "announce-type" || name == "area-format" || name == "hold-time" || name == "igp-metric" || name == "is-auto-mesh-aa" || name == "is-exclude-segment-routing" || name == "is-sr" || name == "is-sr-strict" || name == "mesh-group-idaa" || name == "mode" || name == "next-hop-address" || name == "tunnel-loadshare" || name == "tunnel-name" || name == "tunnel-sig-name")
        return true;
    return false;
}

MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::IgPs()
    :
    afi{YType::enumeration, "afi"},
    igp_area_id{YType::str, "igp-area-id"}
{
    yang_name = "ig-ps"; yang_parent_name = "total-tunnel";
}

MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::~IgPs()
{
}

bool MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::has_data() const
{
    return afi.is_set
	|| igp_area_id.is_set;
}

bool MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(igp_area_id.yfilter);
}

std::string MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ig-ps";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgPs' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (igp_area_id.is_set || is_set(igp_area_id.yfilter)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
        igp_area_id.value_namespace = name_space;
        igp_area_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "igp-area-id")
    {
        igp_area_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "igp-area-id")
        return true;
    return false;
}

MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AllAutorouteTable()
{
    yang_name = "all-autoroute-table"; yang_parent_name = "announce-tunnels-info";
}

MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::~AllAutorouteTable()
{
}

bool MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::has_data() const
{
    for (std::size_t index=0; index<announce_dest.size(); index++)
    {
        if(announce_dest[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::has_operation() const
{
    for (std::size_t index=0; index<announce_dest.size(); index++)
    {
        if(announce_dest[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-autoroute-table";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/announce-tunnels-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "announce-dest")
    {
        for(auto const & c : announce_dest)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest>();
        c->parent = this;
        announce_dest.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : announce_dest)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announce-dest")
        return true;
    return false;
}

MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::AnnounceDest()
    :
    destination_address{YType::str, "destination-address"},
    protocol{YType::enumeration, "protocol"},
    area{YType::int32, "area"},
    igp_id{YType::str, "igp-id"},
    announced_tunnels_count{YType::uint16, "announced-tunnels-count"},
    area_format{YType::enumeration, "area-format"},
    autorouted_tunnels_count{YType::uint16, "autorouted-tunnels-count"},
    destination{YType::str, "destination"},
    forwarding_adjacency_tunnels_count{YType::uint16, "forwarding-adjacency-tunnels-count"},
    igp_area{YType::uint32, "igp-area"},
    igp_instance{YType::str, "igp-instance"},
    igp_type{YType::enumeration, "igp-type"}
{
    yang_name = "announce-dest"; yang_parent_name = "all-autoroute-table";
}

MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::~AnnounceDest()
{
}

bool MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::has_data() const
{
    for (std::size_t index=0; index<total_tunnel.size(); index++)
    {
        if(total_tunnel[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| protocol.is_set
	|| area.is_set
	|| igp_id.is_set
	|| announced_tunnels_count.is_set
	|| area_format.is_set
	|| autorouted_tunnels_count.is_set
	|| destination.is_set
	|| forwarding_adjacency_tunnels_count.is_set
	|| igp_area.is_set
	|| igp_instance.is_set
	|| igp_type.is_set;
}

bool MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::has_operation() const
{
    for (std::size_t index=0; index<total_tunnel.size(); index++)
    {
        if(total_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| ydk::is_set(announced_tunnels_count.yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(autorouted_tunnels_count.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(forwarding_adjacency_tunnels_count.yfilter)
	|| ydk::is_set(igp_area.yfilter)
	|| ydk::is_set(igp_instance.yfilter)
	|| ydk::is_set(igp_type.yfilter);
}

std::string MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce-dest" <<"[destination-address='" <<destination_address <<"']" <<"[protocol='" <<protocol <<"']" <<"[area='" <<area <<"']" <<"[igp-id='" <<igp_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/announce-tunnels-info/all-autoroute-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());
    if (announced_tunnels_count.is_set || is_set(announced_tunnels_count.yfilter)) leaf_name_data.push_back(announced_tunnels_count.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (autorouted_tunnels_count.is_set || is_set(autorouted_tunnels_count.yfilter)) leaf_name_data.push_back(autorouted_tunnels_count.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (forwarding_adjacency_tunnels_count.is_set || is_set(forwarding_adjacency_tunnels_count.yfilter)) leaf_name_data.push_back(forwarding_adjacency_tunnels_count.get_name_leafdata());
    if (igp_area.is_set || is_set(igp_area.yfilter)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.yfilter)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "total-tunnel")
    {
        for(auto const & c : total_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel>();
        c->parent = this;
        total_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : total_tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announced-tunnels-count")
    {
        announced_tunnels_count = value;
        announced_tunnels_count.value_namespace = name_space;
        announced_tunnels_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorouted-tunnels-count")
    {
        autorouted_tunnels_count = value;
        autorouted_tunnels_count.value_namespace = name_space;
        autorouted_tunnels_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-adjacency-tunnels-count")
    {
        forwarding_adjacency_tunnels_count = value;
        forwarding_adjacency_tunnels_count.value_namespace = name_space;
        forwarding_adjacency_tunnels_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area")
    {
        igp_area = value;
        igp_area.value_namespace = name_space;
        igp_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
        igp_instance.value_namespace = name_space;
        igp_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
    if(value_path == "announced-tunnels-count")
    {
        announced_tunnels_count.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "autorouted-tunnels-count")
    {
        autorouted_tunnels_count.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "forwarding-adjacency-tunnels-count")
    {
        forwarding_adjacency_tunnels_count.yfilter = yfilter;
    }
    if(value_path == "igp-area")
    {
        igp_area.yfilter = yfilter;
    }
    if(value_path == "igp-instance")
    {
        igp_instance.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-tunnel" || name == "destination-address" || name == "protocol" || name == "area" || name == "igp-id" || name == "announced-tunnels-count" || name == "area-format" || name == "autorouted-tunnels-count" || name == "destination" || name == "forwarding-adjacency-tunnels-count" || name == "igp-area" || name == "igp-instance" || name == "igp-type")
        return true;
    return false;
}

MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::TotalTunnel()
    :
    announce_type{YType::enumeration, "announce-type"},
    area_format{YType::enumeration, "area-format"},
    hold_time{YType::uint32, "hold-time"},
    igp_metric{YType::int32, "igp-metric"},
    is_auto_mesh_aa{YType::boolean, "is-auto-mesh-aa"},
    is_exclude_segment_routing{YType::boolean, "is-exclude-segment-routing"},
    is_sr{YType::boolean, "is-sr"},
    is_sr_strict{YType::boolean, "is-sr-strict"},
    mesh_group_idaa{YType::uint32, "mesh-group-idaa"},
    mode{YType::enumeration, "mode"},
    next_hop_address{YType::str, "next-hop-address"},
    tunnel_loadshare{YType::uint32, "tunnel-loadshare"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_sig_name{YType::str, "tunnel-sig-name"}
{
    yang_name = "total-tunnel"; yang_parent_name = "announce-dest";
}

MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::~TotalTunnel()
{
}

bool MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::has_data() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_data())
            return true;
    }
    return announce_type.is_set
	|| area_format.is_set
	|| hold_time.is_set
	|| igp_metric.is_set
	|| is_auto_mesh_aa.is_set
	|| is_exclude_segment_routing.is_set
	|| is_sr.is_set
	|| is_sr_strict.is_set
	|| mesh_group_idaa.is_set
	|| mode.is_set
	|| next_hop_address.is_set
	|| tunnel_loadshare.is_set
	|| tunnel_name.is_set
	|| tunnel_sig_name.is_set;
}

bool MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::has_operation() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(announce_type.yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(is_auto_mesh_aa.yfilter)
	|| ydk::is_set(is_exclude_segment_routing.yfilter)
	|| ydk::is_set(is_sr.yfilter)
	|| ydk::is_set(is_sr_strict.yfilter)
	|| ydk::is_set(mesh_group_idaa.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(tunnel_loadshare.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_sig_name.yfilter);
}

std::string MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-tunnel";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TotalTunnel' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announce_type.is_set || is_set(announce_type.yfilter)) leaf_name_data.push_back(announce_type.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (is_auto_mesh_aa.is_set || is_set(is_auto_mesh_aa.yfilter)) leaf_name_data.push_back(is_auto_mesh_aa.get_name_leafdata());
    if (is_exclude_segment_routing.is_set || is_set(is_exclude_segment_routing.yfilter)) leaf_name_data.push_back(is_exclude_segment_routing.get_name_leafdata());
    if (is_sr.is_set || is_set(is_sr.yfilter)) leaf_name_data.push_back(is_sr.get_name_leafdata());
    if (is_sr_strict.is_set || is_set(is_sr_strict.yfilter)) leaf_name_data.push_back(is_sr_strict.get_name_leafdata());
    if (mesh_group_idaa.is_set || is_set(mesh_group_idaa.yfilter)) leaf_name_data.push_back(mesh_group_idaa.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (tunnel_loadshare.is_set || is_set(tunnel_loadshare.yfilter)) leaf_name_data.push_back(tunnel_loadshare.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_sig_name.is_set || is_set(tunnel_sig_name.yfilter)) leaf_name_data.push_back(tunnel_sig_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ig-ps")
    {
        for(auto const & c : ig_ps)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs>();
        c->parent = this;
        ig_ps.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ig_ps)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "announce-type")
    {
        announce_type = value;
        announce_type.value_namespace = name_space;
        announce_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-auto-mesh-aa")
    {
        is_auto_mesh_aa = value;
        is_auto_mesh_aa.value_namespace = name_space;
        is_auto_mesh_aa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-exclude-segment-routing")
    {
        is_exclude_segment_routing = value;
        is_exclude_segment_routing.value_namespace = name_space;
        is_exclude_segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr")
    {
        is_sr = value;
        is_sr.value_namespace = name_space;
        is_sr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-strict")
    {
        is_sr_strict = value;
        is_sr_strict.value_namespace = name_space;
        is_sr_strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group-idaa")
    {
        mesh_group_idaa = value;
        mesh_group_idaa.value_namespace = name_space;
        mesh_group_idaa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-loadshare")
    {
        tunnel_loadshare = value;
        tunnel_loadshare.value_namespace = name_space;
        tunnel_loadshare.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name = value;
        tunnel_sig_name.value_namespace = name_space;
        tunnel_sig_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "announce-type")
    {
        announce_type.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "is-auto-mesh-aa")
    {
        is_auto_mesh_aa.yfilter = yfilter;
    }
    if(value_path == "is-exclude-segment-routing")
    {
        is_exclude_segment_routing.yfilter = yfilter;
    }
    if(value_path == "is-sr")
    {
        is_sr.yfilter = yfilter;
    }
    if(value_path == "is-sr-strict")
    {
        is_sr_strict.yfilter = yfilter;
    }
    if(value_path == "mesh-group-idaa")
    {
        mesh_group_idaa.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-loadshare")
    {
        tunnel_loadshare.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name.yfilter = yfilter;
    }
}

bool MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ig-ps" || name == "announce-type" || name == "area-format" || name == "hold-time" || name == "igp-metric" || name == "is-auto-mesh-aa" || name == "is-exclude-segment-routing" || name == "is-sr" || name == "is-sr-strict" || name == "mesh-group-idaa" || name == "mode" || name == "next-hop-address" || name == "tunnel-loadshare" || name == "tunnel-name" || name == "tunnel-sig-name")
        return true;
    return false;
}

MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::IgPs()
    :
    afi{YType::enumeration, "afi"},
    igp_area_id{YType::str, "igp-area-id"}
{
    yang_name = "ig-ps"; yang_parent_name = "total-tunnel";
}

MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::~IgPs()
{
}

bool MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::has_data() const
{
    return afi.is_set
	|| igp_area_id.is_set;
}

bool MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(igp_area_id.yfilter);
}

std::string MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ig-ps";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgPs' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (igp_area_id.is_set || is_set(igp_area_id.yfilter)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
        igp_area_id.value_namespace = name_space;
        igp_area_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "igp-area-id")
    {
        igp_area_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "igp-area-id")
        return true;
    return false;
}

MplsTeStandby::CollaboratorTimers::CollaboratorTimers()
{
    yang_name = "collaborator-timers"; yang_parent_name = "mpls-te-standby";
}

MplsTeStandby::CollaboratorTimers::~CollaboratorTimers()
{
}

bool MplsTeStandby::CollaboratorTimers::has_data() const
{
    for (std::size_t index=0; index<p2mp_timer.size(); index++)
    {
        if(p2mp_timer[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::CollaboratorTimers::has_operation() const
{
    for (std::size_t index=0; index<p2mp_timer.size(); index++)
    {
        if(p2mp_timer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::CollaboratorTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collaborator-timers";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::CollaboratorTimers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::CollaboratorTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2mp-timer")
    {
        for(auto const & c : p2mp_timer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::CollaboratorTimers::P2MpTimer>();
        c->parent = this;
        p2mp_timer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::CollaboratorTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : p2mp_timer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::CollaboratorTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::CollaboratorTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::CollaboratorTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-timer")
        return true;
    return false;
}

MplsTeStandby::CollaboratorTimers::P2MpTimer::P2MpTimer()
    :
    duration{YType::uint32, "duration"},
    expiry_time{YType::uint32, "expiry-time"},
    is_running{YType::boolean, "is-running"},
    start_time{YType::uint32, "start-time"},
    stop_time{YType::uint32, "stop-time"},
    timer_name{YType::str, "timer-name"},
    timer_type{YType::enumeration, "timer-type"}
{
    yang_name = "p2mp-timer"; yang_parent_name = "collaborator-timers";
}

MplsTeStandby::CollaboratorTimers::P2MpTimer::~P2MpTimer()
{
}

bool MplsTeStandby::CollaboratorTimers::P2MpTimer::has_data() const
{
    return duration.is_set
	|| expiry_time.is_set
	|| is_running.is_set
	|| start_time.is_set
	|| stop_time.is_set
	|| timer_name.is_set
	|| timer_type.is_set;
}

bool MplsTeStandby::CollaboratorTimers::P2MpTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(expiry_time.yfilter)
	|| ydk::is_set(is_running.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(stop_time.yfilter)
	|| ydk::is_set(timer_name.yfilter)
	|| ydk::is_set(timer_type.yfilter);
}

std::string MplsTeStandby::CollaboratorTimers::P2MpTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-timer";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::CollaboratorTimers::P2MpTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/collaborator-timers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (expiry_time.is_set || is_set(expiry_time.yfilter)) leaf_name_data.push_back(expiry_time.get_name_leafdata());
    if (is_running.is_set || is_set(is_running.yfilter)) leaf_name_data.push_back(is_running.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (stop_time.is_set || is_set(stop_time.yfilter)) leaf_name_data.push_back(stop_time.get_name_leafdata());
    if (timer_name.is_set || is_set(timer_name.yfilter)) leaf_name_data.push_back(timer_name.get_name_leafdata());
    if (timer_type.is_set || is_set(timer_type.yfilter)) leaf_name_data.push_back(timer_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::CollaboratorTimers::P2MpTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::CollaboratorTimers::P2MpTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::CollaboratorTimers::P2MpTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-time")
    {
        expiry_time = value;
        expiry_time.value_namespace = name_space;
        expiry_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-running")
    {
        is_running = value;
        is_running.value_namespace = name_space;
        is_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-time")
    {
        stop_time = value;
        stop_time.value_namespace = name_space;
        stop_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-name")
    {
        timer_name = value;
        timer_name.value_namespace = name_space;
        timer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-type")
    {
        timer_type = value;
        timer_type.value_namespace = name_space;
        timer_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::CollaboratorTimers::P2MpTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "expiry-time")
    {
        expiry_time.yfilter = yfilter;
    }
    if(value_path == "is-running")
    {
        is_running.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "stop-time")
    {
        stop_time.yfilter = yfilter;
    }
    if(value_path == "timer-name")
    {
        timer_name.yfilter = yfilter;
    }
    if(value_path == "timer-type")
    {
        timer_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::CollaboratorTimers::P2MpTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "expiry-time" || name == "is-running" || name == "start-time" || name == "stop-time" || name == "timer-name" || name == "timer-type")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::AutoTunnel()
    :
    backup(std::make_shared<MplsTeStandby::AutoTunnel::Backup>())
	,mesh(std::make_shared<MplsTeStandby::AutoTunnel::Mesh>())
	,pcc(std::make_shared<MplsTeStandby::AutoTunnel::Pcc>())
{
    backup->parent = this;

    mesh->parent = this;

    pcc->parent = this;

    yang_name = "auto-tunnel"; yang_parent_name = "mpls-te-standby";
}

MplsTeStandby::AutoTunnel::~AutoTunnel()
{
}

bool MplsTeStandby::AutoTunnel::has_data() const
{
    return (backup !=  nullptr && backup->has_data())
	|| (mesh !=  nullptr && mesh->has_data())
	|| (pcc !=  nullptr && pcc->has_data());
}

bool MplsTeStandby::AutoTunnel::has_operation() const
{
    return is_set(yfilter)
	|| (backup !=  nullptr && backup->has_operation())
	|| (mesh !=  nullptr && mesh->has_operation())
	|| (pcc !=  nullptr && pcc->has_operation());
}

std::string MplsTeStandby::AutoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-tunnel";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<MplsTeStandby::AutoTunnel::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "mesh")
    {
        if(mesh == nullptr)
        {
            mesh = std::make_shared<MplsTeStandby::AutoTunnel::Mesh>();
        }
        return mesh;
    }

    if(child_yang_name == "pcc")
    {
        if(pcc == nullptr)
        {
            pcc = std::make_shared<MplsTeStandby::AutoTunnel::Pcc>();
        }
        return pcc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    if(mesh != nullptr)
    {
        children["mesh"] = mesh;
    }

    if(pcc != nullptr)
    {
        children["pcc"] = pcc;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AutoTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AutoTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "mesh" || name == "pcc")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Pcc::Pcc()
    :
    summary(std::make_shared<MplsTeStandby::AutoTunnel::Pcc::Summary>())
{
    summary->parent = this;

    yang_name = "pcc"; yang_parent_name = "auto-tunnel";
}

MplsTeStandby::AutoTunnel::Pcc::~Pcc()
{
}

bool MplsTeStandby::AutoTunnel::Pcc::has_data() const
{
    return (summary !=  nullptr && summary->has_data());
}

bool MplsTeStandby::AutoTunnel::Pcc::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsTeStandby::AutoTunnel::Pcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcc";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Pcc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Pcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTeStandby::AutoTunnel::Pcc::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Pcc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Pcc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AutoTunnel::Pcc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AutoTunnel::Pcc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Pcc::Summary::Summary()
    :
    down_pcc_auto_tunnels{YType::uint32, "down-pcc-auto-tunnels"},
    pcc_auto_tunnel{YType::uint32, "pcc-auto-tunnel"},
    up_pcc_auto_tunnels{YType::uint32, "up-pcc-auto-tunnels"}
{
    yang_name = "summary"; yang_parent_name = "pcc";
}

MplsTeStandby::AutoTunnel::Pcc::Summary::~Summary()
{
}

bool MplsTeStandby::AutoTunnel::Pcc::Summary::has_data() const
{
    return down_pcc_auto_tunnels.is_set
	|| pcc_auto_tunnel.is_set
	|| up_pcc_auto_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Pcc::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down_pcc_auto_tunnels.yfilter)
	|| ydk::is_set(pcc_auto_tunnel.yfilter)
	|| ydk::is_set(up_pcc_auto_tunnels.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Pcc::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Pcc::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/pcc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_pcc_auto_tunnels.is_set || is_set(down_pcc_auto_tunnels.yfilter)) leaf_name_data.push_back(down_pcc_auto_tunnels.get_name_leafdata());
    if (pcc_auto_tunnel.is_set || is_set(pcc_auto_tunnel.yfilter)) leaf_name_data.push_back(pcc_auto_tunnel.get_name_leafdata());
    if (up_pcc_auto_tunnels.is_set || is_set(up_pcc_auto_tunnels.yfilter)) leaf_name_data.push_back(up_pcc_auto_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Pcc::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Pcc::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Pcc::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down-pcc-auto-tunnels")
    {
        down_pcc_auto_tunnels = value;
        down_pcc_auto_tunnels.value_namespace = name_space;
        down_pcc_auto_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcc-auto-tunnel")
    {
        pcc_auto_tunnel = value;
        pcc_auto_tunnel.value_namespace = name_space;
        pcc_auto_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-pcc-auto-tunnels")
    {
        up_pcc_auto_tunnels = value;
        up_pcc_auto_tunnels.value_namespace = name_space;
        up_pcc_auto_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Pcc::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down-pcc-auto-tunnels")
    {
        down_pcc_auto_tunnels.yfilter = yfilter;
    }
    if(value_path == "pcc-auto-tunnel")
    {
        pcc_auto_tunnel.yfilter = yfilter;
    }
    if(value_path == "up-pcc-auto-tunnels")
    {
        up_pcc_auto_tunnels.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Pcc::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down-pcc-auto-tunnels" || name == "pcc-auto-tunnel" || name == "up-pcc-auto-tunnels")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::Mesh()
    :
    config(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::Config>())
	,mesh_groups(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::MeshGroups>())
	,one_hop(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop>())
	,statistics(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::Statistics>())
	,summary(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::Summary>())
{
    config->parent = this;

    mesh_groups->parent = this;

    one_hop->parent = this;

    statistics->parent = this;

    summary->parent = this;

    yang_name = "mesh"; yang_parent_name = "auto-tunnel";
}

MplsTeStandby::AutoTunnel::Mesh::~Mesh()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (mesh_groups !=  nullptr && mesh_groups->has_data())
	|| (one_hop !=  nullptr && one_hop->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool MplsTeStandby::AutoTunnel::Mesh::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (mesh_groups !=  nullptr && mesh_groups->has_operation())
	|| (one_hop !=  nullptr && one_hop->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsTeStandby::AutoTunnel::Mesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::Config>();
        }
        return config;
    }

    if(child_yang_name == "mesh-groups")
    {
        if(mesh_groups == nullptr)
        {
            mesh_groups = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::MeshGroups>();
        }
        return mesh_groups;
    }

    if(child_yang_name == "one-hop")
    {
        if(one_hop == nullptr)
        {
            one_hop = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop>();
        }
        return one_hop;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(mesh_groups != nullptr)
    {
        children["mesh-groups"] = mesh_groups;
    }

    if(one_hop != nullptr)
    {
        children["one-hop"] = one_hop;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AutoTunnel::Mesh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AutoTunnel::Mesh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "mesh-groups" || name == "one-hop" || name == "statistics" || name == "summary")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroups()
{
    yang_name = "mesh-groups"; yang_parent_name = "mesh";
}

MplsTeStandby::AutoTunnel::Mesh::MeshGroups::~MeshGroups()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::MeshGroups::has_data() const
{
    for (std::size_t index=0; index<mesh_group.size(); index++)
    {
        if(mesh_group[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::AutoTunnel::Mesh::MeshGroups::has_operation() const
{
    for (std::size_t index=0; index<mesh_group.size(); index++)
    {
        if(mesh_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::MeshGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-groups";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::MeshGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::MeshGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mesh-group")
    {
        for(auto const & c : mesh_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup>();
        c->parent = this;
        mesh_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::MeshGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mesh_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::MeshGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AutoTunnel::Mesh::MeshGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AutoTunnel::Mesh::MeshGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mesh-group")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::MeshGroup()
    :
    mesh_group_id{YType::uint32, "mesh-group-id"},
    attribute_set_name{YType::str, "attribute-set-name"},
    auto_mesh_group_type{YType::enumeration, "auto-mesh-group-type"},
    auto_mesh_total_destinations{YType::uint32, "auto-mesh-total-destinations"},
    auto_mesh_tunnels{YType::uint32, "auto-mesh-tunnels"},
    destination_list_name{YType::str, "destination-list-name"},
    destination_list_type{YType::enumeration, "destination-list-type"},
    down_auto_mesh_tunnels{YType::uint32, "down-auto-mesh-tunnels"},
    frr_auto_mesh_tunnels{YType::uint32, "frr-auto-mesh-tunnels"},
    is_attribute_set_configured{YType::boolean, "is-attribute-set-configured"},
    is_attribute_set_in_db{YType::boolean, "is-attribute-set-in-db"},
    is_destination_list_configured{YType::boolean, "is-destination-list-configured"},
    is_meshgroup_disabled{YType::boolean, "is-meshgroup-disabled"},
    mesh_group_id_xr{YType::uint32, "mesh-group-id-xr"},
    remaining_time{YType::uint32, "remaining-time"},
    up_auto_mesh_tunnels{YType::uint32, "up-auto-mesh-tunnels"}
{
    yang_name = "mesh-group"; yang_parent_name = "mesh-groups";
}

MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::~MeshGroup()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::has_data() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return mesh_group_id.is_set
	|| attribute_set_name.is_set
	|| auto_mesh_group_type.is_set
	|| auto_mesh_total_destinations.is_set
	|| auto_mesh_tunnels.is_set
	|| destination_list_name.is_set
	|| destination_list_type.is_set
	|| down_auto_mesh_tunnels.is_set
	|| frr_auto_mesh_tunnels.is_set
	|| is_attribute_set_configured.is_set
	|| is_attribute_set_in_db.is_set
	|| is_destination_list_configured.is_set
	|| is_meshgroup_disabled.is_set
	|| mesh_group_id_xr.is_set
	|| remaining_time.is_set
	|| up_auto_mesh_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::has_operation() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mesh_group_id.yfilter)
	|| ydk::is_set(attribute_set_name.yfilter)
	|| ydk::is_set(auto_mesh_group_type.yfilter)
	|| ydk::is_set(auto_mesh_total_destinations.yfilter)
	|| ydk::is_set(auto_mesh_tunnels.yfilter)
	|| ydk::is_set(destination_list_name.yfilter)
	|| ydk::is_set(destination_list_type.yfilter)
	|| ydk::is_set(down_auto_mesh_tunnels.yfilter)
	|| ydk::is_set(frr_auto_mesh_tunnels.yfilter)
	|| ydk::is_set(is_attribute_set_configured.yfilter)
	|| ydk::is_set(is_attribute_set_in_db.yfilter)
	|| ydk::is_set(is_destination_list_configured.yfilter)
	|| ydk::is_set(is_meshgroup_disabled.yfilter)
	|| ydk::is_set(mesh_group_id_xr.yfilter)
	|| ydk::is_set(remaining_time.yfilter)
	|| ydk::is_set(up_auto_mesh_tunnels.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group" <<"[mesh-group-id='" <<mesh_group_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/mesh-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mesh_group_id.is_set || is_set(mesh_group_id.yfilter)) leaf_name_data.push_back(mesh_group_id.get_name_leafdata());
    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (auto_mesh_group_type.is_set || is_set(auto_mesh_group_type.yfilter)) leaf_name_data.push_back(auto_mesh_group_type.get_name_leafdata());
    if (auto_mesh_total_destinations.is_set || is_set(auto_mesh_total_destinations.yfilter)) leaf_name_data.push_back(auto_mesh_total_destinations.get_name_leafdata());
    if (auto_mesh_tunnels.is_set || is_set(auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(auto_mesh_tunnels.get_name_leafdata());
    if (destination_list_name.is_set || is_set(destination_list_name.yfilter)) leaf_name_data.push_back(destination_list_name.get_name_leafdata());
    if (destination_list_type.is_set || is_set(destination_list_type.yfilter)) leaf_name_data.push_back(destination_list_type.get_name_leafdata());
    if (down_auto_mesh_tunnels.is_set || is_set(down_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(down_auto_mesh_tunnels.get_name_leafdata());
    if (frr_auto_mesh_tunnels.is_set || is_set(frr_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(frr_auto_mesh_tunnels.get_name_leafdata());
    if (is_attribute_set_configured.is_set || is_set(is_attribute_set_configured.yfilter)) leaf_name_data.push_back(is_attribute_set_configured.get_name_leafdata());
    if (is_attribute_set_in_db.is_set || is_set(is_attribute_set_in_db.yfilter)) leaf_name_data.push_back(is_attribute_set_in_db.get_name_leafdata());
    if (is_destination_list_configured.is_set || is_set(is_destination_list_configured.yfilter)) leaf_name_data.push_back(is_destination_list_configured.get_name_leafdata());
    if (is_meshgroup_disabled.is_set || is_set(is_meshgroup_disabled.yfilter)) leaf_name_data.push_back(is_meshgroup_disabled.get_name_leafdata());
    if (mesh_group_id_xr.is_set || is_set(mesh_group_id_xr.yfilter)) leaf_name_data.push_back(mesh_group_id_xr.get_name_leafdata());
    if (remaining_time.is_set || is_set(remaining_time.yfilter)) leaf_name_data.push_back(remaining_time.get_name_leafdata());
    if (up_auto_mesh_tunnels.is_set || is_set(up_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(up_auto_mesh_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        for(auto const & c : destination)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination>();
        c->parent = this;
        destination.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : destination)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mesh-group-id")
    {
        mesh_group_id = value;
        mesh_group_id.value_namespace = name_space;
        mesh_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-group-type")
    {
        auto_mesh_group_type = value;
        auto_mesh_group_type.value_namespace = name_space;
        auto_mesh_group_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-total-destinations")
    {
        auto_mesh_total_destinations = value;
        auto_mesh_total_destinations.value_namespace = name_space;
        auto_mesh_total_destinations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-tunnels")
    {
        auto_mesh_tunnels = value;
        auto_mesh_tunnels.value_namespace = name_space;
        auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-list-name")
    {
        destination_list_name = value;
        destination_list_name.value_namespace = name_space;
        destination_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-list-type")
    {
        destination_list_type = value;
        destination_list_type.value_namespace = name_space;
        destination_list_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-auto-mesh-tunnels")
    {
        down_auto_mesh_tunnels = value;
        down_auto_mesh_tunnels.value_namespace = name_space;
        down_auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels = value;
        frr_auto_mesh_tunnels.value_namespace = name_space;
        frr_auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attribute-set-configured")
    {
        is_attribute_set_configured = value;
        is_attribute_set_configured.value_namespace = name_space;
        is_attribute_set_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attribute-set-in-db")
    {
        is_attribute_set_in_db = value;
        is_attribute_set_in_db.value_namespace = name_space;
        is_attribute_set_in_db.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-destination-list-configured")
    {
        is_destination_list_configured = value;
        is_destination_list_configured.value_namespace = name_space;
        is_destination_list_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-meshgroup-disabled")
    {
        is_meshgroup_disabled = value;
        is_meshgroup_disabled.value_namespace = name_space;
        is_meshgroup_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group-id-xr")
    {
        mesh_group_id_xr = value;
        mesh_group_id_xr.value_namespace = name_space;
        mesh_group_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-time")
    {
        remaining_time = value;
        remaining_time.value_namespace = name_space;
        remaining_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-auto-mesh-tunnels")
    {
        up_auto_mesh_tunnels = value;
        up_auto_mesh_tunnels.value_namespace = name_space;
        up_auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mesh-group-id")
    {
        mesh_group_id.yfilter = yfilter;
    }
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-group-type")
    {
        auto_mesh_group_type.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-total-destinations")
    {
        auto_mesh_total_destinations.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-tunnels")
    {
        auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "destination-list-name")
    {
        destination_list_name.yfilter = yfilter;
    }
    if(value_path == "destination-list-type")
    {
        destination_list_type.yfilter = yfilter;
    }
    if(value_path == "down-auto-mesh-tunnels")
    {
        down_auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "is-attribute-set-configured")
    {
        is_attribute_set_configured.yfilter = yfilter;
    }
    if(value_path == "is-attribute-set-in-db")
    {
        is_attribute_set_in_db.yfilter = yfilter;
    }
    if(value_path == "is-destination-list-configured")
    {
        is_destination_list_configured.yfilter = yfilter;
    }
    if(value_path == "is-meshgroup-disabled")
    {
        is_meshgroup_disabled.yfilter = yfilter;
    }
    if(value_path == "mesh-group-id-xr")
    {
        mesh_group_id_xr.yfilter = yfilter;
    }
    if(value_path == "remaining-time")
    {
        remaining_time.yfilter = yfilter;
    }
    if(value_path == "up-auto-mesh-tunnels")
    {
        up_auto_mesh_tunnels.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "mesh-group-id" || name == "attribute-set-name" || name == "auto-mesh-group-type" || name == "auto-mesh-total-destinations" || name == "auto-mesh-tunnels" || name == "destination-list-name" || name == "destination-list-type" || name == "down-auto-mesh-tunnels" || name == "frr-auto-mesh-tunnels" || name == "is-attribute-set-configured" || name == "is-attribute-set-in-db" || name == "is-destination-list-configured" || name == "is-meshgroup-disabled" || name == "mesh-group-id-xr" || name == "remaining-time" || name == "up-auto-mesh-tunnels")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::Destination()
    :
    destination_address{YType::str, "destination-address"},
    operational_status{YType::enumeration, "operational-status"},
    remaining_time{YType::uint32, "remaining-time"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "destination"; yang_parent_name = "mesh-group";
}

MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::~Destination()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::has_data() const
{
    return destination_address.is_set
	|| operational_status.is_set
	|| remaining_time.is_set
	|| tunnel_id.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(operational_status.yfilter)
	|| ydk::is_set(remaining_time.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Destination' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (operational_status.is_set || is_set(operational_status.yfilter)) leaf_name_data.push_back(operational_status.get_name_leafdata());
    if (remaining_time.is_set || is_set(remaining_time.yfilter)) leaf_name_data.push_back(remaining_time.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-status")
    {
        operational_status = value;
        operational_status.value_namespace = name_space;
        operational_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-time")
    {
        remaining_time = value;
        remaining_time.value_namespace = name_space;
        remaining_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "operational-status")
    {
        operational_status.yfilter = yfilter;
    }
    if(value_path == "remaining-time")
    {
        remaining_time.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "operational-status" || name == "remaining-time" || name == "tunnel-id")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::Statistics::Statistics()
    :
    connected{YType::uint32, "connected"},
    created{YType::uint32, "created"},
    last_cleared_time{YType::uint32, "last-cleared-time"},
    removed_in_use{YType::uint32, "removed-in-use"},
    removed_range_exceeded{YType::uint32, "removed-range-exceeded"},
    removed_unused{YType::uint32, "removed-unused"}
{
    yang_name = "statistics"; yang_parent_name = "mesh";
}

MplsTeStandby::AutoTunnel::Mesh::Statistics::~Statistics()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::Statistics::has_data() const
{
    return connected.is_set
	|| created.is_set
	|| last_cleared_time.is_set
	|| removed_in_use.is_set
	|| removed_range_exceeded.is_set
	|| removed_unused.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connected.yfilter)
	|| ydk::is_set(created.yfilter)
	|| ydk::is_set(last_cleared_time.yfilter)
	|| ydk::is_set(removed_in_use.yfilter)
	|| ydk::is_set(removed_range_exceeded.yfilter)
	|| ydk::is_set(removed_unused.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connected.is_set || is_set(connected.yfilter)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (created.is_set || is_set(created.yfilter)) leaf_name_data.push_back(created.get_name_leafdata());
    if (last_cleared_time.is_set || is_set(last_cleared_time.yfilter)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());
    if (removed_in_use.is_set || is_set(removed_in_use.yfilter)) leaf_name_data.push_back(removed_in_use.get_name_leafdata());
    if (removed_range_exceeded.is_set || is_set(removed_range_exceeded.yfilter)) leaf_name_data.push_back(removed_range_exceeded.get_name_leafdata());
    if (removed_unused.is_set || is_set(removed_unused.yfilter)) leaf_name_data.push_back(removed_unused.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connected")
    {
        connected = value;
        connected.value_namespace = name_space;
        connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "created")
    {
        created = value;
        created.value_namespace = name_space;
        created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
        last_cleared_time.value_namespace = name_space;
        last_cleared_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "removed-in-use")
    {
        removed_in_use = value;
        removed_in_use.value_namespace = name_space;
        removed_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "removed-range-exceeded")
    {
        removed_range_exceeded = value;
        removed_range_exceeded.value_namespace = name_space;
        removed_range_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "removed-unused")
    {
        removed_unused = value;
        removed_unused.value_namespace = name_space;
        removed_unused.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Mesh::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connected")
    {
        connected.yfilter = yfilter;
    }
    if(value_path == "created")
    {
        created.yfilter = yfilter;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time.yfilter = yfilter;
    }
    if(value_path == "removed-in-use")
    {
        removed_in_use.yfilter = yfilter;
    }
    if(value_path == "removed-range-exceeded")
    {
        removed_range_exceeded.yfilter = yfilter;
    }
    if(value_path == "removed-unused")
    {
        removed_unused.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Mesh::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected" || name == "created" || name == "last-cleared-time" || name == "removed-in-use" || name == "removed-range-exceeded" || name == "removed-unused")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::Summary::Summary()
    :
    auto_mesh_destinations{YType::uint32, "auto-mesh-destinations"},
    auto_mesh_groups{YType::uint32, "auto-mesh-groups"},
    auto_mesh_tunnels{YType::uint32, "auto-mesh-tunnels"},
    down_auto_mesh_tunnels{YType::uint32, "down-auto-mesh-tunnels"},
    frr_auto_mesh_tunnels{YType::uint32, "frr-auto-mesh-tunnels"},
    up_auto_mesh_tunnels{YType::uint32, "up-auto-mesh-tunnels"}
{
    yang_name = "summary"; yang_parent_name = "mesh";
}

MplsTeStandby::AutoTunnel::Mesh::Summary::~Summary()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::Summary::has_data() const
{
    return auto_mesh_destinations.is_set
	|| auto_mesh_groups.is_set
	|| auto_mesh_tunnels.is_set
	|| down_auto_mesh_tunnels.is_set
	|| frr_auto_mesh_tunnels.is_set
	|| up_auto_mesh_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_mesh_destinations.yfilter)
	|| ydk::is_set(auto_mesh_groups.yfilter)
	|| ydk::is_set(auto_mesh_tunnels.yfilter)
	|| ydk::is_set(down_auto_mesh_tunnels.yfilter)
	|| ydk::is_set(frr_auto_mesh_tunnels.yfilter)
	|| ydk::is_set(up_auto_mesh_tunnels.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_mesh_destinations.is_set || is_set(auto_mesh_destinations.yfilter)) leaf_name_data.push_back(auto_mesh_destinations.get_name_leafdata());
    if (auto_mesh_groups.is_set || is_set(auto_mesh_groups.yfilter)) leaf_name_data.push_back(auto_mesh_groups.get_name_leafdata());
    if (auto_mesh_tunnels.is_set || is_set(auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(auto_mesh_tunnels.get_name_leafdata());
    if (down_auto_mesh_tunnels.is_set || is_set(down_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(down_auto_mesh_tunnels.get_name_leafdata());
    if (frr_auto_mesh_tunnels.is_set || is_set(frr_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(frr_auto_mesh_tunnels.get_name_leafdata());
    if (up_auto_mesh_tunnels.is_set || is_set(up_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(up_auto_mesh_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-mesh-destinations")
    {
        auto_mesh_destinations = value;
        auto_mesh_destinations.value_namespace = name_space;
        auto_mesh_destinations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-groups")
    {
        auto_mesh_groups = value;
        auto_mesh_groups.value_namespace = name_space;
        auto_mesh_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-tunnels")
    {
        auto_mesh_tunnels = value;
        auto_mesh_tunnels.value_namespace = name_space;
        auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-auto-mesh-tunnels")
    {
        down_auto_mesh_tunnels = value;
        down_auto_mesh_tunnels.value_namespace = name_space;
        down_auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels = value;
        frr_auto_mesh_tunnels.value_namespace = name_space;
        frr_auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-auto-mesh-tunnels")
    {
        up_auto_mesh_tunnels = value;
        up_auto_mesh_tunnels.value_namespace = name_space;
        up_auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Mesh::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-mesh-destinations")
    {
        auto_mesh_destinations.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-groups")
    {
        auto_mesh_groups.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-tunnels")
    {
        auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "down-auto-mesh-tunnels")
    {
        down_auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "up-auto-mesh-tunnels")
    {
        up_auto_mesh_tunnels.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Mesh::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-mesh-destinations" || name == "auto-mesh-groups" || name == "auto-mesh-tunnels" || name == "down-auto-mesh-tunnels" || name == "frr-auto-mesh-tunnels" || name == "up-auto-mesh-tunnels")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::Config::Config()
    :
    is_configured{YType::boolean, "is-configured"},
    max_tunnel_id{YType::uint16, "max-tunnel-id"},
    min_tunnel_id{YType::uint16, "min-tunnel-id"},
    unused_removal_timeout_configured{YType::uint32, "unused-removal-timeout-configured"}
{
    yang_name = "config"; yang_parent_name = "mesh";
}

MplsTeStandby::AutoTunnel::Mesh::Config::~Config()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::Config::has_data() const
{
    return is_configured.is_set
	|| max_tunnel_id.is_set
	|| min_tunnel_id.is_set
	|| unused_removal_timeout_configured.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_configured.yfilter)
	|| ydk::is_set(max_tunnel_id.yfilter)
	|| ydk::is_set(min_tunnel_id.yfilter)
	|| ydk::is_set(unused_removal_timeout_configured.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_configured.is_set || is_set(is_configured.yfilter)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (max_tunnel_id.is_set || is_set(max_tunnel_id.yfilter)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());
    if (min_tunnel_id.is_set || is_set(min_tunnel_id.yfilter)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());
    if (unused_removal_timeout_configured.is_set || is_set(unused_removal_timeout_configured.yfilter)) leaf_name_data.push_back(unused_removal_timeout_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-configured")
    {
        is_configured = value;
        is_configured.value_namespace = name_space;
        is_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
        max_tunnel_id.value_namespace = name_space;
        max_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
        min_tunnel_id.value_namespace = name_space;
        min_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unused-removal-timeout-configured")
    {
        unused_removal_timeout_configured = value;
        unused_removal_timeout_configured.value_namespace = name_space;
        unused_removal_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Mesh::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-configured")
    {
        is_configured.yfilter = yfilter;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "unused-removal-timeout-configured")
    {
        unused_removal_timeout_configured.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Mesh::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-configured" || name == "max-tunnel-id" || name == "min-tunnel-id" || name == "unused-removal-timeout-configured")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::OneHop()
    :
    interfaces(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces>())
	,statistics(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics>())
	,summary(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary>())
{
    interfaces->parent = this;

    statistics->parent = this;

    summary->parent = this;

    yang_name = "one-hop"; yang_parent_name = "mesh";
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::~OneHop()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one-hop";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::OneHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::OneHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::OneHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "statistics" || name == "summary")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "one-hop";
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::~Interfaces()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/one-hop/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::~Interface()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/one-hop/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel>();
        c->parent = this;
        tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel" || name == "interface-name" || name == "interface-name-xr")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::Tunnel()
    :
    destination_address{YType::str, "destination-address"},
    mesh_group_id{YType::uint32, "mesh-group-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    tunnel_lspid{YType::uint16, "tunnel-lspid"},
    tunnel_state{YType::enumeration, "tunnel-state"}
{
    yang_name = "tunnel"; yang_parent_name = "interface";
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::~Tunnel()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::has_data() const
{
    return destination_address.is_set
	|| mesh_group_id.is_set
	|| tunnel_id.is_set
	|| tunnel_lspid.is_set
	|| tunnel_state.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(mesh_group_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_lspid.yfilter)
	|| ydk::is_set(tunnel_state.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tunnel' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (mesh_group_id.is_set || is_set(mesh_group_id.yfilter)) leaf_name_data.push_back(mesh_group_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_lspid.is_set || is_set(tunnel_lspid.yfilter)) leaf_name_data.push_back(tunnel_lspid.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.yfilter)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group-id")
    {
        mesh_group_id = value;
        mesh_group_id.value_namespace = name_space;
        mesh_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-lspid")
    {
        tunnel_lspid = value;
        tunnel_lspid.value_namespace = name_space;
        tunnel_lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
        tunnel_state.value_namespace = name_space;
        tunnel_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "mesh-group-id")
    {
        mesh_group_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-lspid")
    {
        tunnel_lspid.yfilter = yfilter;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "mesh-group-id" || name == "tunnel-id" || name == "tunnel-lspid" || name == "tunnel-state")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::Statistics()
    :
    connected{YType::uint32, "connected"},
    created{YType::uint32, "created"},
    last_cleared_time{YType::uint32, "last-cleared-time"},
    removed_in_use{YType::uint32, "removed-in-use"},
    removed_range_exceeded{YType::uint32, "removed-range-exceeded"},
    removed_unused{YType::uint32, "removed-unused"}
{
    yang_name = "statistics"; yang_parent_name = "one-hop";
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::~Statistics()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::has_data() const
{
    return connected.is_set
	|| created.is_set
	|| last_cleared_time.is_set
	|| removed_in_use.is_set
	|| removed_range_exceeded.is_set
	|| removed_unused.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connected.yfilter)
	|| ydk::is_set(created.yfilter)
	|| ydk::is_set(last_cleared_time.yfilter)
	|| ydk::is_set(removed_in_use.yfilter)
	|| ydk::is_set(removed_range_exceeded.yfilter)
	|| ydk::is_set(removed_unused.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/one-hop/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connected.is_set || is_set(connected.yfilter)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (created.is_set || is_set(created.yfilter)) leaf_name_data.push_back(created.get_name_leafdata());
    if (last_cleared_time.is_set || is_set(last_cleared_time.yfilter)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());
    if (removed_in_use.is_set || is_set(removed_in_use.yfilter)) leaf_name_data.push_back(removed_in_use.get_name_leafdata());
    if (removed_range_exceeded.is_set || is_set(removed_range_exceeded.yfilter)) leaf_name_data.push_back(removed_range_exceeded.get_name_leafdata());
    if (removed_unused.is_set || is_set(removed_unused.yfilter)) leaf_name_data.push_back(removed_unused.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connected")
    {
        connected = value;
        connected.value_namespace = name_space;
        connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "created")
    {
        created = value;
        created.value_namespace = name_space;
        created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
        last_cleared_time.value_namespace = name_space;
        last_cleared_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "removed-in-use")
    {
        removed_in_use = value;
        removed_in_use.value_namespace = name_space;
        removed_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "removed-range-exceeded")
    {
        removed_range_exceeded = value;
        removed_range_exceeded.value_namespace = name_space;
        removed_range_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "removed-unused")
    {
        removed_unused = value;
        removed_unused.value_namespace = name_space;
        removed_unused.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connected")
    {
        connected.yfilter = yfilter;
    }
    if(value_path == "created")
    {
        created.yfilter = yfilter;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time.yfilter = yfilter;
    }
    if(value_path == "removed-in-use")
    {
        removed_in_use.yfilter = yfilter;
    }
    if(value_path == "removed-range-exceeded")
    {
        removed_range_exceeded.yfilter = yfilter;
    }
    if(value_path == "removed-unused")
    {
        removed_unused.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected" || name == "created" || name == "last-cleared-time" || name == "removed-in-use" || name == "removed-range-exceeded" || name == "removed-unused")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::Summary()
    :
    auto_mesh_one_hop_destinations{YType::uint32, "auto-mesh-one-hop-destinations"},
    auto_mesh_one_hop_groups{YType::uint32, "auto-mesh-one-hop-groups"},
    auto_mesh_one_hop_tunnels{YType::uint32, "auto-mesh-one-hop-tunnels"},
    down_auto_mesh_one_hop_tunnels{YType::uint32, "down-auto-mesh-one-hop-tunnels"},
    frr_auto_mesh_tunnels{YType::uint32, "frr-auto-mesh-tunnels"},
    up_auto_mesh_one_hop_tunnels{YType::uint32, "up-auto-mesh-one-hop-tunnels"}
{
    yang_name = "summary"; yang_parent_name = "one-hop";
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::~Summary()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::has_data() const
{
    return auto_mesh_one_hop_destinations.is_set
	|| auto_mesh_one_hop_groups.is_set
	|| auto_mesh_one_hop_tunnels.is_set
	|| down_auto_mesh_one_hop_tunnels.is_set
	|| frr_auto_mesh_tunnels.is_set
	|| up_auto_mesh_one_hop_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_mesh_one_hop_destinations.yfilter)
	|| ydk::is_set(auto_mesh_one_hop_groups.yfilter)
	|| ydk::is_set(auto_mesh_one_hop_tunnels.yfilter)
	|| ydk::is_set(down_auto_mesh_one_hop_tunnels.yfilter)
	|| ydk::is_set(frr_auto_mesh_tunnels.yfilter)
	|| ydk::is_set(up_auto_mesh_one_hop_tunnels.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/one-hop/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_mesh_one_hop_destinations.is_set || is_set(auto_mesh_one_hop_destinations.yfilter)) leaf_name_data.push_back(auto_mesh_one_hop_destinations.get_name_leafdata());
    if (auto_mesh_one_hop_groups.is_set || is_set(auto_mesh_one_hop_groups.yfilter)) leaf_name_data.push_back(auto_mesh_one_hop_groups.get_name_leafdata());
    if (auto_mesh_one_hop_tunnels.is_set || is_set(auto_mesh_one_hop_tunnels.yfilter)) leaf_name_data.push_back(auto_mesh_one_hop_tunnels.get_name_leafdata());
    if (down_auto_mesh_one_hop_tunnels.is_set || is_set(down_auto_mesh_one_hop_tunnels.yfilter)) leaf_name_data.push_back(down_auto_mesh_one_hop_tunnels.get_name_leafdata());
    if (frr_auto_mesh_tunnels.is_set || is_set(frr_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(frr_auto_mesh_tunnels.get_name_leafdata());
    if (up_auto_mesh_one_hop_tunnels.is_set || is_set(up_auto_mesh_one_hop_tunnels.yfilter)) leaf_name_data.push_back(up_auto_mesh_one_hop_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-mesh-one-hop-destinations")
    {
        auto_mesh_one_hop_destinations = value;
        auto_mesh_one_hop_destinations.value_namespace = name_space;
        auto_mesh_one_hop_destinations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-one-hop-groups")
    {
        auto_mesh_one_hop_groups = value;
        auto_mesh_one_hop_groups.value_namespace = name_space;
        auto_mesh_one_hop_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-one-hop-tunnels")
    {
        auto_mesh_one_hop_tunnels = value;
        auto_mesh_one_hop_tunnels.value_namespace = name_space;
        auto_mesh_one_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-auto-mesh-one-hop-tunnels")
    {
        down_auto_mesh_one_hop_tunnels = value;
        down_auto_mesh_one_hop_tunnels.value_namespace = name_space;
        down_auto_mesh_one_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels = value;
        frr_auto_mesh_tunnels.value_namespace = name_space;
        frr_auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-auto-mesh-one-hop-tunnels")
    {
        up_auto_mesh_one_hop_tunnels = value;
        up_auto_mesh_one_hop_tunnels.value_namespace = name_space;
        up_auto_mesh_one_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-mesh-one-hop-destinations")
    {
        auto_mesh_one_hop_destinations.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-one-hop-groups")
    {
        auto_mesh_one_hop_groups.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-one-hop-tunnels")
    {
        auto_mesh_one_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "down-auto-mesh-one-hop-tunnels")
    {
        down_auto_mesh_one_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "up-auto-mesh-one-hop-tunnels")
    {
        up_auto_mesh_one_hop_tunnels.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-mesh-one-hop-destinations" || name == "auto-mesh-one-hop-groups" || name == "auto-mesh-one-hop-tunnels" || name == "down-auto-mesh-one-hop-tunnels" || name == "frr-auto-mesh-tunnels" || name == "up-auto-mesh-one-hop-tunnels")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Backup::Backup()
    :
    config(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Config>())
	,statistics(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics>())
	,summary(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Summary>())
	,tunnels(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Tunnels>())
{
    config->parent = this;

    statistics->parent = this;

    summary->parent = this;

    tunnels->parent = this;

    yang_name = "backup"; yang_parent_name = "auto-tunnel";
}

MplsTeStandby::AutoTunnel::Backup::~Backup()
{
}

bool MplsTeStandby::AutoTunnel::Backup::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool MplsTeStandby::AutoTunnel::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string MplsTeStandby::AutoTunnel::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Config>();
        }
        return config;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels == nullptr)
        {
            tunnels = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Tunnels>();
        }
        return tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(tunnels != nullptr)
    {
        children["tunnels"] = tunnels;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AutoTunnel::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AutoTunnel::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "statistics" || name == "summary" || name == "tunnels")
        return true;
    return false;
}


}
}
