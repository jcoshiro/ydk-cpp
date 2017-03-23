
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_lpts_ifib_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_lpts_ifib_oper {

LptsIfib::LptsIfib()
    :
    nodes(std::make_shared<LptsIfib::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "lpts-ifib"; yang_parent_name = "Cisco-IOS-XR-lpts-ifib-oper";
}

LptsIfib::~LptsIfib()
{
}

bool LptsIfib::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool LptsIfib::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string LptsIfib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-ifib-oper:lpts-ifib";

    return path_buffer.str();

}

EntityPath LptsIfib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LptsIfib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
        else
        {
            nodes = std::make_shared<LptsIfib::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & LptsIfib::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
    }

    return children;
}

void LptsIfib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> LptsIfib::clone_ptr() const
{
    return std::make_shared<LptsIfib>();
}

std::string LptsIfib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string LptsIfib::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function LptsIfib::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

LptsIfib::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "lpts-ifib";
}

LptsIfib::Nodes::~Nodes()
{
}

bool LptsIfib::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool LptsIfib::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string LptsIfib::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath LptsIfib::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-ifib-oper:lpts-ifib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LptsIfib::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<LptsIfib::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & LptsIfib::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void LptsIfib::Nodes::set_value(const std::string & value_path, std::string value)
{
}

LptsIfib::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    slice_ids(std::make_shared<LptsIfib::Nodes::Node::SliceIds>())
{
    slice_ids->parent = this;
    children["slice-ids"] = slice_ids;

    yang_name = "node"; yang_parent_name = "nodes";
}

LptsIfib::Nodes::Node::~Node()
{
}

bool LptsIfib::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (slice_ids !=  nullptr && slice_ids->has_data());
}

bool LptsIfib::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (slice_ids !=  nullptr && slice_ids->has_operation());
}

std::string LptsIfib::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

EntityPath LptsIfib::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-ifib-oper:lpts-ifib/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LptsIfib::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "slice-ids")
    {
        if(slice_ids != nullptr)
        {
            children["slice-ids"] = slice_ids;
        }
        else
        {
            slice_ids = std::make_shared<LptsIfib::Nodes::Node::SliceIds>();
            slice_ids->parent = this;
            children["slice-ids"] = slice_ids;
        }
        return children.at("slice-ids");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & LptsIfib::Nodes::Node::get_children()
{
    if(children.find("slice-ids") == children.end())
    {
        if(slice_ids != nullptr)
        {
            children["slice-ids"] = slice_ids;
        }
    }

    return children;
}

void LptsIfib::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

LptsIfib::Nodes::Node::SliceIds::SliceIds()
{
    yang_name = "slice-ids"; yang_parent_name = "node";
}

LptsIfib::Nodes::Node::SliceIds::~SliceIds()
{
}

bool LptsIfib::Nodes::Node::SliceIds::has_data() const
{
    for (std::size_t index=0; index<slice_id.size(); index++)
    {
        if(slice_id[index]->has_data())
            return true;
    }
    return false;
}

bool LptsIfib::Nodes::Node::SliceIds::has_operation() const
{
    for (std::size_t index=0; index<slice_id.size(); index++)
    {
        if(slice_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string LptsIfib::Nodes::Node::SliceIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice-ids";

    return path_buffer.str();

}

EntityPath LptsIfib::Nodes::Node::SliceIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SliceIds' in Cisco_IOS_XR_lpts_ifib_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LptsIfib::Nodes::Node::SliceIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "slice-id")
    {
        for(auto const & c : slice_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<LptsIfib::Nodes::Node::SliceIds::SliceId>();
        c->parent = this;
        slice_id.push_back(std::move(c));
        children[segment_path] = slice_id.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & LptsIfib::Nodes::Node::SliceIds::get_children()
{
    for (auto const & c : slice_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void LptsIfib::Nodes::Node::SliceIds::set_value(const std::string & value_path, std::string value)
{
}

LptsIfib::Nodes::Node::SliceIds::SliceId::SliceId()
    :
    slice_name{YType::str, "slice-name"}
{
    yang_name = "slice-id"; yang_parent_name = "slice-ids";
}

LptsIfib::Nodes::Node::SliceIds::SliceId::~SliceId()
{
}

bool LptsIfib::Nodes::Node::SliceIds::SliceId::has_data() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_data())
            return true;
    }
    return slice_name.is_set;
}

bool LptsIfib::Nodes::Node::SliceIds::SliceId::has_operation() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(slice_name.operation);
}

std::string LptsIfib::Nodes::Node::SliceIds::SliceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice-id" <<"[slice-name='" <<slice_name <<"']";

    return path_buffer.str();

}

EntityPath LptsIfib::Nodes::Node::SliceIds::SliceId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SliceId' in Cisco_IOS_XR_lpts_ifib_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slice_name.is_set || is_set(slice_name.operation)) leaf_name_data.push_back(slice_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LptsIfib::Nodes::Node::SliceIds::SliceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "entry")
    {
        for(auto const & c : entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<LptsIfib::Nodes::Node::SliceIds::SliceId::Entry>();
        c->parent = this;
        entry.push_back(std::move(c));
        children[segment_path] = entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & LptsIfib::Nodes::Node::SliceIds::SliceId::get_children()
{
    for (auto const & c : entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void LptsIfib::Nodes::Node::SliceIds::SliceId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "slice-name")
    {
        slice_name = value;
    }
}

LptsIfib::Nodes::Node::SliceIds::SliceId::Entry::Entry()
    :
    entry{YType::int32, "entry"},
    accepts{YType::uint64, "accepts"},
    deliver_list_long{YType::str, "deliver-list-long"},
    deliver_list_short{YType::str, "deliver-list-short"},
    destination_addr{YType::str, "destination-addr"},
    destination_type{YType::str, "destination-type"},
    destination_value{YType::str, "destination-value"},
    drops{YType::uint64, "drops"},
    flow_type{YType::str, "flow-type"},
    ifib_program_time{YType::str, "ifib-program-time"},
    intf_handle{YType::uint32, "intf-handle"},
    intf_name{YType::str, "intf-name"},
    is_fgid{YType::uint8, "is-fgid"},
    is_syn{YType::uint8, "is-syn"},
    l3protocol{YType::uint32, "l3protocol"},
    l4protocol{YType::uint32, "l4protocol"},
    listener_tag{YType::str, "listener-tag"},
    local_flag{YType::uint8, "local-flag"},
    min_ttl{YType::uint8, "min-ttl"},
    opcode{YType::str, "opcode"},
    pending_ifibq_delay{YType::uint32, "pending-ifibq-delay"},
    sl_ifibq_delay{YType::uint32, "sl-ifibq-delay"},
    source_addr{YType::str, "source-addr"},
    source_port{YType::str, "source-port"},
    vid{YType::uint32, "vid"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "entry"; yang_parent_name = "slice-id";
}

LptsIfib::Nodes::Node::SliceIds::SliceId::Entry::~Entry()
{
}

bool LptsIfib::Nodes::Node::SliceIds::SliceId::Entry::has_data() const
{
    return entry.is_set
	|| accepts.is_set
	|| deliver_list_long.is_set
	|| deliver_list_short.is_set
	|| destination_addr.is_set
	|| destination_type.is_set
	|| destination_value.is_set
	|| drops.is_set
	|| flow_type.is_set
	|| ifib_program_time.is_set
	|| intf_handle.is_set
	|| intf_name.is_set
	|| is_fgid.is_set
	|| is_syn.is_set
	|| l3protocol.is_set
	|| l4protocol.is_set
	|| listener_tag.is_set
	|| local_flag.is_set
	|| min_ttl.is_set
	|| opcode.is_set
	|| pending_ifibq_delay.is_set
	|| sl_ifibq_delay.is_set
	|| source_addr.is_set
	|| source_port.is_set
	|| vid.is_set
	|| vrf_name.is_set;
}

bool LptsIfib::Nodes::Node::SliceIds::SliceId::Entry::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation)
	|| is_set(accepts.operation)
	|| is_set(deliver_list_long.operation)
	|| is_set(deliver_list_short.operation)
	|| is_set(destination_addr.operation)
	|| is_set(destination_type.operation)
	|| is_set(destination_value.operation)
	|| is_set(drops.operation)
	|| is_set(flow_type.operation)
	|| is_set(ifib_program_time.operation)
	|| is_set(intf_handle.operation)
	|| is_set(intf_name.operation)
	|| is_set(is_fgid.operation)
	|| is_set(is_syn.operation)
	|| is_set(l3protocol.operation)
	|| is_set(l4protocol.operation)
	|| is_set(listener_tag.operation)
	|| is_set(local_flag.operation)
	|| is_set(min_ttl.operation)
	|| is_set(opcode.operation)
	|| is_set(pending_ifibq_delay.operation)
	|| is_set(sl_ifibq_delay.operation)
	|| is_set(source_addr.operation)
	|| is_set(source_port.operation)
	|| is_set(vid.operation)
	|| is_set(vrf_name.operation);
}

std::string LptsIfib::Nodes::Node::SliceIds::SliceId::Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry" <<"[entry='" <<entry <<"']";

    return path_buffer.str();

}

EntityPath LptsIfib::Nodes::Node::SliceIds::SliceId::Entry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Entry' in Cisco_IOS_XR_lpts_ifib_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());
    if (accepts.is_set || is_set(accepts.operation)) leaf_name_data.push_back(accepts.get_name_leafdata());
    if (deliver_list_long.is_set || is_set(deliver_list_long.operation)) leaf_name_data.push_back(deliver_list_long.get_name_leafdata());
    if (deliver_list_short.is_set || is_set(deliver_list_short.operation)) leaf_name_data.push_back(deliver_list_short.get_name_leafdata());
    if (destination_addr.is_set || is_set(destination_addr.operation)) leaf_name_data.push_back(destination_addr.get_name_leafdata());
    if (destination_type.is_set || is_set(destination_type.operation)) leaf_name_data.push_back(destination_type.get_name_leafdata());
    if (destination_value.is_set || is_set(destination_value.operation)) leaf_name_data.push_back(destination_value.get_name_leafdata());
    if (drops.is_set || is_set(drops.operation)) leaf_name_data.push_back(drops.get_name_leafdata());
    if (flow_type.is_set || is_set(flow_type.operation)) leaf_name_data.push_back(flow_type.get_name_leafdata());
    if (ifib_program_time.is_set || is_set(ifib_program_time.operation)) leaf_name_data.push_back(ifib_program_time.get_name_leafdata());
    if (intf_handle.is_set || is_set(intf_handle.operation)) leaf_name_data.push_back(intf_handle.get_name_leafdata());
    if (intf_name.is_set || is_set(intf_name.operation)) leaf_name_data.push_back(intf_name.get_name_leafdata());
    if (is_fgid.is_set || is_set(is_fgid.operation)) leaf_name_data.push_back(is_fgid.get_name_leafdata());
    if (is_syn.is_set || is_set(is_syn.operation)) leaf_name_data.push_back(is_syn.get_name_leafdata());
    if (l3protocol.is_set || is_set(l3protocol.operation)) leaf_name_data.push_back(l3protocol.get_name_leafdata());
    if (l4protocol.is_set || is_set(l4protocol.operation)) leaf_name_data.push_back(l4protocol.get_name_leafdata());
    if (listener_tag.is_set || is_set(listener_tag.operation)) leaf_name_data.push_back(listener_tag.get_name_leafdata());
    if (local_flag.is_set || is_set(local_flag.operation)) leaf_name_data.push_back(local_flag.get_name_leafdata());
    if (min_ttl.is_set || is_set(min_ttl.operation)) leaf_name_data.push_back(min_ttl.get_name_leafdata());
    if (opcode.is_set || is_set(opcode.operation)) leaf_name_data.push_back(opcode.get_name_leafdata());
    if (pending_ifibq_delay.is_set || is_set(pending_ifibq_delay.operation)) leaf_name_data.push_back(pending_ifibq_delay.get_name_leafdata());
    if (sl_ifibq_delay.is_set || is_set(sl_ifibq_delay.operation)) leaf_name_data.push_back(sl_ifibq_delay.get_name_leafdata());
    if (source_addr.is_set || is_set(source_addr.operation)) leaf_name_data.push_back(source_addr.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (vid.is_set || is_set(vid.operation)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LptsIfib::Nodes::Node::SliceIds::SliceId::Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & LptsIfib::Nodes::Node::SliceIds::SliceId::Entry::get_children()
{
    return children;
}

void LptsIfib::Nodes::Node::SliceIds::SliceId::Entry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
    if(value_path == "accepts")
    {
        accepts = value;
    }
    if(value_path == "deliver-list-long")
    {
        deliver_list_long = value;
    }
    if(value_path == "deliver-list-short")
    {
        deliver_list_short = value;
    }
    if(value_path == "destination-addr")
    {
        destination_addr = value;
    }
    if(value_path == "destination-type")
    {
        destination_type = value;
    }
    if(value_path == "destination-value")
    {
        destination_value = value;
    }
    if(value_path == "drops")
    {
        drops = value;
    }
    if(value_path == "flow-type")
    {
        flow_type = value;
    }
    if(value_path == "ifib-program-time")
    {
        ifib_program_time = value;
    }
    if(value_path == "intf-handle")
    {
        intf_handle = value;
    }
    if(value_path == "intf-name")
    {
        intf_name = value;
    }
    if(value_path == "is-fgid")
    {
        is_fgid = value;
    }
    if(value_path == "is-syn")
    {
        is_syn = value;
    }
    if(value_path == "l3protocol")
    {
        l3protocol = value;
    }
    if(value_path == "l4protocol")
    {
        l4protocol = value;
    }
    if(value_path == "listener-tag")
    {
        listener_tag = value;
    }
    if(value_path == "local-flag")
    {
        local_flag = value;
    }
    if(value_path == "min-ttl")
    {
        min_ttl = value;
    }
    if(value_path == "opcode")
    {
        opcode = value;
    }
    if(value_path == "pending-ifibq-delay")
    {
        pending_ifibq_delay = value;
    }
    if(value_path == "sl-ifibq-delay")
    {
        sl_ifibq_delay = value;
    }
    if(value_path == "source-addr")
    {
        source_addr = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "vid")
    {
        vid = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}


}
}
