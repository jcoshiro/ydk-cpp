
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_3.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_bundlemgr_oper {

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection::Connection()
    :
    iccp_config_connect_errors{YType::uint32, "iccp-config-connect-errors"},
    iccp_count_connect_errors{YType::uint32, "iccp-count-connect-errors"},
    iccp_invalid_connects{YType::uint32, "iccp-invalid-connects"},
    iccp_invalid_disconnects{YType::uint32, "iccp-invalid-disconnects"},
    received_connects{YType::uint32, "received-connects"},
    received_disconnects{YType::uint32, "received-disconnects"},
    received_wrong_versions{YType::uint32, "received-wrong-versions"},
    sent_connects{YType::uint32, "sent-connects"},
    sent_disconnects{YType::uint32, "sent-disconnects"},
    sent_wrong_versions{YType::uint32, "sent-wrong-versions"}
{

    yang_name = "connection"; yang_parent_name = "iccp-group-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection::~Connection()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection::has_data() const
{
    return iccp_config_connect_errors.is_set
	|| iccp_count_connect_errors.is_set
	|| iccp_invalid_connects.is_set
	|| iccp_invalid_disconnects.is_set
	|| received_connects.is_set
	|| received_disconnects.is_set
	|| received_wrong_versions.is_set
	|| sent_connects.is_set
	|| sent_disconnects.is_set
	|| sent_wrong_versions.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_config_connect_errors.yfilter)
	|| ydk::is_set(iccp_count_connect_errors.yfilter)
	|| ydk::is_set(iccp_invalid_connects.yfilter)
	|| ydk::is_set(iccp_invalid_disconnects.yfilter)
	|| ydk::is_set(received_connects.yfilter)
	|| ydk::is_set(received_disconnects.yfilter)
	|| ydk::is_set(received_wrong_versions.yfilter)
	|| ydk::is_set(sent_connects.yfilter)
	|| ydk::is_set(sent_disconnects.yfilter)
	|| ydk::is_set(sent_wrong_versions.yfilter);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_config_connect_errors.is_set || is_set(iccp_config_connect_errors.yfilter)) leaf_name_data.push_back(iccp_config_connect_errors.get_name_leafdata());
    if (iccp_count_connect_errors.is_set || is_set(iccp_count_connect_errors.yfilter)) leaf_name_data.push_back(iccp_count_connect_errors.get_name_leafdata());
    if (iccp_invalid_connects.is_set || is_set(iccp_invalid_connects.yfilter)) leaf_name_data.push_back(iccp_invalid_connects.get_name_leafdata());
    if (iccp_invalid_disconnects.is_set || is_set(iccp_invalid_disconnects.yfilter)) leaf_name_data.push_back(iccp_invalid_disconnects.get_name_leafdata());
    if (received_connects.is_set || is_set(received_connects.yfilter)) leaf_name_data.push_back(received_connects.get_name_leafdata());
    if (received_disconnects.is_set || is_set(received_disconnects.yfilter)) leaf_name_data.push_back(received_disconnects.get_name_leafdata());
    if (received_wrong_versions.is_set || is_set(received_wrong_versions.yfilter)) leaf_name_data.push_back(received_wrong_versions.get_name_leafdata());
    if (sent_connects.is_set || is_set(sent_connects.yfilter)) leaf_name_data.push_back(sent_connects.get_name_leafdata());
    if (sent_disconnects.is_set || is_set(sent_disconnects.yfilter)) leaf_name_data.push_back(sent_disconnects.get_name_leafdata());
    if (sent_wrong_versions.is_set || is_set(sent_wrong_versions.yfilter)) leaf_name_data.push_back(sent_wrong_versions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-config-connect-errors")
    {
        iccp_config_connect_errors = value;
        iccp_config_connect_errors.value_namespace = name_space;
        iccp_config_connect_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-count-connect-errors")
    {
        iccp_count_connect_errors = value;
        iccp_count_connect_errors.value_namespace = name_space;
        iccp_count_connect_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-invalid-connects")
    {
        iccp_invalid_connects = value;
        iccp_invalid_connects.value_namespace = name_space;
        iccp_invalid_connects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-invalid-disconnects")
    {
        iccp_invalid_disconnects = value;
        iccp_invalid_disconnects.value_namespace = name_space;
        iccp_invalid_disconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-connects")
    {
        received_connects = value;
        received_connects.value_namespace = name_space;
        received_connects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-disconnects")
    {
        received_disconnects = value;
        received_disconnects.value_namespace = name_space;
        received_disconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-wrong-versions")
    {
        received_wrong_versions = value;
        received_wrong_versions.value_namespace = name_space;
        received_wrong_versions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-connects")
    {
        sent_connects = value;
        sent_connects.value_namespace = name_space;
        sent_connects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-disconnects")
    {
        sent_disconnects = value;
        sent_disconnects.value_namespace = name_space;
        sent_disconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-wrong-versions")
    {
        sent_wrong_versions = value;
        sent_wrong_versions.value_namespace = name_space;
        sent_wrong_versions.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-config-connect-errors")
    {
        iccp_config_connect_errors.yfilter = yfilter;
    }
    if(value_path == "iccp-count-connect-errors")
    {
        iccp_count_connect_errors.yfilter = yfilter;
    }
    if(value_path == "iccp-invalid-connects")
    {
        iccp_invalid_connects.yfilter = yfilter;
    }
    if(value_path == "iccp-invalid-disconnects")
    {
        iccp_invalid_disconnects.yfilter = yfilter;
    }
    if(value_path == "received-connects")
    {
        received_connects.yfilter = yfilter;
    }
    if(value_path == "received-disconnects")
    {
        received_disconnects.yfilter = yfilter;
    }
    if(value_path == "received-wrong-versions")
    {
        received_wrong_versions.yfilter = yfilter;
    }
    if(value_path == "sent-connects")
    {
        sent_connects.yfilter = yfilter;
    }
    if(value_path == "sent-disconnects")
    {
        sent_disconnects.yfilter = yfilter;
    }
    if(value_path == "sent-wrong-versions")
    {
        sent_wrong_versions.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-config-connect-errors" || name == "iccp-count-connect-errors" || name == "iccp-invalid-connects" || name == "iccp-invalid-disconnects" || name == "received-connects" || name == "received-disconnects" || name == "received-wrong-versions" || name == "sent-connects" || name == "sent-disconnects" || name == "sent-wrong-versions")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents::IccpEvents()
    :
    configured_clear{YType::uint32, "configured-clear"},
    configured_set{YType::uint32, "configured-set"},
    member_status_down{YType::uint32, "member-status-down"},
    member_status_up{YType::uint32, "member-status-up"},
    pe_isolated{YType::uint32, "pe-isolated"},
    pe_isolated_clear{YType::uint32, "pe-isolated-clear"},
    reachability_cleared{YType::uint32, "reachability-cleared"},
    reachability_set{YType::uint32, "reachability-set"},
    transport_down{YType::uint32, "transport-down"},
    transport_unavailable{YType::uint32, "transport-unavailable"},
    transport_up{YType::uint32, "transport-up"}
{

    yang_name = "iccp-events"; yang_parent_name = "iccp-group-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents::~IccpEvents()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents::has_data() const
{
    return configured_clear.is_set
	|| configured_set.is_set
	|| member_status_down.is_set
	|| member_status_up.is_set
	|| pe_isolated.is_set
	|| pe_isolated_clear.is_set
	|| reachability_cleared.is_set
	|| reachability_set.is_set
	|| transport_down.is_set
	|| transport_unavailable.is_set
	|| transport_up.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configured_clear.yfilter)
	|| ydk::is_set(configured_set.yfilter)
	|| ydk::is_set(member_status_down.yfilter)
	|| ydk::is_set(member_status_up.yfilter)
	|| ydk::is_set(pe_isolated.yfilter)
	|| ydk::is_set(pe_isolated_clear.yfilter)
	|| ydk::is_set(reachability_cleared.yfilter)
	|| ydk::is_set(reachability_set.yfilter)
	|| ydk::is_set(transport_down.yfilter)
	|| ydk::is_set(transport_unavailable.yfilter)
	|| ydk::is_set(transport_up.yfilter);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_clear.is_set || is_set(configured_clear.yfilter)) leaf_name_data.push_back(configured_clear.get_name_leafdata());
    if (configured_set.is_set || is_set(configured_set.yfilter)) leaf_name_data.push_back(configured_set.get_name_leafdata());
    if (member_status_down.is_set || is_set(member_status_down.yfilter)) leaf_name_data.push_back(member_status_down.get_name_leafdata());
    if (member_status_up.is_set || is_set(member_status_up.yfilter)) leaf_name_data.push_back(member_status_up.get_name_leafdata());
    if (pe_isolated.is_set || is_set(pe_isolated.yfilter)) leaf_name_data.push_back(pe_isolated.get_name_leafdata());
    if (pe_isolated_clear.is_set || is_set(pe_isolated_clear.yfilter)) leaf_name_data.push_back(pe_isolated_clear.get_name_leafdata());
    if (reachability_cleared.is_set || is_set(reachability_cleared.yfilter)) leaf_name_data.push_back(reachability_cleared.get_name_leafdata());
    if (reachability_set.is_set || is_set(reachability_set.yfilter)) leaf_name_data.push_back(reachability_set.get_name_leafdata());
    if (transport_down.is_set || is_set(transport_down.yfilter)) leaf_name_data.push_back(transport_down.get_name_leafdata());
    if (transport_unavailable.is_set || is_set(transport_unavailable.yfilter)) leaf_name_data.push_back(transport_unavailable.get_name_leafdata());
    if (transport_up.is_set || is_set(transport_up.yfilter)) leaf_name_data.push_back(transport_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-clear")
    {
        configured_clear = value;
        configured_clear.value_namespace = name_space;
        configured_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-set")
    {
        configured_set = value;
        configured_set.value_namespace = name_space;
        configured_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-status-down")
    {
        member_status_down = value;
        member_status_down.value_namespace = name_space;
        member_status_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-status-up")
    {
        member_status_up = value;
        member_status_up.value_namespace = name_space;
        member_status_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pe-isolated")
    {
        pe_isolated = value;
        pe_isolated.value_namespace = name_space;
        pe_isolated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pe-isolated-clear")
    {
        pe_isolated_clear = value;
        pe_isolated_clear.value_namespace = name_space;
        pe_isolated_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability-cleared")
    {
        reachability_cleared = value;
        reachability_cleared.value_namespace = name_space;
        reachability_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability-set")
    {
        reachability_set = value;
        reachability_set.value_namespace = name_space;
        reachability_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-down")
    {
        transport_down = value;
        transport_down.value_namespace = name_space;
        transport_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-unavailable")
    {
        transport_unavailable = value;
        transport_unavailable.value_namespace = name_space;
        transport_unavailable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-up")
    {
        transport_up = value;
        transport_up.value_namespace = name_space;
        transport_up.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-clear")
    {
        configured_clear.yfilter = yfilter;
    }
    if(value_path == "configured-set")
    {
        configured_set.yfilter = yfilter;
    }
    if(value_path == "member-status-down")
    {
        member_status_down.yfilter = yfilter;
    }
    if(value_path == "member-status-up")
    {
        member_status_up.yfilter = yfilter;
    }
    if(value_path == "pe-isolated")
    {
        pe_isolated.yfilter = yfilter;
    }
    if(value_path == "pe-isolated-clear")
    {
        pe_isolated_clear.yfilter = yfilter;
    }
    if(value_path == "reachability-cleared")
    {
        reachability_cleared.yfilter = yfilter;
    }
    if(value_path == "reachability-set")
    {
        reachability_set.yfilter = yfilter;
    }
    if(value_path == "transport-down")
    {
        transport_down.yfilter = yfilter;
    }
    if(value_path == "transport-unavailable")
    {
        transport_unavailable.yfilter = yfilter;
    }
    if(value_path == "transport-up")
    {
        transport_up.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-clear" || name == "configured-set" || name == "member-status-down" || name == "member-status-up" || name == "pe-isolated" || name == "pe-isolated-clear" || name == "reachability-cleared" || name == "reachability-set" || name == "transport-down" || name == "transport-unavailable" || name == "transport-up")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages::IccpMessages()
    :
    received_messages{YType::uint32, "received-messages"},
    sent_buffer_messages{YType::uint32, "sent-buffer-messages"},
    sent_messages{YType::uint32, "sent-messages"},
    transmission_errors{YType::uint32, "transmission-errors"}
{

    yang_name = "iccp-messages"; yang_parent_name = "iccp-group-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages::~IccpMessages()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages::has_data() const
{
    return received_messages.is_set
	|| sent_buffer_messages.is_set
	|| sent_messages.is_set
	|| transmission_errors.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_messages.yfilter)
	|| ydk::is_set(sent_buffer_messages.yfilter)
	|| ydk::is_set(sent_messages.yfilter)
	|| ydk::is_set(transmission_errors.yfilter);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_messages.is_set || is_set(received_messages.yfilter)) leaf_name_data.push_back(received_messages.get_name_leafdata());
    if (sent_buffer_messages.is_set || is_set(sent_buffer_messages.yfilter)) leaf_name_data.push_back(sent_buffer_messages.get_name_leafdata());
    if (sent_messages.is_set || is_set(sent_messages.yfilter)) leaf_name_data.push_back(sent_messages.get_name_leafdata());
    if (transmission_errors.is_set || is_set(transmission_errors.yfilter)) leaf_name_data.push_back(transmission_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-messages")
    {
        received_messages = value;
        received_messages.value_namespace = name_space;
        received_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-buffer-messages")
    {
        sent_buffer_messages = value;
        sent_buffer_messages.value_namespace = name_space;
        sent_buffer_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-messages")
    {
        sent_messages = value;
        sent_messages.value_namespace = name_space;
        sent_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmission-errors")
    {
        transmission_errors = value;
        transmission_errors.value_namespace = name_space;
        transmission_errors.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-messages")
    {
        received_messages.yfilter = yfilter;
    }
    if(value_path == "sent-buffer-messages")
    {
        sent_buffer_messages.yfilter = yfilter;
    }
    if(value_path == "sent-messages")
    {
        sent_messages.yfilter = yfilter;
    }
    if(value_path == "transmission-errors")
    {
        transmission_errors.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-messages" || name == "sent-buffer-messages" || name == "sent-messages" || name == "transmission-errors")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs::InvalidTlVs()
    :
    incorrect_length{YType::uint32, "incorrect-length"},
    invalid_data{YType::uint32, "invalid-data"},
    invalid_type{YType::uint32, "invalid-type"},
    unknown_bundle{YType::uint32, "unknown-bundle"},
    unknown_port{YType::uint32, "unknown-port"}
{

    yang_name = "invalid-tl-vs"; yang_parent_name = "iccp-group-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs::~InvalidTlVs()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs::has_data() const
{
    return incorrect_length.is_set
	|| invalid_data.is_set
	|| invalid_type.is_set
	|| unknown_bundle.is_set
	|| unknown_port.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incorrect_length.yfilter)
	|| ydk::is_set(invalid_data.yfilter)
	|| ydk::is_set(invalid_type.yfilter)
	|| ydk::is_set(unknown_bundle.yfilter)
	|| ydk::is_set(unknown_port.yfilter);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid-tl-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incorrect_length.is_set || is_set(incorrect_length.yfilter)) leaf_name_data.push_back(incorrect_length.get_name_leafdata());
    if (invalid_data.is_set || is_set(invalid_data.yfilter)) leaf_name_data.push_back(invalid_data.get_name_leafdata());
    if (invalid_type.is_set || is_set(invalid_type.yfilter)) leaf_name_data.push_back(invalid_type.get_name_leafdata());
    if (unknown_bundle.is_set || is_set(unknown_bundle.yfilter)) leaf_name_data.push_back(unknown_bundle.get_name_leafdata());
    if (unknown_port.is_set || is_set(unknown_port.yfilter)) leaf_name_data.push_back(unknown_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incorrect-length")
    {
        incorrect_length = value;
        incorrect_length.value_namespace = name_space;
        incorrect_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-data")
    {
        invalid_data = value;
        invalid_data.value_namespace = name_space;
        invalid_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-type")
    {
        invalid_type = value;
        invalid_type.value_namespace = name_space;
        invalid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-bundle")
    {
        unknown_bundle = value;
        unknown_bundle.value_namespace = name_space;
        unknown_bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-port")
    {
        unknown_port = value;
        unknown_port.value_namespace = name_space;
        unknown_port.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incorrect-length")
    {
        incorrect_length.yfilter = yfilter;
    }
    if(value_path == "invalid-data")
    {
        invalid_data.yfilter = yfilter;
    }
    if(value_path == "invalid-type")
    {
        invalid_type.yfilter = yfilter;
    }
    if(value_path == "unknown-bundle")
    {
        unknown_bundle.yfilter = yfilter;
    }
    if(value_path == "unknown-port")
    {
        unknown_port.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incorrect-length" || name == "invalid-data" || name == "invalid-type" || name == "unknown-bundle" || name == "unknown-port")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs::TlVs()
    :
    received_config{YType::uint32, "received-config"},
    received_config_sync_requests{YType::uint32, "received-config-sync-requests"},
    received_na_ks{YType::uint32, "received-na-ks"},
    received_solicited_sync_data{YType::uint32, "received-solicited-sync-data"},
    received_state{YType::uint32, "received-state"},
    received_state_sync_requests{YType::uint32, "received-state-sync-requests"},
    received_sync_requests{YType::uint32, "received-sync-requests"},
    received_unsolicited_sync_data{YType::uint32, "received-unsolicited-sync-data"},
    sent_config{YType::uint32, "sent-config"},
    sent_config_sync_requests{YType::uint32, "sent-config-sync-requests"},
    sent_na_ks{YType::uint32, "sent-na-ks"},
    sent_solicited_sync_data{YType::uint32, "sent-solicited-sync-data"},
    sent_state{YType::uint32, "sent-state"},
    sent_state_sync_requests{YType::uint32, "sent-state-sync-requests"},
    sent_sync_requests{YType::uint32, "sent-sync-requests"},
    sent_unsolicited_sync_data{YType::uint32, "sent-unsolicited-sync-data"}
{

    yang_name = "tl-vs"; yang_parent_name = "iccp-group-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs::~TlVs()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs::has_data() const
{
    return received_config.is_set
	|| received_config_sync_requests.is_set
	|| received_na_ks.is_set
	|| received_solicited_sync_data.is_set
	|| received_state.is_set
	|| received_state_sync_requests.is_set
	|| received_sync_requests.is_set
	|| received_unsolicited_sync_data.is_set
	|| sent_config.is_set
	|| sent_config_sync_requests.is_set
	|| sent_na_ks.is_set
	|| sent_solicited_sync_data.is_set
	|| sent_state.is_set
	|| sent_state_sync_requests.is_set
	|| sent_sync_requests.is_set
	|| sent_unsolicited_sync_data.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_config.yfilter)
	|| ydk::is_set(received_config_sync_requests.yfilter)
	|| ydk::is_set(received_na_ks.yfilter)
	|| ydk::is_set(received_solicited_sync_data.yfilter)
	|| ydk::is_set(received_state.yfilter)
	|| ydk::is_set(received_state_sync_requests.yfilter)
	|| ydk::is_set(received_sync_requests.yfilter)
	|| ydk::is_set(received_unsolicited_sync_data.yfilter)
	|| ydk::is_set(sent_config.yfilter)
	|| ydk::is_set(sent_config_sync_requests.yfilter)
	|| ydk::is_set(sent_na_ks.yfilter)
	|| ydk::is_set(sent_solicited_sync_data.yfilter)
	|| ydk::is_set(sent_state.yfilter)
	|| ydk::is_set(sent_state_sync_requests.yfilter)
	|| ydk::is_set(sent_sync_requests.yfilter)
	|| ydk::is_set(sent_unsolicited_sync_data.yfilter);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tl-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_config.is_set || is_set(received_config.yfilter)) leaf_name_data.push_back(received_config.get_name_leafdata());
    if (received_config_sync_requests.is_set || is_set(received_config_sync_requests.yfilter)) leaf_name_data.push_back(received_config_sync_requests.get_name_leafdata());
    if (received_na_ks.is_set || is_set(received_na_ks.yfilter)) leaf_name_data.push_back(received_na_ks.get_name_leafdata());
    if (received_solicited_sync_data.is_set || is_set(received_solicited_sync_data.yfilter)) leaf_name_data.push_back(received_solicited_sync_data.get_name_leafdata());
    if (received_state.is_set || is_set(received_state.yfilter)) leaf_name_data.push_back(received_state.get_name_leafdata());
    if (received_state_sync_requests.is_set || is_set(received_state_sync_requests.yfilter)) leaf_name_data.push_back(received_state_sync_requests.get_name_leafdata());
    if (received_sync_requests.is_set || is_set(received_sync_requests.yfilter)) leaf_name_data.push_back(received_sync_requests.get_name_leafdata());
    if (received_unsolicited_sync_data.is_set || is_set(received_unsolicited_sync_data.yfilter)) leaf_name_data.push_back(received_unsolicited_sync_data.get_name_leafdata());
    if (sent_config.is_set || is_set(sent_config.yfilter)) leaf_name_data.push_back(sent_config.get_name_leafdata());
    if (sent_config_sync_requests.is_set || is_set(sent_config_sync_requests.yfilter)) leaf_name_data.push_back(sent_config_sync_requests.get_name_leafdata());
    if (sent_na_ks.is_set || is_set(sent_na_ks.yfilter)) leaf_name_data.push_back(sent_na_ks.get_name_leafdata());
    if (sent_solicited_sync_data.is_set || is_set(sent_solicited_sync_data.yfilter)) leaf_name_data.push_back(sent_solicited_sync_data.get_name_leafdata());
    if (sent_state.is_set || is_set(sent_state.yfilter)) leaf_name_data.push_back(sent_state.get_name_leafdata());
    if (sent_state_sync_requests.is_set || is_set(sent_state_sync_requests.yfilter)) leaf_name_data.push_back(sent_state_sync_requests.get_name_leafdata());
    if (sent_sync_requests.is_set || is_set(sent_sync_requests.yfilter)) leaf_name_data.push_back(sent_sync_requests.get_name_leafdata());
    if (sent_unsolicited_sync_data.is_set || is_set(sent_unsolicited_sync_data.yfilter)) leaf_name_data.push_back(sent_unsolicited_sync_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-config")
    {
        received_config = value;
        received_config.value_namespace = name_space;
        received_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-config-sync-requests")
    {
        received_config_sync_requests = value;
        received_config_sync_requests.value_namespace = name_space;
        received_config_sync_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-na-ks")
    {
        received_na_ks = value;
        received_na_ks.value_namespace = name_space;
        received_na_ks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-solicited-sync-data")
    {
        received_solicited_sync_data = value;
        received_solicited_sync_data.value_namespace = name_space;
        received_solicited_sync_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-state")
    {
        received_state = value;
        received_state.value_namespace = name_space;
        received_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-state-sync-requests")
    {
        received_state_sync_requests = value;
        received_state_sync_requests.value_namespace = name_space;
        received_state_sync_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-sync-requests")
    {
        received_sync_requests = value;
        received_sync_requests.value_namespace = name_space;
        received_sync_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-unsolicited-sync-data")
    {
        received_unsolicited_sync_data = value;
        received_unsolicited_sync_data.value_namespace = name_space;
        received_unsolicited_sync_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-config")
    {
        sent_config = value;
        sent_config.value_namespace = name_space;
        sent_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-config-sync-requests")
    {
        sent_config_sync_requests = value;
        sent_config_sync_requests.value_namespace = name_space;
        sent_config_sync_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-na-ks")
    {
        sent_na_ks = value;
        sent_na_ks.value_namespace = name_space;
        sent_na_ks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-solicited-sync-data")
    {
        sent_solicited_sync_data = value;
        sent_solicited_sync_data.value_namespace = name_space;
        sent_solicited_sync_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state")
    {
        sent_state = value;
        sent_state.value_namespace = name_space;
        sent_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state-sync-requests")
    {
        sent_state_sync_requests = value;
        sent_state_sync_requests.value_namespace = name_space;
        sent_state_sync_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-sync-requests")
    {
        sent_sync_requests = value;
        sent_sync_requests.value_namespace = name_space;
        sent_sync_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-unsolicited-sync-data")
    {
        sent_unsolicited_sync_data = value;
        sent_unsolicited_sync_data.value_namespace = name_space;
        sent_unsolicited_sync_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-config")
    {
        received_config.yfilter = yfilter;
    }
    if(value_path == "received-config-sync-requests")
    {
        received_config_sync_requests.yfilter = yfilter;
    }
    if(value_path == "received-na-ks")
    {
        received_na_ks.yfilter = yfilter;
    }
    if(value_path == "received-solicited-sync-data")
    {
        received_solicited_sync_data.yfilter = yfilter;
    }
    if(value_path == "received-state")
    {
        received_state.yfilter = yfilter;
    }
    if(value_path == "received-state-sync-requests")
    {
        received_state_sync_requests.yfilter = yfilter;
    }
    if(value_path == "received-sync-requests")
    {
        received_sync_requests.yfilter = yfilter;
    }
    if(value_path == "received-unsolicited-sync-data")
    {
        received_unsolicited_sync_data.yfilter = yfilter;
    }
    if(value_path == "sent-config")
    {
        sent_config.yfilter = yfilter;
    }
    if(value_path == "sent-config-sync-requests")
    {
        sent_config_sync_requests.yfilter = yfilter;
    }
    if(value_path == "sent-na-ks")
    {
        sent_na_ks.yfilter = yfilter;
    }
    if(value_path == "sent-solicited-sync-data")
    {
        sent_solicited_sync_data.yfilter = yfilter;
    }
    if(value_path == "sent-state")
    {
        sent_state.yfilter = yfilter;
    }
    if(value_path == "sent-state-sync-requests")
    {
        sent_state_sync_requests.yfilter = yfilter;
    }
    if(value_path == "sent-sync-requests")
    {
        sent_sync_requests.yfilter = yfilter;
    }
    if(value_path == "sent-unsolicited-sync-data")
    {
        sent_unsolicited_sync_data.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-config" || name == "received-config-sync-requests" || name == "received-na-ks" || name == "received-solicited-sync-data" || name == "received-state" || name == "received-state-sync-requests" || name == "received-sync-requests" || name == "received-unsolicited-sync-data" || name == "sent-config" || name == "sent-config-sync-requests" || name == "sent-na-ks" || name == "sent-solicited-sync-data" || name == "sent-state" || name == "sent-state-sync-requests" || name == "sent-sync-requests" || name == "sent-unsolicited-sync-data")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupItem()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"}
    	,
    iccp_group_counters(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters>())
{
    iccp_group_counters->parent = this;

    yang_name = "iccp-group-item"; yang_parent_name = "iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::~IccpGroupItem()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::has_data() const
{
    return iccp_group_id.is_set
	|| (iccp_group_counters !=  nullptr && iccp_group_counters->has_data());
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| (iccp_group_counters !=  nullptr && iccp_group_counters->has_operation());
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group-counters")
    {
        if(iccp_group_counters == nullptr)
        {
            iccp_group_counters = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters>();
        }
        return iccp_group_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(iccp_group_counters != nullptr)
    {
        children["iccp-group-counters"] = iccp_group_counters;
    }

    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-counters" || name == "iccp-group-id")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpGroupCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    connection(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection>())
	,iccp_events(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents>())
	,iccp_messages(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages>())
	,invalid_tl_vs(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs>())
	,tl_vs(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs>())
{
    connection->parent = this;
    iccp_events->parent = this;
    iccp_messages->parent = this;
    invalid_tl_vs->parent = this;
    tl_vs->parent = this;

    yang_name = "iccp-group-counters"; yang_parent_name = "iccp-group-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::~IccpGroupCounters()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| time_since_cleared.is_set
	|| (connection !=  nullptr && connection->has_data())
	|| (iccp_events !=  nullptr && iccp_events->has_data())
	|| (iccp_messages !=  nullptr && iccp_messages->has_data())
	|| (invalid_tl_vs !=  nullptr && invalid_tl_vs->has_data())
	|| (tl_vs !=  nullptr && tl_vs->has_data());
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(last_unexpected_event.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (connection !=  nullptr && connection->has_operation())
	|| (iccp_events !=  nullptr && iccp_events->has_operation())
	|| (iccp_messages !=  nullptr && iccp_messages->has_operation())
	|| (invalid_tl_vs !=  nullptr && invalid_tl_vs->has_operation())
	|| (tl_vs !=  nullptr && tl_vs->has_operation());
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.yfilter)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connection")
    {
        if(connection == nullptr)
        {
            connection = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection>();
        }
        return connection;
    }

    if(child_yang_name == "iccp-events")
    {
        if(iccp_events == nullptr)
        {
            iccp_events = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents>();
        }
        return iccp_events;
    }

    if(child_yang_name == "iccp-messages")
    {
        if(iccp_messages == nullptr)
        {
            iccp_messages = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages>();
        }
        return iccp_messages;
    }

    if(child_yang_name == "invalid-tl-vs")
    {
        if(invalid_tl_vs == nullptr)
        {
            invalid_tl_vs = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs>();
        }
        return invalid_tl_vs;
    }

    if(child_yang_name == "tl-vs")
    {
        if(tl_vs == nullptr)
        {
            tl_vs = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs>();
        }
        return tl_vs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connection != nullptr)
    {
        children["connection"] = connection;
    }

    if(iccp_events != nullptr)
    {
        children["iccp-events"] = iccp_events;
    }

    if(iccp_messages != nullptr)
    {
        children["iccp-messages"] = iccp_messages;
    }

    if(invalid_tl_vs != nullptr)
    {
        children["invalid-tl-vs"] = invalid_tl_vs;
    }

    if(tl_vs != nullptr)
    {
        children["tl-vs"] = tl_vs;
    }

    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
        last_unexpected_event.value_namespace = name_space;
        last_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection" || name == "iccp-events" || name == "iccp-messages" || name == "invalid-tl-vs" || name == "tl-vs" || name == "last-time-cleared" || name == "last-unexpected-event" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection::Connection()
    :
    iccp_config_connect_errors{YType::uint32, "iccp-config-connect-errors"},
    iccp_count_connect_errors{YType::uint32, "iccp-count-connect-errors"},
    iccp_invalid_connects{YType::uint32, "iccp-invalid-connects"},
    iccp_invalid_disconnects{YType::uint32, "iccp-invalid-disconnects"},
    received_connects{YType::uint32, "received-connects"},
    received_disconnects{YType::uint32, "received-disconnects"},
    received_wrong_versions{YType::uint32, "received-wrong-versions"},
    sent_connects{YType::uint32, "sent-connects"},
    sent_disconnects{YType::uint32, "sent-disconnects"},
    sent_wrong_versions{YType::uint32, "sent-wrong-versions"}
{

    yang_name = "connection"; yang_parent_name = "iccp-group-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection::~Connection()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection::has_data() const
{
    return iccp_config_connect_errors.is_set
	|| iccp_count_connect_errors.is_set
	|| iccp_invalid_connects.is_set
	|| iccp_invalid_disconnects.is_set
	|| received_connects.is_set
	|| received_disconnects.is_set
	|| received_wrong_versions.is_set
	|| sent_connects.is_set
	|| sent_disconnects.is_set
	|| sent_wrong_versions.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_config_connect_errors.yfilter)
	|| ydk::is_set(iccp_count_connect_errors.yfilter)
	|| ydk::is_set(iccp_invalid_connects.yfilter)
	|| ydk::is_set(iccp_invalid_disconnects.yfilter)
	|| ydk::is_set(received_connects.yfilter)
	|| ydk::is_set(received_disconnects.yfilter)
	|| ydk::is_set(received_wrong_versions.yfilter)
	|| ydk::is_set(sent_connects.yfilter)
	|| ydk::is_set(sent_disconnects.yfilter)
	|| ydk::is_set(sent_wrong_versions.yfilter);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_config_connect_errors.is_set || is_set(iccp_config_connect_errors.yfilter)) leaf_name_data.push_back(iccp_config_connect_errors.get_name_leafdata());
    if (iccp_count_connect_errors.is_set || is_set(iccp_count_connect_errors.yfilter)) leaf_name_data.push_back(iccp_count_connect_errors.get_name_leafdata());
    if (iccp_invalid_connects.is_set || is_set(iccp_invalid_connects.yfilter)) leaf_name_data.push_back(iccp_invalid_connects.get_name_leafdata());
    if (iccp_invalid_disconnects.is_set || is_set(iccp_invalid_disconnects.yfilter)) leaf_name_data.push_back(iccp_invalid_disconnects.get_name_leafdata());
    if (received_connects.is_set || is_set(received_connects.yfilter)) leaf_name_data.push_back(received_connects.get_name_leafdata());
    if (received_disconnects.is_set || is_set(received_disconnects.yfilter)) leaf_name_data.push_back(received_disconnects.get_name_leafdata());
    if (received_wrong_versions.is_set || is_set(received_wrong_versions.yfilter)) leaf_name_data.push_back(received_wrong_versions.get_name_leafdata());
    if (sent_connects.is_set || is_set(sent_connects.yfilter)) leaf_name_data.push_back(sent_connects.get_name_leafdata());
    if (sent_disconnects.is_set || is_set(sent_disconnects.yfilter)) leaf_name_data.push_back(sent_disconnects.get_name_leafdata());
    if (sent_wrong_versions.is_set || is_set(sent_wrong_versions.yfilter)) leaf_name_data.push_back(sent_wrong_versions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-config-connect-errors")
    {
        iccp_config_connect_errors = value;
        iccp_config_connect_errors.value_namespace = name_space;
        iccp_config_connect_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-count-connect-errors")
    {
        iccp_count_connect_errors = value;
        iccp_count_connect_errors.value_namespace = name_space;
        iccp_count_connect_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-invalid-connects")
    {
        iccp_invalid_connects = value;
        iccp_invalid_connects.value_namespace = name_space;
        iccp_invalid_connects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-invalid-disconnects")
    {
        iccp_invalid_disconnects = value;
        iccp_invalid_disconnects.value_namespace = name_space;
        iccp_invalid_disconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-connects")
    {
        received_connects = value;
        received_connects.value_namespace = name_space;
        received_connects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-disconnects")
    {
        received_disconnects = value;
        received_disconnects.value_namespace = name_space;
        received_disconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-wrong-versions")
    {
        received_wrong_versions = value;
        received_wrong_versions.value_namespace = name_space;
        received_wrong_versions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-connects")
    {
        sent_connects = value;
        sent_connects.value_namespace = name_space;
        sent_connects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-disconnects")
    {
        sent_disconnects = value;
        sent_disconnects.value_namespace = name_space;
        sent_disconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-wrong-versions")
    {
        sent_wrong_versions = value;
        sent_wrong_versions.value_namespace = name_space;
        sent_wrong_versions.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-config-connect-errors")
    {
        iccp_config_connect_errors.yfilter = yfilter;
    }
    if(value_path == "iccp-count-connect-errors")
    {
        iccp_count_connect_errors.yfilter = yfilter;
    }
    if(value_path == "iccp-invalid-connects")
    {
        iccp_invalid_connects.yfilter = yfilter;
    }
    if(value_path == "iccp-invalid-disconnects")
    {
        iccp_invalid_disconnects.yfilter = yfilter;
    }
    if(value_path == "received-connects")
    {
        received_connects.yfilter = yfilter;
    }
    if(value_path == "received-disconnects")
    {
        received_disconnects.yfilter = yfilter;
    }
    if(value_path == "received-wrong-versions")
    {
        received_wrong_versions.yfilter = yfilter;
    }
    if(value_path == "sent-connects")
    {
        sent_connects.yfilter = yfilter;
    }
    if(value_path == "sent-disconnects")
    {
        sent_disconnects.yfilter = yfilter;
    }
    if(value_path == "sent-wrong-versions")
    {
        sent_wrong_versions.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-config-connect-errors" || name == "iccp-count-connect-errors" || name == "iccp-invalid-connects" || name == "iccp-invalid-disconnects" || name == "received-connects" || name == "received-disconnects" || name == "received-wrong-versions" || name == "sent-connects" || name == "sent-disconnects" || name == "sent-wrong-versions")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents::IccpEvents()
    :
    configured_clear{YType::uint32, "configured-clear"},
    configured_set{YType::uint32, "configured-set"},
    member_status_down{YType::uint32, "member-status-down"},
    member_status_up{YType::uint32, "member-status-up"},
    pe_isolated{YType::uint32, "pe-isolated"},
    pe_isolated_clear{YType::uint32, "pe-isolated-clear"},
    reachability_cleared{YType::uint32, "reachability-cleared"},
    reachability_set{YType::uint32, "reachability-set"},
    transport_down{YType::uint32, "transport-down"},
    transport_unavailable{YType::uint32, "transport-unavailable"},
    transport_up{YType::uint32, "transport-up"}
{

    yang_name = "iccp-events"; yang_parent_name = "iccp-group-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents::~IccpEvents()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents::has_data() const
{
    return configured_clear.is_set
	|| configured_set.is_set
	|| member_status_down.is_set
	|| member_status_up.is_set
	|| pe_isolated.is_set
	|| pe_isolated_clear.is_set
	|| reachability_cleared.is_set
	|| reachability_set.is_set
	|| transport_down.is_set
	|| transport_unavailable.is_set
	|| transport_up.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configured_clear.yfilter)
	|| ydk::is_set(configured_set.yfilter)
	|| ydk::is_set(member_status_down.yfilter)
	|| ydk::is_set(member_status_up.yfilter)
	|| ydk::is_set(pe_isolated.yfilter)
	|| ydk::is_set(pe_isolated_clear.yfilter)
	|| ydk::is_set(reachability_cleared.yfilter)
	|| ydk::is_set(reachability_set.yfilter)
	|| ydk::is_set(transport_down.yfilter)
	|| ydk::is_set(transport_unavailable.yfilter)
	|| ydk::is_set(transport_up.yfilter);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_clear.is_set || is_set(configured_clear.yfilter)) leaf_name_data.push_back(configured_clear.get_name_leafdata());
    if (configured_set.is_set || is_set(configured_set.yfilter)) leaf_name_data.push_back(configured_set.get_name_leafdata());
    if (member_status_down.is_set || is_set(member_status_down.yfilter)) leaf_name_data.push_back(member_status_down.get_name_leafdata());
    if (member_status_up.is_set || is_set(member_status_up.yfilter)) leaf_name_data.push_back(member_status_up.get_name_leafdata());
    if (pe_isolated.is_set || is_set(pe_isolated.yfilter)) leaf_name_data.push_back(pe_isolated.get_name_leafdata());
    if (pe_isolated_clear.is_set || is_set(pe_isolated_clear.yfilter)) leaf_name_data.push_back(pe_isolated_clear.get_name_leafdata());
    if (reachability_cleared.is_set || is_set(reachability_cleared.yfilter)) leaf_name_data.push_back(reachability_cleared.get_name_leafdata());
    if (reachability_set.is_set || is_set(reachability_set.yfilter)) leaf_name_data.push_back(reachability_set.get_name_leafdata());
    if (transport_down.is_set || is_set(transport_down.yfilter)) leaf_name_data.push_back(transport_down.get_name_leafdata());
    if (transport_unavailable.is_set || is_set(transport_unavailable.yfilter)) leaf_name_data.push_back(transport_unavailable.get_name_leafdata());
    if (transport_up.is_set || is_set(transport_up.yfilter)) leaf_name_data.push_back(transport_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-clear")
    {
        configured_clear = value;
        configured_clear.value_namespace = name_space;
        configured_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-set")
    {
        configured_set = value;
        configured_set.value_namespace = name_space;
        configured_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-status-down")
    {
        member_status_down = value;
        member_status_down.value_namespace = name_space;
        member_status_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-status-up")
    {
        member_status_up = value;
        member_status_up.value_namespace = name_space;
        member_status_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pe-isolated")
    {
        pe_isolated = value;
        pe_isolated.value_namespace = name_space;
        pe_isolated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pe-isolated-clear")
    {
        pe_isolated_clear = value;
        pe_isolated_clear.value_namespace = name_space;
        pe_isolated_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability-cleared")
    {
        reachability_cleared = value;
        reachability_cleared.value_namespace = name_space;
        reachability_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability-set")
    {
        reachability_set = value;
        reachability_set.value_namespace = name_space;
        reachability_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-down")
    {
        transport_down = value;
        transport_down.value_namespace = name_space;
        transport_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-unavailable")
    {
        transport_unavailable = value;
        transport_unavailable.value_namespace = name_space;
        transport_unavailable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-up")
    {
        transport_up = value;
        transport_up.value_namespace = name_space;
        transport_up.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-clear")
    {
        configured_clear.yfilter = yfilter;
    }
    if(value_path == "configured-set")
    {
        configured_set.yfilter = yfilter;
    }
    if(value_path == "member-status-down")
    {
        member_status_down.yfilter = yfilter;
    }
    if(value_path == "member-status-up")
    {
        member_status_up.yfilter = yfilter;
    }
    if(value_path == "pe-isolated")
    {
        pe_isolated.yfilter = yfilter;
    }
    if(value_path == "pe-isolated-clear")
    {
        pe_isolated_clear.yfilter = yfilter;
    }
    if(value_path == "reachability-cleared")
    {
        reachability_cleared.yfilter = yfilter;
    }
    if(value_path == "reachability-set")
    {
        reachability_set.yfilter = yfilter;
    }
    if(value_path == "transport-down")
    {
        transport_down.yfilter = yfilter;
    }
    if(value_path == "transport-unavailable")
    {
        transport_unavailable.yfilter = yfilter;
    }
    if(value_path == "transport-up")
    {
        transport_up.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-clear" || name == "configured-set" || name == "member-status-down" || name == "member-status-up" || name == "pe-isolated" || name == "pe-isolated-clear" || name == "reachability-cleared" || name == "reachability-set" || name == "transport-down" || name == "transport-unavailable" || name == "transport-up")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages::IccpMessages()
    :
    received_messages{YType::uint32, "received-messages"},
    sent_buffer_messages{YType::uint32, "sent-buffer-messages"},
    sent_messages{YType::uint32, "sent-messages"},
    transmission_errors{YType::uint32, "transmission-errors"}
{

    yang_name = "iccp-messages"; yang_parent_name = "iccp-group-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages::~IccpMessages()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages::has_data() const
{
    return received_messages.is_set
	|| sent_buffer_messages.is_set
	|| sent_messages.is_set
	|| transmission_errors.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_messages.yfilter)
	|| ydk::is_set(sent_buffer_messages.yfilter)
	|| ydk::is_set(sent_messages.yfilter)
	|| ydk::is_set(transmission_errors.yfilter);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_messages.is_set || is_set(received_messages.yfilter)) leaf_name_data.push_back(received_messages.get_name_leafdata());
    if (sent_buffer_messages.is_set || is_set(sent_buffer_messages.yfilter)) leaf_name_data.push_back(sent_buffer_messages.get_name_leafdata());
    if (sent_messages.is_set || is_set(sent_messages.yfilter)) leaf_name_data.push_back(sent_messages.get_name_leafdata());
    if (transmission_errors.is_set || is_set(transmission_errors.yfilter)) leaf_name_data.push_back(transmission_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-messages")
    {
        received_messages = value;
        received_messages.value_namespace = name_space;
        received_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-buffer-messages")
    {
        sent_buffer_messages = value;
        sent_buffer_messages.value_namespace = name_space;
        sent_buffer_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-messages")
    {
        sent_messages = value;
        sent_messages.value_namespace = name_space;
        sent_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmission-errors")
    {
        transmission_errors = value;
        transmission_errors.value_namespace = name_space;
        transmission_errors.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-messages")
    {
        received_messages.yfilter = yfilter;
    }
    if(value_path == "sent-buffer-messages")
    {
        sent_buffer_messages.yfilter = yfilter;
    }
    if(value_path == "sent-messages")
    {
        sent_messages.yfilter = yfilter;
    }
    if(value_path == "transmission-errors")
    {
        transmission_errors.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-messages" || name == "sent-buffer-messages" || name == "sent-messages" || name == "transmission-errors")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs::InvalidTlVs()
    :
    incorrect_length{YType::uint32, "incorrect-length"},
    invalid_data{YType::uint32, "invalid-data"},
    invalid_type{YType::uint32, "invalid-type"},
    unknown_bundle{YType::uint32, "unknown-bundle"},
    unknown_port{YType::uint32, "unknown-port"}
{

    yang_name = "invalid-tl-vs"; yang_parent_name = "iccp-group-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs::~InvalidTlVs()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs::has_data() const
{
    return incorrect_length.is_set
	|| invalid_data.is_set
	|| invalid_type.is_set
	|| unknown_bundle.is_set
	|| unknown_port.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incorrect_length.yfilter)
	|| ydk::is_set(invalid_data.yfilter)
	|| ydk::is_set(invalid_type.yfilter)
	|| ydk::is_set(unknown_bundle.yfilter)
	|| ydk::is_set(unknown_port.yfilter);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid-tl-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incorrect_length.is_set || is_set(incorrect_length.yfilter)) leaf_name_data.push_back(incorrect_length.get_name_leafdata());
    if (invalid_data.is_set || is_set(invalid_data.yfilter)) leaf_name_data.push_back(invalid_data.get_name_leafdata());
    if (invalid_type.is_set || is_set(invalid_type.yfilter)) leaf_name_data.push_back(invalid_type.get_name_leafdata());
    if (unknown_bundle.is_set || is_set(unknown_bundle.yfilter)) leaf_name_data.push_back(unknown_bundle.get_name_leafdata());
    if (unknown_port.is_set || is_set(unknown_port.yfilter)) leaf_name_data.push_back(unknown_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incorrect-length")
    {
        incorrect_length = value;
        incorrect_length.value_namespace = name_space;
        incorrect_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-data")
    {
        invalid_data = value;
        invalid_data.value_namespace = name_space;
        invalid_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-type")
    {
        invalid_type = value;
        invalid_type.value_namespace = name_space;
        invalid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-bundle")
    {
        unknown_bundle = value;
        unknown_bundle.value_namespace = name_space;
        unknown_bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-port")
    {
        unknown_port = value;
        unknown_port.value_namespace = name_space;
        unknown_port.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incorrect-length")
    {
        incorrect_length.yfilter = yfilter;
    }
    if(value_path == "invalid-data")
    {
        invalid_data.yfilter = yfilter;
    }
    if(value_path == "invalid-type")
    {
        invalid_type.yfilter = yfilter;
    }
    if(value_path == "unknown-bundle")
    {
        unknown_bundle.yfilter = yfilter;
    }
    if(value_path == "unknown-port")
    {
        unknown_port.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incorrect-length" || name == "invalid-data" || name == "invalid-type" || name == "unknown-bundle" || name == "unknown-port")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs::TlVs()
    :
    received_config{YType::uint32, "received-config"},
    received_config_sync_requests{YType::uint32, "received-config-sync-requests"},
    received_na_ks{YType::uint32, "received-na-ks"},
    received_solicited_sync_data{YType::uint32, "received-solicited-sync-data"},
    received_state{YType::uint32, "received-state"},
    received_state_sync_requests{YType::uint32, "received-state-sync-requests"},
    received_sync_requests{YType::uint32, "received-sync-requests"},
    received_unsolicited_sync_data{YType::uint32, "received-unsolicited-sync-data"},
    sent_config{YType::uint32, "sent-config"},
    sent_config_sync_requests{YType::uint32, "sent-config-sync-requests"},
    sent_na_ks{YType::uint32, "sent-na-ks"},
    sent_solicited_sync_data{YType::uint32, "sent-solicited-sync-data"},
    sent_state{YType::uint32, "sent-state"},
    sent_state_sync_requests{YType::uint32, "sent-state-sync-requests"},
    sent_sync_requests{YType::uint32, "sent-sync-requests"},
    sent_unsolicited_sync_data{YType::uint32, "sent-unsolicited-sync-data"}
{

    yang_name = "tl-vs"; yang_parent_name = "iccp-group-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs::~TlVs()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs::has_data() const
{
    return received_config.is_set
	|| received_config_sync_requests.is_set
	|| received_na_ks.is_set
	|| received_solicited_sync_data.is_set
	|| received_state.is_set
	|| received_state_sync_requests.is_set
	|| received_sync_requests.is_set
	|| received_unsolicited_sync_data.is_set
	|| sent_config.is_set
	|| sent_config_sync_requests.is_set
	|| sent_na_ks.is_set
	|| sent_solicited_sync_data.is_set
	|| sent_state.is_set
	|| sent_state_sync_requests.is_set
	|| sent_sync_requests.is_set
	|| sent_unsolicited_sync_data.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_config.yfilter)
	|| ydk::is_set(received_config_sync_requests.yfilter)
	|| ydk::is_set(received_na_ks.yfilter)
	|| ydk::is_set(received_solicited_sync_data.yfilter)
	|| ydk::is_set(received_state.yfilter)
	|| ydk::is_set(received_state_sync_requests.yfilter)
	|| ydk::is_set(received_sync_requests.yfilter)
	|| ydk::is_set(received_unsolicited_sync_data.yfilter)
	|| ydk::is_set(sent_config.yfilter)
	|| ydk::is_set(sent_config_sync_requests.yfilter)
	|| ydk::is_set(sent_na_ks.yfilter)
	|| ydk::is_set(sent_solicited_sync_data.yfilter)
	|| ydk::is_set(sent_state.yfilter)
	|| ydk::is_set(sent_state_sync_requests.yfilter)
	|| ydk::is_set(sent_sync_requests.yfilter)
	|| ydk::is_set(sent_unsolicited_sync_data.yfilter);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tl-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_config.is_set || is_set(received_config.yfilter)) leaf_name_data.push_back(received_config.get_name_leafdata());
    if (received_config_sync_requests.is_set || is_set(received_config_sync_requests.yfilter)) leaf_name_data.push_back(received_config_sync_requests.get_name_leafdata());
    if (received_na_ks.is_set || is_set(received_na_ks.yfilter)) leaf_name_data.push_back(received_na_ks.get_name_leafdata());
    if (received_solicited_sync_data.is_set || is_set(received_solicited_sync_data.yfilter)) leaf_name_data.push_back(received_solicited_sync_data.get_name_leafdata());
    if (received_state.is_set || is_set(received_state.yfilter)) leaf_name_data.push_back(received_state.get_name_leafdata());
    if (received_state_sync_requests.is_set || is_set(received_state_sync_requests.yfilter)) leaf_name_data.push_back(received_state_sync_requests.get_name_leafdata());
    if (received_sync_requests.is_set || is_set(received_sync_requests.yfilter)) leaf_name_data.push_back(received_sync_requests.get_name_leafdata());
    if (received_unsolicited_sync_data.is_set || is_set(received_unsolicited_sync_data.yfilter)) leaf_name_data.push_back(received_unsolicited_sync_data.get_name_leafdata());
    if (sent_config.is_set || is_set(sent_config.yfilter)) leaf_name_data.push_back(sent_config.get_name_leafdata());
    if (sent_config_sync_requests.is_set || is_set(sent_config_sync_requests.yfilter)) leaf_name_data.push_back(sent_config_sync_requests.get_name_leafdata());
    if (sent_na_ks.is_set || is_set(sent_na_ks.yfilter)) leaf_name_data.push_back(sent_na_ks.get_name_leafdata());
    if (sent_solicited_sync_data.is_set || is_set(sent_solicited_sync_data.yfilter)) leaf_name_data.push_back(sent_solicited_sync_data.get_name_leafdata());
    if (sent_state.is_set || is_set(sent_state.yfilter)) leaf_name_data.push_back(sent_state.get_name_leafdata());
    if (sent_state_sync_requests.is_set || is_set(sent_state_sync_requests.yfilter)) leaf_name_data.push_back(sent_state_sync_requests.get_name_leafdata());
    if (sent_sync_requests.is_set || is_set(sent_sync_requests.yfilter)) leaf_name_data.push_back(sent_sync_requests.get_name_leafdata());
    if (sent_unsolicited_sync_data.is_set || is_set(sent_unsolicited_sync_data.yfilter)) leaf_name_data.push_back(sent_unsolicited_sync_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-config")
    {
        received_config = value;
        received_config.value_namespace = name_space;
        received_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-config-sync-requests")
    {
        received_config_sync_requests = value;
        received_config_sync_requests.value_namespace = name_space;
        received_config_sync_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-na-ks")
    {
        received_na_ks = value;
        received_na_ks.value_namespace = name_space;
        received_na_ks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-solicited-sync-data")
    {
        received_solicited_sync_data = value;
        received_solicited_sync_data.value_namespace = name_space;
        received_solicited_sync_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-state")
    {
        received_state = value;
        received_state.value_namespace = name_space;
        received_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-state-sync-requests")
    {
        received_state_sync_requests = value;
        received_state_sync_requests.value_namespace = name_space;
        received_state_sync_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-sync-requests")
    {
        received_sync_requests = value;
        received_sync_requests.value_namespace = name_space;
        received_sync_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-unsolicited-sync-data")
    {
        received_unsolicited_sync_data = value;
        received_unsolicited_sync_data.value_namespace = name_space;
        received_unsolicited_sync_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-config")
    {
        sent_config = value;
        sent_config.value_namespace = name_space;
        sent_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-config-sync-requests")
    {
        sent_config_sync_requests = value;
        sent_config_sync_requests.value_namespace = name_space;
        sent_config_sync_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-na-ks")
    {
        sent_na_ks = value;
        sent_na_ks.value_namespace = name_space;
        sent_na_ks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-solicited-sync-data")
    {
        sent_solicited_sync_data = value;
        sent_solicited_sync_data.value_namespace = name_space;
        sent_solicited_sync_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state")
    {
        sent_state = value;
        sent_state.value_namespace = name_space;
        sent_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state-sync-requests")
    {
        sent_state_sync_requests = value;
        sent_state_sync_requests.value_namespace = name_space;
        sent_state_sync_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-sync-requests")
    {
        sent_sync_requests = value;
        sent_sync_requests.value_namespace = name_space;
        sent_sync_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-unsolicited-sync-data")
    {
        sent_unsolicited_sync_data = value;
        sent_unsolicited_sync_data.value_namespace = name_space;
        sent_unsolicited_sync_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-config")
    {
        received_config.yfilter = yfilter;
    }
    if(value_path == "received-config-sync-requests")
    {
        received_config_sync_requests.yfilter = yfilter;
    }
    if(value_path == "received-na-ks")
    {
        received_na_ks.yfilter = yfilter;
    }
    if(value_path == "received-solicited-sync-data")
    {
        received_solicited_sync_data.yfilter = yfilter;
    }
    if(value_path == "received-state")
    {
        received_state.yfilter = yfilter;
    }
    if(value_path == "received-state-sync-requests")
    {
        received_state_sync_requests.yfilter = yfilter;
    }
    if(value_path == "received-sync-requests")
    {
        received_sync_requests.yfilter = yfilter;
    }
    if(value_path == "received-unsolicited-sync-data")
    {
        received_unsolicited_sync_data.yfilter = yfilter;
    }
    if(value_path == "sent-config")
    {
        sent_config.yfilter = yfilter;
    }
    if(value_path == "sent-config-sync-requests")
    {
        sent_config_sync_requests.yfilter = yfilter;
    }
    if(value_path == "sent-na-ks")
    {
        sent_na_ks.yfilter = yfilter;
    }
    if(value_path == "sent-solicited-sync-data")
    {
        sent_solicited_sync_data.yfilter = yfilter;
    }
    if(value_path == "sent-state")
    {
        sent_state.yfilter = yfilter;
    }
    if(value_path == "sent-state-sync-requests")
    {
        sent_state_sync_requests.yfilter = yfilter;
    }
    if(value_path == "sent-sync-requests")
    {
        sent_sync_requests.yfilter = yfilter;
    }
    if(value_path == "sent-unsolicited-sync-data")
    {
        sent_unsolicited_sync_data.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-config" || name == "received-config-sync-requests" || name == "received-na-ks" || name == "received-solicited-sync-data" || name == "received-state" || name == "received-state-sync-requests" || name == "received-sync-requests" || name == "received-unsolicited-sync-data" || name == "sent-config" || name == "sent-config-sync-requests" || name == "sent-na-ks" || name == "sent-solicited-sync-data" || name == "sent-state" || name == "sent-state-sync-requests" || name == "sent-sync-requests" || name == "sent-unsolicited-sync-data")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::MlacpMemberCounters()
    :
    bundles(std::make_shared<BundleInformation::MlacpMemberCounters::Bundles>())
	,iccp_groups(std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups>())
	,members(std::make_shared<BundleInformation::MlacpMemberCounters::Members>())
	,nodes(std::make_shared<BundleInformation::MlacpMemberCounters::Nodes>())
{
    bundles->parent = this;
    iccp_groups->parent = this;
    members->parent = this;
    nodes->parent = this;

    yang_name = "mlacp-member-counters"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MlacpMemberCounters::~MlacpMemberCounters()
{
}

bool BundleInformation::MlacpMemberCounters::has_data() const
{
    return (bundles !=  nullptr && bundles->has_data())
	|| (iccp_groups !=  nullptr && iccp_groups->has_data())
	|| (members !=  nullptr && members->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool BundleInformation::MlacpMemberCounters::has_operation() const
{
    return is_set(yfilter)
	|| (bundles !=  nullptr && bundles->has_operation())
	|| (iccp_groups !=  nullptr && iccp_groups->has_operation())
	|| (members !=  nullptr && members->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpMemberCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-member-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundles")
    {
        if(bundles == nullptr)
        {
            bundles = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles>();
        }
        return bundles;
    }

    if(child_yang_name == "iccp-groups")
    {
        if(iccp_groups == nullptr)
        {
            iccp_groups = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups>();
        }
        return iccp_groups;
    }

    if(child_yang_name == "members")
    {
        if(members == nullptr)
        {
            members = std::make_shared<BundleInformation::MlacpMemberCounters::Members>();
        }
        return members;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundles != nullptr)
    {
        children["bundles"] = bundles;
    }

    if(iccp_groups != nullptr)
    {
        children["iccp-groups"] = iccp_groups;
    }

    if(members != nullptr)
    {
        children["members"] = members;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpMemberCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpMemberCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundles" || name == "iccp-groups" || name == "members" || name == "nodes")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundles()
{

    yang_name = "bundles"; yang_parent_name = "mlacp-member-counters"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MlacpMemberCounters::Bundles::~Bundles()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::has_data() const
{
    for (std::size_t index=0; index<bundle.size(); index++)
    {
        if(bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpMemberCounters::Bundles::has_operation() const
{
    for (std::size_t index=0; index<bundle.size(); index++)
    {
        if(bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::MlacpMemberCounters::Bundles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-member-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpMemberCounters::Bundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Bundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle")
    {
        for(auto const & c : bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle>();
        c->parent = this;
        bundle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Bundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpMemberCounters::Bundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::Bundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    bundle_item(std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem>())
{
    bundle_item->parent = this;

    yang_name = "bundle"; yang_parent_name = "bundles"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::~Bundle()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::has_data() const
{
    return bundle_interface.is_set
	|| (bundle_item !=  nullptr && bundle_item->has_data());
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (bundle_item !=  nullptr && bundle_item->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-member-counters/bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle" <<"[bundle-interface='" <<bundle_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Bundles::Bundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-item")
    {
        if(bundle_item == nullptr)
        {
            bundle_item = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem>();
        }
        return bundle_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Bundles::Bundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_item != nullptr)
    {
        children["bundle-item"] = bundle_item;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-item" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleItem()
    :
    bundle_data(std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData>())
{
    bundle_data->parent = this;

    yang_name = "bundle-item"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::~BundleItem()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::has_data() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return (bundle_data !=  nullptr && bundle_data->has_data());
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::has_operation() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bundle_data !=  nullptr && bundle_data->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        if(bundle_data == nullptr)
        {
            bundle_data = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData>();
        }
        return bundle_data;
    }

    if(child_yang_name == "member-data")
    {
        for(auto const & c : member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData>();
        c->parent = this;
        member_data.push_back(c);
        return c;
    }

    if(child_yang_name == "node-data")
    {
        for(auto const & c : node_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData>();
        c->parent = this;
        node_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_data != nullptr)
    {
        children["bundle-data"] = bundle_data;
    }

    for (auto const & c : member_data)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : node_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-data" || name == "member-data" || name == "node-data")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"},
    iccp_group_id{YType::uint32, "iccp-group-id"}
    	,
    mlacp_sync_requests_on_all_local_ports(std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts>())
{
    mlacp_sync_requests_on_all_local_ports->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "bundle-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::has_data() const
{
    return bundle_name.is_set
	|| iccp_group_id.is_set
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_data());
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-sync-requests-on-all-local-ports")
    {
        if(mlacp_sync_requests_on_all_local_ports == nullptr)
        {
            mlacp_sync_requests_on_all_local_ports = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts>();
        }
        return mlacp_sync_requests_on_all_local_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_sync_requests_on_all_local_ports != nullptr)
    {
        children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-sync-requests-on-all-local-ports" || name == "bundle-name" || name == "iccp-group-id")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::MlacpSyncRequestsOnAllLocalPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-local-ports"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::~MlacpSyncRequestsOnAllLocalPorts()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-ports"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MemberData()
    :
    port_name{YType::str, "port-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;

    yang_name = "member-data"; yang_parent_name = "bundle-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::~MemberData()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::has_data() const
{
    return port_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_name.yfilter)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_name.is_set || is_set(port_name.yfilter)) leaf_name_data.push_back(port_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters == nullptr)
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters>();
        }
        return mlacp_tlv_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_tlv_counters != nullptr)
    {
        children["mlacp-tlv-counters"] = mlacp_tlv_counters;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-name")
    {
        port_name = value;
        port_name.value_namespace = name_space;
        port_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-name")
    {
        port_name.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-tlv-counters" || name == "port-name")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(last_unexpected_event.yfilter)
	|| ydk::is_set(received_nak_tl_vs.yfilter)
	|| ydk::is_set(received_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_config_tl_vs.yfilter)
	|| ydk::is_set(sent_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_state_tl_vs.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.yfilter)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.yfilter)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.yfilter)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.yfilter)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.yfilter)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.yfilter)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
        last_unexpected_event.value_namespace = name_space;
        last_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
        received_nak_tl_vs.value_namespace = name_space;
        received_nak_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
        received_priority_tl_vs.value_namespace = name_space;
        received_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
        sent_config_tl_vs.value_namespace = name_space;
        sent_config_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
        sent_priority_tl_vs.value_namespace = name_space;
        sent_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
        sent_state_tl_vs.value_namespace = name_space;
        sent_state_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event.yfilter = yfilter;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "last-unexpected-event" || name == "received-nak-tl-vs" || name == "received-priority-tl-vs" || name == "sent-config-tl-vs" || name == "sent-priority-tl-vs" || name == "sent-state-tl-vs" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData()
    :
    mlacp_sync_requests_on_all_foreign_ports(std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts>())
	,node_data(std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_>())
{
    mlacp_sync_requests_on_all_foreign_ports->parent = this;
    node_data->parent = this;

    yang_name = "node-data"; yang_parent_name = "bundle-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::~NodeData()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::has_data() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    return (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_data())
	|| (node_data !=  nullptr && node_data->has_data());
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::has_operation() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_operation())
	|| (node_data !=  nullptr && node_data->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-data")
    {
        for(auto const & c : member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData>();
        c->parent = this;
        member_data.push_back(c);
        return c;
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-ports")
    {
        if(mlacp_sync_requests_on_all_foreign_ports == nullptr)
        {
            mlacp_sync_requests_on_all_foreign_ports = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts>();
        }
        return mlacp_sync_requests_on_all_foreign_ports;
    }

    if(child_yang_name == "node-data")
    {
        if(node_data == nullptr)
        {
            node_data = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_>();
        }
        return node_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : member_data)
    {
        children[c->get_segment_path()] = c;
    }

    if(mlacp_sync_requests_on_all_foreign_ports != nullptr)
    {
        children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
    }

    if(node_data != nullptr)
    {
        children["node-data"] = node_data;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-data" || name == "mlacp-sync-requests-on-all-foreign-ports" || name == "node-data")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MemberData()
    :
    port_name{YType::str, "port-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;

    yang_name = "member-data"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::~MemberData()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::has_data() const
{
    return port_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_name.yfilter)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_name.is_set || is_set(port_name.yfilter)) leaf_name_data.push_back(port_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters == nullptr)
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters>();
        }
        return mlacp_tlv_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_tlv_counters != nullptr)
    {
        children["mlacp-tlv-counters"] = mlacp_tlv_counters;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-name")
    {
        port_name = value;
        port_name.value_namespace = name_space;
        port_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-name")
    {
        port_name.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-tlv-counters" || name == "port-name")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(last_unexpected_event.yfilter)
	|| ydk::is_set(received_nak_tl_vs.yfilter)
	|| ydk::is_set(received_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_config_tl_vs.yfilter)
	|| ydk::is_set(sent_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_state_tl_vs.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.yfilter)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.yfilter)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.yfilter)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.yfilter)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.yfilter)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.yfilter)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
        last_unexpected_event.value_namespace = name_space;
        last_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
        received_nak_tl_vs.value_namespace = name_space;
        received_nak_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
        received_priority_tl_vs.value_namespace = name_space;
        received_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
        sent_config_tl_vs.value_namespace = name_space;
        sent_config_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
        sent_priority_tl_vs.value_namespace = name_space;
        sent_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
        sent_state_tl_vs.value_namespace = name_space;
        sent_state_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event.yfilter = yfilter;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "last-unexpected-event" || name == "received-nak-tl-vs" || name == "received-priority-tl-vs" || name == "sent-config-tl-vs" || name == "sent-priority-tl-vs" || name == "sent-state-tl-vs" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::MlacpSyncRequestsOnAllForeignPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-foreign-ports"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::~MlacpSyncRequestsOnAllForeignPorts()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-ports"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_::NodeData_()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"},
    node_id{YType::uint32, "node-id"}
{

    yang_name = "node-data"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_::~NodeData_()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_::has_data() const
{
    return iccp_group_id.is_set
	|| node_id.is_set;
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(node_id.yfilter);
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-id" || name == "node-id")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroups()
{

    yang_name = "iccp-groups"; yang_parent_name = "mlacp-member-counters"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MlacpMemberCounters::IccpGroups::~IccpGroups()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::has_data() const
{
    for (std::size_t index=0; index<iccp_group.size(); index++)
    {
        if(iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::has_operation() const
{
    for (std::size_t index=0; index<iccp_group.size(); index++)
    {
        if(iccp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-member-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::IccpGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group")
    {
        for(auto const & c : iccp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup>();
        c->parent = this;
        iccp_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::IccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iccp_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpMemberCounters::IccpGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroup()
    :
    iccp_group{YType::uint32, "iccp-group"}
    	,
    iccp_group_item(std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem>())
{
    iccp_group_item->parent = this;

    yang_name = "iccp-group"; yang_parent_name = "iccp-groups"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::~IccpGroup()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::has_data() const
{
    return iccp_group.is_set
	|| (iccp_group_item !=  nullptr && iccp_group_item->has_data());
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group.yfilter)
	|| (iccp_group_item !=  nullptr && iccp_group_item->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-member-counters/iccp-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group" <<"[iccp-group='" <<iccp_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.yfilter)) leaf_name_data.push_back(iccp_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group-item")
    {
        if(iccp_group_item == nullptr)
        {
            iccp_group_item = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem>();
        }
        return iccp_group_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(iccp_group_item != nullptr)
    {
        children["iccp-group-item"] = iccp_group_item;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
        iccp_group.value_namespace = name_space;
        iccp_group.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group")
    {
        iccp_group.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-item" || name == "iccp-group")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupItem()
{

    yang_name = "iccp-group-item"; yang_parent_name = "iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::~IccpGroupItem()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::Items()
    :
    bundle_data(std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData>())
{
    bundle_data->parent = this;

    yang_name = "items"; yang_parent_name = "iccp-group-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::~Items()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::has_data() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return (bundle_data !=  nullptr && bundle_data->has_data());
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::has_operation() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bundle_data !=  nullptr && bundle_data->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        if(bundle_data == nullptr)
        {
            bundle_data = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData>();
        }
        return bundle_data;
    }

    if(child_yang_name == "member-data")
    {
        for(auto const & c : member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData>();
        c->parent = this;
        member_data.push_back(c);
        return c;
    }

    if(child_yang_name == "node-data")
    {
        for(auto const & c : node_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData>();
        c->parent = this;
        node_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_data != nullptr)
    {
        children["bundle-data"] = bundle_data;
    }

    for (auto const & c : member_data)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : node_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-data" || name == "member-data" || name == "node-data")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"},
    iccp_group_id{YType::uint32, "iccp-group-id"}
    	,
    mlacp_sync_requests_on_all_local_ports(std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts>())
{
    mlacp_sync_requests_on_all_local_ports->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::has_data() const
{
    return bundle_name.is_set
	|| iccp_group_id.is_set
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_data());
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-sync-requests-on-all-local-ports")
    {
        if(mlacp_sync_requests_on_all_local_ports == nullptr)
        {
            mlacp_sync_requests_on_all_local_ports = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts>();
        }
        return mlacp_sync_requests_on_all_local_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_sync_requests_on_all_local_ports != nullptr)
    {
        children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-sync-requests-on-all-local-ports" || name == "bundle-name" || name == "iccp-group-id")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::MlacpSyncRequestsOnAllLocalPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-local-ports"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::~MlacpSyncRequestsOnAllLocalPorts()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-ports"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MemberData()
    :
    port_name{YType::str, "port-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;

    yang_name = "member-data"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::~MemberData()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::has_data() const
{
    return port_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_name.yfilter)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_name.is_set || is_set(port_name.yfilter)) leaf_name_data.push_back(port_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters == nullptr)
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters>();
        }
        return mlacp_tlv_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_tlv_counters != nullptr)
    {
        children["mlacp-tlv-counters"] = mlacp_tlv_counters;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-name")
    {
        port_name = value;
        port_name.value_namespace = name_space;
        port_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-name")
    {
        port_name.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-tlv-counters" || name == "port-name")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(last_unexpected_event.yfilter)
	|| ydk::is_set(received_nak_tl_vs.yfilter)
	|| ydk::is_set(received_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_config_tl_vs.yfilter)
	|| ydk::is_set(sent_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_state_tl_vs.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.yfilter)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.yfilter)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.yfilter)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.yfilter)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.yfilter)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.yfilter)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
        last_unexpected_event.value_namespace = name_space;
        last_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
        received_nak_tl_vs.value_namespace = name_space;
        received_nak_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
        received_priority_tl_vs.value_namespace = name_space;
        received_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
        sent_config_tl_vs.value_namespace = name_space;
        sent_config_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
        sent_priority_tl_vs.value_namespace = name_space;
        sent_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
        sent_state_tl_vs.value_namespace = name_space;
        sent_state_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event.yfilter = yfilter;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "last-unexpected-event" || name == "received-nak-tl-vs" || name == "received-priority-tl-vs" || name == "sent-config-tl-vs" || name == "sent-priority-tl-vs" || name == "sent-state-tl-vs" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData()
    :
    mlacp_sync_requests_on_all_foreign_ports(std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts>())
	,node_data(std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_>())
{
    mlacp_sync_requests_on_all_foreign_ports->parent = this;
    node_data->parent = this;

    yang_name = "node-data"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::~NodeData()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::has_data() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    return (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_data())
	|| (node_data !=  nullptr && node_data->has_data());
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::has_operation() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_operation())
	|| (node_data !=  nullptr && node_data->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-data")
    {
        for(auto const & c : member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData>();
        c->parent = this;
        member_data.push_back(c);
        return c;
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-ports")
    {
        if(mlacp_sync_requests_on_all_foreign_ports == nullptr)
        {
            mlacp_sync_requests_on_all_foreign_ports = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts>();
        }
        return mlacp_sync_requests_on_all_foreign_ports;
    }

    if(child_yang_name == "node-data")
    {
        if(node_data == nullptr)
        {
            node_data = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_>();
        }
        return node_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : member_data)
    {
        children[c->get_segment_path()] = c;
    }

    if(mlacp_sync_requests_on_all_foreign_ports != nullptr)
    {
        children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
    }

    if(node_data != nullptr)
    {
        children["node-data"] = node_data;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-data" || name == "mlacp-sync-requests-on-all-foreign-ports" || name == "node-data")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MemberData()
    :
    port_name{YType::str, "port-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;

    yang_name = "member-data"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::~MemberData()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::has_data() const
{
    return port_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_name.yfilter)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_name.is_set || is_set(port_name.yfilter)) leaf_name_data.push_back(port_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters == nullptr)
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters>();
        }
        return mlacp_tlv_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_tlv_counters != nullptr)
    {
        children["mlacp-tlv-counters"] = mlacp_tlv_counters;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-name")
    {
        port_name = value;
        port_name.value_namespace = name_space;
        port_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-name")
    {
        port_name.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-tlv-counters" || name == "port-name")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(last_unexpected_event.yfilter)
	|| ydk::is_set(received_nak_tl_vs.yfilter)
	|| ydk::is_set(received_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_config_tl_vs.yfilter)
	|| ydk::is_set(sent_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_state_tl_vs.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.yfilter)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.yfilter)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.yfilter)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.yfilter)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.yfilter)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.yfilter)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
        last_unexpected_event.value_namespace = name_space;
        last_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
        received_nak_tl_vs.value_namespace = name_space;
        received_nak_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
        received_priority_tl_vs.value_namespace = name_space;
        received_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
        sent_config_tl_vs.value_namespace = name_space;
        sent_config_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
        sent_priority_tl_vs.value_namespace = name_space;
        sent_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
        sent_state_tl_vs.value_namespace = name_space;
        sent_state_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event.yfilter = yfilter;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "last-unexpected-event" || name == "received-nak-tl-vs" || name == "received-priority-tl-vs" || name == "sent-config-tl-vs" || name == "sent-priority-tl-vs" || name == "sent-state-tl-vs" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::MlacpSyncRequestsOnAllForeignPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-foreign-ports"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::~MlacpSyncRequestsOnAllForeignPorts()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-ports"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_::NodeData_()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"},
    node_id{YType::uint32, "node-id"}
{

    yang_name = "node-data"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_::~NodeData_()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_::has_data() const
{
    return iccp_group_id.is_set
	|| node_id.is_set;
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(node_id.yfilter);
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-id" || name == "node-id")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Members::Members()
{

    yang_name = "members"; yang_parent_name = "mlacp-member-counters"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MlacpMemberCounters::Members::~Members()
{
}

bool BundleInformation::MlacpMemberCounters::Members::has_data() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpMemberCounters::Members::has_operation() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::MlacpMemberCounters::Members::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-member-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpMemberCounters::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Members::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member")
    {
        for(auto const & c : member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member>();
        c->parent = this;
        member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Members::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Members::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpMemberCounters::Members::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpMemberCounters::Members::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Members::Member::Member()
    :
    member_interface{YType::str, "member-interface"}
    	,
    member_item(std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem>())
{
    member_item->parent = this;

    yang_name = "member"; yang_parent_name = "members"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MlacpMemberCounters::Members::Member::~Member()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::has_data() const
{
    return member_interface.is_set
	|| (member_item !=  nullptr && member_item->has_data());
}

bool BundleInformation::MlacpMemberCounters::Members::Member::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| (member_item !=  nullptr && member_item->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-member-counters/members/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member" <<"[member-interface='" <<member_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Members::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-item")
    {
        if(member_item == nullptr)
        {
            member_item = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem>();
        }
        return member_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Members::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(member_item != nullptr)
    {
        children["member-item"] = member_item;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Members::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Members::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-item" || name == "member-interface")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::MemberItem()
{

    yang_name = "member-item"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::~MemberItem()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::Items()
    :
    bundle_data(std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData>())
{
    bundle_data->parent = this;

    yang_name = "items"; yang_parent_name = "member-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::~Items()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::has_data() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return (bundle_data !=  nullptr && bundle_data->has_data());
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::has_operation() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bundle_data !=  nullptr && bundle_data->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        if(bundle_data == nullptr)
        {
            bundle_data = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData>();
        }
        return bundle_data;
    }

    if(child_yang_name == "member-data")
    {
        for(auto const & c : member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData>();
        c->parent = this;
        member_data.push_back(c);
        return c;
    }

    if(child_yang_name == "node-data")
    {
        for(auto const & c : node_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData>();
        c->parent = this;
        node_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_data != nullptr)
    {
        children["bundle-data"] = bundle_data;
    }

    for (auto const & c : member_data)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : node_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-data" || name == "member-data" || name == "node-data")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"},
    iccp_group_id{YType::uint32, "iccp-group-id"}
    	,
    mlacp_sync_requests_on_all_local_ports(std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts>())
{
    mlacp_sync_requests_on_all_local_ports->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::has_data() const
{
    return bundle_name.is_set
	|| iccp_group_id.is_set
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_data());
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-sync-requests-on-all-local-ports")
    {
        if(mlacp_sync_requests_on_all_local_ports == nullptr)
        {
            mlacp_sync_requests_on_all_local_ports = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts>();
        }
        return mlacp_sync_requests_on_all_local_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_sync_requests_on_all_local_ports != nullptr)
    {
        children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-sync-requests-on-all-local-ports" || name == "bundle-name" || name == "iccp-group-id")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::MlacpSyncRequestsOnAllLocalPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-local-ports"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::~MlacpSyncRequestsOnAllLocalPorts()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-ports"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MemberData()
    :
    port_name{YType::str, "port-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;

    yang_name = "member-data"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::~MemberData()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::has_data() const
{
    return port_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_name.yfilter)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_name.is_set || is_set(port_name.yfilter)) leaf_name_data.push_back(port_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters == nullptr)
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters>();
        }
        return mlacp_tlv_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_tlv_counters != nullptr)
    {
        children["mlacp-tlv-counters"] = mlacp_tlv_counters;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-name")
    {
        port_name = value;
        port_name.value_namespace = name_space;
        port_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-name")
    {
        port_name.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-tlv-counters" || name == "port-name")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(last_unexpected_event.yfilter)
	|| ydk::is_set(received_nak_tl_vs.yfilter)
	|| ydk::is_set(received_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_config_tl_vs.yfilter)
	|| ydk::is_set(sent_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_state_tl_vs.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.yfilter)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.yfilter)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.yfilter)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.yfilter)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.yfilter)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.yfilter)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
        last_unexpected_event.value_namespace = name_space;
        last_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
        received_nak_tl_vs.value_namespace = name_space;
        received_nak_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
        received_priority_tl_vs.value_namespace = name_space;
        received_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
        sent_config_tl_vs.value_namespace = name_space;
        sent_config_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
        sent_priority_tl_vs.value_namespace = name_space;
        sent_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
        sent_state_tl_vs.value_namespace = name_space;
        sent_state_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event.yfilter = yfilter;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "last-unexpected-event" || name == "received-nak-tl-vs" || name == "received-priority-tl-vs" || name == "sent-config-tl-vs" || name == "sent-priority-tl-vs" || name == "sent-state-tl-vs" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData()
    :
    mlacp_sync_requests_on_all_foreign_ports(std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts>())
	,node_data(std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_>())
{
    mlacp_sync_requests_on_all_foreign_ports->parent = this;
    node_data->parent = this;

    yang_name = "node-data"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::~NodeData()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::has_data() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    return (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_data())
	|| (node_data !=  nullptr && node_data->has_data());
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::has_operation() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_operation())
	|| (node_data !=  nullptr && node_data->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-data")
    {
        for(auto const & c : member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData>();
        c->parent = this;
        member_data.push_back(c);
        return c;
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-ports")
    {
        if(mlacp_sync_requests_on_all_foreign_ports == nullptr)
        {
            mlacp_sync_requests_on_all_foreign_ports = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts>();
        }
        return mlacp_sync_requests_on_all_foreign_ports;
    }

    if(child_yang_name == "node-data")
    {
        if(node_data == nullptr)
        {
            node_data = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_>();
        }
        return node_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : member_data)
    {
        children[c->get_segment_path()] = c;
    }

    if(mlacp_sync_requests_on_all_foreign_ports != nullptr)
    {
        children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
    }

    if(node_data != nullptr)
    {
        children["node-data"] = node_data;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-data" || name == "mlacp-sync-requests-on-all-foreign-ports" || name == "node-data")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MemberData()
    :
    port_name{YType::str, "port-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;

    yang_name = "member-data"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::~MemberData()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::has_data() const
{
    return port_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_name.yfilter)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_name.is_set || is_set(port_name.yfilter)) leaf_name_data.push_back(port_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters == nullptr)
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters>();
        }
        return mlacp_tlv_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_tlv_counters != nullptr)
    {
        children["mlacp-tlv-counters"] = mlacp_tlv_counters;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-name")
    {
        port_name = value;
        port_name.value_namespace = name_space;
        port_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-name")
    {
        port_name.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-tlv-counters" || name == "port-name")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(last_unexpected_event.yfilter)
	|| ydk::is_set(received_nak_tl_vs.yfilter)
	|| ydk::is_set(received_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_config_tl_vs.yfilter)
	|| ydk::is_set(sent_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_state_tl_vs.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.yfilter)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.yfilter)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.yfilter)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.yfilter)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.yfilter)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.yfilter)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
        last_unexpected_event.value_namespace = name_space;
        last_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
        received_nak_tl_vs.value_namespace = name_space;
        received_nak_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
        received_priority_tl_vs.value_namespace = name_space;
        received_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
        sent_config_tl_vs.value_namespace = name_space;
        sent_config_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
        sent_priority_tl_vs.value_namespace = name_space;
        sent_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
        sent_state_tl_vs.value_namespace = name_space;
        sent_state_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event.yfilter = yfilter;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "last-unexpected-event" || name == "received-nak-tl-vs" || name == "received-priority-tl-vs" || name == "sent-config-tl-vs" || name == "sent-priority-tl-vs" || name == "sent-state-tl-vs" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::MlacpSyncRequestsOnAllForeignPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-foreign-ports"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::~MlacpSyncRequestsOnAllForeignPorts()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-ports"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_::NodeData_()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"},
    node_id{YType::uint32, "node-id"}
{

    yang_name = "node-data"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_::~NodeData_()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_::has_data() const
{
    return iccp_group_id.is_set
	|| node_id.is_set;
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(node_id.yfilter);
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-id" || name == "node-id")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "mlacp-member-counters"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MlacpMemberCounters::Nodes::~Nodes()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpMemberCounters::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::MlacpMemberCounters::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-member-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpMemberCounters::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpMemberCounters::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::Node()
    :
    node{YType::str, "node"}
    	,
    node_item(std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem>())
{
    node_item->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::~Node()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::has_data() const
{
    return node.is_set
	|| (node_item !=  nullptr && node_item->has_data());
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| (node_item !=  nullptr && node_item->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-member-counters/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node='" <<node <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-item")
    {
        if(node_item == nullptr)
        {
            node_item = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem>();
        }
        return node_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node_item != nullptr)
    {
        children["node-item"] = node_item;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-item" || name == "node")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::NodeItem()
{

    yang_name = "node-item"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::~NodeItem()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::Items()
    :
    bundle_data(std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData>())
{
    bundle_data->parent = this;

    yang_name = "items"; yang_parent_name = "node-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::~Items()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::has_data() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return (bundle_data !=  nullptr && bundle_data->has_data());
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::has_operation() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bundle_data !=  nullptr && bundle_data->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        if(bundle_data == nullptr)
        {
            bundle_data = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData>();
        }
        return bundle_data;
    }

    if(child_yang_name == "member-data")
    {
        for(auto const & c : member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData>();
        c->parent = this;
        member_data.push_back(c);
        return c;
    }

    if(child_yang_name == "node-data")
    {
        for(auto const & c : node_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData>();
        c->parent = this;
        node_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_data != nullptr)
    {
        children["bundle-data"] = bundle_data;
    }

    for (auto const & c : member_data)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : node_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-data" || name == "member-data" || name == "node-data")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"},
    iccp_group_id{YType::uint32, "iccp-group-id"}
    	,
    mlacp_sync_requests_on_all_local_ports(std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts>())
{
    mlacp_sync_requests_on_all_local_ports->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::has_data() const
{
    return bundle_name.is_set
	|| iccp_group_id.is_set
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_data());
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-sync-requests-on-all-local-ports")
    {
        if(mlacp_sync_requests_on_all_local_ports == nullptr)
        {
            mlacp_sync_requests_on_all_local_ports = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts>();
        }
        return mlacp_sync_requests_on_all_local_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_sync_requests_on_all_local_ports != nullptr)
    {
        children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-sync-requests-on-all-local-ports" || name == "bundle-name" || name == "iccp-group-id")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::MlacpSyncRequestsOnAllLocalPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-local-ports"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::~MlacpSyncRequestsOnAllLocalPorts()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-ports"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MemberData()
    :
    port_name{YType::str, "port-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;

    yang_name = "member-data"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::~MemberData()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::has_data() const
{
    return port_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_name.yfilter)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_name.is_set || is_set(port_name.yfilter)) leaf_name_data.push_back(port_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters == nullptr)
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters>();
        }
        return mlacp_tlv_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_tlv_counters != nullptr)
    {
        children["mlacp-tlv-counters"] = mlacp_tlv_counters;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-name")
    {
        port_name = value;
        port_name.value_namespace = name_space;
        port_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-name")
    {
        port_name.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-tlv-counters" || name == "port-name")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(last_unexpected_event.yfilter)
	|| ydk::is_set(received_nak_tl_vs.yfilter)
	|| ydk::is_set(received_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_config_tl_vs.yfilter)
	|| ydk::is_set(sent_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_state_tl_vs.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.yfilter)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.yfilter)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.yfilter)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.yfilter)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.yfilter)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.yfilter)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
        last_unexpected_event.value_namespace = name_space;
        last_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
        received_nak_tl_vs.value_namespace = name_space;
        received_nak_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
        received_priority_tl_vs.value_namespace = name_space;
        received_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
        sent_config_tl_vs.value_namespace = name_space;
        sent_config_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
        sent_priority_tl_vs.value_namespace = name_space;
        sent_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
        sent_state_tl_vs.value_namespace = name_space;
        sent_state_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event.yfilter = yfilter;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "last-unexpected-event" || name == "received-nak-tl-vs" || name == "received-priority-tl-vs" || name == "sent-config-tl-vs" || name == "sent-priority-tl-vs" || name == "sent-state-tl-vs" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData()
    :
    mlacp_sync_requests_on_all_foreign_ports(std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts>())
	,node_data(std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_>())
{
    mlacp_sync_requests_on_all_foreign_ports->parent = this;
    node_data->parent = this;

    yang_name = "node-data"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::~NodeData()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::has_data() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    return (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_data())
	|| (node_data !=  nullptr && node_data->has_data());
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::has_operation() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_operation())
	|| (node_data !=  nullptr && node_data->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-data")
    {
        for(auto const & c : member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData>();
        c->parent = this;
        member_data.push_back(c);
        return c;
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-ports")
    {
        if(mlacp_sync_requests_on_all_foreign_ports == nullptr)
        {
            mlacp_sync_requests_on_all_foreign_ports = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts>();
        }
        return mlacp_sync_requests_on_all_foreign_ports;
    }

    if(child_yang_name == "node-data")
    {
        if(node_data == nullptr)
        {
            node_data = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_>();
        }
        return node_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : member_data)
    {
        children[c->get_segment_path()] = c;
    }

    if(mlacp_sync_requests_on_all_foreign_ports != nullptr)
    {
        children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
    }

    if(node_data != nullptr)
    {
        children["node-data"] = node_data;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-data" || name == "mlacp-sync-requests-on-all-foreign-ports" || name == "node-data")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MemberData()
    :
    port_name{YType::str, "port-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;

    yang_name = "member-data"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::~MemberData()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::has_data() const
{
    return port_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_name.yfilter)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_name.is_set || is_set(port_name.yfilter)) leaf_name_data.push_back(port_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters == nullptr)
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters>();
        }
        return mlacp_tlv_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_tlv_counters != nullptr)
    {
        children["mlacp-tlv-counters"] = mlacp_tlv_counters;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-name")
    {
        port_name = value;
        port_name.value_namespace = name_space;
        port_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-name")
    {
        port_name.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-tlv-counters" || name == "port-name")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(last_unexpected_event.yfilter)
	|| ydk::is_set(received_nak_tl_vs.yfilter)
	|| ydk::is_set(received_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_config_tl_vs.yfilter)
	|| ydk::is_set(sent_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_state_tl_vs.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.yfilter)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.yfilter)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.yfilter)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.yfilter)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.yfilter)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.yfilter)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
        last_unexpected_event.value_namespace = name_space;
        last_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
        received_nak_tl_vs.value_namespace = name_space;
        received_nak_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
        received_priority_tl_vs.value_namespace = name_space;
        received_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
        sent_config_tl_vs.value_namespace = name_space;
        sent_config_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
        sent_priority_tl_vs.value_namespace = name_space;
        sent_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
        sent_state_tl_vs.value_namespace = name_space;
        sent_state_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event.yfilter = yfilter;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "last-unexpected-event" || name == "received-nak-tl-vs" || name == "received-priority-tl-vs" || name == "sent-config-tl-vs" || name == "sent-priority-tl-vs" || name == "sent-state-tl-vs" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::MlacpSyncRequestsOnAllForeignPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-foreign-ports"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::~MlacpSyncRequestsOnAllForeignPorts()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-ports"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_::NodeData_()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"},
    node_id{YType::uint32, "node-id"}
{

    yang_name = "node-data"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_::~NodeData_()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_::has_data() const
{
    return iccp_group_id.is_set
	|| node_id.is_set;
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(node_id.yfilter);
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-id" || name == "node-id")
        return true;
    return false;
}

BundleInformation::Protect::Protect()
    :
    protect_bundles(std::make_shared<BundleInformation::Protect::ProtectBundles>())
{
    protect_bundles->parent = this;

    yang_name = "protect"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::Protect::~Protect()
{
}

bool BundleInformation::Protect::has_data() const
{
    return (protect_bundles !=  nullptr && protect_bundles->has_data());
}

bool BundleInformation::Protect::has_operation() const
{
    return is_set(yfilter)
	|| (protect_bundles !=  nullptr && protect_bundles->has_operation());
}

std::string BundleInformation::Protect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Protect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Protect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Protect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protect-bundles")
    {
        if(protect_bundles == nullptr)
        {
            protect_bundles = std::make_shared<BundleInformation::Protect::ProtectBundles>();
        }
        return protect_bundles;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Protect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protect_bundles != nullptr)
    {
        children["protect-bundles"] = protect_bundles;
    }

    return children;
}

void BundleInformation::Protect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Protect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Protect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protect-bundles")
        return true;
    return false;
}

BundleInformation::Protect::ProtectBundles::ProtectBundles()
{

    yang_name = "protect-bundles"; yang_parent_name = "protect"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::Protect::ProtectBundles::~ProtectBundles()
{
}

bool BundleInformation::Protect::ProtectBundles::has_data() const
{
    for (std::size_t index=0; index<protect_bundle.size(); index++)
    {
        if(protect_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Protect::ProtectBundles::has_operation() const
{
    for (std::size_t index=0; index<protect_bundle.size(); index++)
    {
        if(protect_bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Protect::ProtectBundles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/protect/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Protect::ProtectBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Protect::ProtectBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Protect::ProtectBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protect-bundle")
    {
        for(auto const & c : protect_bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Protect::ProtectBundles::ProtectBundle>();
        c->parent = this;
        protect_bundle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Protect::ProtectBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protect_bundle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Protect::ProtectBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Protect::ProtectBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Protect::ProtectBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protect-bundle")
        return true;
    return false;
}

BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    protect_bundle_item(std::make_shared<BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem>())
{
    protect_bundle_item->parent = this;

    yang_name = "protect-bundle"; yang_parent_name = "protect-bundles"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::Protect::ProtectBundles::ProtectBundle::~ProtectBundle()
{
}

bool BundleInformation::Protect::ProtectBundles::ProtectBundle::has_data() const
{
    return bundle_interface.is_set
	|| (protect_bundle_item !=  nullptr && protect_bundle_item->has_data());
}

bool BundleInformation::Protect::ProtectBundles::ProtectBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (protect_bundle_item !=  nullptr && protect_bundle_item->has_operation());
}

std::string BundleInformation::Protect::ProtectBundles::ProtectBundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/protect/protect-bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Protect::ProtectBundles::ProtectBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-bundle" <<"[bundle-interface='" <<bundle_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Protect::ProtectBundles::ProtectBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Protect::ProtectBundles::ProtectBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protect-bundle-item")
    {
        if(protect_bundle_item == nullptr)
        {
            protect_bundle_item = std::make_shared<BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem>();
        }
        return protect_bundle_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Protect::ProtectBundles::ProtectBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protect_bundle_item != nullptr)
    {
        children["protect-bundle-item"] = protect_bundle_item;
    }

    return children;
}

void BundleInformation::Protect::ProtectBundles::ProtectBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Protect::ProtectBundles::ProtectBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::Protect::ProtectBundles::ProtectBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protect-bundle-item" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::ProtectBundleItem()
    :
    bundle_interface_handle{YType::str, "bundle-interface-handle"},
    event_type{YType::enumeration, "event-type"},
    interface_up{YType::boolean, "interface-up"},
    minimum_active_links{YType::uint32, "minimum-active-links"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    registered{YType::boolean, "registered"},
    slow_path_trigger{YType::boolean, "slow-path-trigger"},
    slow_path_up{YType::boolean, "slow-path-up"},
    time_stamp{YType::uint64, "time-stamp"}
{

    yang_name = "protect-bundle-item"; yang_parent_name = "protect-bundle"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::~ProtectBundleItem()
{
}

bool BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::has_data() const
{
    for (std::size_t index=0; index<member_info.size(); index++)
    {
        if(member_info[index]->has_data())
            return true;
    }
    return bundle_interface_handle.is_set
	|| event_type.is_set
	|| interface_up.is_set
	|| minimum_active_links.is_set
	|| minimum_bandwidth.is_set
	|| registered.is_set
	|| slow_path_trigger.is_set
	|| slow_path_up.is_set
	|| time_stamp.is_set;
}

bool BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::has_operation() const
{
    for (std::size_t index=0; index<member_info.size(); index++)
    {
        if(member_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface_handle.yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| ydk::is_set(interface_up.yfilter)
	|| ydk::is_set(minimum_active_links.yfilter)
	|| ydk::is_set(minimum_bandwidth.yfilter)
	|| ydk::is_set(registered.yfilter)
	|| ydk::is_set(slow_path_trigger.yfilter)
	|| ydk::is_set(slow_path_up.yfilter)
	|| ydk::is_set(time_stamp.yfilter);
}

std::string BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-bundle-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface_handle.is_set || is_set(bundle_interface_handle.yfilter)) leaf_name_data.push_back(bundle_interface_handle.get_name_leafdata());
    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());
    if (interface_up.is_set || is_set(interface_up.yfilter)) leaf_name_data.push_back(interface_up.get_name_leafdata());
    if (minimum_active_links.is_set || is_set(minimum_active_links.yfilter)) leaf_name_data.push_back(minimum_active_links.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.yfilter)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (registered.is_set || is_set(registered.yfilter)) leaf_name_data.push_back(registered.get_name_leafdata());
    if (slow_path_trigger.is_set || is_set(slow_path_trigger.yfilter)) leaf_name_data.push_back(slow_path_trigger.get_name_leafdata());
    if (slow_path_up.is_set || is_set(slow_path_up.yfilter)) leaf_name_data.push_back(slow_path_up.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-info")
    {
        for(auto const & c : member_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo>();
        c->parent = this;
        member_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : member_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface-handle")
    {
        bundle_interface_handle = value;
        bundle_interface_handle.value_namespace = name_space;
        bundle_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-up")
    {
        interface_up = value;
        interface_up.value_namespace = name_space;
        interface_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links = value;
        minimum_active_links.value_namespace = name_space;
        minimum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
        minimum_bandwidth.value_namespace = name_space;
        minimum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "registered")
    {
        registered = value;
        registered.value_namespace = name_space;
        registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slow-path-trigger")
    {
        slow_path_trigger = value;
        slow_path_trigger.value_namespace = name_space;
        slow_path_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slow-path-up")
    {
        slow_path_up = value;
        slow_path_up.value_namespace = name_space;
        slow_path_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface-handle")
    {
        bundle_interface_handle.yfilter = yfilter;
    }
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
    if(value_path == "interface-up")
    {
        interface_up.yfilter = yfilter;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links.yfilter = yfilter;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "registered")
    {
        registered.yfilter = yfilter;
    }
    if(value_path == "slow-path-trigger")
    {
        slow_path_trigger.yfilter = yfilter;
    }
    if(value_path == "slow-path-up")
    {
        slow_path_up.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-info" || name == "bundle-interface-handle" || name == "event-type" || name == "interface-up" || name == "minimum-active-links" || name == "minimum-bandwidth" || name == "registered" || name == "slow-path-trigger" || name == "slow-path-up" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::MemberInfo()
    :
    active{YType::boolean, "active"},
    bandwidth{YType::uint32, "bandwidth"},
    interface_handle{YType::str, "interface-handle"},
    link_order_number{YType::uint16, "link-order-number"},
    node{YType::str, "node"},
    notification_received{YType::boolean, "notification-received"},
    slow_path_up{YType::boolean, "slow-path-up"},
    time_stamp{YType::uint64, "time-stamp"},
    underlying_link_id{YType::uint16, "underlying-link-id"}
{

    yang_name = "member-info"; yang_parent_name = "protect-bundle-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::~MemberInfo()
{
}

bool BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::has_data() const
{
    return active.is_set
	|| bandwidth.is_set
	|| interface_handle.is_set
	|| link_order_number.is_set
	|| node.is_set
	|| notification_received.is_set
	|| slow_path_up.is_set
	|| time_stamp.is_set
	|| underlying_link_id.is_set;
}

bool BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(link_order_number.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(notification_received.yfilter)
	|| ydk::is_set(slow_path_up.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(underlying_link_id.yfilter);
}

std::string BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (link_order_number.is_set || is_set(link_order_number.yfilter)) leaf_name_data.push_back(link_order_number.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (notification_received.is_set || is_set(notification_received.yfilter)) leaf_name_data.push_back(notification_received.get_name_leafdata());
    if (slow_path_up.is_set || is_set(slow_path_up.yfilter)) leaf_name_data.push_back(slow_path_up.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (underlying_link_id.is_set || is_set(underlying_link_id.yfilter)) leaf_name_data.push_back(underlying_link_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-number")
    {
        link_order_number = value;
        link_order_number.value_namespace = name_space;
        link_order_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-received")
    {
        notification_received = value;
        notification_received.value_namespace = name_space;
        notification_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slow-path-up")
    {
        slow_path_up = value;
        slow_path_up.value_namespace = name_space;
        slow_path_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id = value;
        underlying_link_id.value_namespace = name_space;
        underlying_link_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "link-order-number")
    {
        link_order_number.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "notification-received")
    {
        notification_received.yfilter = yfilter;
    }
    if(value_path == "slow-path-up")
    {
        slow_path_up.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id.yfilter = yfilter;
    }
}

bool BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "bandwidth" || name == "interface-handle" || name == "link-order-number" || name == "node" || name == "notification-received" || name == "slow-path-up" || name == "time-stamp" || name == "underlying-link-id")
        return true;
    return false;
}

BundleInformation::ScheduledActions::ScheduledActions()
    :
    scheduled_actions_bundles(std::make_shared<BundleInformation::ScheduledActions::ScheduledActionsBundles>())
{
    scheduled_actions_bundles->parent = this;

    yang_name = "scheduled-actions"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::ScheduledActions::~ScheduledActions()
{
}

bool BundleInformation::ScheduledActions::has_data() const
{
    return (scheduled_actions_bundles !=  nullptr && scheduled_actions_bundles->has_data());
}

bool BundleInformation::ScheduledActions::has_operation() const
{
    return is_set(yfilter)
	|| (scheduled_actions_bundles !=  nullptr && scheduled_actions_bundles->has_operation());
}

std::string BundleInformation::ScheduledActions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::ScheduledActions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scheduled-actions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::ScheduledActions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::ScheduledActions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scheduled-actions-bundles")
    {
        if(scheduled_actions_bundles == nullptr)
        {
            scheduled_actions_bundles = std::make_shared<BundleInformation::ScheduledActions::ScheduledActionsBundles>();
        }
        return scheduled_actions_bundles;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::ScheduledActions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scheduled_actions_bundles != nullptr)
    {
        children["scheduled-actions-bundles"] = scheduled_actions_bundles;
    }

    return children;
}

void BundleInformation::ScheduledActions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::ScheduledActions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::ScheduledActions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scheduled-actions-bundles")
        return true;
    return false;
}

BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundles()
{

    yang_name = "scheduled-actions-bundles"; yang_parent_name = "scheduled-actions"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::ScheduledActions::ScheduledActionsBundles::~ScheduledActionsBundles()
{
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::has_data() const
{
    for (std::size_t index=0; index<scheduled_actions_bundle.size(); index++)
    {
        if(scheduled_actions_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::has_operation() const
{
    for (std::size_t index=0; index<scheduled_actions_bundle.size(); index++)
    {
        if(scheduled_actions_bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::ScheduledActions::ScheduledActionsBundles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/scheduled-actions/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::ScheduledActions::ScheduledActionsBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scheduled-actions-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::ScheduledActions::ScheduledActionsBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::ScheduledActions::ScheduledActionsBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scheduled-actions-bundle")
    {
        for(auto const & c : scheduled_actions_bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle>();
        c->parent = this;
        scheduled_actions_bundle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::ScheduledActions::ScheduledActionsBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : scheduled_actions_bundle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::ScheduledActions::ScheduledActionsBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::ScheduledActions::ScheduledActionsBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scheduled-actions-bundle")
        return true;
    return false;
}

BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    scheduled_actions_bundle_item(std::make_shared<BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem>())
{
    scheduled_actions_bundle_item->parent = this;

    yang_name = "scheduled-actions-bundle"; yang_parent_name = "scheduled-actions-bundles"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::~ScheduledActionsBundle()
{
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::has_data() const
{
    return bundle_interface.is_set
	|| (scheduled_actions_bundle_item !=  nullptr && scheduled_actions_bundle_item->has_data());
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (scheduled_actions_bundle_item !=  nullptr && scheduled_actions_bundle_item->has_operation());
}

std::string BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/scheduled-actions/scheduled-actions-bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scheduled-actions-bundle" <<"[bundle-interface='" <<bundle_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scheduled-actions-bundle-item")
    {
        if(scheduled_actions_bundle_item == nullptr)
        {
            scheduled_actions_bundle_item = std::make_shared<BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem>();
        }
        return scheduled_actions_bundle_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scheduled_actions_bundle_item != nullptr)
    {
        children["scheduled-actions-bundle-item"] = scheduled_actions_bundle_item;
    }

    return children;
}

void BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scheduled-actions-bundle-item" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledActionsBundleItem()
    :
    bundle_name{YType::str, "bundle-name"}
{

    yang_name = "scheduled-actions-bundle-item"; yang_parent_name = "scheduled-actions-bundle"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::~ScheduledActionsBundleItem()
{
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::has_data() const
{
    for (std::size_t index=0; index<scheduled_action.size(); index++)
    {
        if(scheduled_action[index]->has_data())
            return true;
    }
    return bundle_name.is_set;
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::has_operation() const
{
    for (std::size_t index=0; index<scheduled_action.size(); index++)
    {
        if(scheduled_action[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter);
}

std::string BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scheduled-actions-bundle-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scheduled-action")
    {
        for(auto const & c : scheduled_action)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction>();
        c->parent = this;
        scheduled_action.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : scheduled_action)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scheduled-action" || name == "bundle-name")
        return true;
    return false;
}

BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::ScheduledAction()
    :
    action_state{YType::enumeration, "action-state"},
    mlacp_action{YType::enumeration, "mlacp-action"},
    time_remaining{YType::uint64, "time-remaining"}
{

    yang_name = "scheduled-action"; yang_parent_name = "scheduled-actions-bundle-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::~ScheduledAction()
{
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::has_data() const
{
    return action_state.is_set
	|| mlacp_action.is_set
	|| time_remaining.is_set;
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_state.yfilter)
	|| ydk::is_set(mlacp_action.yfilter)
	|| ydk::is_set(time_remaining.yfilter);
}

std::string BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scheduled-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_state.is_set || is_set(action_state.yfilter)) leaf_name_data.push_back(action_state.get_name_leafdata());
    if (mlacp_action.is_set || is_set(mlacp_action.yfilter)) leaf_name_data.push_back(mlacp_action.get_name_leafdata());
    if (time_remaining.is_set || is_set(time_remaining.yfilter)) leaf_name_data.push_back(time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-state")
    {
        action_state = value;
        action_state.value_namespace = name_space;
        action_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-action")
    {
        mlacp_action = value;
        mlacp_action.value_namespace = name_space;
        mlacp_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-remaining")
    {
        time_remaining = value;
        time_remaining.value_namespace = name_space;
        time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-state")
    {
        action_state.yfilter = yfilter;
    }
    if(value_path == "mlacp-action")
    {
        mlacp_action.yfilter = yfilter;
    }
    if(value_path == "time-remaining")
    {
        time_remaining.yfilter = yfilter;
    }
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-state" || name == "mlacp-action" || name == "time-remaining")
        return true;
    return false;
}

BundleInformation::SystemId::SystemId()
    :
    system_id_global(std::make_shared<BundleInformation::SystemId::SystemIdGlobal>())
	,system_id_iccp_groups(std::make_shared<BundleInformation::SystemId::SystemIdIccpGroups>())
{
    system_id_global->parent = this;
    system_id_iccp_groups->parent = this;

    yang_name = "system-id"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::SystemId::~SystemId()
{
}

bool BundleInformation::SystemId::has_data() const
{
    return (system_id_global !=  nullptr && system_id_global->has_data())
	|| (system_id_iccp_groups !=  nullptr && system_id_iccp_groups->has_data());
}

bool BundleInformation::SystemId::has_operation() const
{
    return is_set(yfilter)
	|| (system_id_global !=  nullptr && system_id_global->has_operation())
	|| (system_id_iccp_groups !=  nullptr && system_id_iccp_groups->has_operation());
}

std::string BundleInformation::SystemId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::SystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::SystemId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::SystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-id-global")
    {
        if(system_id_global == nullptr)
        {
            system_id_global = std::make_shared<BundleInformation::SystemId::SystemIdGlobal>();
        }
        return system_id_global;
    }

    if(child_yang_name == "system-id-iccp-groups")
    {
        if(system_id_iccp_groups == nullptr)
        {
            system_id_iccp_groups = std::make_shared<BundleInformation::SystemId::SystemIdIccpGroups>();
        }
        return system_id_iccp_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::SystemId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_id_global != nullptr)
    {
        children["system-id-global"] = system_id_global;
    }

    if(system_id_iccp_groups != nullptr)
    {
        children["system-id-iccp-groups"] = system_id_iccp_groups;
    }

    return children;
}

void BundleInformation::SystemId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::SystemId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::SystemId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id-global" || name == "system-id-iccp-groups")
        return true;
    return false;
}

BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobal()
    :
    system_id_global_item(std::make_shared<BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem>())
{
    system_id_global_item->parent = this;

    yang_name = "system-id-global"; yang_parent_name = "system-id"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::SystemId::SystemIdGlobal::~SystemIdGlobal()
{
}

bool BundleInformation::SystemId::SystemIdGlobal::has_data() const
{
    return (system_id_global_item !=  nullptr && system_id_global_item->has_data());
}

bool BundleInformation::SystemId::SystemIdGlobal::has_operation() const
{
    return is_set(yfilter)
	|| (system_id_global_item !=  nullptr && system_id_global_item->has_operation());
}

std::string BundleInformation::SystemId::SystemIdGlobal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/system-id/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::SystemId::SystemIdGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id-global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::SystemId::SystemIdGlobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::SystemId::SystemIdGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-id-global-item")
    {
        if(system_id_global_item == nullptr)
        {
            system_id_global_item = std::make_shared<BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem>();
        }
        return system_id_global_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::SystemId::SystemIdGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_id_global_item != nullptr)
    {
        children["system-id-global-item"] = system_id_global_item;
    }

    return children;
}

void BundleInformation::SystemId::SystemIdGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::SystemId::SystemIdGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::SystemId::SystemIdGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id-global-item")
        return true;
    return false;
}

BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemIdGlobalItem()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"},
    system_mac_address{YType::str, "system-mac-address"},
    system_priority{YType::uint16, "system-priority"}
    	,
    system_id(std::make_shared<BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_>())
{
    system_id->parent = this;

    yang_name = "system-id-global-item"; yang_parent_name = "system-id-global"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::~SystemIdGlobalItem()
{
}

bool BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::has_data() const
{
    return iccp_group_id.is_set
	|| system_mac_address.is_set
	|| system_priority.is_set
	|| (system_id !=  nullptr && system_id->has_data());
}

bool BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(system_mac_address.yfilter)
	|| ydk::is_set(system_priority.yfilter)
	|| (system_id !=  nullptr && system_id->has_operation());
}

std::string BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/system-id/system-id-global/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id-global-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (system_mac_address.is_set || is_set(system_mac_address.yfilter)) leaf_name_data.push_back(system_mac_address.get_name_leafdata());
    if (system_priority.is_set || is_set(system_priority.yfilter)) leaf_name_data.push_back(system_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-id")
    {
        if(system_id == nullptr)
        {
            system_id = std::make_shared<BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_>();
        }
        return system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_id != nullptr)
    {
        children["system-id"] = system_id;
    }

    return children;
}

void BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-mac-address")
    {
        system_mac_address = value;
        system_mac_address.value_namespace = name_space;
        system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-priority")
    {
        system_priority = value;
        system_priority.value_namespace = name_space;
        system_priority.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "system-mac-address")
    {
        system_mac_address.yfilter = yfilter;
    }
    if(value_path == "system-priority")
    {
        system_priority.yfilter = yfilter;
    }
}

bool BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "iccp-group-id" || name == "system-mac-address" || name == "system-priority")
        return true;
    return false;
}

BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemId_()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system-id"; yang_parent_name = "system-id-global-item"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::~SystemId_()
{
}

bool BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/system-id/system-id-global/system-id-global-item/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system-id"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/system-id/system-id-global/system-id-global-item/system-id/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroups()
{

    yang_name = "system-id-iccp-groups"; yang_parent_name = "system-id"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::SystemId::SystemIdIccpGroups::~SystemIdIccpGroups()
{
}

bool BundleInformation::SystemId::SystemIdIccpGroups::has_data() const
{
    for (std::size_t index=0; index<system_id_iccp_group.size(); index++)
    {
        if(system_id_iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::SystemId::SystemIdIccpGroups::has_operation() const
{
    for (std::size_t index=0; index<system_id_iccp_group.size(); index++)
    {
        if(system_id_iccp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::SystemId::SystemIdIccpGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/system-id/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::SystemId::SystemIdIccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id-iccp-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::SystemId::SystemIdIccpGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::SystemId::SystemIdIccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-id-iccp-group")
    {
        for(auto const & c : system_id_iccp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup>();
        c->parent = this;
        system_id_iccp_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::SystemId::SystemIdIccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : system_id_iccp_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::SystemId::SystemIdIccpGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::SystemId::SystemIdIccpGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::SystemId::SystemIdIccpGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id-iccp-group")
        return true;
    return false;
}

BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroup()
    :
    iccp_group{YType::uint32, "iccp-group"}
    	,
    system_id_iccp_group_item(std::make_shared<BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem>())
{
    system_id_iccp_group_item->parent = this;

    yang_name = "system-id-iccp-group"; yang_parent_name = "system-id-iccp-groups"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::~SystemIdIccpGroup()
{
}

bool BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::has_data() const
{
    return iccp_group.is_set
	|| (system_id_iccp_group_item !=  nullptr && system_id_iccp_group_item->has_data());
}

bool BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group.yfilter)
	|| (system_id_iccp_group_item !=  nullptr && system_id_iccp_group_item->has_operation());
}

std::string BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/system-id/system-id-iccp-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id-iccp-group" <<"[iccp-group='" <<iccp_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.yfilter)) leaf_name_data.push_back(iccp_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-id-iccp-group-item")
    {
        if(system_id_iccp_group_item == nullptr)
        {
            system_id_iccp_group_item = std::make_shared<BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem>();
        }
        return system_id_iccp_group_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_id_iccp_group_item != nullptr)
    {
        children["system-id-iccp-group-item"] = system_id_iccp_group_item;
    }

    return children;
}

void BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
        iccp_group.value_namespace = name_space;
        iccp_group.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group")
    {
        iccp_group.yfilter = yfilter;
    }
}

bool BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id-iccp-group-item" || name == "iccp-group")
        return true;
    return false;
}

BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemIdIccpGroupItem()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"},
    system_mac_address{YType::str, "system-mac-address"},
    system_priority{YType::uint16, "system-priority"}
    	,
    system_id(std::make_shared<BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_>())
{
    system_id->parent = this;

    yang_name = "system-id-iccp-group-item"; yang_parent_name = "system-id-iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::~SystemIdIccpGroupItem()
{
}

bool BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::has_data() const
{
    return iccp_group_id.is_set
	|| system_mac_address.is_set
	|| system_priority.is_set
	|| (system_id !=  nullptr && system_id->has_data());
}

bool BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(system_mac_address.yfilter)
	|| ydk::is_set(system_priority.yfilter)
	|| (system_id !=  nullptr && system_id->has_operation());
}

std::string BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id-iccp-group-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (system_mac_address.is_set || is_set(system_mac_address.yfilter)) leaf_name_data.push_back(system_mac_address.get_name_leafdata());
    if (system_priority.is_set || is_set(system_priority.yfilter)) leaf_name_data.push_back(system_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-id")
    {
        if(system_id == nullptr)
        {
            system_id = std::make_shared<BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_>();
        }
        return system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_id != nullptr)
    {
        children["system-id"] = system_id;
    }

    return children;
}

void BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-mac-address")
    {
        system_mac_address = value;
        system_mac_address.value_namespace = name_space;
        system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-priority")
    {
        system_priority = value;
        system_priority.value_namespace = name_space;
        system_priority.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "system-mac-address")
    {
        system_mac_address.yfilter = yfilter;
    }
    if(value_path == "system-priority")
    {
        system_priority.yfilter = yfilter;
    }
}

bool BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "iccp-group-id" || name == "system-mac-address" || name == "system-priority")
        return true;
    return false;
}

BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemId_()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system-id"; yang_parent_name = "system-id-iccp-group-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::~SystemId_()
{
}

bool BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system-id"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

Bundles::Bundles()
    :
    bundles(std::make_shared<Bundles::Bundles_>())
{
    bundles->parent = this;

    yang_name = "bundles"; yang_parent_name = "Cisco-IOS-XR-bundlemgr-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Bundles::~Bundles()
{
}

bool Bundles::has_data() const
{
    return (bundles !=  nullptr && bundles->has_data());
}

bool Bundles::has_operation() const
{
    return is_set(yfilter)
	|| (bundles !=  nullptr && bundles->has_operation());
}

std::string Bundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundles")
    {
        if(bundles == nullptr)
        {
            bundles = std::make_shared<Bundles::Bundles_>();
        }
        return bundles;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundles != nullptr)
    {
        children["bundles"] = bundles;
    }

    return children;
}

void Bundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Bundles::clone_ptr() const
{
    return std::make_shared<Bundles>();
}

std::string Bundles::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Bundles::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Bundles::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Bundles::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Bundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundles")
        return true;
    return false;
}

Bundles::Bundles_::Bundles_()
{

    yang_name = "bundles"; yang_parent_name = "bundles"; is_top_level_class = false; has_list_ancestor = false;
}

Bundles::Bundles_::~Bundles_()
{
}

bool Bundles::Bundles_::has_data() const
{
    for (std::size_t index=0; index<bundle.size(); index++)
    {
        if(bundle[index]->has_data())
            return true;
    }
    return false;
}

bool Bundles::Bundles_::has_operation() const
{
    for (std::size_t index=0; index<bundle.size(); index++)
    {
        if(bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bundles::Bundles_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string Bundles::Bundles_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bundles::Bundles_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bundles::Bundles_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle")
    {
        for(auto const & c : bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bundles::Bundles_::Bundle>();
        c->parent = this;
        bundle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bundles::Bundles_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bundles::Bundles_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bundles::Bundles_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bundles::Bundles_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle")
        return true;
    return false;
}

Bundles::Bundles_::Bundle::Bundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    data(std::make_shared<Bundles::Bundles_::Bundle::Data>())
	,members(std::make_shared<Bundles::Bundles_::Bundle::Members>())
{
    data->parent = this;
    members->parent = this;

    yang_name = "bundle"; yang_parent_name = "bundles"; is_top_level_class = false; has_list_ancestor = false;
}

Bundles::Bundles_::Bundle::~Bundle()
{
}

bool Bundles::Bundles_::Bundle::has_data() const
{
    return bundle_interface.is_set
	|| (data !=  nullptr && data->has_data())
	|| (members !=  nullptr && members->has_data());
}

bool Bundles::Bundles_::Bundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (data !=  nullptr && data->has_operation())
	|| (members !=  nullptr && members->has_operation());
}

std::string Bundles::Bundles_::Bundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundles/bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string Bundles::Bundles_::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle" <<"[bundle-interface='" <<bundle_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bundles::Bundles_::Bundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bundles::Bundles_::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<Bundles::Bundles_::Bundle::Data>();
        }
        return data;
    }

    if(child_yang_name == "members")
    {
        if(members == nullptr)
        {
            members = std::make_shared<Bundles::Bundles_::Bundle::Members>();
        }
        return members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bundles::Bundles_::Bundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    if(members != nullptr)
    {
        children["members"] = members;
    }

    return children;
}

void Bundles::Bundles_::Bundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Bundles::Bundles_::Bundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool Bundles::Bundles_::Bundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "members" || name == "bundle-interface")
        return true;
    return false;
}

Bundles::Bundles_::Bundle::Data::Data()
    :
    active_foreign_member_count{YType::uint16, "active-foreign-member-count"},
    active_member_count{YType::uint16, "active-member-count"},
    available_bandwidth{YType::uint32, "available-bandwidth"},
    bundle_interface_name{YType::str, "bundle-interface-name"},
    bundle_status{YType::enumeration, "bundle-status"},
    cisco_extensions{YType::boolean, "cisco-extensions"},
    collector_max_delay{YType::uint16, "collector-max-delay"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    configured_foreign_member_count{YType::uint16, "configured-foreign-member-count"},
    configured_member_count{YType::uint16, "configured-member-count"},
    effective_bandwidth{YType::uint32, "effective-bandwidth"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    inter_chassis{YType::boolean, "inter-chassis"},
    ipv4bfd_status{YType::enumeration, "ipv4bfd-status"},
    ipv6bfd_status{YType::enumeration, "ipv6bfd-status"},
    is_active{YType::boolean, "is-active"},
    lacp_nonrevertive{YType::boolean, "lacp-nonrevertive"},
    lacp_status{YType::enumeration, "lacp-status"},
    link_order_status{YType::enumeration, "link-order-status"},
    load_balance_hash_type{YType::str, "load-balance-hash-type"},
    load_balance_locality_threshold{YType::uint16, "load-balance-locality-threshold"},
    mac_source{YType::enumeration, "mac-source"},
    mac_source_member{YType::str, "mac-source-member"},
    maximize_threshold_value_band_width{YType::uint32, "maximize-threshold-value-band-width"},
    maximize_threshold_value_links{YType::uint32, "maximize-threshold-value-links"},
    maximum_active_links{YType::uint8, "maximum-active-links"},
    maximum_active_links_source{YType::enumeration, "maximum-active-links-source"},
    minimum_active_links{YType::uint8, "minimum-active-links"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    mlacp_mode{YType::enumeration, "mlacp-mode"},
    mlacp_status{YType::enumeration, "mlacp-status"},
    primary_member{YType::str, "primary-member"},
    recovery_delay{YType::uint16, "recovery-delay"},
    singleton{YType::boolean, "singleton"},
    standby_member_count{YType::uint16, "standby-member-count"},
    suppression_timer{YType::uint16, "suppression-timer"},
    switchover_type{YType::enumeration, "switchover-type"},
    wait_while_timer{YType::uint16, "wait-while-timer"}
    	,
    mac_address(std::make_shared<Bundles::Bundles_::Bundle::Data::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "data"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = true;
}

Bundles::Bundles_::Bundle::Data::~Data()
{
}

bool Bundles::Bundles_::Bundle::Data::has_data() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_data())
            return true;
    }
    return active_foreign_member_count.is_set
	|| active_member_count.is_set
	|| available_bandwidth.is_set
	|| bundle_interface_name.is_set
	|| bundle_status.is_set
	|| cisco_extensions.is_set
	|| collector_max_delay.is_set
	|| configured_bandwidth.is_set
	|| configured_foreign_member_count.is_set
	|| configured_member_count.is_set
	|| effective_bandwidth.is_set
	|| iccp_group_id.is_set
	|| inter_chassis.is_set
	|| ipv4bfd_status.is_set
	|| ipv6bfd_status.is_set
	|| is_active.is_set
	|| lacp_nonrevertive.is_set
	|| lacp_status.is_set
	|| link_order_status.is_set
	|| load_balance_hash_type.is_set
	|| load_balance_locality_threshold.is_set
	|| mac_source.is_set
	|| mac_source_member.is_set
	|| maximize_threshold_value_band_width.is_set
	|| maximize_threshold_value_links.is_set
	|| maximum_active_links.is_set
	|| maximum_active_links_source.is_set
	|| minimum_active_links.is_set
	|| minimum_bandwidth.is_set
	|| mlacp_mode.is_set
	|| mlacp_status.is_set
	|| primary_member.is_set
	|| recovery_delay.is_set
	|| singleton.is_set
	|| standby_member_count.is_set
	|| suppression_timer.is_set
	|| switchover_type.is_set
	|| wait_while_timer.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool Bundles::Bundles_::Bundle::Data::has_operation() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(active_foreign_member_count.yfilter)
	|| ydk::is_set(active_member_count.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(bundle_interface_name.yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(cisco_extensions.yfilter)
	|| ydk::is_set(collector_max_delay.yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(configured_foreign_member_count.yfilter)
	|| ydk::is_set(configured_member_count.yfilter)
	|| ydk::is_set(effective_bandwidth.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(inter_chassis.yfilter)
	|| ydk::is_set(ipv4bfd_status.yfilter)
	|| ydk::is_set(ipv6bfd_status.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| ydk::is_set(lacp_nonrevertive.yfilter)
	|| ydk::is_set(lacp_status.yfilter)
	|| ydk::is_set(link_order_status.yfilter)
	|| ydk::is_set(load_balance_hash_type.yfilter)
	|| ydk::is_set(load_balance_locality_threshold.yfilter)
	|| ydk::is_set(mac_source.yfilter)
	|| ydk::is_set(mac_source_member.yfilter)
	|| ydk::is_set(maximize_threshold_value_band_width.yfilter)
	|| ydk::is_set(maximize_threshold_value_links.yfilter)
	|| ydk::is_set(maximum_active_links.yfilter)
	|| ydk::is_set(maximum_active_links_source.yfilter)
	|| ydk::is_set(minimum_active_links.yfilter)
	|| ydk::is_set(minimum_bandwidth.yfilter)
	|| ydk::is_set(mlacp_mode.yfilter)
	|| ydk::is_set(mlacp_status.yfilter)
	|| ydk::is_set(primary_member.yfilter)
	|| ydk::is_set(recovery_delay.yfilter)
	|| ydk::is_set(singleton.yfilter)
	|| ydk::is_set(standby_member_count.yfilter)
	|| ydk::is_set(suppression_timer.yfilter)
	|| ydk::is_set(switchover_type.yfilter)
	|| ydk::is_set(wait_while_timer.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string Bundles::Bundles_::Bundle::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bundles::Bundles_::Bundle::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_foreign_member_count.is_set || is_set(active_foreign_member_count.yfilter)) leaf_name_data.push_back(active_foreign_member_count.get_name_leafdata());
    if (active_member_count.is_set || is_set(active_member_count.yfilter)) leaf_name_data.push_back(active_member_count.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (bundle_interface_name.is_set || is_set(bundle_interface_name.yfilter)) leaf_name_data.push_back(bundle_interface_name.get_name_leafdata());
    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (cisco_extensions.is_set || is_set(cisco_extensions.yfilter)) leaf_name_data.push_back(cisco_extensions.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.yfilter)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (configured_foreign_member_count.is_set || is_set(configured_foreign_member_count.yfilter)) leaf_name_data.push_back(configured_foreign_member_count.get_name_leafdata());
    if (configured_member_count.is_set || is_set(configured_member_count.yfilter)) leaf_name_data.push_back(configured_member_count.get_name_leafdata());
    if (effective_bandwidth.is_set || is_set(effective_bandwidth.yfilter)) leaf_name_data.push_back(effective_bandwidth.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (inter_chassis.is_set || is_set(inter_chassis.yfilter)) leaf_name_data.push_back(inter_chassis.get_name_leafdata());
    if (ipv4bfd_status.is_set || is_set(ipv4bfd_status.yfilter)) leaf_name_data.push_back(ipv4bfd_status.get_name_leafdata());
    if (ipv6bfd_status.is_set || is_set(ipv6bfd_status.yfilter)) leaf_name_data.push_back(ipv6bfd_status.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.yfilter)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (lacp_status.is_set || is_set(lacp_status.yfilter)) leaf_name_data.push_back(lacp_status.get_name_leafdata());
    if (link_order_status.is_set || is_set(link_order_status.yfilter)) leaf_name_data.push_back(link_order_status.get_name_leafdata());
    if (load_balance_hash_type.is_set || is_set(load_balance_hash_type.yfilter)) leaf_name_data.push_back(load_balance_hash_type.get_name_leafdata());
    if (load_balance_locality_threshold.is_set || is_set(load_balance_locality_threshold.yfilter)) leaf_name_data.push_back(load_balance_locality_threshold.get_name_leafdata());
    if (mac_source.is_set || is_set(mac_source.yfilter)) leaf_name_data.push_back(mac_source.get_name_leafdata());
    if (mac_source_member.is_set || is_set(mac_source_member.yfilter)) leaf_name_data.push_back(mac_source_member.get_name_leafdata());
    if (maximize_threshold_value_band_width.is_set || is_set(maximize_threshold_value_band_width.yfilter)) leaf_name_data.push_back(maximize_threshold_value_band_width.get_name_leafdata());
    if (maximize_threshold_value_links.is_set || is_set(maximize_threshold_value_links.yfilter)) leaf_name_data.push_back(maximize_threshold_value_links.get_name_leafdata());
    if (maximum_active_links.is_set || is_set(maximum_active_links.yfilter)) leaf_name_data.push_back(maximum_active_links.get_name_leafdata());
    if (maximum_active_links_source.is_set || is_set(maximum_active_links_source.yfilter)) leaf_name_data.push_back(maximum_active_links_source.get_name_leafdata());
    if (minimum_active_links.is_set || is_set(minimum_active_links.yfilter)) leaf_name_data.push_back(minimum_active_links.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.yfilter)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (mlacp_mode.is_set || is_set(mlacp_mode.yfilter)) leaf_name_data.push_back(mlacp_mode.get_name_leafdata());
    if (mlacp_status.is_set || is_set(mlacp_status.yfilter)) leaf_name_data.push_back(mlacp_status.get_name_leafdata());
    if (primary_member.is_set || is_set(primary_member.yfilter)) leaf_name_data.push_back(primary_member.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.yfilter)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.yfilter)) leaf_name_data.push_back(singleton.get_name_leafdata());
    if (standby_member_count.is_set || is_set(standby_member_count.yfilter)) leaf_name_data.push_back(standby_member_count.get_name_leafdata());
    if (suppression_timer.is_set || is_set(suppression_timer.yfilter)) leaf_name_data.push_back(suppression_timer.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.yfilter)) leaf_name_data.push_back(switchover_type.get_name_leafdata());
    if (wait_while_timer.is_set || is_set(wait_while_timer.yfilter)) leaf_name_data.push_back(wait_while_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bundles::Bundles_::Bundle::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-config")
    {
        for(auto const & c : bfd_config)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bundles::Bundles_::Bundle::Data::BfdConfig>();
        c->parent = this;
        bfd_config.push_back(c);
        return c;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Bundles::Bundles_::Bundle::Data::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bundles::Bundles_::Bundle::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_config)
    {
        children[c->get_segment_path()] = c;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void Bundles::Bundles_::Bundle::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count = value;
        active_foreign_member_count.value_namespace = name_space;
        active_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-member-count")
    {
        active_member_count = value;
        active_member_count.value_namespace = name_space;
        active_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name = value;
        bundle_interface_name.value_namespace = name_space;
        bundle_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions = value;
        cisco_extensions.value_namespace = name_space;
        cisco_extensions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
        collector_max_delay.value_namespace = name_space;
        collector_max_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count = value;
        configured_foreign_member_count.value_namespace = name_space;
        configured_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count = value;
        configured_member_count.value_namespace = name_space;
        configured_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth = value;
        effective_bandwidth.value_namespace = name_space;
        effective_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis = value;
        inter_chassis.value_namespace = name_space;
        inter_chassis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status = value;
        ipv4bfd_status.value_namespace = name_space;
        ipv4bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status = value;
        ipv6bfd_status.value_namespace = name_space;
        ipv6bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
        lacp_nonrevertive.value_namespace = name_space;
        lacp_nonrevertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-status")
    {
        lacp_status = value;
        lacp_status.value_namespace = name_space;
        lacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-status")
    {
        link_order_status = value;
        link_order_status.value_namespace = name_space;
        link_order_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type = value;
        load_balance_hash_type.value_namespace = name_space;
        load_balance_hash_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold = value;
        load_balance_locality_threshold.value_namespace = name_space;
        load_balance_locality_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source")
    {
        mac_source = value;
        mac_source.value_namespace = name_space;
        mac_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member = value;
        mac_source_member.value_namespace = name_space;
        mac_source_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width = value;
        maximize_threshold_value_band_width.value_namespace = name_space;
        maximize_threshold_value_band_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links = value;
        maximize_threshold_value_links.value_namespace = name_space;
        maximize_threshold_value_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links = value;
        maximum_active_links.value_namespace = name_space;
        maximum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source = value;
        maximum_active_links_source.value_namespace = name_space;
        maximum_active_links_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links = value;
        minimum_active_links.value_namespace = name_space;
        minimum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
        minimum_bandwidth.value_namespace = name_space;
        minimum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode = value;
        mlacp_mode.value_namespace = name_space;
        mlacp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status = value;
        mlacp_status.value_namespace = name_space;
        mlacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-member")
    {
        primary_member = value;
        primary_member.value_namespace = name_space;
        primary_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
        recovery_delay.value_namespace = name_space;
        recovery_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleton")
    {
        singleton = value;
        singleton.value_namespace = name_space;
        singleton.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count = value;
        standby_member_count.value_namespace = name_space;
        standby_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer = value;
        suppression_timer.value_namespace = name_space;
        suppression_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
        switchover_type.value_namespace = name_space;
        switchover_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer = value;
        wait_while_timer.value_namespace = name_space;
        wait_while_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Bundles::Bundles_::Bundle::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "active-member-count")
    {
        active_member_count.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name.yfilter = yfilter;
    }
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions.yfilter = yfilter;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count.yfilter = yfilter;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis.yfilter = yfilter;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status.yfilter = yfilter;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive.yfilter = yfilter;
    }
    if(value_path == "lacp-status")
    {
        lacp_status.yfilter = yfilter;
    }
    if(value_path == "link-order-status")
    {
        link_order_status.yfilter = yfilter;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type.yfilter = yfilter;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold.yfilter = yfilter;
    }
    if(value_path == "mac-source")
    {
        mac_source.yfilter = yfilter;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source.yfilter = yfilter;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links.yfilter = yfilter;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode.yfilter = yfilter;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status.yfilter = yfilter;
    }
    if(value_path == "primary-member")
    {
        primary_member.yfilter = yfilter;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay.yfilter = yfilter;
    }
    if(value_path == "singleton")
    {
        singleton.yfilter = yfilter;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count.yfilter = yfilter;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer.yfilter = yfilter;
    }
    if(value_path == "switchover-type")
    {
        switchover_type.yfilter = yfilter;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer.yfilter = yfilter;
    }
}

bool Bundles::Bundles_::Bundle::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-config" || name == "mac-address" || name == "active-foreign-member-count" || name == "active-member-count" || name == "available-bandwidth" || name == "bundle-interface-name" || name == "bundle-status" || name == "cisco-extensions" || name == "collector-max-delay" || name == "configured-bandwidth" || name == "configured-foreign-member-count" || name == "configured-member-count" || name == "effective-bandwidth" || name == "iccp-group-id" || name == "inter-chassis" || name == "ipv4bfd-status" || name == "ipv6bfd-status" || name == "is-active" || name == "lacp-nonrevertive" || name == "lacp-status" || name == "link-order-status" || name == "load-balance-hash-type" || name == "load-balance-locality-threshold" || name == "mac-source" || name == "mac-source-member" || name == "maximize-threshold-value-band-width" || name == "maximize-threshold-value-links" || name == "maximum-active-links" || name == "maximum-active-links-source" || name == "minimum-active-links" || name == "minimum-bandwidth" || name == "mlacp-mode" || name == "mlacp-status" || name == "primary-member" || name == "recovery-delay" || name == "singleton" || name == "standby-member-count" || name == "suppression-timer" || name == "switchover-type" || name == "wait-while-timer")
        return true;
    return false;
}

Bundles::Bundles_::Bundle::Data::BfdConfig::BfdConfig()
    :
    bundle_status{YType::enumeration, "bundle-status"},
    fast_detect{YType::boolean, "fast-detect"},
    mode_info{YType::uint32, "mode-info"},
    nbr_unconfig_timer{YType::uint32, "nbr-unconfig-timer"},
    pref_echo_min_interval{YType::uint32, "pref-echo-min-interval"},
    pref_min_interval{YType::uint32, "pref-min-interval"},
    pref_multiplier{YType::uint16, "pref-multiplier"},
    start_timer{YType::uint32, "start-timer"}
    	,
    destination_address(std::make_shared<Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "bfd-config"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true;
}

Bundles::Bundles_::Bundle::Data::BfdConfig::~BfdConfig()
{
}

bool Bundles::Bundles_::Bundle::Data::BfdConfig::has_data() const
{
    return bundle_status.is_set
	|| fast_detect.is_set
	|| mode_info.is_set
	|| nbr_unconfig_timer.is_set
	|| pref_echo_min_interval.is_set
	|| pref_min_interval.is_set
	|| pref_multiplier.is_set
	|| start_timer.is_set
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool Bundles::Bundles_::Bundle::Data::BfdConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(fast_detect.yfilter)
	|| ydk::is_set(mode_info.yfilter)
	|| ydk::is_set(nbr_unconfig_timer.yfilter)
	|| ydk::is_set(pref_echo_min_interval.yfilter)
	|| ydk::is_set(pref_min_interval.yfilter)
	|| ydk::is_set(pref_multiplier.yfilter)
	|| ydk::is_set(start_timer.yfilter)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string Bundles::Bundles_::Bundle::Data::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bundles::Bundles_::Bundle::Data::BfdConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.yfilter)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (mode_info.is_set || is_set(mode_info.yfilter)) leaf_name_data.push_back(mode_info.get_name_leafdata());
    if (nbr_unconfig_timer.is_set || is_set(nbr_unconfig_timer.yfilter)) leaf_name_data.push_back(nbr_unconfig_timer.get_name_leafdata());
    if (pref_echo_min_interval.is_set || is_set(pref_echo_min_interval.yfilter)) leaf_name_data.push_back(pref_echo_min_interval.get_name_leafdata());
    if (pref_min_interval.is_set || is_set(pref_min_interval.yfilter)) leaf_name_data.push_back(pref_min_interval.get_name_leafdata());
    if (pref_multiplier.is_set || is_set(pref_multiplier.yfilter)) leaf_name_data.push_back(pref_multiplier.get_name_leafdata());
    if (start_timer.is_set || is_set(start_timer.yfilter)) leaf_name_data.push_back(start_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bundles::Bundles_::Bundle::Data::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bundles::Bundles_::Bundle::Data::BfdConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    return children;
}

void Bundles::Bundles_::Bundle::Data::BfdConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
        fast_detect.value_namespace = name_space;
        fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-info")
    {
        mode_info = value;
        mode_info.value_namespace = name_space;
        mode_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer = value;
        nbr_unconfig_timer.value_namespace = name_space;
        nbr_unconfig_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval = value;
        pref_echo_min_interval.value_namespace = name_space;
        pref_echo_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval = value;
        pref_min_interval.value_namespace = name_space;
        pref_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier = value;
        pref_multiplier.value_namespace = name_space;
        pref_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-timer")
    {
        start_timer = value;
        start_timer.value_namespace = name_space;
        start_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Bundles::Bundles_::Bundle::Data::BfdConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "fast-detect")
    {
        fast_detect.yfilter = yfilter;
    }
    if(value_path == "mode-info")
    {
        mode_info.yfilter = yfilter;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer.yfilter = yfilter;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval.yfilter = yfilter;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval.yfilter = yfilter;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier.yfilter = yfilter;
    }
    if(value_path == "start-timer")
    {
        start_timer.yfilter = yfilter;
    }
}

bool Bundles::Bundles_::Bundle::Data::BfdConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "bundle-status" || name == "fast-detect" || name == "mode-info" || name == "nbr-unconfig-timer" || name == "pref-echo-min-interval" || name == "pref-min-interval" || name == "pref-multiplier" || name == "start-timer")
        return true;
    return false;
}

Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination-address"; yang_parent_name = "bfd-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bundles::Bundles_::Bundle::Data::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true;
}

Bundles::Bundles_::Bundle::Data::MacAddress::~MacAddress()
{
}

bool Bundles::Bundles_::Bundle::Data::MacAddress::has_data() const
{
    return address.is_set;
}

bool Bundles::Bundles_::Bundle::Data::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Bundles::Bundles_::Bundle::Data::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bundles::Bundles_::Bundle::Data::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bundles::Bundles_::Bundle::Data::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bundles::Bundles_::Bundle::Data::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bundles::Bundles_::Bundle::Data::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Bundles::Bundles_::Bundle::Data::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Bundles::Bundles_::Bundle::Data::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Bundles::Bundles_::Bundle::Members::Members()
{

    yang_name = "members"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = true;
}

Bundles::Bundles_::Bundle::Members::~Members()
{
}

bool Bundles::Bundles_::Bundle::Members::has_data() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_data())
            return true;
    }
    return false;
}

bool Bundles::Bundles_::Bundle::Members::has_operation() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bundles::Bundles_::Bundle::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bundles::Bundles_::Bundle::Members::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bundles::Bundles_::Bundle::Members::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member")
    {
        for(auto const & c : member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bundles::Bundles_::Bundle::Members::Member>();
        c->parent = this;
        member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bundles::Bundles_::Bundle::Members::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bundles::Bundles_::Bundle::Members::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bundles::Bundles_::Bundle::Members::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bundles::Bundles_::Bundle::Members::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member")
        return true;
    return false;
}

Bundles::Bundles_::Bundle::Members::Member::Member()
    :
    member_interface{YType::str, "member-interface"},
    bandwidth{YType::uint32, "bandwidth"},
    iccp_node{YType::uint32, "iccp-node"},
    interface_name{YType::str, "interface-name"},
    lacp_enabled{YType::str, "lacp-enabled"},
    link_order_number{YType::uint16, "link-order-number"},
    member_name{YType::str, "member-name"},
    member_type{YType::enumeration, "member-type"},
    port_number{YType::uint16, "port-number"},
    port_priority{YType::uint16, "port-priority"},
    underlying_link_id{YType::uint16, "underlying-link-id"}
    	,
    counters(std::make_shared<Bundles::Bundles_::Bundle::Members::Member::Counters>())
	,link_data(std::make_shared<Bundles::Bundles_::Bundle::Members::Member::LinkData>())
	,mac_address(std::make_shared<Bundles::Bundles_::Bundle::Members::Member::MacAddress>())
	,member_mux_data(std::make_shared<Bundles::Bundles_::Bundle::Members::Member::MemberMuxData>())
{
    counters->parent = this;
    link_data->parent = this;
    mac_address->parent = this;
    member_mux_data->parent = this;

    yang_name = "member"; yang_parent_name = "members"; is_top_level_class = false; has_list_ancestor = true;
}

Bundles::Bundles_::Bundle::Members::Member::~Member()
{
}

bool Bundles::Bundles_::Bundle::Members::Member::has_data() const
{
    return member_interface.is_set
	|| bandwidth.is_set
	|| iccp_node.is_set
	|| interface_name.is_set
	|| lacp_enabled.is_set
	|| link_order_number.is_set
	|| member_name.is_set
	|| member_type.is_set
	|| port_number.is_set
	|| port_priority.is_set
	|| underlying_link_id.is_set
	|| (counters !=  nullptr && counters->has_data())
	|| (link_data !=  nullptr && link_data->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (member_mux_data !=  nullptr && member_mux_data->has_data());
}

bool Bundles::Bundles_::Bundle::Members::Member::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(iccp_node.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(lacp_enabled.yfilter)
	|| ydk::is_set(link_order_number.yfilter)
	|| ydk::is_set(member_name.yfilter)
	|| ydk::is_set(member_type.yfilter)
	|| ydk::is_set(port_number.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| ydk::is_set(underlying_link_id.yfilter)
	|| (counters !=  nullptr && counters->has_operation())
	|| (link_data !=  nullptr && link_data->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (member_mux_data !=  nullptr && member_mux_data->has_operation());
}

std::string Bundles::Bundles_::Bundle::Members::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member" <<"[member-interface='" <<member_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bundles::Bundles_::Bundle::Members::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (iccp_node.is_set || is_set(iccp_node.yfilter)) leaf_name_data.push_back(iccp_node.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (lacp_enabled.is_set || is_set(lacp_enabled.yfilter)) leaf_name_data.push_back(lacp_enabled.get_name_leafdata());
    if (link_order_number.is_set || is_set(link_order_number.yfilter)) leaf_name_data.push_back(link_order_number.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (member_type.is_set || is_set(member_type.yfilter)) leaf_name_data.push_back(member_type.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (underlying_link_id.is_set || is_set(underlying_link_id.yfilter)) leaf_name_data.push_back(underlying_link_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bundles::Bundles_::Bundle::Members::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Bundles::Bundles_::Bundle::Members::Member::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "link-data")
    {
        if(link_data == nullptr)
        {
            link_data = std::make_shared<Bundles::Bundles_::Bundle::Members::Member::LinkData>();
        }
        return link_data;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Bundles::Bundles_::Bundle::Members::Member::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "member-mux-data")
    {
        if(member_mux_data == nullptr)
        {
            member_mux_data = std::make_shared<Bundles::Bundles_::Bundle::Members::Member::MemberMuxData>();
        }
        return member_mux_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bundles::Bundles_::Bundle::Members::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(link_data != nullptr)
    {
        children["link-data"] = link_data;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    if(member_mux_data != nullptr)
    {
        children["member-mux-data"] = member_mux_data;
    }

    return children;
}

void Bundles::Bundles_::Bundle::Members::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-node")
    {
        iccp_node = value;
        iccp_node.value_namespace = name_space;
        iccp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-enabled")
    {
        lacp_enabled = value;
        lacp_enabled.value_namespace = name_space;
        lacp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-number")
    {
        link_order_number = value;
        link_order_number.value_namespace = name_space;
        link_order_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-name")
    {
        member_name = value;
        member_name.value_namespace = name_space;
        member_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-type")
    {
        member_type = value;
        member_type.value_namespace = name_space;
        member_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id = value;
        underlying_link_id.value_namespace = name_space;
        underlying_link_id.value_namespace_prefix = name_space_prefix;
    }
}

void Bundles::Bundles_::Bundle::Members::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "iccp-node")
    {
        iccp_node.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "lacp-enabled")
    {
        lacp_enabled.yfilter = yfilter;
    }
    if(value_path == "link-order-number")
    {
        link_order_number.yfilter = yfilter;
    }
    if(value_path == "member-name")
    {
        member_name.yfilter = yfilter;
    }
    if(value_path == "member-type")
    {
        member_type.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id.yfilter = yfilter;
    }
}

bool Bundles::Bundles_::Bundle::Members::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "link-data" || name == "mac-address" || name == "member-mux-data" || name == "member-interface" || name == "bandwidth" || name == "iccp-node" || name == "interface-name" || name == "lacp-enabled" || name == "link-order-number" || name == "member-name" || name == "member-type" || name == "port-number" || name == "port-priority" || name == "underlying-link-id")
        return true;
    return false;
}

Bundles::Bundles_::Bundle::Members::Member::Counters::Counters()
    :
    defaulted{YType::uint32, "defaulted"},
    excess_lacpd_us_received{YType::uint32, "excess-lacpd-us-received"},
    excess_marker_packets_received{YType::uint32, "excess-marker-packets-received"},
    expired{YType::uint32, "expired"},
    illegal_packets_received{YType::uint32, "illegal-packets-received"},
    lacpd_us_received{YType::uint32, "lacpd-us-received"},
    lacpd_us_transmitted{YType::uint32, "lacpd-us-transmitted"},
    last_cleared_nsec{YType::uint32, "last-cleared-nsec"},
    last_cleared_sec{YType::uint32, "last-cleared-sec"},
    marker_packets_received{YType::uint32, "marker-packets-received"},
    marker_responses_transmitted{YType::uint32, "marker-responses-transmitted"}
{

    yang_name = "counters"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true;
}

Bundles::Bundles_::Bundle::Members::Member::Counters::~Counters()
{
}

bool Bundles::Bundles_::Bundle::Members::Member::Counters::has_data() const
{
    return defaulted.is_set
	|| excess_lacpd_us_received.is_set
	|| excess_marker_packets_received.is_set
	|| expired.is_set
	|| illegal_packets_received.is_set
	|| lacpd_us_received.is_set
	|| lacpd_us_transmitted.is_set
	|| last_cleared_nsec.is_set
	|| last_cleared_sec.is_set
	|| marker_packets_received.is_set
	|| marker_responses_transmitted.is_set;
}

bool Bundles::Bundles_::Bundle::Members::Member::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(defaulted.yfilter)
	|| ydk::is_set(excess_lacpd_us_received.yfilter)
	|| ydk::is_set(excess_marker_packets_received.yfilter)
	|| ydk::is_set(expired.yfilter)
	|| ydk::is_set(illegal_packets_received.yfilter)
	|| ydk::is_set(lacpd_us_received.yfilter)
	|| ydk::is_set(lacpd_us_transmitted.yfilter)
	|| ydk::is_set(last_cleared_nsec.yfilter)
	|| ydk::is_set(last_cleared_sec.yfilter)
	|| ydk::is_set(marker_packets_received.yfilter)
	|| ydk::is_set(marker_responses_transmitted.yfilter);
}

std::string Bundles::Bundles_::Bundle::Members::Member::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bundles::Bundles_::Bundle::Members::Member::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (defaulted.is_set || is_set(defaulted.yfilter)) leaf_name_data.push_back(defaulted.get_name_leafdata());
    if (excess_lacpd_us_received.is_set || is_set(excess_lacpd_us_received.yfilter)) leaf_name_data.push_back(excess_lacpd_us_received.get_name_leafdata());
    if (excess_marker_packets_received.is_set || is_set(excess_marker_packets_received.yfilter)) leaf_name_data.push_back(excess_marker_packets_received.get_name_leafdata());
    if (expired.is_set || is_set(expired.yfilter)) leaf_name_data.push_back(expired.get_name_leafdata());
    if (illegal_packets_received.is_set || is_set(illegal_packets_received.yfilter)) leaf_name_data.push_back(illegal_packets_received.get_name_leafdata());
    if (lacpd_us_received.is_set || is_set(lacpd_us_received.yfilter)) leaf_name_data.push_back(lacpd_us_received.get_name_leafdata());
    if (lacpd_us_transmitted.is_set || is_set(lacpd_us_transmitted.yfilter)) leaf_name_data.push_back(lacpd_us_transmitted.get_name_leafdata());
    if (last_cleared_nsec.is_set || is_set(last_cleared_nsec.yfilter)) leaf_name_data.push_back(last_cleared_nsec.get_name_leafdata());
    if (last_cleared_sec.is_set || is_set(last_cleared_sec.yfilter)) leaf_name_data.push_back(last_cleared_sec.get_name_leafdata());
    if (marker_packets_received.is_set || is_set(marker_packets_received.yfilter)) leaf_name_data.push_back(marker_packets_received.get_name_leafdata());
    if (marker_responses_transmitted.is_set || is_set(marker_responses_transmitted.yfilter)) leaf_name_data.push_back(marker_responses_transmitted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bundles::Bundles_::Bundle::Members::Member::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bundles::Bundles_::Bundle::Members::Member::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bundles::Bundles_::Bundle::Members::Member::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "defaulted")
    {
        defaulted = value;
        defaulted.value_namespace = name_space;
        defaulted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received = value;
        excess_lacpd_us_received.value_namespace = name_space;
        excess_lacpd_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received = value;
        excess_marker_packets_received.value_namespace = name_space;
        excess_marker_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired")
    {
        expired = value;
        expired.value_namespace = name_space;
        expired.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received = value;
        illegal_packets_received.value_namespace = name_space;
        illegal_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received = value;
        lacpd_us_received.value_namespace = name_space;
        lacpd_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted = value;
        lacpd_us_transmitted.value_namespace = name_space;
        lacpd_us_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec = value;
        last_cleared_nsec.value_namespace = name_space;
        last_cleared_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec = value;
        last_cleared_sec.value_namespace = name_space;
        last_cleared_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received = value;
        marker_packets_received.value_namespace = name_space;
        marker_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted = value;
        marker_responses_transmitted.value_namespace = name_space;
        marker_responses_transmitted.value_namespace_prefix = name_space_prefix;
    }
}

void Bundles::Bundles_::Bundle::Members::Member::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "defaulted")
    {
        defaulted.yfilter = yfilter;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received.yfilter = yfilter;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received.yfilter = yfilter;
    }
    if(value_path == "expired")
    {
        expired.yfilter = yfilter;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received.yfilter = yfilter;
    }
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received.yfilter = yfilter;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted.yfilter = yfilter;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec.yfilter = yfilter;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec.yfilter = yfilter;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received.yfilter = yfilter;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted.yfilter = yfilter;
    }
}

bool Bundles::Bundles_::Bundle::Members::Member::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "defaulted" || name == "excess-lacpd-us-received" || name == "excess-marker-packets-received" || name == "expired" || name == "illegal-packets-received" || name == "lacpd-us-received" || name == "lacpd-us-transmitted" || name == "last-cleared-nsec" || name == "last-cleared-sec" || name == "marker-packets-received" || name == "marker-responses-transmitted")
        return true;
    return false;
}

Bundles::Bundles_::Bundle::Members::Member::LinkData::LinkData()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    actor_port_id{YType::uint16, "actor-port-id"},
    actor_port_priority{YType::uint16, "actor-port-priority"},
    actor_port_state{YType::uint8, "actor-port-state"},
    actor_system_mac_address{YType::str, "actor-system-mac-address"},
    actor_system_priority{YType::uint16, "actor-system-priority"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    interface_handle{YType::str, "interface-handle"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    partner_port_id{YType::uint16, "partner-port-id"},
    partner_port_priority{YType::uint16, "partner-port-priority"},
    partner_port_state{YType::uint8, "partner-port-state"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_system_priority{YType::uint16, "partner-system-priority"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"}
{

    yang_name = "link-data"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true;
}

Bundles::Bundles_::Bundle::Members::Member::LinkData::~LinkData()
{
}

bool Bundles::Bundles_::Bundle::Members::Member::LinkData::has_data() const
{
    return actor_operational_key.is_set
	|| actor_port_id.is_set
	|| actor_port_priority.is_set
	|| actor_port_state.is_set
	|| actor_system_mac_address.is_set
	|| actor_system_priority.is_set
	|| attached_aggregator_id.is_set
	|| interface_handle.is_set
	|| partner_operational_key.is_set
	|| partner_port_id.is_set
	|| partner_port_priority.is_set
	|| partner_port_state.is_set
	|| partner_system_mac_address.is_set
	|| partner_system_priority.is_set
	|| selected_aggregator_id.is_set;
}

bool Bundles::Bundles_::Bundle::Members::Member::LinkData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actor_operational_key.yfilter)
	|| ydk::is_set(actor_port_id.yfilter)
	|| ydk::is_set(actor_port_priority.yfilter)
	|| ydk::is_set(actor_port_state.yfilter)
	|| ydk::is_set(actor_system_mac_address.yfilter)
	|| ydk::is_set(actor_system_priority.yfilter)
	|| ydk::is_set(attached_aggregator_id.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(partner_operational_key.yfilter)
	|| ydk::is_set(partner_port_id.yfilter)
	|| ydk::is_set(partner_port_priority.yfilter)
	|| ydk::is_set(partner_port_state.yfilter)
	|| ydk::is_set(partner_system_mac_address.yfilter)
	|| ydk::is_set(partner_system_priority.yfilter)
	|| ydk::is_set(selected_aggregator_id.yfilter);
}

std::string Bundles::Bundles_::Bundle::Members::Member::LinkData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bundles::Bundles_::Bundle::Members::Member::LinkData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_operational_key.is_set || is_set(actor_operational_key.yfilter)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (actor_port_id.is_set || is_set(actor_port_id.yfilter)) leaf_name_data.push_back(actor_port_id.get_name_leafdata());
    if (actor_port_priority.is_set || is_set(actor_port_priority.yfilter)) leaf_name_data.push_back(actor_port_priority.get_name_leafdata());
    if (actor_port_state.is_set || is_set(actor_port_state.yfilter)) leaf_name_data.push_back(actor_port_state.get_name_leafdata());
    if (actor_system_mac_address.is_set || is_set(actor_system_mac_address.yfilter)) leaf_name_data.push_back(actor_system_mac_address.get_name_leafdata());
    if (actor_system_priority.is_set || is_set(actor_system_priority.yfilter)) leaf_name_data.push_back(actor_system_priority.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.yfilter)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.yfilter)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (partner_port_id.is_set || is_set(partner_port_id.yfilter)) leaf_name_data.push_back(partner_port_id.get_name_leafdata());
    if (partner_port_priority.is_set || is_set(partner_port_priority.yfilter)) leaf_name_data.push_back(partner_port_priority.get_name_leafdata());
    if (partner_port_state.is_set || is_set(partner_port_state.yfilter)) leaf_name_data.push_back(partner_port_state.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.yfilter)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.yfilter)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.yfilter)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bundles::Bundles_::Bundle::Members::Member::LinkData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bundles::Bundles_::Bundle::Members::Member::LinkData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bundles::Bundles_::Bundle::Members::Member::LinkData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
        actor_operational_key.value_namespace = name_space;
        actor_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id = value;
        actor_port_id.value_namespace = name_space;
        actor_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority = value;
        actor_port_priority.value_namespace = name_space;
        actor_port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state = value;
        actor_port_state.value_namespace = name_space;
        actor_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address = value;
        actor_system_mac_address.value_namespace = name_space;
        actor_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority = value;
        actor_system_priority.value_namespace = name_space;
        actor_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
        attached_aggregator_id.value_namespace = name_space;
        attached_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
        partner_operational_key.value_namespace = name_space;
        partner_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id = value;
        partner_port_id.value_namespace = name_space;
        partner_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority = value;
        partner_port_priority.value_namespace = name_space;
        partner_port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state = value;
        partner_port_state.value_namespace = name_space;
        partner_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
        partner_system_mac_address.value_namespace = name_space;
        partner_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
        partner_system_priority.value_namespace = name_space;
        partner_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
        selected_aggregator_id.value_namespace = name_space;
        selected_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
}

void Bundles::Bundles_::Bundle::Members::Member::LinkData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key.yfilter = yfilter;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id.yfilter = yfilter;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority.yfilter = yfilter;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state.yfilter = yfilter;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority.yfilter = yfilter;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key.yfilter = yfilter;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id.yfilter = yfilter;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority.yfilter = yfilter;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state.yfilter = yfilter;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority.yfilter = yfilter;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id.yfilter = yfilter;
    }
}

bool Bundles::Bundles_::Bundle::Members::Member::LinkData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actor-operational-key" || name == "actor-port-id" || name == "actor-port-priority" || name == "actor-port-state" || name == "actor-system-mac-address" || name == "actor-system-priority" || name == "attached-aggregator-id" || name == "interface-handle" || name == "partner-operational-key" || name == "partner-port-id" || name == "partner-port-priority" || name == "partner-port-state" || name == "partner-system-mac-address" || name == "partner-system-priority" || name == "selected-aggregator-id")
        return true;
    return false;
}

Bundles::Bundles_::Bundle::Members::Member::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true;
}

Bundles::Bundles_::Bundle::Members::Member::MacAddress::~MacAddress()
{
}

bool Bundles::Bundles_::Bundle::Members::Member::MacAddress::has_data() const
{
    return address.is_set;
}

bool Bundles::Bundles_::Bundle::Members::Member::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Bundles::Bundles_::Bundle::Members::Member::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bundles::Bundles_::Bundle::Members::Member::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bundles::Bundles_::Bundle::Members::Member::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bundles::Bundles_::Bundle::Members::Member::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bundles::Bundles_::Bundle::Members::Member::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Bundles::Bundles_::Bundle::Members::Member::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Bundles::Bundles_::Bundle::Members::Member::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxData()
    :
    error{YType::uint32, "error"},
    member_mux_state_reason{YType::enumeration, "member-mux-state-reason"},
    member_state{YType::enumeration, "member-state"},
    mux_state{YType::enumeration, "mux-state"},
    mux_state_reason{YType::enumeration, "mux-state-reason"}
    	,
    member_mux_state_reason_data(std::make_shared<Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData>())
{
    member_mux_state_reason_data->parent = this;

    yang_name = "member-mux-data"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true;
}

Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::~MemberMuxData()
{
}

bool Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::has_data() const
{
    return error.is_set
	|| member_mux_state_reason.is_set
	|| member_state.is_set
	|| mux_state.is_set
	|| mux_state_reason.is_set
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_data());
}

bool Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(member_mux_state_reason.yfilter)
	|| ydk::is_set(member_state.yfilter)
	|| ydk::is_set(mux_state.yfilter)
	|| ydk::is_set(mux_state_reason.yfilter)
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_operation());
}

std::string Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (member_mux_state_reason.is_set || is_set(member_mux_state_reason.yfilter)) leaf_name_data.push_back(member_mux_state_reason.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.yfilter)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mux_state.is_set || is_set(mux_state.yfilter)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (mux_state_reason.is_set || is_set(mux_state_reason.yfilter)) leaf_name_data.push_back(mux_state_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-mux-state-reason-data")
    {
        if(member_mux_state_reason_data == nullptr)
        {
            member_mux_state_reason_data = std::make_shared<Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData>();
        }
        return member_mux_state_reason_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(member_mux_state_reason_data != nullptr)
    {
        children["member-mux-state-reason-data"] = member_mux_state_reason_data;
    }

    return children;
}

void Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason = value;
        member_mux_state_reason.value_namespace = name_space;
        member_mux_state_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-state")
    {
        member_state = value;
        member_state.value_namespace = name_space;
        member_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mux-state")
    {
        mux_state = value;
        mux_state.value_namespace = name_space;
        mux_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason = value;
        mux_state_reason.value_namespace = name_space;
        mux_state_reason.value_namespace_prefix = name_space_prefix;
    }
}

void Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason.yfilter = yfilter;
    }
    if(value_path == "member-state")
    {
        member_state.yfilter = yfilter;
    }
    if(value_path == "mux-state")
    {
        mux_state.yfilter = yfilter;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason.yfilter = yfilter;
    }
}

bool Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-mux-state-reason-data" || name == "error" || name == "member-mux-state-reason" || name == "member-state" || name == "mux-state" || name == "mux-state-reason")
        return true;
    return false;
}

Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::MemberMuxStateReasonData()
    :
    reason_type{YType::enumeration, "reason-type"},
    severity{YType::enumeration, "severity"}
{

    yang_name = "member-mux-state-reason-data"; yang_parent_name = "member-mux-data"; is_top_level_class = false; has_list_ancestor = true;
}

Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::~MemberMuxStateReasonData()
{
}

bool Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::has_data() const
{
    return reason_type.is_set
	|| severity.is_set;
}

bool Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_type.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-state-reason-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_type.is_set || is_set(reason_type.yfilter)) leaf_name_data.push_back(reason_type.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-type")
    {
        reason_type = value;
        reason_type.value_namespace = name_space;
        reason_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-type")
    {
        reason_type.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-type" || name == "severity")
        return true;
    return false;
}

BundlesAdjacency::BundlesAdjacency()
    :
    nodes(std::make_shared<BundlesAdjacency::Nodes>())
{
    nodes->parent = this;

    yang_name = "bundles-adjacency"; yang_parent_name = "Cisco-IOS-XR-bundlemgr-oper"; is_top_level_class = true; has_list_ancestor = false;
}

BundlesAdjacency::~BundlesAdjacency()
{
}

bool BundlesAdjacency::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool BundlesAdjacency::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string BundlesAdjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundles-adjacency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<BundlesAdjacency::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void BundlesAdjacency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundlesAdjacency::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> BundlesAdjacency::clone_ptr() const
{
    return std::make_shared<BundlesAdjacency>();
}

std::string BundlesAdjacency::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string BundlesAdjacency::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function BundlesAdjacency::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> BundlesAdjacency::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool BundlesAdjacency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "bundles-adjacency"; is_top_level_class = false; has_list_ancestor = false;
}

BundlesAdjacency::Nodes::~Nodes()
{
}

bool BundlesAdjacency::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool BundlesAdjacency::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundlesAdjacency::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundles-adjacency/" << get_segment_path();
    return path_buffer.str();
}

std::string BundlesAdjacency::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<BundlesAdjacency::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundlesAdjacency::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundlesAdjacency::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundlesAdjacency::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    brief(std::make_shared<BundlesAdjacency::Nodes::Node::Brief>())
	,bundles(std::make_shared<BundlesAdjacency::Nodes::Node::Bundles>())
{
    brief->parent = this;
    bundles->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

BundlesAdjacency::Nodes::Node::~Node()
{
}

bool BundlesAdjacency::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (brief !=  nullptr && brief->has_data())
	|| (bundles !=  nullptr && bundles->has_data());
}

bool BundlesAdjacency::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (bundles !=  nullptr && bundles->has_operation());
}

std::string BundlesAdjacency::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundles-adjacency/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string BundlesAdjacency::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<BundlesAdjacency::Nodes::Node::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "bundles")
    {
        if(bundles == nullptr)
        {
            bundles = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles>();
        }
        return bundles;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(bundles != nullptr)
    {
        children["bundles"] = bundles;
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundlesAdjacency::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool BundlesAdjacency::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief" || name == "bundles" || name == "node-name")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Node::Brief::Brief()
{

    yang_name = "brief"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

BundlesAdjacency::Nodes::Node::Brief::~Brief()
{
}

bool BundlesAdjacency::Nodes::Node::Brief::has_data() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return false;
}

bool BundlesAdjacency::Nodes::Node::Brief::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundlesAdjacency::Nodes::Node::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        for(auto const & c : bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundlesAdjacency::Nodes::Node::Brief::BundleData>();
        c->parent = this;
        bundle_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundlesAdjacency::Nodes::Node::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundlesAdjacency::Nodes::Node::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-data")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Node::Brief::BundleData::BundleData()
    :
    interface_name{YType::str, "interface-name"},
    member_count{YType::uint32, "member-count"},
    sub_interface_count{YType::uint32, "sub-interface-count"},
    total_weight{YType::uint32, "total-weight"}
{

    yang_name = "bundle-data"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true;
}

BundlesAdjacency::Nodes::Node::Brief::BundleData::~BundleData()
{
}

bool BundlesAdjacency::Nodes::Node::Brief::BundleData::has_data() const
{
    for (std::size_t index=0; index<sub_interface.size(); index++)
    {
        if(sub_interface[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| member_count.is_set
	|| sub_interface_count.is_set
	|| total_weight.is_set;
}

bool BundlesAdjacency::Nodes::Node::Brief::BundleData::has_operation() const
{
    for (std::size_t index=0; index<sub_interface.size(); index++)
    {
        if(sub_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(member_count.yfilter)
	|| ydk::is_set(sub_interface_count.yfilter)
	|| ydk::is_set(total_weight.yfilter);
}

std::string BundlesAdjacency::Nodes::Node::Brief::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::Brief::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (member_count.is_set || is_set(member_count.yfilter)) leaf_name_data.push_back(member_count.get_name_leafdata());
    if (sub_interface_count.is_set || is_set(sub_interface_count.yfilter)) leaf_name_data.push_back(sub_interface_count.get_name_leafdata());
    if (total_weight.is_set || is_set(total_weight.yfilter)) leaf_name_data.push_back(total_weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Brief::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sub-interface")
    {
        for(auto const & c : sub_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface>();
        c->parent = this;
        sub_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::Brief::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sub_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::Brief::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-count")
    {
        member_count = value;
        member_count.value_namespace = name_space;
        member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface-count")
    {
        sub_interface_count = value;
        sub_interface_count.value_namespace = name_space;
        sub_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-weight")
    {
        total_weight = value;
        total_weight.value_namespace = name_space;
        total_weight.value_namespace_prefix = name_space_prefix;
    }
}

void BundlesAdjacency::Nodes::Node::Brief::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "member-count")
    {
        member_count.yfilter = yfilter;
    }
    if(value_path == "sub-interface-count")
    {
        sub_interface_count.yfilter = yfilter;
    }
    if(value_path == "total-weight")
    {
        total_weight.yfilter = yfilter;
    }
}

bool BundlesAdjacency::Nodes::Node::Brief::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-interface" || name == "interface-name" || name == "member-count" || name == "sub-interface-count" || name == "total-weight")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::SubInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    load_balance_data(std::make_shared<BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData>())
{
    load_balance_data->parent = this;

    yang_name = "sub-interface"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::~SubInterface()
{
}

bool BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::has_data() const
{
    return interface_name.is_set
	|| (load_balance_data !=  nullptr && load_balance_data->has_data());
}

bool BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (load_balance_data !=  nullptr && load_balance_data->has_operation());
}

std::string BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-balance-data")
    {
        if(load_balance_data == nullptr)
        {
            load_balance_data = std::make_shared<BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData>();
        }
        return load_balance_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(load_balance_data != nullptr)
    {
        children["load-balance-data"] = load_balance_data;
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-balance-data" || name == "interface-name")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::LoadBalanceData()
    :
    local_link_threshold{YType::uint32, "local-link-threshold"},
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"}
{

    yang_name = "load-balance-data"; yang_parent_name = "sub-interface"; is_top_level_class = false; has_list_ancestor = true;
}

BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::~LoadBalanceData()
{
}

bool BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::has_data() const
{
    return local_link_threshold.is_set
	|| type.is_set
	|| value_.is_set;
}

bool BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_link_threshold.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_link_threshold.is_set || is_set(local_link_threshold.yfilter)) leaf_name_data.push_back(local_link_threshold.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-link-threshold")
    {
        local_link_threshold = value;
        local_link_threshold.value_namespace = name_space;
        local_link_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-link-threshold")
    {
        local_link_threshold.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-link-threshold" || name == "type" || name == "value")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundles()
{

    yang_name = "bundles"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

BundlesAdjacency::Nodes::Node::Bundles::~Bundles()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::has_data() const
{
    for (std::size_t index=0; index<bundle.size(); index++)
    {
        if(bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundlesAdjacency::Nodes::Node::Bundles::has_operation() const
{
    for (std::size_t index=0; index<bundle.size(); index++)
    {
        if(bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundlesAdjacency::Nodes::Node::Bundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::Bundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle")
    {
        for(auto const & c : bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle>();
        c->parent = this;
        bundle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::Bundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundlesAdjacency::Nodes::Node::Bundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::Bundle()
    :
    bundle_name{YType::str, "bundle-name"}
    	,
    bundle_info(std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo>())
{
    bundle_info->parent = this;

    yang_name = "bundle"; yang_parent_name = "bundles"; is_top_level_class = false; has_list_ancestor = true;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::~Bundle()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::has_data() const
{
    return bundle_name.is_set
	|| (bundle_info !=  nullptr && bundle_info->has_data());
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| (bundle_info !=  nullptr && bundle_info->has_operation());
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle" <<"[bundle-name='" <<bundle_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::Bundles::Bundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-info")
    {
        if(bundle_info == nullptr)
        {
            bundle_info = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo>();
        }
        return bundle_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::Bundles::Bundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_info != nullptr)
    {
        children["bundle-info"] = bundle_info;
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-info" || name == "bundle-name")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::BundleInfo()
    :
    avoid_rebalance{YType::boolean, "avoid-rebalance"},
    max_member_count{YType::uint32, "max-member-count"},
    media{YType::enumeration, "media"}
    	,
    brief(std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief>())
	,load_balance_data(std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData>())
{
    brief->parent = this;
    load_balance_data->parent = this;

    yang_name = "bundle-info"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = true;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::~BundleInfo()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::has_data() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sub_interface.size(); index++)
    {
        if(sub_interface[index]->has_data())
            return true;
    }
    return avoid_rebalance.is_set
	|| max_member_count.is_set
	|| media.is_set
	|| (brief !=  nullptr && brief->has_data())
	|| (load_balance_data !=  nullptr && load_balance_data->has_data());
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::has_operation() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sub_interface.size(); index++)
    {
        if(sub_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(avoid_rebalance.yfilter)
	|| ydk::is_set(max_member_count.yfilter)
	|| ydk::is_set(media.yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (load_balance_data !=  nullptr && load_balance_data->has_operation());
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avoid_rebalance.is_set || is_set(avoid_rebalance.yfilter)) leaf_name_data.push_back(avoid_rebalance.get_name_leafdata());
    if (max_member_count.is_set || is_set(max_member_count.yfilter)) leaf_name_data.push_back(max_member_count.get_name_leafdata());
    if (media.is_set || is_set(media.yfilter)) leaf_name_data.push_back(media.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "load-balance-data")
    {
        if(load_balance_data == nullptr)
        {
            load_balance_data = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData>();
        }
        return load_balance_data;
    }

    if(child_yang_name == "member")
    {
        for(auto const & c : member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member>();
        c->parent = this;
        member.push_back(c);
        return c;
    }

    if(child_yang_name == "sub-interface")
    {
        for(auto const & c : sub_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface>();
        c->parent = this;
        sub_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(load_balance_data != nullptr)
    {
        children["load-balance-data"] = load_balance_data;
    }

    for (auto const & c : member)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sub_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "avoid-rebalance")
    {
        avoid_rebalance = value;
        avoid_rebalance.value_namespace = name_space;
        avoid_rebalance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-member-count")
    {
        max_member_count = value;
        max_member_count.value_namespace = name_space;
        max_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media")
    {
        media = value;
        media.value_namespace = name_space;
        media.value_namespace_prefix = name_space_prefix;
    }
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "avoid-rebalance")
    {
        avoid_rebalance.yfilter = yfilter;
    }
    if(value_path == "max-member-count")
    {
        max_member_count.yfilter = yfilter;
    }
    if(value_path == "media")
    {
        media.yfilter = yfilter;
    }
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief" || name == "load-balance-data" || name == "member" || name == "sub-interface" || name == "avoid-rebalance" || name == "max-member-count" || name == "media")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::Brief()
    :
    interface_name{YType::str, "interface-name"},
    member_count{YType::uint32, "member-count"},
    sub_interface_count{YType::uint32, "sub-interface-count"},
    total_weight{YType::uint32, "total-weight"}
{

    yang_name = "brief"; yang_parent_name = "bundle-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::~Brief()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::has_data() const
{
    for (std::size_t index=0; index<sub_interface.size(); index++)
    {
        if(sub_interface[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| member_count.is_set
	|| sub_interface_count.is_set
	|| total_weight.is_set;
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::has_operation() const
{
    for (std::size_t index=0; index<sub_interface.size(); index++)
    {
        if(sub_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(member_count.yfilter)
	|| ydk::is_set(sub_interface_count.yfilter)
	|| ydk::is_set(total_weight.yfilter);
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (member_count.is_set || is_set(member_count.yfilter)) leaf_name_data.push_back(member_count.get_name_leafdata());
    if (sub_interface_count.is_set || is_set(sub_interface_count.yfilter)) leaf_name_data.push_back(sub_interface_count.get_name_leafdata());
    if (total_weight.is_set || is_set(total_weight.yfilter)) leaf_name_data.push_back(total_weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sub-interface")
    {
        for(auto const & c : sub_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface>();
        c->parent = this;
        sub_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sub_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-count")
    {
        member_count = value;
        member_count.value_namespace = name_space;
        member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface-count")
    {
        sub_interface_count = value;
        sub_interface_count.value_namespace = name_space;
        sub_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-weight")
    {
        total_weight = value;
        total_weight.value_namespace = name_space;
        total_weight.value_namespace_prefix = name_space_prefix;
    }
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "member-count")
    {
        member_count.yfilter = yfilter;
    }
    if(value_path == "sub-interface-count")
    {
        sub_interface_count.yfilter = yfilter;
    }
    if(value_path == "total-weight")
    {
        total_weight.yfilter = yfilter;
    }
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-interface" || name == "interface-name" || name == "member-count" || name == "sub-interface-count" || name == "total-weight")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::SubInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    load_balance_data(std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData>())
{
    load_balance_data->parent = this;

    yang_name = "sub-interface"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::~SubInterface()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::has_data() const
{
    return interface_name.is_set
	|| (load_balance_data !=  nullptr && load_balance_data->has_data());
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (load_balance_data !=  nullptr && load_balance_data->has_operation());
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-balance-data")
    {
        if(load_balance_data == nullptr)
        {
            load_balance_data = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData>();
        }
        return load_balance_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(load_balance_data != nullptr)
    {
        children["load-balance-data"] = load_balance_data;
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-balance-data" || name == "interface-name")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::LoadBalanceData()
    :
    local_link_threshold{YType::uint32, "local-link-threshold"},
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"}
{

    yang_name = "load-balance-data"; yang_parent_name = "sub-interface"; is_top_level_class = false; has_list_ancestor = true;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::~LoadBalanceData()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::has_data() const
{
    return local_link_threshold.is_set
	|| type.is_set
	|| value_.is_set;
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_link_threshold.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_link_threshold.is_set || is_set(local_link_threshold.yfilter)) leaf_name_data.push_back(local_link_threshold.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-link-threshold")
    {
        local_link_threshold = value;
        local_link_threshold.value_namespace = name_space;
        local_link_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-link-threshold")
    {
        local_link_threshold.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-link-threshold" || name == "type" || name == "value")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::LoadBalanceData()
    :
    local_link_threshold{YType::uint32, "local-link-threshold"},
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"}
{

    yang_name = "load-balance-data"; yang_parent_name = "bundle-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::~LoadBalanceData()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::has_data() const
{
    return local_link_threshold.is_set
	|| type.is_set
	|| value_.is_set;
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_link_threshold.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_link_threshold.is_set || is_set(local_link_threshold.yfilter)) leaf_name_data.push_back(local_link_threshold.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-link-threshold")
    {
        local_link_threshold = value;
        local_link_threshold.value_namespace = name_space;
        local_link_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-link-threshold")
    {
        local_link_threshold.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-link-threshold" || name == "type" || name == "value")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::Member()
    :
    bandwidth{YType::uint8, "bandwidth"},
    interface_name{YType::str, "interface-name"},
    link_id{YType::uint8, "link-id"},
    link_order_number{YType::uint8, "link-order-number"}
{

    yang_name = "member"; yang_parent_name = "bundle-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::~Member()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::has_data() const
{
    return bandwidth.is_set
	|| interface_name.is_set
	|| link_id.is_set
	|| link_order_number.is_set;
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_order_number.yfilter);
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_order_number.is_set || is_set(link_order_number.yfilter)) leaf_name_data.push_back(link_order_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-number")
    {
        link_order_number = value;
        link_order_number.value_namespace = name_space;
        link_order_number.value_namespace_prefix = name_space_prefix;
    }
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-order-number")
    {
        link_order_number.yfilter = yfilter;
    }
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "interface-name" || name == "link-id" || name == "link-order-number")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::SubInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    load_balance_data(std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData>())
{
    load_balance_data->parent = this;

    yang_name = "sub-interface"; yang_parent_name = "bundle-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::~SubInterface()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::has_data() const
{
    return interface_name.is_set
	|| (load_balance_data !=  nullptr && load_balance_data->has_data());
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (load_balance_data !=  nullptr && load_balance_data->has_operation());
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-balance-data")
    {
        if(load_balance_data == nullptr)
        {
            load_balance_data = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData>();
        }
        return load_balance_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(load_balance_data != nullptr)
    {
        children["load-balance-data"] = load_balance_data;
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-balance-data" || name == "interface-name")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::LoadBalanceData()
    :
    local_link_threshold{YType::uint32, "local-link-threshold"},
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"}
{

    yang_name = "load-balance-data"; yang_parent_name = "sub-interface"; is_top_level_class = false; has_list_ancestor = true;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::~LoadBalanceData()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::has_data() const
{
    return local_link_threshold.is_set
	|| type.is_set
	|| value_.is_set;
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_link_threshold.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_link_threshold.is_set || is_set(local_link_threshold.yfilter)) leaf_name_data.push_back(local_link_threshold.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-link-threshold")
    {
        local_link_threshold = value;
        local_link_threshold.value_namespace = name_space;
        local_link_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-link-threshold")
    {
        local_link_threshold.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-link-threshold" || name == "type" || name == "value")
        return true;
    return false;
}

LacpBundleMembers::LacpBundleMembers()
    :
    members(std::make_shared<LacpBundleMembers::Members>())
	,nodes(std::make_shared<LacpBundleMembers::Nodes>())
{
    members->parent = this;
    nodes->parent = this;

    yang_name = "lacp-bundle-members"; yang_parent_name = "Cisco-IOS-XR-bundlemgr-oper"; is_top_level_class = true; has_list_ancestor = false;
}

LacpBundleMembers::~LacpBundleMembers()
{
}

bool LacpBundleMembers::has_data() const
{
    return (members !=  nullptr && members->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool LacpBundleMembers::has_operation() const
{
    return is_set(yfilter)
	|| (members !=  nullptr && members->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string LacpBundleMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-bundle-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundleMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> LacpBundleMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "members")
    {
        if(members == nullptr)
        {
            members = std::make_shared<LacpBundleMembers::Members>();
        }
        return members;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<LacpBundleMembers::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundleMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(members != nullptr)
    {
        children["members"] = members;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void LacpBundleMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LacpBundleMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> LacpBundleMembers::clone_ptr() const
{
    return std::make_shared<LacpBundleMembers>();
}

std::string LacpBundleMembers::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string LacpBundleMembers::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function LacpBundleMembers::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> LacpBundleMembers::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool LacpBundleMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "members" || name == "nodes")
        return true;
    return false;
}

LacpBundleMembers::Members::Members()
{

    yang_name = "members"; yang_parent_name = "lacp-bundle-members"; is_top_level_class = false; has_list_ancestor = false;
}

LacpBundleMembers::Members::~Members()
{
}

bool LacpBundleMembers::Members::has_data() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_data())
            return true;
    }
    return false;
}

bool LacpBundleMembers::Members::has_operation() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LacpBundleMembers::Members::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-bundle-members/" << get_segment_path();
    return path_buffer.str();
}

std::string LacpBundleMembers::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundleMembers::Members::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> LacpBundleMembers::Members::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member")
    {
        for(auto const & c : member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LacpBundleMembers::Members::Member>();
        c->parent = this;
        member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundleMembers::Members::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LacpBundleMembers::Members::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LacpBundleMembers::Members::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LacpBundleMembers::Members::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member")
        return true;
    return false;
}

LacpBundleMembers::Members::Member::Member()
    :
    member_interface{YType::str, "member-interface"}
    	,
    counters(std::make_shared<LacpBundleMembers::Members::Member::Counters>())
	,data(std::make_shared<LacpBundleMembers::Members::Member::Data>())
{
    counters->parent = this;
    data->parent = this;

    yang_name = "member"; yang_parent_name = "members"; is_top_level_class = false; has_list_ancestor = false;
}

LacpBundleMembers::Members::Member::~Member()
{
}

bool LacpBundleMembers::Members::Member::has_data() const
{
    return member_interface.is_set
	|| (counters !=  nullptr && counters->has_data())
	|| (data !=  nullptr && data->has_data());
}

bool LacpBundleMembers::Members::Member::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| (counters !=  nullptr && counters->has_operation())
	|| (data !=  nullptr && data->has_operation());
}

std::string LacpBundleMembers::Members::Member::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-bundle-members/members/" << get_segment_path();
    return path_buffer.str();
}

std::string LacpBundleMembers::Members::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member" <<"[member-interface='" <<member_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundleMembers::Members::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LacpBundleMembers::Members::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<LacpBundleMembers::Members::Member::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<LacpBundleMembers::Members::Member::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundleMembers::Members::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void LacpBundleMembers::Members::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundleMembers::Members::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
}

bool LacpBundleMembers::Members::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "data" || name == "member-interface")
        return true;
    return false;
}

LacpBundleMembers::Members::Member::Counters::Counters()
    :
    defaulted{YType::uint32, "defaulted"},
    excess_lacpd_us_received{YType::uint32, "excess-lacpd-us-received"},
    excess_marker_packets_received{YType::uint32, "excess-marker-packets-received"},
    expired{YType::uint32, "expired"},
    illegal_packets_received{YType::uint32, "illegal-packets-received"},
    lacpd_us_received{YType::uint32, "lacpd-us-received"},
    lacpd_us_transmitted{YType::uint32, "lacpd-us-transmitted"},
    last_cleared_nsec{YType::uint32, "last-cleared-nsec"},
    last_cleared_sec{YType::uint32, "last-cleared-sec"},
    marker_packets_received{YType::uint32, "marker-packets-received"},
    marker_responses_transmitted{YType::uint32, "marker-responses-transmitted"},
    time_since_cleared{YType::uint64, "time-since-cleared"},
    time_since_last_lacpdu_received{YType::uint64, "time-since-last-lacpdu-received"},
    time_since_unexpected_event{YType::uint64, "time-since-unexpected-event"}
{

    yang_name = "counters"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true;
}

LacpBundleMembers::Members::Member::Counters::~Counters()
{
}

bool LacpBundleMembers::Members::Member::Counters::has_data() const
{
    return defaulted.is_set
	|| excess_lacpd_us_received.is_set
	|| excess_marker_packets_received.is_set
	|| expired.is_set
	|| illegal_packets_received.is_set
	|| lacpd_us_received.is_set
	|| lacpd_us_transmitted.is_set
	|| last_cleared_nsec.is_set
	|| last_cleared_sec.is_set
	|| marker_packets_received.is_set
	|| marker_responses_transmitted.is_set
	|| time_since_cleared.is_set
	|| time_since_last_lacpdu_received.is_set
	|| time_since_unexpected_event.is_set;
}

bool LacpBundleMembers::Members::Member::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(defaulted.yfilter)
	|| ydk::is_set(excess_lacpd_us_received.yfilter)
	|| ydk::is_set(excess_marker_packets_received.yfilter)
	|| ydk::is_set(expired.yfilter)
	|| ydk::is_set(illegal_packets_received.yfilter)
	|| ydk::is_set(lacpd_us_received.yfilter)
	|| ydk::is_set(lacpd_us_transmitted.yfilter)
	|| ydk::is_set(last_cleared_nsec.yfilter)
	|| ydk::is_set(last_cleared_sec.yfilter)
	|| ydk::is_set(marker_packets_received.yfilter)
	|| ydk::is_set(marker_responses_transmitted.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| ydk::is_set(time_since_last_lacpdu_received.yfilter)
	|| ydk::is_set(time_since_unexpected_event.yfilter);
}

std::string LacpBundleMembers::Members::Member::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundleMembers::Members::Member::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (defaulted.is_set || is_set(defaulted.yfilter)) leaf_name_data.push_back(defaulted.get_name_leafdata());
    if (excess_lacpd_us_received.is_set || is_set(excess_lacpd_us_received.yfilter)) leaf_name_data.push_back(excess_lacpd_us_received.get_name_leafdata());
    if (excess_marker_packets_received.is_set || is_set(excess_marker_packets_received.yfilter)) leaf_name_data.push_back(excess_marker_packets_received.get_name_leafdata());
    if (expired.is_set || is_set(expired.yfilter)) leaf_name_data.push_back(expired.get_name_leafdata());
    if (illegal_packets_received.is_set || is_set(illegal_packets_received.yfilter)) leaf_name_data.push_back(illegal_packets_received.get_name_leafdata());
    if (lacpd_us_received.is_set || is_set(lacpd_us_received.yfilter)) leaf_name_data.push_back(lacpd_us_received.get_name_leafdata());
    if (lacpd_us_transmitted.is_set || is_set(lacpd_us_transmitted.yfilter)) leaf_name_data.push_back(lacpd_us_transmitted.get_name_leafdata());
    if (last_cleared_nsec.is_set || is_set(last_cleared_nsec.yfilter)) leaf_name_data.push_back(last_cleared_nsec.get_name_leafdata());
    if (last_cleared_sec.is_set || is_set(last_cleared_sec.yfilter)) leaf_name_data.push_back(last_cleared_sec.get_name_leafdata());
    if (marker_packets_received.is_set || is_set(marker_packets_received.yfilter)) leaf_name_data.push_back(marker_packets_received.get_name_leafdata());
    if (marker_responses_transmitted.is_set || is_set(marker_responses_transmitted.yfilter)) leaf_name_data.push_back(marker_responses_transmitted.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());
    if (time_since_last_lacpdu_received.is_set || is_set(time_since_last_lacpdu_received.yfilter)) leaf_name_data.push_back(time_since_last_lacpdu_received.get_name_leafdata());
    if (time_since_unexpected_event.is_set || is_set(time_since_unexpected_event.yfilter)) leaf_name_data.push_back(time_since_unexpected_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LacpBundleMembers::Members::Member::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundleMembers::Members::Member::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LacpBundleMembers::Members::Member::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "defaulted")
    {
        defaulted = value;
        defaulted.value_namespace = name_space;
        defaulted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received = value;
        excess_lacpd_us_received.value_namespace = name_space;
        excess_lacpd_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received = value;
        excess_marker_packets_received.value_namespace = name_space;
        excess_marker_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired")
    {
        expired = value;
        expired.value_namespace = name_space;
        expired.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received = value;
        illegal_packets_received.value_namespace = name_space;
        illegal_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received = value;
        lacpd_us_received.value_namespace = name_space;
        lacpd_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted = value;
        lacpd_us_transmitted.value_namespace = name_space;
        lacpd_us_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec = value;
        last_cleared_nsec.value_namespace = name_space;
        last_cleared_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec = value;
        last_cleared_sec.value_namespace = name_space;
        last_cleared_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received = value;
        marker_packets_received.value_namespace = name_space;
        marker_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted = value;
        marker_responses_transmitted.value_namespace = name_space;
        marker_responses_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-lacpdu-received")
    {
        time_since_last_lacpdu_received = value;
        time_since_last_lacpdu_received.value_namespace = name_space;
        time_since_last_lacpdu_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-unexpected-event")
    {
        time_since_unexpected_event = value;
        time_since_unexpected_event.value_namespace = name_space;
        time_since_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundleMembers::Members::Member::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "defaulted")
    {
        defaulted.yfilter = yfilter;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received.yfilter = yfilter;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received.yfilter = yfilter;
    }
    if(value_path == "expired")
    {
        expired.yfilter = yfilter;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received.yfilter = yfilter;
    }
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received.yfilter = yfilter;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted.yfilter = yfilter;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec.yfilter = yfilter;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec.yfilter = yfilter;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received.yfilter = yfilter;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-last-lacpdu-received")
    {
        time_since_last_lacpdu_received.yfilter = yfilter;
    }
    if(value_path == "time-since-unexpected-event")
    {
        time_since_unexpected_event.yfilter = yfilter;
    }
}

bool LacpBundleMembers::Members::Member::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "defaulted" || name == "excess-lacpd-us-received" || name == "excess-marker-packets-received" || name == "expired" || name == "illegal-packets-received" || name == "lacpd-us-received" || name == "lacpd-us-transmitted" || name == "last-cleared-nsec" || name == "last-cleared-sec" || name == "marker-packets-received" || name == "marker-responses-transmitted" || name == "time-since-cleared" || name == "time-since-last-lacpdu-received" || name == "time-since-unexpected-event")
        return true;
    return false;
}

LacpBundleMembers::Members::Member::Data::Data()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    actor_port_id{YType::uint16, "actor-port-id"},
    actor_port_priority{YType::uint16, "actor-port-priority"},
    actor_port_state{YType::uint8, "actor-port-state"},
    actor_system_mac_address{YType::str, "actor-system-mac-address"},
    actor_system_priority{YType::uint16, "actor-system-priority"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    interface_handle{YType::str, "interface-handle"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    partner_port_id{YType::uint16, "partner-port-id"},
    partner_port_priority{YType::uint16, "partner-port-priority"},
    partner_port_state{YType::uint8, "partner-port-state"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_system_priority{YType::uint16, "partner-system-priority"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"}
{

    yang_name = "data"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true;
}

LacpBundleMembers::Members::Member::Data::~Data()
{
}

bool LacpBundleMembers::Members::Member::Data::has_data() const
{
    return actor_operational_key.is_set
	|| actor_port_id.is_set
	|| actor_port_priority.is_set
	|| actor_port_state.is_set
	|| actor_system_mac_address.is_set
	|| actor_system_priority.is_set
	|| attached_aggregator_id.is_set
	|| interface_handle.is_set
	|| partner_operational_key.is_set
	|| partner_port_id.is_set
	|| partner_port_priority.is_set
	|| partner_port_state.is_set
	|| partner_system_mac_address.is_set
	|| partner_system_priority.is_set
	|| selected_aggregator_id.is_set;
}

bool LacpBundleMembers::Members::Member::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actor_operational_key.yfilter)
	|| ydk::is_set(actor_port_id.yfilter)
	|| ydk::is_set(actor_port_priority.yfilter)
	|| ydk::is_set(actor_port_state.yfilter)
	|| ydk::is_set(actor_system_mac_address.yfilter)
	|| ydk::is_set(actor_system_priority.yfilter)
	|| ydk::is_set(attached_aggregator_id.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(partner_operational_key.yfilter)
	|| ydk::is_set(partner_port_id.yfilter)
	|| ydk::is_set(partner_port_priority.yfilter)
	|| ydk::is_set(partner_port_state.yfilter)
	|| ydk::is_set(partner_system_mac_address.yfilter)
	|| ydk::is_set(partner_system_priority.yfilter)
	|| ydk::is_set(selected_aggregator_id.yfilter);
}

std::string LacpBundleMembers::Members::Member::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundleMembers::Members::Member::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_operational_key.is_set || is_set(actor_operational_key.yfilter)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (actor_port_id.is_set || is_set(actor_port_id.yfilter)) leaf_name_data.push_back(actor_port_id.get_name_leafdata());
    if (actor_port_priority.is_set || is_set(actor_port_priority.yfilter)) leaf_name_data.push_back(actor_port_priority.get_name_leafdata());
    if (actor_port_state.is_set || is_set(actor_port_state.yfilter)) leaf_name_data.push_back(actor_port_state.get_name_leafdata());
    if (actor_system_mac_address.is_set || is_set(actor_system_mac_address.yfilter)) leaf_name_data.push_back(actor_system_mac_address.get_name_leafdata());
    if (actor_system_priority.is_set || is_set(actor_system_priority.yfilter)) leaf_name_data.push_back(actor_system_priority.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.yfilter)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.yfilter)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (partner_port_id.is_set || is_set(partner_port_id.yfilter)) leaf_name_data.push_back(partner_port_id.get_name_leafdata());
    if (partner_port_priority.is_set || is_set(partner_port_priority.yfilter)) leaf_name_data.push_back(partner_port_priority.get_name_leafdata());
    if (partner_port_state.is_set || is_set(partner_port_state.yfilter)) leaf_name_data.push_back(partner_port_state.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.yfilter)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.yfilter)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.yfilter)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LacpBundleMembers::Members::Member::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundleMembers::Members::Member::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LacpBundleMembers::Members::Member::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
        actor_operational_key.value_namespace = name_space;
        actor_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id = value;
        actor_port_id.value_namespace = name_space;
        actor_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority = value;
        actor_port_priority.value_namespace = name_space;
        actor_port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state = value;
        actor_port_state.value_namespace = name_space;
        actor_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address = value;
        actor_system_mac_address.value_namespace = name_space;
        actor_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority = value;
        actor_system_priority.value_namespace = name_space;
        actor_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
        attached_aggregator_id.value_namespace = name_space;
        attached_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
        partner_operational_key.value_namespace = name_space;
        partner_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id = value;
        partner_port_id.value_namespace = name_space;
        partner_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority = value;
        partner_port_priority.value_namespace = name_space;
        partner_port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state = value;
        partner_port_state.value_namespace = name_space;
        partner_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
        partner_system_mac_address.value_namespace = name_space;
        partner_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
        partner_system_priority.value_namespace = name_space;
        partner_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
        selected_aggregator_id.value_namespace = name_space;
        selected_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundleMembers::Members::Member::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key.yfilter = yfilter;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id.yfilter = yfilter;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority.yfilter = yfilter;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state.yfilter = yfilter;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority.yfilter = yfilter;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key.yfilter = yfilter;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id.yfilter = yfilter;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority.yfilter = yfilter;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state.yfilter = yfilter;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority.yfilter = yfilter;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id.yfilter = yfilter;
    }
}

bool LacpBundleMembers::Members::Member::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actor-operational-key" || name == "actor-port-id" || name == "actor-port-priority" || name == "actor-port-state" || name == "actor-system-mac-address" || name == "actor-system-priority" || name == "attached-aggregator-id" || name == "interface-handle" || name == "partner-operational-key" || name == "partner-port-id" || name == "partner-port-priority" || name == "partner-port-state" || name == "partner-system-mac-address" || name == "partner-system-priority" || name == "selected-aggregator-id")
        return true;
    return false;
}

LacpBundleMembers::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "lacp-bundle-members"; is_top_level_class = false; has_list_ancestor = false;
}

LacpBundleMembers::Nodes::~Nodes()
{
}

bool LacpBundleMembers::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool LacpBundleMembers::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LacpBundleMembers::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-bundle-members/" << get_segment_path();
    return path_buffer.str();
}

std::string LacpBundleMembers::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundleMembers::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> LacpBundleMembers::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<LacpBundleMembers::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundleMembers::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LacpBundleMembers::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LacpBundleMembers::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LacpBundleMembers::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

LacpBundleMembers::Nodes::Node::Node()
    :
    node{YType::str, "node"}
    	,
    counters(std::make_shared<LacpBundleMembers::Nodes::Node::Counters>())
{
    counters->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

LacpBundleMembers::Nodes::Node::~Node()
{
}

bool LacpBundleMembers::Nodes::Node::has_data() const
{
    return node.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool LacpBundleMembers::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string LacpBundleMembers::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-bundle-members/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string LacpBundleMembers::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node='" <<node <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundleMembers::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LacpBundleMembers::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<LacpBundleMembers::Nodes::Node::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundleMembers::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    return children;
}

void LacpBundleMembers::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundleMembers::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool LacpBundleMembers::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "node")
        return true;
    return false;
}

LacpBundleMembers::Nodes::Node::Counters::Counters()
    :
    last_wrong_port{YType::uint32, "last-wrong-port"},
    time_since_cleared{YType::uint64, "time-since-cleared"},
    time_since_last_updated{YType::uint64, "time-since-last-updated"},
    time_since_unexpected_event{YType::uint64, "time-since-unexpected-event"},
    undecodable_packets{YType::uint32, "undecodable-packets"},
    unknown_port_count{YType::uint32, "unknown-port-count"},
    wrong_port_count{YType::uint32, "wrong-port-count"}
{

    yang_name = "counters"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

LacpBundleMembers::Nodes::Node::Counters::~Counters()
{
}

bool LacpBundleMembers::Nodes::Node::Counters::has_data() const
{
    return last_wrong_port.is_set
	|| time_since_cleared.is_set
	|| time_since_last_updated.is_set
	|| time_since_unexpected_event.is_set
	|| undecodable_packets.is_set
	|| unknown_port_count.is_set
	|| wrong_port_count.is_set;
}

bool LacpBundleMembers::Nodes::Node::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_wrong_port.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| ydk::is_set(time_since_last_updated.yfilter)
	|| ydk::is_set(time_since_unexpected_event.yfilter)
	|| ydk::is_set(undecodable_packets.yfilter)
	|| ydk::is_set(unknown_port_count.yfilter)
	|| ydk::is_set(wrong_port_count.yfilter);
}

std::string LacpBundleMembers::Nodes::Node::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundleMembers::Nodes::Node::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_wrong_port.is_set || is_set(last_wrong_port.yfilter)) leaf_name_data.push_back(last_wrong_port.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());
    if (time_since_last_updated.is_set || is_set(time_since_last_updated.yfilter)) leaf_name_data.push_back(time_since_last_updated.get_name_leafdata());
    if (time_since_unexpected_event.is_set || is_set(time_since_unexpected_event.yfilter)) leaf_name_data.push_back(time_since_unexpected_event.get_name_leafdata());
    if (undecodable_packets.is_set || is_set(undecodable_packets.yfilter)) leaf_name_data.push_back(undecodable_packets.get_name_leafdata());
    if (unknown_port_count.is_set || is_set(unknown_port_count.yfilter)) leaf_name_data.push_back(unknown_port_count.get_name_leafdata());
    if (wrong_port_count.is_set || is_set(wrong_port_count.yfilter)) leaf_name_data.push_back(wrong_port_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LacpBundleMembers::Nodes::Node::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundleMembers::Nodes::Node::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LacpBundleMembers::Nodes::Node::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-wrong-port")
    {
        last_wrong_port = value;
        last_wrong_port.value_namespace = name_space;
        last_wrong_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-updated")
    {
        time_since_last_updated = value;
        time_since_last_updated.value_namespace = name_space;
        time_since_last_updated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-unexpected-event")
    {
        time_since_unexpected_event = value;
        time_since_unexpected_event.value_namespace = name_space;
        time_since_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "undecodable-packets")
    {
        undecodable_packets = value;
        undecodable_packets.value_namespace = name_space;
        undecodable_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-port-count")
    {
        unknown_port_count = value;
        unknown_port_count.value_namespace = name_space;
        unknown_port_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wrong-port-count")
    {
        wrong_port_count = value;
        wrong_port_count.value_namespace = name_space;
        wrong_port_count.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundleMembers::Nodes::Node::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-wrong-port")
    {
        last_wrong_port.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-last-updated")
    {
        time_since_last_updated.yfilter = yfilter;
    }
    if(value_path == "time-since-unexpected-event")
    {
        time_since_unexpected_event.yfilter = yfilter;
    }
    if(value_path == "undecodable-packets")
    {
        undecodable_packets.yfilter = yfilter;
    }
    if(value_path == "unknown-port-count")
    {
        unknown_port_count.yfilter = yfilter;
    }
    if(value_path == "wrong-port-count")
    {
        wrong_port_count.yfilter = yfilter;
    }
}

bool LacpBundleMembers::Nodes::Node::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-wrong-port" || name == "time-since-cleared" || name == "time-since-last-updated" || name == "time-since-unexpected-event" || name == "undecodable-packets" || name == "unknown-port-count" || name == "wrong-port-count")
        return true;
    return false;
}

LacpBundles::LacpBundles()
    :
    bundles(std::make_shared<LacpBundles::Bundles>())
{
    bundles->parent = this;

    yang_name = "lacp-bundles"; yang_parent_name = "Cisco-IOS-XR-bundlemgr-oper"; is_top_level_class = true; has_list_ancestor = false;
}

LacpBundles::~LacpBundles()
{
}

bool LacpBundles::has_data() const
{
    return (bundles !=  nullptr && bundles->has_data());
}

bool LacpBundles::has_operation() const
{
    return is_set(yfilter)
	|| (bundles !=  nullptr && bundles->has_operation());
}

std::string LacpBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> LacpBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundles")
    {
        if(bundles == nullptr)
        {
            bundles = std::make_shared<LacpBundles::Bundles>();
        }
        return bundles;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundles != nullptr)
    {
        children["bundles"] = bundles;
    }

    return children;
}

void LacpBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LacpBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> LacpBundles::clone_ptr() const
{
    return std::make_shared<LacpBundles>();
}

std::string LacpBundles::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string LacpBundles::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function LacpBundles::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> LacpBundles::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool LacpBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundles")
        return true;
    return false;
}

LacpBundles::Bundles::Bundles()
{

    yang_name = "bundles"; yang_parent_name = "lacp-bundles"; is_top_level_class = false; has_list_ancestor = false;
}

LacpBundles::Bundles::~Bundles()
{
}

bool LacpBundles::Bundles::has_data() const
{
    for (std::size_t index=0; index<bundle.size(); index++)
    {
        if(bundle[index]->has_data())
            return true;
    }
    return false;
}

bool LacpBundles::Bundles::has_operation() const
{
    for (std::size_t index=0; index<bundle.size(); index++)
    {
        if(bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LacpBundles::Bundles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string LacpBundles::Bundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> LacpBundles::Bundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle")
    {
        for(auto const & c : bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LacpBundles::Bundles::Bundle>();
        c->parent = this;
        bundle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LacpBundles::Bundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LacpBundles::Bundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LacpBundles::Bundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Bundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    data(std::make_shared<LacpBundles::Bundles::Bundle::Data>())
	,members(std::make_shared<LacpBundles::Bundles::Bundle::Members>())
{
    data->parent = this;
    members->parent = this;

    yang_name = "bundle"; yang_parent_name = "bundles"; is_top_level_class = false; has_list_ancestor = false;
}

LacpBundles::Bundles::Bundle::~Bundle()
{
}

bool LacpBundles::Bundles::Bundle::has_data() const
{
    return bundle_interface.is_set
	|| (data !=  nullptr && data->has_data())
	|| (members !=  nullptr && members->has_data());
}

bool LacpBundles::Bundles::Bundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (data !=  nullptr && data->has_operation())
	|| (members !=  nullptr && members->has_operation());
}

std::string LacpBundles::Bundles::Bundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-bundles/bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string LacpBundles::Bundles::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle" <<"[bundle-interface='" <<bundle_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<LacpBundles::Bundles::Bundle::Data>();
        }
        return data;
    }

    if(child_yang_name == "members")
    {
        if(members == nullptr)
        {
            members = std::make_shared<LacpBundles::Bundles::Bundle::Members>();
        }
        return members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    if(members != nullptr)
    {
        children["members"] = members;
    }

    return children;
}

void LacpBundles::Bundles::Bundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundles::Bundles::Bundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool LacpBundles::Bundles::Bundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "members" || name == "bundle-interface")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Data::Data()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_system_priority{YType::uint16, "partner-system-priority"}
    	,
    actor_bundle_data(std::make_shared<LacpBundles::Bundles::Bundle::Data::ActorBundleData>())
	,bundle_system_id(std::make_shared<LacpBundles::Bundles::Bundle::Data::BundleSystemId>())
{
    actor_bundle_data->parent = this;
    bundle_system_id->parent = this;

    yang_name = "data"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = true;
}

LacpBundles::Bundles::Bundle::Data::~Data()
{
}

bool LacpBundles::Bundles::Bundle::Data::has_data() const
{
    return actor_operational_key.is_set
	|| partner_operational_key.is_set
	|| partner_system_mac_address.is_set
	|| partner_system_priority.is_set
	|| (actor_bundle_data !=  nullptr && actor_bundle_data->has_data())
	|| (bundle_system_id !=  nullptr && bundle_system_id->has_data());
}

bool LacpBundles::Bundles::Bundle::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actor_operational_key.yfilter)
	|| ydk::is_set(partner_operational_key.yfilter)
	|| ydk::is_set(partner_system_mac_address.yfilter)
	|| ydk::is_set(partner_system_priority.yfilter)
	|| (actor_bundle_data !=  nullptr && actor_bundle_data->has_operation())
	|| (bundle_system_id !=  nullptr && bundle_system_id->has_operation());
}

std::string LacpBundles::Bundles::Bundle::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_operational_key.is_set || is_set(actor_operational_key.yfilter)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.yfilter)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.yfilter)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.yfilter)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actor-bundle-data")
    {
        if(actor_bundle_data == nullptr)
        {
            actor_bundle_data = std::make_shared<LacpBundles::Bundles::Bundle::Data::ActorBundleData>();
        }
        return actor_bundle_data;
    }

    if(child_yang_name == "bundle-system-id")
    {
        if(bundle_system_id == nullptr)
        {
            bundle_system_id = std::make_shared<LacpBundles::Bundles::Bundle::Data::BundleSystemId>();
        }
        return bundle_system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(actor_bundle_data != nullptr)
    {
        children["actor-bundle-data"] = actor_bundle_data;
    }

    if(bundle_system_id != nullptr)
    {
        children["bundle-system-id"] = bundle_system_id;
    }

    return children;
}

void LacpBundles::Bundles::Bundle::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
        actor_operational_key.value_namespace = name_space;
        actor_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
        partner_operational_key.value_namespace = name_space;
        partner_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
        partner_system_mac_address.value_namespace = name_space;
        partner_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
        partner_system_priority.value_namespace = name_space;
        partner_system_priority.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundles::Bundles::Bundle::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key.yfilter = yfilter;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key.yfilter = yfilter;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority.yfilter = yfilter;
    }
}

bool LacpBundles::Bundles::Bundle::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actor-bundle-data" || name == "bundle-system-id" || name == "actor-operational-key" || name == "partner-operational-key" || name == "partner-system-mac-address" || name == "partner-system-priority")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Data::ActorBundleData::ActorBundleData()
    :
    active_foreign_member_count{YType::uint16, "active-foreign-member-count"},
    active_member_count{YType::uint16, "active-member-count"},
    available_bandwidth{YType::uint32, "available-bandwidth"},
    bundle_interface_name{YType::str, "bundle-interface-name"},
    bundle_status{YType::enumeration, "bundle-status"},
    cisco_extensions{YType::boolean, "cisco-extensions"},
    collector_max_delay{YType::uint16, "collector-max-delay"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    configured_foreign_member_count{YType::uint16, "configured-foreign-member-count"},
    configured_member_count{YType::uint16, "configured-member-count"},
    effective_bandwidth{YType::uint32, "effective-bandwidth"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    inter_chassis{YType::boolean, "inter-chassis"},
    ipv4bfd_status{YType::enumeration, "ipv4bfd-status"},
    ipv6bfd_status{YType::enumeration, "ipv6bfd-status"},
    is_active{YType::boolean, "is-active"},
    lacp_nonrevertive{YType::boolean, "lacp-nonrevertive"},
    lacp_status{YType::enumeration, "lacp-status"},
    link_order_status{YType::enumeration, "link-order-status"},
    load_balance_hash_type{YType::str, "load-balance-hash-type"},
    load_balance_locality_threshold{YType::uint16, "load-balance-locality-threshold"},
    mac_source{YType::enumeration, "mac-source"},
    mac_source_member{YType::str, "mac-source-member"},
    maximize_threshold_value_band_width{YType::uint32, "maximize-threshold-value-band-width"},
    maximize_threshold_value_links{YType::uint32, "maximize-threshold-value-links"},
    maximum_active_links{YType::uint8, "maximum-active-links"},
    maximum_active_links_source{YType::enumeration, "maximum-active-links-source"},
    minimum_active_links{YType::uint8, "minimum-active-links"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    mlacp_mode{YType::enumeration, "mlacp-mode"},
    mlacp_status{YType::enumeration, "mlacp-status"},
    primary_member{YType::str, "primary-member"},
    recovery_delay{YType::uint16, "recovery-delay"},
    singleton{YType::boolean, "singleton"},
    standby_member_count{YType::uint16, "standby-member-count"},
    suppression_timer{YType::uint16, "suppression-timer"},
    switchover_type{YType::enumeration, "switchover-type"},
    wait_while_timer{YType::uint16, "wait-while-timer"}
    	,
    mac_address(std::make_shared<LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "actor-bundle-data"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true;
}

LacpBundles::Bundles::Bundle::Data::ActorBundleData::~ActorBundleData()
{
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::has_data() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_data())
            return true;
    }
    return active_foreign_member_count.is_set
	|| active_member_count.is_set
	|| available_bandwidth.is_set
	|| bundle_interface_name.is_set
	|| bundle_status.is_set
	|| cisco_extensions.is_set
	|| collector_max_delay.is_set
	|| configured_bandwidth.is_set
	|| configured_foreign_member_count.is_set
	|| configured_member_count.is_set
	|| effective_bandwidth.is_set
	|| iccp_group_id.is_set
	|| inter_chassis.is_set
	|| ipv4bfd_status.is_set
	|| ipv6bfd_status.is_set
	|| is_active.is_set
	|| lacp_nonrevertive.is_set
	|| lacp_status.is_set
	|| link_order_status.is_set
	|| load_balance_hash_type.is_set
	|| load_balance_locality_threshold.is_set
	|| mac_source.is_set
	|| mac_source_member.is_set
	|| maximize_threshold_value_band_width.is_set
	|| maximize_threshold_value_links.is_set
	|| maximum_active_links.is_set
	|| maximum_active_links_source.is_set
	|| minimum_active_links.is_set
	|| minimum_bandwidth.is_set
	|| mlacp_mode.is_set
	|| mlacp_status.is_set
	|| primary_member.is_set
	|| recovery_delay.is_set
	|| singleton.is_set
	|| standby_member_count.is_set
	|| suppression_timer.is_set
	|| switchover_type.is_set
	|| wait_while_timer.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::has_operation() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(active_foreign_member_count.yfilter)
	|| ydk::is_set(active_member_count.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(bundle_interface_name.yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(cisco_extensions.yfilter)
	|| ydk::is_set(collector_max_delay.yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(configured_foreign_member_count.yfilter)
	|| ydk::is_set(configured_member_count.yfilter)
	|| ydk::is_set(effective_bandwidth.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(inter_chassis.yfilter)
	|| ydk::is_set(ipv4bfd_status.yfilter)
	|| ydk::is_set(ipv6bfd_status.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| ydk::is_set(lacp_nonrevertive.yfilter)
	|| ydk::is_set(lacp_status.yfilter)
	|| ydk::is_set(link_order_status.yfilter)
	|| ydk::is_set(load_balance_hash_type.yfilter)
	|| ydk::is_set(load_balance_locality_threshold.yfilter)
	|| ydk::is_set(mac_source.yfilter)
	|| ydk::is_set(mac_source_member.yfilter)
	|| ydk::is_set(maximize_threshold_value_band_width.yfilter)
	|| ydk::is_set(maximize_threshold_value_links.yfilter)
	|| ydk::is_set(maximum_active_links.yfilter)
	|| ydk::is_set(maximum_active_links_source.yfilter)
	|| ydk::is_set(minimum_active_links.yfilter)
	|| ydk::is_set(minimum_bandwidth.yfilter)
	|| ydk::is_set(mlacp_mode.yfilter)
	|| ydk::is_set(mlacp_status.yfilter)
	|| ydk::is_set(primary_member.yfilter)
	|| ydk::is_set(recovery_delay.yfilter)
	|| ydk::is_set(singleton.yfilter)
	|| ydk::is_set(standby_member_count.yfilter)
	|| ydk::is_set(suppression_timer.yfilter)
	|| ydk::is_set(switchover_type.yfilter)
	|| ydk::is_set(wait_while_timer.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string LacpBundles::Bundles::Bundle::Data::ActorBundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actor-bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Data::ActorBundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_foreign_member_count.is_set || is_set(active_foreign_member_count.yfilter)) leaf_name_data.push_back(active_foreign_member_count.get_name_leafdata());
    if (active_member_count.is_set || is_set(active_member_count.yfilter)) leaf_name_data.push_back(active_member_count.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (bundle_interface_name.is_set || is_set(bundle_interface_name.yfilter)) leaf_name_data.push_back(bundle_interface_name.get_name_leafdata());
    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (cisco_extensions.is_set || is_set(cisco_extensions.yfilter)) leaf_name_data.push_back(cisco_extensions.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.yfilter)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (configured_foreign_member_count.is_set || is_set(configured_foreign_member_count.yfilter)) leaf_name_data.push_back(configured_foreign_member_count.get_name_leafdata());
    if (configured_member_count.is_set || is_set(configured_member_count.yfilter)) leaf_name_data.push_back(configured_member_count.get_name_leafdata());
    if (effective_bandwidth.is_set || is_set(effective_bandwidth.yfilter)) leaf_name_data.push_back(effective_bandwidth.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (inter_chassis.is_set || is_set(inter_chassis.yfilter)) leaf_name_data.push_back(inter_chassis.get_name_leafdata());
    if (ipv4bfd_status.is_set || is_set(ipv4bfd_status.yfilter)) leaf_name_data.push_back(ipv4bfd_status.get_name_leafdata());
    if (ipv6bfd_status.is_set || is_set(ipv6bfd_status.yfilter)) leaf_name_data.push_back(ipv6bfd_status.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.yfilter)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (lacp_status.is_set || is_set(lacp_status.yfilter)) leaf_name_data.push_back(lacp_status.get_name_leafdata());
    if (link_order_status.is_set || is_set(link_order_status.yfilter)) leaf_name_data.push_back(link_order_status.get_name_leafdata());
    if (load_balance_hash_type.is_set || is_set(load_balance_hash_type.yfilter)) leaf_name_data.push_back(load_balance_hash_type.get_name_leafdata());
    if (load_balance_locality_threshold.is_set || is_set(load_balance_locality_threshold.yfilter)) leaf_name_data.push_back(load_balance_locality_threshold.get_name_leafdata());
    if (mac_source.is_set || is_set(mac_source.yfilter)) leaf_name_data.push_back(mac_source.get_name_leafdata());
    if (mac_source_member.is_set || is_set(mac_source_member.yfilter)) leaf_name_data.push_back(mac_source_member.get_name_leafdata());
    if (maximize_threshold_value_band_width.is_set || is_set(maximize_threshold_value_band_width.yfilter)) leaf_name_data.push_back(maximize_threshold_value_band_width.get_name_leafdata());
    if (maximize_threshold_value_links.is_set || is_set(maximize_threshold_value_links.yfilter)) leaf_name_data.push_back(maximize_threshold_value_links.get_name_leafdata());
    if (maximum_active_links.is_set || is_set(maximum_active_links.yfilter)) leaf_name_data.push_back(maximum_active_links.get_name_leafdata());
    if (maximum_active_links_source.is_set || is_set(maximum_active_links_source.yfilter)) leaf_name_data.push_back(maximum_active_links_source.get_name_leafdata());
    if (minimum_active_links.is_set || is_set(minimum_active_links.yfilter)) leaf_name_data.push_back(minimum_active_links.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.yfilter)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (mlacp_mode.is_set || is_set(mlacp_mode.yfilter)) leaf_name_data.push_back(mlacp_mode.get_name_leafdata());
    if (mlacp_status.is_set || is_set(mlacp_status.yfilter)) leaf_name_data.push_back(mlacp_status.get_name_leafdata());
    if (primary_member.is_set || is_set(primary_member.yfilter)) leaf_name_data.push_back(primary_member.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.yfilter)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.yfilter)) leaf_name_data.push_back(singleton.get_name_leafdata());
    if (standby_member_count.is_set || is_set(standby_member_count.yfilter)) leaf_name_data.push_back(standby_member_count.get_name_leafdata());
    if (suppression_timer.is_set || is_set(suppression_timer.yfilter)) leaf_name_data.push_back(suppression_timer.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.yfilter)) leaf_name_data.push_back(switchover_type.get_name_leafdata());
    if (wait_while_timer.is_set || is_set(wait_while_timer.yfilter)) leaf_name_data.push_back(wait_while_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Data::ActorBundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-config")
    {
        for(auto const & c : bfd_config)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig>();
        c->parent = this;
        bfd_config.push_back(c);
        return c;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Data::ActorBundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_config)
    {
        children[c->get_segment_path()] = c;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void LacpBundles::Bundles::Bundle::Data::ActorBundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count = value;
        active_foreign_member_count.value_namespace = name_space;
        active_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-member-count")
    {
        active_member_count = value;
        active_member_count.value_namespace = name_space;
        active_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name = value;
        bundle_interface_name.value_namespace = name_space;
        bundle_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions = value;
        cisco_extensions.value_namespace = name_space;
        cisco_extensions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
        collector_max_delay.value_namespace = name_space;
        collector_max_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count = value;
        configured_foreign_member_count.value_namespace = name_space;
        configured_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count = value;
        configured_member_count.value_namespace = name_space;
        configured_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth = value;
        effective_bandwidth.value_namespace = name_space;
        effective_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis = value;
        inter_chassis.value_namespace = name_space;
        inter_chassis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status = value;
        ipv4bfd_status.value_namespace = name_space;
        ipv4bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status = value;
        ipv6bfd_status.value_namespace = name_space;
        ipv6bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
        lacp_nonrevertive.value_namespace = name_space;
        lacp_nonrevertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-status")
    {
        lacp_status = value;
        lacp_status.value_namespace = name_space;
        lacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-status")
    {
        link_order_status = value;
        link_order_status.value_namespace = name_space;
        link_order_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type = value;
        load_balance_hash_type.value_namespace = name_space;
        load_balance_hash_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold = value;
        load_balance_locality_threshold.value_namespace = name_space;
        load_balance_locality_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source")
    {
        mac_source = value;
        mac_source.value_namespace = name_space;
        mac_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member = value;
        mac_source_member.value_namespace = name_space;
        mac_source_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width = value;
        maximize_threshold_value_band_width.value_namespace = name_space;
        maximize_threshold_value_band_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links = value;
        maximize_threshold_value_links.value_namespace = name_space;
        maximize_threshold_value_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links = value;
        maximum_active_links.value_namespace = name_space;
        maximum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source = value;
        maximum_active_links_source.value_namespace = name_space;
        maximum_active_links_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links = value;
        minimum_active_links.value_namespace = name_space;
        minimum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
        minimum_bandwidth.value_namespace = name_space;
        minimum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode = value;
        mlacp_mode.value_namespace = name_space;
        mlacp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status = value;
        mlacp_status.value_namespace = name_space;
        mlacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-member")
    {
        primary_member = value;
        primary_member.value_namespace = name_space;
        primary_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
        recovery_delay.value_namespace = name_space;
        recovery_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleton")
    {
        singleton = value;
        singleton.value_namespace = name_space;
        singleton.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count = value;
        standby_member_count.value_namespace = name_space;
        standby_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer = value;
        suppression_timer.value_namespace = name_space;
        suppression_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
        switchover_type.value_namespace = name_space;
        switchover_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer = value;
        wait_while_timer.value_namespace = name_space;
        wait_while_timer.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundles::Bundles::Bundle::Data::ActorBundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "active-member-count")
    {
        active_member_count.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name.yfilter = yfilter;
    }
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions.yfilter = yfilter;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count.yfilter = yfilter;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis.yfilter = yfilter;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status.yfilter = yfilter;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive.yfilter = yfilter;
    }
    if(value_path == "lacp-status")
    {
        lacp_status.yfilter = yfilter;
    }
    if(value_path == "link-order-status")
    {
        link_order_status.yfilter = yfilter;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type.yfilter = yfilter;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold.yfilter = yfilter;
    }
    if(value_path == "mac-source")
    {
        mac_source.yfilter = yfilter;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source.yfilter = yfilter;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links.yfilter = yfilter;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode.yfilter = yfilter;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status.yfilter = yfilter;
    }
    if(value_path == "primary-member")
    {
        primary_member.yfilter = yfilter;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay.yfilter = yfilter;
    }
    if(value_path == "singleton")
    {
        singleton.yfilter = yfilter;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count.yfilter = yfilter;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer.yfilter = yfilter;
    }
    if(value_path == "switchover-type")
    {
        switchover_type.yfilter = yfilter;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer.yfilter = yfilter;
    }
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-config" || name == "mac-address" || name == "active-foreign-member-count" || name == "active-member-count" || name == "available-bandwidth" || name == "bundle-interface-name" || name == "bundle-status" || name == "cisco-extensions" || name == "collector-max-delay" || name == "configured-bandwidth" || name == "configured-foreign-member-count" || name == "configured-member-count" || name == "effective-bandwidth" || name == "iccp-group-id" || name == "inter-chassis" || name == "ipv4bfd-status" || name == "ipv6bfd-status" || name == "is-active" || name == "lacp-nonrevertive" || name == "lacp-status" || name == "link-order-status" || name == "load-balance-hash-type" || name == "load-balance-locality-threshold" || name == "mac-source" || name == "mac-source-member" || name == "maximize-threshold-value-band-width" || name == "maximize-threshold-value-links" || name == "maximum-active-links" || name == "maximum-active-links-source" || name == "minimum-active-links" || name == "minimum-bandwidth" || name == "mlacp-mode" || name == "mlacp-status" || name == "primary-member" || name == "recovery-delay" || name == "singleton" || name == "standby-member-count" || name == "suppression-timer" || name == "switchover-type" || name == "wait-while-timer")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::BfdConfig()
    :
    bundle_status{YType::enumeration, "bundle-status"},
    fast_detect{YType::boolean, "fast-detect"},
    mode_info{YType::uint32, "mode-info"},
    nbr_unconfig_timer{YType::uint32, "nbr-unconfig-timer"},
    pref_echo_min_interval{YType::uint32, "pref-echo-min-interval"},
    pref_min_interval{YType::uint32, "pref-min-interval"},
    pref_multiplier{YType::uint16, "pref-multiplier"},
    start_timer{YType::uint32, "start-timer"}
    	,
    destination_address(std::make_shared<LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "bfd-config"; yang_parent_name = "actor-bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::~BfdConfig()
{
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::has_data() const
{
    return bundle_status.is_set
	|| fast_detect.is_set
	|| mode_info.is_set
	|| nbr_unconfig_timer.is_set
	|| pref_echo_min_interval.is_set
	|| pref_min_interval.is_set
	|| pref_multiplier.is_set
	|| start_timer.is_set
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(fast_detect.yfilter)
	|| ydk::is_set(mode_info.yfilter)
	|| ydk::is_set(nbr_unconfig_timer.yfilter)
	|| ydk::is_set(pref_echo_min_interval.yfilter)
	|| ydk::is_set(pref_min_interval.yfilter)
	|| ydk::is_set(pref_multiplier.yfilter)
	|| ydk::is_set(start_timer.yfilter)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.yfilter)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (mode_info.is_set || is_set(mode_info.yfilter)) leaf_name_data.push_back(mode_info.get_name_leafdata());
    if (nbr_unconfig_timer.is_set || is_set(nbr_unconfig_timer.yfilter)) leaf_name_data.push_back(nbr_unconfig_timer.get_name_leafdata());
    if (pref_echo_min_interval.is_set || is_set(pref_echo_min_interval.yfilter)) leaf_name_data.push_back(pref_echo_min_interval.get_name_leafdata());
    if (pref_min_interval.is_set || is_set(pref_min_interval.yfilter)) leaf_name_data.push_back(pref_min_interval.get_name_leafdata());
    if (pref_multiplier.is_set || is_set(pref_multiplier.yfilter)) leaf_name_data.push_back(pref_multiplier.get_name_leafdata());
    if (start_timer.is_set || is_set(start_timer.yfilter)) leaf_name_data.push_back(start_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    return children;
}

void LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
        fast_detect.value_namespace = name_space;
        fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-info")
    {
        mode_info = value;
        mode_info.value_namespace = name_space;
        mode_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer = value;
        nbr_unconfig_timer.value_namespace = name_space;
        nbr_unconfig_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval = value;
        pref_echo_min_interval.value_namespace = name_space;
        pref_echo_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval = value;
        pref_min_interval.value_namespace = name_space;
        pref_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier = value;
        pref_multiplier.value_namespace = name_space;
        pref_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-timer")
    {
        start_timer = value;
        start_timer.value_namespace = name_space;
        start_timer.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "fast-detect")
    {
        fast_detect.yfilter = yfilter;
    }
    if(value_path == "mode-info")
    {
        mode_info.yfilter = yfilter;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer.yfilter = yfilter;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval.yfilter = yfilter;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval.yfilter = yfilter;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier.yfilter = yfilter;
    }
    if(value_path == "start-timer")
    {
        start_timer.yfilter = yfilter;
    }
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "bundle-status" || name == "fast-detect" || name == "mode-info" || name == "nbr-unconfig-timer" || name == "pref-echo-min-interval" || name == "pref-min-interval" || name == "pref-multiplier" || name == "start-timer")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination-address"; yang_parent_name = "bfd-config"; is_top_level_class = false; has_list_ancestor = true;
}

LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "actor-bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::~MacAddress()
{
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::has_data() const
{
    return address.is_set;
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Data::BundleSystemId::BundleSystemId()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "bundle-system-id"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true;
}

LacpBundles::Bundles::Bundle::Data::BundleSystemId::~BundleSystemId()
{
}

bool LacpBundles::Bundles::Bundle::Data::BundleSystemId::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool LacpBundles::Bundles::Bundle::Data::BundleSystemId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string LacpBundles::Bundles::Bundle::Data::BundleSystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-system-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Data::BundleSystemId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Data::BundleSystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Data::BundleSystemId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void LacpBundles::Bundles::Bundle::Data::BundleSystemId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundles::Bundles::Bundle::Data::BundleSystemId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool LacpBundles::Bundles::Bundle::Data::BundleSystemId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "bundle-system-id"; is_top_level_class = false; has_list_ancestor = true;
}

LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::~SystemMacAddr()
{
}

bool LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Members::Members()
{

    yang_name = "members"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = true;
}

LacpBundles::Bundles::Bundle::Members::~Members()
{
}

bool LacpBundles::Bundles::Bundle::Members::has_data() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_data())
            return true;
    }
    return false;
}

bool LacpBundles::Bundles::Bundle::Members::has_operation() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LacpBundles::Bundles::Bundle::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Members::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Members::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member")
    {
        for(auto const & c : member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LacpBundles::Bundles::Bundle::Members::Member>();
        c->parent = this;
        member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Members::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LacpBundles::Bundles::Bundle::Members::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LacpBundles::Bundles::Bundle::Members::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LacpBundles::Bundles::Bundle::Members::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member")
        return true;
    return false;
}


}
}

