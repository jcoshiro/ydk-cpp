
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_terminal_device_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_terminal_device_oper {

OpticalInterface::OpticalInterface()
    :
    config_status(std::make_shared<OpticalInterface::ConfigStatus>())
	,graph(std::make_shared<OpticalInterface::Graph>())
	,operational_modes(std::make_shared<OpticalInterface::OperationalModes>())
	,optical_channel_interfaces(std::make_shared<OpticalInterface::OpticalChannelInterfaces>())
	,optical_logical_interfaces(std::make_shared<OpticalInterface::OpticalLogicalInterfaces>())
{
    config_status->parent = this;
    children["config-status"] = config_status;

    graph->parent = this;
    children["graph"] = graph;

    operational_modes->parent = this;
    children["operational-modes"] = operational_modes;

    optical_channel_interfaces->parent = this;
    children["optical-channel-interfaces"] = optical_channel_interfaces;

    optical_logical_interfaces->parent = this;
    children["optical-logical-interfaces"] = optical_logical_interfaces;

    yang_name = "optical-interface"; yang_parent_name = "Cisco-IOS-XR-terminal-device-oper";
}

OpticalInterface::~OpticalInterface()
{
}

bool OpticalInterface::has_data() const
{
    return (config_status !=  nullptr && config_status->has_data())
	|| (graph !=  nullptr && graph->has_data())
	|| (operational_modes !=  nullptr && operational_modes->has_data())
	|| (optical_channel_interfaces !=  nullptr && optical_channel_interfaces->has_data())
	|| (optical_logical_interfaces !=  nullptr && optical_logical_interfaces->has_data());
}

bool OpticalInterface::has_operation() const
{
    return is_set(operation)
	|| (config_status !=  nullptr && config_status->has_operation())
	|| (graph !=  nullptr && graph->has_operation())
	|| (operational_modes !=  nullptr && operational_modes->has_operation())
	|| (optical_channel_interfaces !=  nullptr && optical_channel_interfaces->has_operation())
	|| (optical_logical_interfaces !=  nullptr && optical_logical_interfaces->has_operation());
}

std::string OpticalInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface";

    return path_buffer.str();

}

EntityPath OpticalInterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> OpticalInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config-status")
    {
        if(config_status != nullptr)
        {
            children["config-status"] = config_status;
        }
        else
        {
            config_status = std::make_shared<OpticalInterface::ConfigStatus>();
            config_status->parent = this;
            children["config-status"] = config_status;
        }
        return children.at("config-status");
    }

    if(child_yang_name == "graph")
    {
        if(graph != nullptr)
        {
            children["graph"] = graph;
        }
        else
        {
            graph = std::make_shared<OpticalInterface::Graph>();
            graph->parent = this;
            children["graph"] = graph;
        }
        return children.at("graph");
    }

    if(child_yang_name == "operational-modes")
    {
        if(operational_modes != nullptr)
        {
            children["operational-modes"] = operational_modes;
        }
        else
        {
            operational_modes = std::make_shared<OpticalInterface::OperationalModes>();
            operational_modes->parent = this;
            children["operational-modes"] = operational_modes;
        }
        return children.at("operational-modes");
    }

    if(child_yang_name == "optical-channel-interfaces")
    {
        if(optical_channel_interfaces != nullptr)
        {
            children["optical-channel-interfaces"] = optical_channel_interfaces;
        }
        else
        {
            optical_channel_interfaces = std::make_shared<OpticalInterface::OpticalChannelInterfaces>();
            optical_channel_interfaces->parent = this;
            children["optical-channel-interfaces"] = optical_channel_interfaces;
        }
        return children.at("optical-channel-interfaces");
    }

    if(child_yang_name == "optical-logical-interfaces")
    {
        if(optical_logical_interfaces != nullptr)
        {
            children["optical-logical-interfaces"] = optical_logical_interfaces;
        }
        else
        {
            optical_logical_interfaces = std::make_shared<OpticalInterface::OpticalLogicalInterfaces>();
            optical_logical_interfaces->parent = this;
            children["optical-logical-interfaces"] = optical_logical_interfaces;
        }
        return children.at("optical-logical-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & OpticalInterface::get_children()
{
    if(children.find("config-status") == children.end())
    {
        if(config_status != nullptr)
        {
            children["config-status"] = config_status;
        }
    }

    if(children.find("graph") == children.end())
    {
        if(graph != nullptr)
        {
            children["graph"] = graph;
        }
    }

    if(children.find("operational-modes") == children.end())
    {
        if(operational_modes != nullptr)
        {
            children["operational-modes"] = operational_modes;
        }
    }

    if(children.find("optical-channel-interfaces") == children.end())
    {
        if(optical_channel_interfaces != nullptr)
        {
            children["optical-channel-interfaces"] = optical_channel_interfaces;
        }
    }

    if(children.find("optical-logical-interfaces") == children.end())
    {
        if(optical_logical_interfaces != nullptr)
        {
            children["optical-logical-interfaces"] = optical_logical_interfaces;
        }
    }

    return children;
}

void OpticalInterface::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> OpticalInterface::clone_ptr() const
{
    return std::make_shared<OpticalInterface>();
}

std::string OpticalInterface::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string OpticalInterface::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function OpticalInterface::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

OpticalInterface::ConfigStatus::ConfigStatus()
    :
    partial_config(std::make_shared<OpticalInterface::ConfigStatus::PartialConfig>())
	,slice_tables(std::make_shared<OpticalInterface::ConfigStatus::SliceTables>())
{
    partial_config->parent = this;
    children["partial-config"] = partial_config;

    slice_tables->parent = this;
    children["slice-tables"] = slice_tables;

    yang_name = "config-status"; yang_parent_name = "optical-interface";
}

OpticalInterface::ConfigStatus::~ConfigStatus()
{
}

bool OpticalInterface::ConfigStatus::has_data() const
{
    return (partial_config !=  nullptr && partial_config->has_data())
	|| (slice_tables !=  nullptr && slice_tables->has_data());
}

bool OpticalInterface::ConfigStatus::has_operation() const
{
    return is_set(operation)
	|| (partial_config !=  nullptr && partial_config->has_operation())
	|| (slice_tables !=  nullptr && slice_tables->has_operation());
}

std::string OpticalInterface::ConfigStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-status";

    return path_buffer.str();

}

EntityPath OpticalInterface::ConfigStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticalInterface::ConfigStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "partial-config")
    {
        if(partial_config != nullptr)
        {
            children["partial-config"] = partial_config;
        }
        else
        {
            partial_config = std::make_shared<OpticalInterface::ConfigStatus::PartialConfig>();
            partial_config->parent = this;
            children["partial-config"] = partial_config;
        }
        return children.at("partial-config");
    }

    if(child_yang_name == "slice-tables")
    {
        if(slice_tables != nullptr)
        {
            children["slice-tables"] = slice_tables;
        }
        else
        {
            slice_tables = std::make_shared<OpticalInterface::ConfigStatus::SliceTables>();
            slice_tables->parent = this;
            children["slice-tables"] = slice_tables;
        }
        return children.at("slice-tables");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & OpticalInterface::ConfigStatus::get_children()
{
    if(children.find("partial-config") == children.end())
    {
        if(partial_config != nullptr)
        {
            children["partial-config"] = partial_config;
        }
    }

    if(children.find("slice-tables") == children.end())
    {
        if(slice_tables != nullptr)
        {
            children["slice-tables"] = slice_tables;
        }
    }

    return children;
}

void OpticalInterface::ConfigStatus::set_value(const std::string & value_path, std::string value)
{
}

OpticalInterface::ConfigStatus::PartialConfig::PartialConfig()
    :
    partial_config{YType::uint8, "partial-config"}
{
    yang_name = "partial-config"; yang_parent_name = "config-status";
}

OpticalInterface::ConfigStatus::PartialConfig::~PartialConfig()
{
}

bool OpticalInterface::ConfigStatus::PartialConfig::has_data() const
{
    return partial_config.is_set;
}

bool OpticalInterface::ConfigStatus::PartialConfig::has_operation() const
{
    return is_set(operation)
	|| is_set(partial_config.operation);
}

std::string OpticalInterface::ConfigStatus::PartialConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "partial-config";

    return path_buffer.str();

}

EntityPath OpticalInterface::ConfigStatus::PartialConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/config-status/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (partial_config.is_set || is_set(partial_config.operation)) leaf_name_data.push_back(partial_config.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticalInterface::ConfigStatus::PartialConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & OpticalInterface::ConfigStatus::PartialConfig::get_children()
{
    return children;
}

void OpticalInterface::ConfigStatus::PartialConfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "partial-config")
    {
        partial_config = value;
    }
}

OpticalInterface::ConfigStatus::SliceTables::SliceTables()
{
    yang_name = "slice-tables"; yang_parent_name = "config-status";
}

OpticalInterface::ConfigStatus::SliceTables::~SliceTables()
{
}

bool OpticalInterface::ConfigStatus::SliceTables::has_data() const
{
    for (std::size_t index=0; index<slice_table.size(); index++)
    {
        if(slice_table[index]->has_data())
            return true;
    }
    return false;
}

bool OpticalInterface::ConfigStatus::SliceTables::has_operation() const
{
    for (std::size_t index=0; index<slice_table.size(); index++)
    {
        if(slice_table[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OpticalInterface::ConfigStatus::SliceTables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice-tables";

    return path_buffer.str();

}

EntityPath OpticalInterface::ConfigStatus::SliceTables::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/config-status/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticalInterface::ConfigStatus::SliceTables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "slice-table")
    {
        for(auto const & c : slice_table)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<OpticalInterface::ConfigStatus::SliceTables::SliceTable>();
        c->parent = this;
        slice_table.push_back(std::move(c));
        children[segment_path] = slice_table.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & OpticalInterface::ConfigStatus::SliceTables::get_children()
{
    for (auto const & c : slice_table)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void OpticalInterface::ConfigStatus::SliceTables::set_value(const std::string & value_path, std::string value)
{
}

OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceTable()
    :
    index_{YType::int32, "index"}
    	,
    slice_status_attr(std::make_shared<OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr>())
{
    slice_status_attr->parent = this;
    children["slice-status-attr"] = slice_status_attr;

    yang_name = "slice-table"; yang_parent_name = "slice-tables";
}

OpticalInterface::ConfigStatus::SliceTables::SliceTable::~SliceTable()
{
}

bool OpticalInterface::ConfigStatus::SliceTables::SliceTable::has_data() const
{
    return index_.is_set
	|| (slice_status_attr !=  nullptr && slice_status_attr->has_data());
}

bool OpticalInterface::ConfigStatus::SliceTables::SliceTable::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| (slice_status_attr !=  nullptr && slice_status_attr->has_operation());
}

std::string OpticalInterface::ConfigStatus::SliceTables::SliceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice-table" <<"[index='" <<index_ <<"']";

    return path_buffer.str();

}

EntityPath OpticalInterface::ConfigStatus::SliceTables::SliceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/config-status/slice-tables/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticalInterface::ConfigStatus::SliceTables::SliceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "slice-status-attr")
    {
        if(slice_status_attr != nullptr)
        {
            children["slice-status-attr"] = slice_status_attr;
        }
        else
        {
            slice_status_attr = std::make_shared<OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr>();
            slice_status_attr->parent = this;
            children["slice-status-attr"] = slice_status_attr;
        }
        return children.at("slice-status-attr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & OpticalInterface::ConfigStatus::SliceTables::SliceTable::get_children()
{
    if(children.find("slice-status-attr") == children.end())
    {
        if(slice_status_attr != nullptr)
        {
            children["slice-status-attr"] = slice_status_attr;
        }
    }

    return children;
}

void OpticalInterface::ConfigStatus::SliceTables::SliceTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
}

OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr::SliceStatusAttr()
    :
    err_str{YType::str, "err-str"},
    err_timestamp{YType::str, "err-timestamp"},
    past_config{YType::str, "past-config"},
    past_timestamp{YType::str, "past-timestamp"},
    present_config{YType::str, "present-config"},
    present_timestamp{YType::str, "present-timestamp"},
    prov_status{YType::str, "prov-status"},
    slice{YType::uint8, "slice"}
{
    yang_name = "slice-status-attr"; yang_parent_name = "slice-table";
}

OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr::~SliceStatusAttr()
{
}

bool OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr::has_data() const
{
    return err_str.is_set
	|| err_timestamp.is_set
	|| past_config.is_set
	|| past_timestamp.is_set
	|| present_config.is_set
	|| present_timestamp.is_set
	|| prov_status.is_set
	|| slice.is_set;
}

bool OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(err_str.operation)
	|| is_set(err_timestamp.operation)
	|| is_set(past_config.operation)
	|| is_set(past_timestamp.operation)
	|| is_set(present_config.operation)
	|| is_set(present_timestamp.operation)
	|| is_set(prov_status.operation)
	|| is_set(slice.operation);
}

std::string OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice-status-attr";

    return path_buffer.str();

}

EntityPath OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SliceStatusAttr' in Cisco_IOS_XR_terminal_device_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (err_str.is_set || is_set(err_str.operation)) leaf_name_data.push_back(err_str.get_name_leafdata());
    if (err_timestamp.is_set || is_set(err_timestamp.operation)) leaf_name_data.push_back(err_timestamp.get_name_leafdata());
    if (past_config.is_set || is_set(past_config.operation)) leaf_name_data.push_back(past_config.get_name_leafdata());
    if (past_timestamp.is_set || is_set(past_timestamp.operation)) leaf_name_data.push_back(past_timestamp.get_name_leafdata());
    if (present_config.is_set || is_set(present_config.operation)) leaf_name_data.push_back(present_config.get_name_leafdata());
    if (present_timestamp.is_set || is_set(present_timestamp.operation)) leaf_name_data.push_back(present_timestamp.get_name_leafdata());
    if (prov_status.is_set || is_set(prov_status.operation)) leaf_name_data.push_back(prov_status.get_name_leafdata());
    if (slice.is_set || is_set(slice.operation)) leaf_name_data.push_back(slice.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr::get_children()
{
    return children;
}

void OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "err-str")
    {
        err_str = value;
    }
    if(value_path == "err-timestamp")
    {
        err_timestamp = value;
    }
    if(value_path == "past-config")
    {
        past_config = value;
    }
    if(value_path == "past-timestamp")
    {
        past_timestamp = value;
    }
    if(value_path == "present-config")
    {
        present_config = value;
    }
    if(value_path == "present-timestamp")
    {
        present_timestamp = value;
    }
    if(value_path == "prov-status")
    {
        prov_status = value;
    }
    if(value_path == "slice")
    {
        slice = value;
    }
}

OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterfaces()
{
    yang_name = "optical-channel-interfaces"; yang_parent_name = "optical-interface";
}

OpticalInterface::OpticalChannelInterfaces::~OpticalChannelInterfaces()
{
}

bool OpticalInterface::OpticalChannelInterfaces::has_data() const
{
    for (std::size_t index=0; index<optical_channel_interface.size(); index++)
    {
        if(optical_channel_interface[index]->has_data())
            return true;
    }
    return false;
}

bool OpticalInterface::OpticalChannelInterfaces::has_operation() const
{
    for (std::size_t index=0; index<optical_channel_interface.size(); index++)
    {
        if(optical_channel_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OpticalInterface::OpticalChannelInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-channel-interfaces";

    return path_buffer.str();

}

EntityPath OpticalInterface::OpticalChannelInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticalInterface::OpticalChannelInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optical-channel-interface")
    {
        for(auto const & c : optical_channel_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface>();
        c->parent = this;
        optical_channel_interface.push_back(std::move(c));
        children[segment_path] = optical_channel_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & OpticalInterface::OpticalChannelInterfaces::get_children()
{
    for (auto const & c : optical_channel_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void OpticalInterface::OpticalChannelInterfaces::set_value(const std::string & value_path, std::string value)
{
}

OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterface()
    :
    location{YType::str, "location"}
    	,
    optical_channel_interface_attr(std::make_shared<OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr>())
{
    optical_channel_interface_attr->parent = this;
    children["optical-channel-interface-attr"] = optical_channel_interface_attr;

    yang_name = "optical-channel-interface"; yang_parent_name = "optical-channel-interfaces";
}

OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::~OpticalChannelInterface()
{
}

bool OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::has_data() const
{
    return location.is_set
	|| (optical_channel_interface_attr !=  nullptr && optical_channel_interface_attr->has_data());
}

bool OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(location.operation)
	|| (optical_channel_interface_attr !=  nullptr && optical_channel_interface_attr->has_operation());
}

std::string OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-channel-interface" <<"[location='" <<location <<"']";

    return path_buffer.str();

}

EntityPath OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/optical-channel-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optical-channel-interface-attr")
    {
        if(optical_channel_interface_attr != nullptr)
        {
            children["optical-channel-interface-attr"] = optical_channel_interface_attr;
        }
        else
        {
            optical_channel_interface_attr = std::make_shared<OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr>();
            optical_channel_interface_attr->parent = this;
            children["optical-channel-interface-attr"] = optical_channel_interface_attr;
        }
        return children.at("optical-channel-interface-attr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::get_children()
{
    if(children.find("optical-channel-interface-attr") == children.end())
    {
        if(optical_channel_interface_attr != nullptr)
        {
            children["optical-channel-interface-attr"] = optical_channel_interface_attr;
        }
    }

    return children;
}

void OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location")
    {
        location = value;
    }
}

OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr::OpticalChannelInterfaceAttr()
    :
    frequency{YType::uint64, "frequency"},
    index_{YType::uint32, "index"},
    line_port{YType::str, "line-port"},
    name{YType::str, "name"},
    oper_mode{YType::uint32, "oper-mode"},
    power{YType::uint64, "power"}
{
    yang_name = "optical-channel-interface-attr"; yang_parent_name = "optical-channel-interface";
}

OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr::~OpticalChannelInterfaceAttr()
{
}

bool OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr::has_data() const
{
    return frequency.is_set
	|| index_.is_set
	|| line_port.is_set
	|| name.is_set
	|| oper_mode.is_set
	|| power.is_set;
}

bool OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(frequency.operation)
	|| is_set(index_.operation)
	|| is_set(line_port.operation)
	|| is_set(name.operation)
	|| is_set(oper_mode.operation)
	|| is_set(power.operation);
}

std::string OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-channel-interface-attr";

    return path_buffer.str();

}

EntityPath OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticalChannelInterfaceAttr' in Cisco_IOS_XR_terminal_device_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.operation)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (line_port.is_set || is_set(line_port.operation)) leaf_name_data.push_back(line_port.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (oper_mode.is_set || is_set(oper_mode.operation)) leaf_name_data.push_back(oper_mode.get_name_leafdata());
    if (power.is_set || is_set(power.operation)) leaf_name_data.push_back(power.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr::get_children()
{
    return children;
}

void OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frequency")
    {
        frequency = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "line-port")
    {
        line_port = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "oper-mode")
    {
        oper_mode = value;
    }
    if(value_path == "power")
    {
        power = value;
    }
}

OpticalInterface::Graph::Graph()
    :
    adj_list_path(std::make_shared<OpticalInterface::Graph::AdjListPath>())
	,graph_structure_path(std::make_shared<OpticalInterface::Graph::GraphStructurePath>())
{
    adj_list_path->parent = this;
    children["adj-list-path"] = adj_list_path;

    graph_structure_path->parent = this;
    children["graph-structure-path"] = graph_structure_path;

    yang_name = "graph"; yang_parent_name = "optical-interface";
}

OpticalInterface::Graph::~Graph()
{
}

bool OpticalInterface::Graph::has_data() const
{
    return (adj_list_path !=  nullptr && adj_list_path->has_data())
	|| (graph_structure_path !=  nullptr && graph_structure_path->has_data());
}

bool OpticalInterface::Graph::has_operation() const
{
    return is_set(operation)
	|| (adj_list_path !=  nullptr && adj_list_path->has_operation())
	|| (graph_structure_path !=  nullptr && graph_structure_path->has_operation());
}

std::string OpticalInterface::Graph::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graph";

    return path_buffer.str();

}

EntityPath OpticalInterface::Graph::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticalInterface::Graph::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adj-list-path")
    {
        if(adj_list_path != nullptr)
        {
            children["adj-list-path"] = adj_list_path;
        }
        else
        {
            adj_list_path = std::make_shared<OpticalInterface::Graph::AdjListPath>();
            adj_list_path->parent = this;
            children["adj-list-path"] = adj_list_path;
        }
        return children.at("adj-list-path");
    }

    if(child_yang_name == "graph-structure-path")
    {
        if(graph_structure_path != nullptr)
        {
            children["graph-structure-path"] = graph_structure_path;
        }
        else
        {
            graph_structure_path = std::make_shared<OpticalInterface::Graph::GraphStructurePath>();
            graph_structure_path->parent = this;
            children["graph-structure-path"] = graph_structure_path;
        }
        return children.at("graph-structure-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & OpticalInterface::Graph::get_children()
{
    if(children.find("adj-list-path") == children.end())
    {
        if(adj_list_path != nullptr)
        {
            children["adj-list-path"] = adj_list_path;
        }
    }

    if(children.find("graph-structure-path") == children.end())
    {
        if(graph_structure_path != nullptr)
        {
            children["graph-structure-path"] = graph_structure_path;
        }
    }

    return children;
}

void OpticalInterface::Graph::set_value(const std::string & value_path, std::string value)
{
}

OpticalInterface::Graph::AdjListPath::AdjListPath()
    :
    path{YType::str, "path"}
{
    yang_name = "adj-list-path"; yang_parent_name = "graph";
}

OpticalInterface::Graph::AdjListPath::~AdjListPath()
{
}

bool OpticalInterface::Graph::AdjListPath::has_data() const
{
    return path.is_set;
}

bool OpticalInterface::Graph::AdjListPath::has_operation() const
{
    return is_set(operation)
	|| is_set(path.operation);
}

std::string OpticalInterface::Graph::AdjListPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-list-path";

    return path_buffer.str();

}

EntityPath OpticalInterface::Graph::AdjListPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/graph/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticalInterface::Graph::AdjListPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & OpticalInterface::Graph::AdjListPath::get_children()
{
    return children;
}

void OpticalInterface::Graph::AdjListPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path")
    {
        path = value;
    }
}

OpticalInterface::Graph::GraphStructurePath::GraphStructurePath()
    :
    path{YType::str, "path"}
{
    yang_name = "graph-structure-path"; yang_parent_name = "graph";
}

OpticalInterface::Graph::GraphStructurePath::~GraphStructurePath()
{
}

bool OpticalInterface::Graph::GraphStructurePath::has_data() const
{
    return path.is_set;
}

bool OpticalInterface::Graph::GraphStructurePath::has_operation() const
{
    return is_set(operation)
	|| is_set(path.operation);
}

std::string OpticalInterface::Graph::GraphStructurePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graph-structure-path";

    return path_buffer.str();

}

EntityPath OpticalInterface::Graph::GraphStructurePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/graph/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticalInterface::Graph::GraphStructurePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & OpticalInterface::Graph::GraphStructurePath::get_children()
{
    return children;
}

void OpticalInterface::Graph::GraphStructurePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path")
    {
        path = value;
    }
}

OpticalInterface::OperationalModes::OperationalModes()
{
    yang_name = "operational-modes"; yang_parent_name = "optical-interface";
}

OpticalInterface::OperationalModes::~OperationalModes()
{
}

bool OpticalInterface::OperationalModes::has_data() const
{
    for (std::size_t index=0; index<operational_mode.size(); index++)
    {
        if(operational_mode[index]->has_data())
            return true;
    }
    return false;
}

bool OpticalInterface::OperationalModes::has_operation() const
{
    for (std::size_t index=0; index<operational_mode.size(); index++)
    {
        if(operational_mode[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OpticalInterface::OperationalModes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-modes";

    return path_buffer.str();

}

EntityPath OpticalInterface::OperationalModes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticalInterface::OperationalModes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "operational-mode")
    {
        for(auto const & c : operational_mode)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<OpticalInterface::OperationalModes::OperationalMode>();
        c->parent = this;
        operational_mode.push_back(std::move(c));
        children[segment_path] = operational_mode.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & OpticalInterface::OperationalModes::get_children()
{
    for (auto const & c : operational_mode)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void OpticalInterface::OperationalModes::set_value(const std::string & value_path, std::string value)
{
}

OpticalInterface::OperationalModes::OperationalMode::OperationalMode()
    :
    mode_id{YType::int32, "mode-id"}
    	,
    operational_mode_attributes(std::make_shared<OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes>())
{
    operational_mode_attributes->parent = this;
    children["operational-mode-attributes"] = operational_mode_attributes;

    yang_name = "operational-mode"; yang_parent_name = "operational-modes";
}

OpticalInterface::OperationalModes::OperationalMode::~OperationalMode()
{
}

bool OpticalInterface::OperationalModes::OperationalMode::has_data() const
{
    return mode_id.is_set
	|| (operational_mode_attributes !=  nullptr && operational_mode_attributes->has_data());
}

bool OpticalInterface::OperationalModes::OperationalMode::has_operation() const
{
    return is_set(operation)
	|| is_set(mode_id.operation)
	|| (operational_mode_attributes !=  nullptr && operational_mode_attributes->has_operation());
}

std::string OpticalInterface::OperationalModes::OperationalMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-mode" <<"[mode-id='" <<mode_id <<"']";

    return path_buffer.str();

}

EntityPath OpticalInterface::OperationalModes::OperationalMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/operational-modes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode_id.is_set || is_set(mode_id.operation)) leaf_name_data.push_back(mode_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticalInterface::OperationalModes::OperationalMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "operational-mode-attributes")
    {
        if(operational_mode_attributes != nullptr)
        {
            children["operational-mode-attributes"] = operational_mode_attributes;
        }
        else
        {
            operational_mode_attributes = std::make_shared<OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes>();
            operational_mode_attributes->parent = this;
            children["operational-mode-attributes"] = operational_mode_attributes;
        }
        return children.at("operational-mode-attributes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & OpticalInterface::OperationalModes::OperationalMode::get_children()
{
    if(children.find("operational-mode-attributes") == children.end())
    {
        if(operational_mode_attributes != nullptr)
        {
            children["operational-mode-attributes"] = operational_mode_attributes;
        }
    }

    return children;
}

void OpticalInterface::OperationalModes::OperationalMode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode-id")
    {
        mode_id = value;
    }
}

OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::OperationalModeAttributes()
    :
    description{YType::str, "description"},
    vendor_id{YType::str, "vendor-id"}
{
    yang_name = "operational-mode-attributes"; yang_parent_name = "operational-mode";
}

OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::~OperationalModeAttributes()
{
}

bool OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::has_data() const
{
    return description.is_set
	|| vendor_id.is_set;
}

bool OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(vendor_id.operation);
}

std::string OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-mode-attributes";

    return path_buffer.str();

}

EntityPath OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OperationalModeAttributes' in Cisco_IOS_XR_terminal_device_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vendor_id.is_set || is_set(vendor_id.operation)) leaf_name_data.push_back(vendor_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::get_children()
{
    return children;
}

void OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "vendor-id")
    {
        vendor_id = value;
    }
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterfaces()
{
    yang_name = "optical-logical-interfaces"; yang_parent_name = "optical-interface";
}

OpticalInterface::OpticalLogicalInterfaces::~OpticalLogicalInterfaces()
{
}

bool OpticalInterface::OpticalLogicalInterfaces::has_data() const
{
    for (std::size_t index=0; index<optical_logical_interface.size(); index++)
    {
        if(optical_logical_interface[index]->has_data())
            return true;
    }
    return false;
}

bool OpticalInterface::OpticalLogicalInterfaces::has_operation() const
{
    for (std::size_t index=0; index<optical_logical_interface.size(); index++)
    {
        if(optical_logical_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OpticalInterface::OpticalLogicalInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-logical-interfaces";

    return path_buffer.str();

}

EntityPath OpticalInterface::OpticalLogicalInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticalInterface::OpticalLogicalInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optical-logical-interface")
    {
        for(auto const & c : optical_logical_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface>();
        c->parent = this;
        optical_logical_interface.push_back(std::move(c));
        children[segment_path] = optical_logical_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & OpticalInterface::OpticalLogicalInterfaces::get_children()
{
    for (auto const & c : optical_logical_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void OpticalInterface::OpticalLogicalInterfaces::set_value(const std::string & value_path, std::string value)
{
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterface()
    :
    index_{YType::int32, "index"}
    	,
    optical_logical_interface_attr(std::make_shared<OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr>())
	,optical_logical_interface_logical_channel_assignments(std::make_shared<OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments>())
{
    optical_logical_interface_attr->parent = this;
    children["optical-logical-interface-attr"] = optical_logical_interface_attr;

    optical_logical_interface_logical_channel_assignments->parent = this;
    children["optical-logical-interface-logical-channel-assignments"] = optical_logical_interface_logical_channel_assignments;

    yang_name = "optical-logical-interface"; yang_parent_name = "optical-logical-interfaces";
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::~OpticalLogicalInterface()
{
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::has_data() const
{
    return index_.is_set
	|| (optical_logical_interface_attr !=  nullptr && optical_logical_interface_attr->has_data())
	|| (optical_logical_interface_logical_channel_assignments !=  nullptr && optical_logical_interface_logical_channel_assignments->has_data());
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| (optical_logical_interface_attr !=  nullptr && optical_logical_interface_attr->has_operation())
	|| (optical_logical_interface_logical_channel_assignments !=  nullptr && optical_logical_interface_logical_channel_assignments->has_operation());
}

std::string OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-logical-interface" <<"[index='" <<index_ <<"']";

    return path_buffer.str();

}

EntityPath OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/optical-logical-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optical-logical-interface-attr")
    {
        if(optical_logical_interface_attr != nullptr)
        {
            children["optical-logical-interface-attr"] = optical_logical_interface_attr;
        }
        else
        {
            optical_logical_interface_attr = std::make_shared<OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr>();
            optical_logical_interface_attr->parent = this;
            children["optical-logical-interface-attr"] = optical_logical_interface_attr;
        }
        return children.at("optical-logical-interface-attr");
    }

    if(child_yang_name == "optical-logical-interface-logical-channel-assignments")
    {
        if(optical_logical_interface_logical_channel_assignments != nullptr)
        {
            children["optical-logical-interface-logical-channel-assignments"] = optical_logical_interface_logical_channel_assignments;
        }
        else
        {
            optical_logical_interface_logical_channel_assignments = std::make_shared<OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments>();
            optical_logical_interface_logical_channel_assignments->parent = this;
            children["optical-logical-interface-logical-channel-assignments"] = optical_logical_interface_logical_channel_assignments;
        }
        return children.at("optical-logical-interface-logical-channel-assignments");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::get_children()
{
    if(children.find("optical-logical-interface-attr") == children.end())
    {
        if(optical_logical_interface_attr != nullptr)
        {
            children["optical-logical-interface-attr"] = optical_logical_interface_attr;
        }
    }

    if(children.find("optical-logical-interface-logical-channel-assignments") == children.end())
    {
        if(optical_logical_interface_logical_channel_assignments != nullptr)
        {
            children["optical-logical-interface-logical-channel-assignments"] = optical_logical_interface_logical_channel_assignments;
        }
    }

    return children;
}

void OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::OpticalLogicalInterfaceAttr()
    :
    admin_state{YType::uint32, "admin-state"},
    ingress_client_port{YType::str, "ingress-client-port"},
    ingress_physical_channel{YType::uint32, "ingress-physical-channel"},
    logical_channel_ifname{YType::str, "logical-channel-ifname"},
    logical_channel_index{YType::uint32, "logical-channel-index"},
    loopback_mode{YType::uint32, "loopback-mode"},
    protocol_type{YType::enumeration, "protocol-type"},
    trib_protocol{YType::enumeration, "trib-protocol"},
    trib_rate_class{YType::enumeration, "trib-rate-class"},
    tti_expected{YType::str, "tti-expected"},
    tti_transmit{YType::str, "tti-transmit"},
    type{YType::str, "type"}
{
    yang_name = "optical-logical-interface-attr"; yang_parent_name = "optical-logical-interface";
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::~OpticalLogicalInterfaceAttr()
{
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::has_data() const
{
    return admin_state.is_set
	|| ingress_client_port.is_set
	|| ingress_physical_channel.is_set
	|| logical_channel_ifname.is_set
	|| logical_channel_index.is_set
	|| loopback_mode.is_set
	|| protocol_type.is_set
	|| trib_protocol.is_set
	|| trib_rate_class.is_set
	|| tti_expected.is_set
	|| tti_transmit.is_set
	|| type.is_set;
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_state.operation)
	|| is_set(ingress_client_port.operation)
	|| is_set(ingress_physical_channel.operation)
	|| is_set(logical_channel_ifname.operation)
	|| is_set(logical_channel_index.operation)
	|| is_set(loopback_mode.operation)
	|| is_set(protocol_type.operation)
	|| is_set(trib_protocol.operation)
	|| is_set(trib_rate_class.operation)
	|| is_set(tti_expected.operation)
	|| is_set(tti_transmit.operation)
	|| is_set(type.operation);
}

std::string OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-logical-interface-attr";

    return path_buffer.str();

}

EntityPath OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticalLogicalInterfaceAttr' in Cisco_IOS_XR_terminal_device_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_state.is_set || is_set(admin_state.operation)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (ingress_client_port.is_set || is_set(ingress_client_port.operation)) leaf_name_data.push_back(ingress_client_port.get_name_leafdata());
    if (ingress_physical_channel.is_set || is_set(ingress_physical_channel.operation)) leaf_name_data.push_back(ingress_physical_channel.get_name_leafdata());
    if (logical_channel_ifname.is_set || is_set(logical_channel_ifname.operation)) leaf_name_data.push_back(logical_channel_ifname.get_name_leafdata());
    if (logical_channel_index.is_set || is_set(logical_channel_index.operation)) leaf_name_data.push_back(logical_channel_index.get_name_leafdata());
    if (loopback_mode.is_set || is_set(loopback_mode.operation)) leaf_name_data.push_back(loopback_mode.get_name_leafdata());
    if (protocol_type.is_set || is_set(protocol_type.operation)) leaf_name_data.push_back(protocol_type.get_name_leafdata());
    if (trib_protocol.is_set || is_set(trib_protocol.operation)) leaf_name_data.push_back(trib_protocol.get_name_leafdata());
    if (trib_rate_class.is_set || is_set(trib_rate_class.operation)) leaf_name_data.push_back(trib_rate_class.get_name_leafdata());
    if (tti_expected.is_set || is_set(tti_expected.operation)) leaf_name_data.push_back(tti_expected.get_name_leafdata());
    if (tti_transmit.is_set || is_set(tti_transmit.operation)) leaf_name_data.push_back(tti_transmit.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::get_children()
{
    return children;
}

void OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-state")
    {
        admin_state = value;
    }
    if(value_path == "ingress-client-port")
    {
        ingress_client_port = value;
    }
    if(value_path == "ingress-physical-channel")
    {
        ingress_physical_channel = value;
    }
    if(value_path == "logical-channel-ifname")
    {
        logical_channel_ifname = value;
    }
    if(value_path == "logical-channel-index")
    {
        logical_channel_index = value;
    }
    if(value_path == "loopback-mode")
    {
        loopback_mode = value;
    }
    if(value_path == "protocol-type")
    {
        protocol_type = value;
    }
    if(value_path == "trib-protocol")
    {
        trib_protocol = value;
    }
    if(value_path == "trib-rate-class")
    {
        trib_rate_class = value;
    }
    if(value_path == "tti-expected")
    {
        tti_expected = value;
    }
    if(value_path == "tti-transmit")
    {
        tti_transmit = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignments()
{
    yang_name = "optical-logical-interface-logical-channel-assignments"; yang_parent_name = "optical-logical-interface";
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::~OpticalLogicalInterfaceLogicalChannelAssignments()
{
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::has_data() const
{
    for (std::size_t index=0; index<optical_logical_interface_logical_channel_assignment.size(); index++)
    {
        if(optical_logical_interface_logical_channel_assignment[index]->has_data())
            return true;
    }
    return false;
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::has_operation() const
{
    for (std::size_t index=0; index<optical_logical_interface_logical_channel_assignment.size(); index++)
    {
        if(optical_logical_interface_logical_channel_assignment[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-logical-interface-logical-channel-assignments";

    return path_buffer.str();

}

EntityPath OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticalLogicalInterfaceLogicalChannelAssignments' in Cisco_IOS_XR_terminal_device_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optical-logical-interface-logical-channel-assignment")
    {
        for(auto const & c : optical_logical_interface_logical_channel_assignment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment>();
        c->parent = this;
        optical_logical_interface_logical_channel_assignment.push_back(std::move(c));
        children[segment_path] = optical_logical_interface_logical_channel_assignment.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::get_children()
{
    for (auto const & c : optical_logical_interface_logical_channel_assignment)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::set_value(const std::string & value_path, std::string value)
{
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignment()
    :
    index_{YType::int32, "index"}
    	,
    optical_logical_interface_logical_channel_assignment_attr(std::make_shared<OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr>())
{
    optical_logical_interface_logical_channel_assignment_attr->parent = this;
    children["optical-logical-interface-logical-channel-assignment-attr"] = optical_logical_interface_logical_channel_assignment_attr;

    yang_name = "optical-logical-interface-logical-channel-assignment"; yang_parent_name = "optical-logical-interface-logical-channel-assignments";
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::~OpticalLogicalInterfaceLogicalChannelAssignment()
{
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::has_data() const
{
    return index_.is_set
	|| (optical_logical_interface_logical_channel_assignment_attr !=  nullptr && optical_logical_interface_logical_channel_assignment_attr->has_data());
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| (optical_logical_interface_logical_channel_assignment_attr !=  nullptr && optical_logical_interface_logical_channel_assignment_attr->has_operation());
}

std::string OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-logical-interface-logical-channel-assignment" <<"[index='" <<index_ <<"']";

    return path_buffer.str();

}

EntityPath OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticalLogicalInterfaceLogicalChannelAssignment' in Cisco_IOS_XR_terminal_device_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optical-logical-interface-logical-channel-assignment-attr")
    {
        if(optical_logical_interface_logical_channel_assignment_attr != nullptr)
        {
            children["optical-logical-interface-logical-channel-assignment-attr"] = optical_logical_interface_logical_channel_assignment_attr;
        }
        else
        {
            optical_logical_interface_logical_channel_assignment_attr = std::make_shared<OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr>();
            optical_logical_interface_logical_channel_assignment_attr->parent = this;
            children["optical-logical-interface-logical-channel-assignment-attr"] = optical_logical_interface_logical_channel_assignment_attr;
        }
        return children.at("optical-logical-interface-logical-channel-assignment-attr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::get_children()
{
    if(children.find("optical-logical-interface-logical-channel-assignment-attr") == children.end())
    {
        if(optical_logical_interface_logical_channel_assignment_attr != nullptr)
        {
            children["optical-logical-interface-logical-channel-assignment-attr"] = optical_logical_interface_logical_channel_assignment_attr;
        }
    }

    return children;
}

void OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr::OpticalLogicalInterfaceLogicalChannelAssignmentAttr()
    :
    allocation{YType::uint32, "allocation"},
    assignment_type{YType::uint32, "assignment-type"},
    index_{YType::uint32, "index"},
    is_logical_link{YType::boolean, "is-logical-link"},
    logical_channel{YType::uint32, "logical-channel"},
    name{YType::str, "name"},
    optical_channel{YType::str, "optical-channel"}
{
    yang_name = "optical-logical-interface-logical-channel-assignment-attr"; yang_parent_name = "optical-logical-interface-logical-channel-assignment";
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr::~OpticalLogicalInterfaceLogicalChannelAssignmentAttr()
{
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr::has_data() const
{
    return allocation.is_set
	|| assignment_type.is_set
	|| index_.is_set
	|| is_logical_link.is_set
	|| logical_channel.is_set
	|| name.is_set
	|| optical_channel.is_set;
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(allocation.operation)
	|| is_set(assignment_type.operation)
	|| is_set(index_.operation)
	|| is_set(is_logical_link.operation)
	|| is_set(logical_channel.operation)
	|| is_set(name.operation)
	|| is_set(optical_channel.operation);
}

std::string OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-logical-interface-logical-channel-assignment-attr";

    return path_buffer.str();

}

EntityPath OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticalLogicalInterfaceLogicalChannelAssignmentAttr' in Cisco_IOS_XR_terminal_device_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocation.is_set || is_set(allocation.operation)) leaf_name_data.push_back(allocation.get_name_leafdata());
    if (assignment_type.is_set || is_set(assignment_type.operation)) leaf_name_data.push_back(assignment_type.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (is_logical_link.is_set || is_set(is_logical_link.operation)) leaf_name_data.push_back(is_logical_link.get_name_leafdata());
    if (logical_channel.is_set || is_set(logical_channel.operation)) leaf_name_data.push_back(logical_channel.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (optical_channel.is_set || is_set(optical_channel.operation)) leaf_name_data.push_back(optical_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr::get_children()
{
    return children;
}

void OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allocation")
    {
        allocation = value;
    }
    if(value_path == "assignment-type")
    {
        assignment_type = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "is-logical-link")
    {
        is_logical_link = value;
    }
    if(value_path == "logical-channel")
    {
        logical_channel = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "optical-channel")
    {
        optical_channel = value;
    }
}

const Enum::YLeaf LogicalProtocolEnum::proto_type_unknown {0, "proto-type-unknown"};
const Enum::YLeaf LogicalProtocolEnum::proto_type_ethernet {1, "proto-type-ethernet"};
const Enum::YLeaf LogicalProtocolEnum::proto_type_otn {2, "proto-type-otn"};

const Enum::YLeaf TribProtocolEnum::trib_proto_type_unknown {0, "trib-proto-type-unknown"};
const Enum::YLeaf TribProtocolEnum::trib_proto_type1ge {1, "trib-proto-type1ge"};
const Enum::YLeaf TribProtocolEnum::trib_proto_type_oc48 {2, "trib-proto-type-oc48"};
const Enum::YLeaf TribProtocolEnum::trib_proto_type_stm16 {3, "trib-proto-type-stm16"};
const Enum::YLeaf TribProtocolEnum::trib_proto_type10gelan {4, "trib-proto-type10gelan"};
const Enum::YLeaf TribProtocolEnum::trib_proto_type10gewan {5, "trib-proto-type10gewan"};
const Enum::YLeaf TribProtocolEnum::trib_proto_type_oc192 {6, "trib-proto-type-oc192"};
const Enum::YLeaf TribProtocolEnum::trib_proto_type_stm64 {7, "trib-proto-type-stm64"};
const Enum::YLeaf TribProtocolEnum::trib_proto_type_otu2 {8, "trib-proto-type-otu2"};
const Enum::YLeaf TribProtocolEnum::trib_proto_type_otu2e {9, "trib-proto-type-otu2e"};
const Enum::YLeaf TribProtocolEnum::trib_proto_type_otu1e {10, "trib-proto-type-otu1e"};
const Enum::YLeaf TribProtocolEnum::trib_proto_type_odu2 {11, "trib-proto-type-odu2"};
const Enum::YLeaf TribProtocolEnum::trib_proto_type_odu2e {12, "trib-proto-type-odu2e"};
const Enum::YLeaf TribProtocolEnum::trib_proto_type40ge {13, "trib-proto-type40ge"};
const Enum::YLeaf TribProtocolEnum::trib_proto_type_oc768 {14, "trib-proto-type-oc768"};
const Enum::YLeaf TribProtocolEnum::trib_proto_type_stm256 {15, "trib-proto-type-stm256"};
const Enum::YLeaf TribProtocolEnum::trib_proto_type_otu3 {16, "trib-proto-type-otu3"};
const Enum::YLeaf TribProtocolEnum::trib_proto_type_odu3 {17, "trib-proto-type-odu3"};
const Enum::YLeaf TribProtocolEnum::trib_proto_type100ge {18, "trib-proto-type100ge"};
const Enum::YLeaf TribProtocolEnum::trib_proto_type100g_mlg {19, "trib-proto-type100g-mlg"};
const Enum::YLeaf TribProtocolEnum::trib_proto_type_otu4 {20, "trib-proto-type-otu4"};
const Enum::YLeaf TribProtocolEnum::trib_proto_type_otu_cn {21, "trib-proto-type-otu-cn"};
const Enum::YLeaf TribProtocolEnum::trib_proto_type_odu4 {22, "trib-proto-type-odu4"};

const Enum::YLeaf TribRateClassEnum::trib_rate_unknown {0, "trib-rate-unknown"};
const Enum::YLeaf TribRateClassEnum::trib_rate1g {1, "trib-rate1g"};
const Enum::YLeaf TribRateClassEnum::trib_rate25g {2, "trib-rate25g"};
const Enum::YLeaf TribRateClassEnum::trib_rate10g {3, "trib-rate10g"};
const Enum::YLeaf TribRateClassEnum::trib_rate40g {4, "trib-rate40g"};
const Enum::YLeaf TribRateClassEnum::trib_rate100g {5, "trib-rate100g"};


}
}
