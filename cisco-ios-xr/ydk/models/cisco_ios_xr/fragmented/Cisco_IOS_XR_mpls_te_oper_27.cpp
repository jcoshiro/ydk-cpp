
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_27.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_28.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::SrlgCollection::DiscoveredSrlg::DiscoveredSrlg()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "discovered-srlg"; yang_parent_name = "srlg-collection"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::SrlgCollection::DiscoveredSrlg::~DiscoveredSrlg()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::SrlgCollection::DiscoveredSrlg::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::SrlgCollection::DiscoveredSrlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::SrlgCollection::DiscoveredSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovered-srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::SrlgCollection::DiscoveredSrlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::SrlgCollection::DiscoveredSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::SrlgCollection::DiscoveredSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::SrlgCollection::DiscoveredSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::SrlgCollection::DiscoveredSrlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::SrlgCollection::DiscoveredSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo::TailEndBfdInfo()
    :
    failure_diagnostic_code{YType::uint32, "failure-diagnostic-code"},
    failure_reason{YType::str, "failure-reason"},
    local_discriminator{YType::uint32, "local-discriminator"},
    min_interval{YType::uint32, "min-interval"},
    min_interval_default{YType::boolean, "min-interval-default"},
    multiplier{YType::uint8, "multiplier"},
    multiplier_default{YType::boolean, "multiplier-default"},
    remote_discriminator{YType::uint32, "remote-discriminator"}
    	,
    session_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo::SessionInfo>())
{
    session_info->parent = this;

    yang_name = "tail-end-bfd-info"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo::~TailEndBfdInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo::has_data() const
{
    return failure_diagnostic_code.is_set
	|| failure_reason.is_set
	|| local_discriminator.is_set
	|| min_interval.is_set
	|| min_interval_default.is_set
	|| multiplier.is_set
	|| multiplier_default.is_set
	|| remote_discriminator.is_set
	|| (session_info !=  nullptr && session_info->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure_diagnostic_code.yfilter)
	|| ydk::is_set(failure_reason.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(min_interval.yfilter)
	|| ydk::is_set(min_interval_default.yfilter)
	|| ydk::is_set(multiplier.yfilter)
	|| ydk::is_set(multiplier_default.yfilter)
	|| ydk::is_set(remote_discriminator.yfilter)
	|| (session_info !=  nullptr && session_info->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tail-end-bfd-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure_diagnostic_code.is_set || is_set(failure_diagnostic_code.yfilter)) leaf_name_data.push_back(failure_diagnostic_code.get_name_leafdata());
    if (failure_reason.is_set || is_set(failure_reason.yfilter)) leaf_name_data.push_back(failure_reason.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (min_interval.is_set || is_set(min_interval.yfilter)) leaf_name_data.push_back(min_interval.get_name_leafdata());
    if (min_interval_default.is_set || is_set(min_interval_default.yfilter)) leaf_name_data.push_back(min_interval_default.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());
    if (multiplier_default.is_set || is_set(multiplier_default.yfilter)) leaf_name_data.push_back(multiplier_default.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.yfilter)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-info")
    {
        if(session_info == nullptr)
        {
            session_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo::SessionInfo>();
        }
        return session_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_info != nullptr)
    {
        children["session-info"] = session_info;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failure-diagnostic-code")
    {
        failure_diagnostic_code = value;
        failure_diagnostic_code.value_namespace = name_space;
        failure_diagnostic_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure-reason")
    {
        failure_reason = value;
        failure_reason.value_namespace = name_space;
        failure_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-interval")
    {
        min_interval = value;
        min_interval.value_namespace = name_space;
        min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-interval-default")
    {
        min_interval_default = value;
        min_interval_default.value_namespace = name_space;
        min_interval_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-default")
    {
        multiplier_default = value;
        multiplier_default.value_namespace = name_space;
        multiplier_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
        remote_discriminator.value_namespace = name_space;
        remote_discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failure-diagnostic-code")
    {
        failure_diagnostic_code.yfilter = yfilter;
    }
    if(value_path == "failure-reason")
    {
        failure_reason.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "min-interval")
    {
        min_interval.yfilter = yfilter;
    }
    if(value_path == "min-interval-default")
    {
        min_interval_default.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
    if(value_path == "multiplier-default")
    {
        multiplier_default.yfilter = yfilter;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-info" || name == "failure-diagnostic-code" || name == "failure-reason" || name == "local-discriminator" || name == "min-interval" || name == "min-interval-default" || name == "multiplier" || name == "multiplier-default" || name == "remote-discriminator")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo::SessionInfo::SessionInfo()
    :
    state{YType::enumeration, "state"},
    state_change_time{YType::uint32, "state-change-time"}
{

    yang_name = "session-info"; yang_parent_name = "tail-end-bfd-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo::SessionInfo::~SessionInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo::SessionInfo::has_data() const
{
    return state.is_set
	|| state_change_time.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo::SessionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(state_change_time.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo::SessionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo::SessionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_change_time.is_set || is_set(state_change_time.yfilter)) leaf_name_data.push_back(state_change_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo::SessionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo::SessionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo::SessionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-change-time")
    {
        state_change_time = value;
        state_change_time.value_namespace = name_space;
        state_change_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo::SessionInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "state-change-time")
    {
        state_change_time.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo::SessionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "state-change-time")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::Tspec::Tspec()
    :
    average_rate{YType::uint64, "average-rate"},
    maximum_burst{YType::uint64, "maximum-burst"},
    peak_rate{YType::uint64, "peak-rate"}
{

    yang_name = "tspec"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::Tspec::~Tspec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::Tspec::has_data() const
{
    return average_rate.is_set
	|| maximum_burst.is_set
	|| peak_rate.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::Tspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_rate.yfilter)
	|| ydk::is_set(maximum_burst.yfilter)
	|| ydk::is_set(peak_rate.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::Tspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::Tspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_rate.is_set || is_set(average_rate.yfilter)) leaf_name_data.push_back(average_rate.get_name_leafdata());
    if (maximum_burst.is_set || is_set(maximum_burst.yfilter)) leaf_name_data.push_back(maximum_burst.get_name_leafdata());
    if (peak_rate.is_set || is_set(peak_rate.yfilter)) leaf_name_data.push_back(peak_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::Tspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::Tspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::Tspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-rate")
    {
        average_rate = value;
        average_rate.value_namespace = name_space;
        average_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-burst")
    {
        maximum_burst = value;
        maximum_burst.value_namespace = name_space;
        maximum_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-rate")
    {
        peak_rate = value;
        peak_rate.value_namespace = name_space;
        peak_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::Tspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-rate")
    {
        average_rate.yfilter = yfilter;
    }
    if(value_path == "maximum-burst")
    {
        maximum_burst.yfilter = yfilter;
    }
    if(value_path == "peak-rate")
    {
        peak_rate.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::Tspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-rate" || name == "maximum-burst" || name == "peak-rate")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemption()
    :
    preemption_pending_resolution{YType::enumeration, "preemption-pending-resolution"},
    status{YType::enumeration, "status"},
    time_in_preemption_pending{YType::uint16, "time-in-preemption-pending"}
    	,
    soft_preemption_counters(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters>())
{
    soft_preemption_counters->parent = this;

    yang_name = "soft-preemption"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::~SoftPreemption()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::has_data() const
{
    for (std::size_t index=0; index<soft_preemption_path_error.size(); index++)
    {
        if(soft_preemption_path_error[index]->has_data())
            return true;
    }
    return preemption_pending_resolution.is_set
	|| status.is_set
	|| time_in_preemption_pending.is_set
	|| (soft_preemption_counters !=  nullptr && soft_preemption_counters->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::has_operation() const
{
    for (std::size_t index=0; index<soft_preemption_path_error.size(); index++)
    {
        if(soft_preemption_path_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(preemption_pending_resolution.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(time_in_preemption_pending.yfilter)
	|| (soft_preemption_counters !=  nullptr && soft_preemption_counters->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preemption_pending_resolution.is_set || is_set(preemption_pending_resolution.yfilter)) leaf_name_data.push_back(preemption_pending_resolution.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (time_in_preemption_pending.is_set || is_set(time_in_preemption_pending.yfilter)) leaf_name_data.push_back(time_in_preemption_pending.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "soft-preemption-counters")
    {
        if(soft_preemption_counters == nullptr)
        {
            soft_preemption_counters = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters>();
        }
        return soft_preemption_counters;
    }

    if(child_yang_name == "soft-preemption-path-error")
    {
        for(auto const & c : soft_preemption_path_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError>();
        c->parent = this;
        soft_preemption_path_error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(soft_preemption_counters != nullptr)
    {
        children["soft-preemption-counters"] = soft_preemption_counters;
    }

    for (auto const & c : soft_preemption_path_error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preemption-pending-resolution")
    {
        preemption_pending_resolution = value;
        preemption_pending_resolution.value_namespace = name_space;
        preemption_pending_resolution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-preemption-pending")
    {
        time_in_preemption_pending = value;
        time_in_preemption_pending.value_namespace = name_space;
        time_in_preemption_pending.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preemption-pending-resolution")
    {
        preemption_pending_resolution.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "time-in-preemption-pending")
    {
        time_in_preemption_pending.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "soft-preemption-counters" || name == "soft-preemption-path-error" || name == "preemption-pending-resolution" || name == "status" || name == "time-in-preemption-pending")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::SoftPreemptionCounters()
    :
    frr_triggered_ls_ps{YType::uint32, "frr-triggered-ls-ps"},
    path_protection_switchover_ls_ps{YType::uint32, "path-protection-switchover-ls-ps"},
    reopt_completed_ls_ps{YType::uint32, "reopt-completed-ls-ps"},
    soft_preemption_events{YType::uint32, "soft-preemption-events"},
    time_in_preemption_pending_avg{YType::uint16, "time-in-preemption-pending-avg"},
    time_in_preemption_pending_max{YType::uint16, "time-in-preemption-pending-max"},
    time_in_preemption_pending_min{YType::uint16, "time-in-preemption-pending-min"},
    torn_down_ls_ps{YType::uint32, "torn-down-ls-ps"}
{

    yang_name = "soft-preemption-counters"; yang_parent_name = "soft-preemption"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::~SoftPreemptionCounters()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::has_data() const
{
    return frr_triggered_ls_ps.is_set
	|| path_protection_switchover_ls_ps.is_set
	|| reopt_completed_ls_ps.is_set
	|| soft_preemption_events.is_set
	|| time_in_preemption_pending_avg.is_set
	|| time_in_preemption_pending_max.is_set
	|| time_in_preemption_pending_min.is_set
	|| torn_down_ls_ps.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frr_triggered_ls_ps.yfilter)
	|| ydk::is_set(path_protection_switchover_ls_ps.yfilter)
	|| ydk::is_set(reopt_completed_ls_ps.yfilter)
	|| ydk::is_set(soft_preemption_events.yfilter)
	|| ydk::is_set(time_in_preemption_pending_avg.yfilter)
	|| ydk::is_set(time_in_preemption_pending_max.yfilter)
	|| ydk::is_set(time_in_preemption_pending_min.yfilter)
	|| ydk::is_set(torn_down_ls_ps.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_triggered_ls_ps.is_set || is_set(frr_triggered_ls_ps.yfilter)) leaf_name_data.push_back(frr_triggered_ls_ps.get_name_leafdata());
    if (path_protection_switchover_ls_ps.is_set || is_set(path_protection_switchover_ls_ps.yfilter)) leaf_name_data.push_back(path_protection_switchover_ls_ps.get_name_leafdata());
    if (reopt_completed_ls_ps.is_set || is_set(reopt_completed_ls_ps.yfilter)) leaf_name_data.push_back(reopt_completed_ls_ps.get_name_leafdata());
    if (soft_preemption_events.is_set || is_set(soft_preemption_events.yfilter)) leaf_name_data.push_back(soft_preemption_events.get_name_leafdata());
    if (time_in_preemption_pending_avg.is_set || is_set(time_in_preemption_pending_avg.yfilter)) leaf_name_data.push_back(time_in_preemption_pending_avg.get_name_leafdata());
    if (time_in_preemption_pending_max.is_set || is_set(time_in_preemption_pending_max.yfilter)) leaf_name_data.push_back(time_in_preemption_pending_max.get_name_leafdata());
    if (time_in_preemption_pending_min.is_set || is_set(time_in_preemption_pending_min.yfilter)) leaf_name_data.push_back(time_in_preemption_pending_min.get_name_leafdata());
    if (torn_down_ls_ps.is_set || is_set(torn_down_ls_ps.yfilter)) leaf_name_data.push_back(torn_down_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frr-triggered-ls-ps")
    {
        frr_triggered_ls_ps = value;
        frr_triggered_ls_ps.value_namespace = name_space;
        frr_triggered_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-switchover-ls-ps")
    {
        path_protection_switchover_ls_ps = value;
        path_protection_switchover_ls_ps.value_namespace = name_space;
        path_protection_switchover_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reopt-completed-ls-ps")
    {
        reopt_completed_ls_ps = value;
        reopt_completed_ls_ps.value_namespace = name_space;
        reopt_completed_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-events")
    {
        soft_preemption_events = value;
        soft_preemption_events.value_namespace = name_space;
        soft_preemption_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-preemption-pending-avg")
    {
        time_in_preemption_pending_avg = value;
        time_in_preemption_pending_avg.value_namespace = name_space;
        time_in_preemption_pending_avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-preemption-pending-max")
    {
        time_in_preemption_pending_max = value;
        time_in_preemption_pending_max.value_namespace = name_space;
        time_in_preemption_pending_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-preemption-pending-min")
    {
        time_in_preemption_pending_min = value;
        time_in_preemption_pending_min.value_namespace = name_space;
        time_in_preemption_pending_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "torn-down-ls-ps")
    {
        torn_down_ls_ps = value;
        torn_down_ls_ps.value_namespace = name_space;
        torn_down_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frr-triggered-ls-ps")
    {
        frr_triggered_ls_ps.yfilter = yfilter;
    }
    if(value_path == "path-protection-switchover-ls-ps")
    {
        path_protection_switchover_ls_ps.yfilter = yfilter;
    }
    if(value_path == "reopt-completed-ls-ps")
    {
        reopt_completed_ls_ps.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-events")
    {
        soft_preemption_events.yfilter = yfilter;
    }
    if(value_path == "time-in-preemption-pending-avg")
    {
        time_in_preemption_pending_avg.yfilter = yfilter;
    }
    if(value_path == "time-in-preemption-pending-max")
    {
        time_in_preemption_pending_max.yfilter = yfilter;
    }
    if(value_path == "time-in-preemption-pending-min")
    {
        time_in_preemption_pending_min.yfilter = yfilter;
    }
    if(value_path == "torn-down-ls-ps")
    {
        torn_down_ls_ps.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-triggered-ls-ps" || name == "path-protection-switchover-ls-ps" || name == "reopt-completed-ls-ps" || name == "soft-preemption-events" || name == "time-in-preemption-pending-avg" || name == "time-in-preemption-pending-max" || name == "time-in-preemption-pending-min" || name == "torn-down-ls-ps")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::SoftPreemptionPathError()
    :
    preempting_link_address{YType::str, "preempting-link-address"},
    timestamp{YType::uint32, "timestamp"}
{

    yang_name = "soft-preemption-path-error"; yang_parent_name = "soft-preemption"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::~SoftPreemptionPathError()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::has_data() const
{
    return preempting_link_address.is_set
	|| timestamp.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preempting_link_address.yfilter)
	|| ydk::is_set(timestamp.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption-path-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preempting_link_address.is_set || is_set(preempting_link_address.yfilter)) leaf_name_data.push_back(preempting_link_address.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preempting-link-address")
    {
        preempting_link_address = value;
        preempting_link_address.value_namespace = name_space;
        preempting_link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preempting-link-address")
    {
        preempting_link_address.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preempting-link-address" || name == "timestamp")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::TeTunnelConvergence()
    :
    binding_label_rewrite_time{YType::uint64, "binding-label-rewrite-time"},
    convergence_complete_time{YType::uint64, "convergence-complete-time"},
    frr_trigger_time{YType::uint64, "frr-trigger-time"},
    is_convergence_in_progress{YType::boolean, "is-convergence-in-progress"},
    pcalc_complete_time{YType::uint64, "pcalc-complete-time"},
    vif_creation_time{YType::uint64, "vif-creation-time"}
    	,
    convergence_lsp(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp>())
{
    convergence_lsp->parent = this;

    yang_name = "te-tunnel-convergence"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::~TeTunnelConvergence()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::has_data() const
{
    return binding_label_rewrite_time.is_set
	|| convergence_complete_time.is_set
	|| frr_trigger_time.is_set
	|| is_convergence_in_progress.is_set
	|| pcalc_complete_time.is_set
	|| vif_creation_time.is_set
	|| (convergence_lsp !=  nullptr && convergence_lsp->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(binding_label_rewrite_time.yfilter)
	|| ydk::is_set(convergence_complete_time.yfilter)
	|| ydk::is_set(frr_trigger_time.yfilter)
	|| ydk::is_set(is_convergence_in_progress.yfilter)
	|| ydk::is_set(pcalc_complete_time.yfilter)
	|| ydk::is_set(vif_creation_time.yfilter)
	|| (convergence_lsp !=  nullptr && convergence_lsp->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-tunnel-convergence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (binding_label_rewrite_time.is_set || is_set(binding_label_rewrite_time.yfilter)) leaf_name_data.push_back(binding_label_rewrite_time.get_name_leafdata());
    if (convergence_complete_time.is_set || is_set(convergence_complete_time.yfilter)) leaf_name_data.push_back(convergence_complete_time.get_name_leafdata());
    if (frr_trigger_time.is_set || is_set(frr_trigger_time.yfilter)) leaf_name_data.push_back(frr_trigger_time.get_name_leafdata());
    if (is_convergence_in_progress.is_set || is_set(is_convergence_in_progress.yfilter)) leaf_name_data.push_back(is_convergence_in_progress.get_name_leafdata());
    if (pcalc_complete_time.is_set || is_set(pcalc_complete_time.yfilter)) leaf_name_data.push_back(pcalc_complete_time.get_name_leafdata());
    if (vif_creation_time.is_set || is_set(vif_creation_time.yfilter)) leaf_name_data.push_back(vif_creation_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "convergence-lsp")
    {
        if(convergence_lsp == nullptr)
        {
            convergence_lsp = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp>();
        }
        return convergence_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(convergence_lsp != nullptr)
    {
        children["convergence-lsp"] = convergence_lsp;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "binding-label-rewrite-time")
    {
        binding_label_rewrite_time = value;
        binding_label_rewrite_time.value_namespace = name_space;
        binding_label_rewrite_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "convergence-complete-time")
    {
        convergence_complete_time = value;
        convergence_complete_time.value_namespace = name_space;
        convergence_complete_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-trigger-time")
    {
        frr_trigger_time = value;
        frr_trigger_time.value_namespace = name_space;
        frr_trigger_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-convergence-in-progress")
    {
        is_convergence_in_progress = value;
        is_convergence_in_progress.value_namespace = name_space;
        is_convergence_in_progress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcalc-complete-time")
    {
        pcalc_complete_time = value;
        pcalc_complete_time.value_namespace = name_space;
        pcalc_complete_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vif-creation-time")
    {
        vif_creation_time = value;
        vif_creation_time.value_namespace = name_space;
        vif_creation_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "binding-label-rewrite-time")
    {
        binding_label_rewrite_time.yfilter = yfilter;
    }
    if(value_path == "convergence-complete-time")
    {
        convergence_complete_time.yfilter = yfilter;
    }
    if(value_path == "frr-trigger-time")
    {
        frr_trigger_time.yfilter = yfilter;
    }
    if(value_path == "is-convergence-in-progress")
    {
        is_convergence_in_progress.yfilter = yfilter;
    }
    if(value_path == "pcalc-complete-time")
    {
        pcalc_complete_time.yfilter = yfilter;
    }
    if(value_path == "vif-creation-time")
    {
        vif_creation_time.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "convergence-lsp" || name == "binding-label-rewrite-time" || name == "convergence-complete-time" || name == "frr-trigger-time" || name == "is-convergence-in-progress" || name == "pcalc-complete-time" || name == "vif-creation-time")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp::ConvergenceLsp()
    :
    creation_time{YType::uint64, "creation-time"},
    label_rewrite{YType::uint64, "label-rewrite"},
    path_in{YType::uint64, "path-in"},
    path_out{YType::uint64, "path-out"},
    resv_in{YType::uint64, "resv-in"},
    resv_out{YType::uint64, "resv-out"},
    tunnel_rewrite{YType::uint64, "tunnel-rewrite"}
{

    yang_name = "convergence-lsp"; yang_parent_name = "te-tunnel-convergence"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp::~ConvergenceLsp()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp::has_data() const
{
    return creation_time.is_set
	|| label_rewrite.is_set
	|| path_in.is_set
	|| path_out.is_set
	|| resv_in.is_set
	|| resv_out.is_set
	|| tunnel_rewrite.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(creation_time.yfilter)
	|| ydk::is_set(label_rewrite.yfilter)
	|| ydk::is_set(path_in.yfilter)
	|| ydk::is_set(path_out.yfilter)
	|| ydk::is_set(resv_in.yfilter)
	|| ydk::is_set(resv_out.yfilter)
	|| ydk::is_set(tunnel_rewrite.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (creation_time.is_set || is_set(creation_time.yfilter)) leaf_name_data.push_back(creation_time.get_name_leafdata());
    if (label_rewrite.is_set || is_set(label_rewrite.yfilter)) leaf_name_data.push_back(label_rewrite.get_name_leafdata());
    if (path_in.is_set || is_set(path_in.yfilter)) leaf_name_data.push_back(path_in.get_name_leafdata());
    if (path_out.is_set || is_set(path_out.yfilter)) leaf_name_data.push_back(path_out.get_name_leafdata());
    if (resv_in.is_set || is_set(resv_in.yfilter)) leaf_name_data.push_back(resv_in.get_name_leafdata());
    if (resv_out.is_set || is_set(resv_out.yfilter)) leaf_name_data.push_back(resv_out.get_name_leafdata());
    if (tunnel_rewrite.is_set || is_set(tunnel_rewrite.yfilter)) leaf_name_data.push_back(tunnel_rewrite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "creation-time")
    {
        creation_time = value;
        creation_time.value_namespace = name_space;
        creation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-rewrite")
    {
        label_rewrite = value;
        label_rewrite.value_namespace = name_space;
        label_rewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-in")
    {
        path_in = value;
        path_in.value_namespace = name_space;
        path_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-out")
    {
        path_out = value;
        path_out.value_namespace = name_space;
        path_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resv-in")
    {
        resv_in = value;
        resv_in.value_namespace = name_space;
        resv_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resv-out")
    {
        resv_out = value;
        resv_out.value_namespace = name_space;
        resv_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-rewrite")
    {
        tunnel_rewrite = value;
        tunnel_rewrite.value_namespace = name_space;
        tunnel_rewrite.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "creation-time")
    {
        creation_time.yfilter = yfilter;
    }
    if(value_path == "label-rewrite")
    {
        label_rewrite.yfilter = yfilter;
    }
    if(value_path == "path-in")
    {
        path_in.yfilter = yfilter;
    }
    if(value_path == "path-out")
    {
        path_out.yfilter = yfilter;
    }
    if(value_path == "resv-in")
    {
        resv_in.yfilter = yfilter;
    }
    if(value_path == "resv-out")
    {
        resv_out.yfilter = yfilter;
    }
    if(value_path == "tunnel-rewrite")
    {
        tunnel_rewrite.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "creation-time" || name == "label-rewrite" || name == "path-in" || name == "path-out" || name == "resv-in" || name == "resv-out" || name == "tunnel-rewrite")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::TransportTunnelInfo()
    :
    status_homepath_working{YType::boolean, "status-homepath-working"}
    	,
    egress_static_uni(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni>())
	,otn(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn>())
	,static_uni(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni>())
{
    egress_static_uni->parent = this;
    otn->parent = this;
    static_uni->parent = this;

    yang_name = "transport-tunnel-info"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::~TransportTunnelInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::has_data() const
{
    for (std::size_t index=0; index<diversity_info.size(); index++)
    {
        if(diversity_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<homepath_ero.size(); index++)
    {
        if(homepath_ero[index]->has_data())
            return true;
    }
    return status_homepath_working.is_set
	|| (egress_static_uni !=  nullptr && egress_static_uni->has_data())
	|| (otn !=  nullptr && otn->has_data())
	|| (static_uni !=  nullptr && static_uni->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::has_operation() const
{
    for (std::size_t index=0; index<diversity_info.size(); index++)
    {
        if(diversity_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<homepath_ero.size(); index++)
    {
        if(homepath_ero[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(status_homepath_working.yfilter)
	|| (egress_static_uni !=  nullptr && egress_static_uni->has_operation())
	|| (otn !=  nullptr && otn->has_operation())
	|| (static_uni !=  nullptr && static_uni->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-tunnel-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status_homepath_working.is_set || is_set(status_homepath_working.yfilter)) leaf_name_data.push_back(status_homepath_working.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diversity-info")
    {
        for(auto const & c : diversity_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo>();
        c->parent = this;
        diversity_info.push_back(c);
        return c;
    }

    if(child_yang_name == "egress-static-uni")
    {
        if(egress_static_uni == nullptr)
        {
            egress_static_uni = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni>();
        }
        return egress_static_uni;
    }

    if(child_yang_name == "homepath-ero")
    {
        for(auto const & c : homepath_ero)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro>();
        c->parent = this;
        homepath_ero.push_back(c);
        return c;
    }

    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn>();
        }
        return otn;
    }

    if(child_yang_name == "static-uni")
    {
        if(static_uni == nullptr)
        {
            static_uni = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni>();
        }
        return static_uni;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diversity_info)
    {
        children[c->get_segment_path()] = c;
    }

    if(egress_static_uni != nullptr)
    {
        children["egress-static-uni"] = egress_static_uni;
    }

    for (auto const & c : homepath_ero)
    {
        children[c->get_segment_path()] = c;
    }

    if(otn != nullptr)
    {
        children["otn"] = otn;
    }

    if(static_uni != nullptr)
    {
        children["static-uni"] = static_uni;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status-homepath-working")
    {
        status_homepath_working = value;
        status_homepath_working.value_namespace = name_space;
        status_homepath_working.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status-homepath-working")
    {
        status_homepath_working.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diversity-info" || name == "egress-static-uni" || name == "homepath-ero" || name == "otn" || name == "static-uni" || name == "status-homepath-working")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::DiversityInfo()
    :
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "diversity-info"; yang_parent_name = "transport-tunnel-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::~DiversityInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::has_data() const
{
    return tunnel_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diversity-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressStaticUni()
    :
    local_termination{YType::enumeration, "local-termination"},
    remote_uni_type{YType::enumeration, "remote-uni-type"}
    	,
    egress_port(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort>())
	,term_egress_port(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort>())
{
    egress_port->parent = this;
    term_egress_port->parent = this;

    yang_name = "egress-static-uni"; yang_parent_name = "transport-tunnel-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::~EgressStaticUni()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::has_data() const
{
    return local_termination.is_set
	|| remote_uni_type.is_set
	|| (egress_port !=  nullptr && egress_port->has_data())
	|| (term_egress_port !=  nullptr && term_egress_port->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_termination.yfilter)
	|| ydk::is_set(remote_uni_type.yfilter)
	|| (egress_port !=  nullptr && egress_port->has_operation())
	|| (term_egress_port !=  nullptr && term_egress_port->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-static-uni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_termination.is_set || is_set(local_termination.yfilter)) leaf_name_data.push_back(local_termination.get_name_leafdata());
    if (remote_uni_type.is_set || is_set(remote_uni_type.yfilter)) leaf_name_data.push_back(remote_uni_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "egress-port")
    {
        if(egress_port == nullptr)
        {
            egress_port = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort>();
        }
        return egress_port;
    }

    if(child_yang_name == "term-egress-port")
    {
        if(term_egress_port == nullptr)
        {
            term_egress_port = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort>();
        }
        return term_egress_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(egress_port != nullptr)
    {
        children["egress-port"] = egress_port;
    }

    if(term_egress_port != nullptr)
    {
        children["term-egress-port"] = term_egress_port;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-termination")
    {
        local_termination = value;
        local_termination.value_namespace = name_space;
        local_termination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-uni-type")
    {
        remote_uni_type = value;
        remote_uni_type.value_namespace = name_space;
        remote_uni_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-termination")
    {
        local_termination.yfilter = yfilter;
    }
    if(value_path == "remote-uni-type")
    {
        remote_uni_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress-port" || name == "term-egress-port" || name == "local-termination" || name == "remote-uni-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::EgressPort()
    :
    te_addr(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr>())
{
    te_addr->parent = this;

    yang_name = "egress-port"; yang_parent_name = "egress-static-uni"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::~EgressPort()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::has_data() const
{
    return (te_addr !=  nullptr && te_addr->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::has_operation() const
{
    return is_set(yfilter)
	|| (te_addr !=  nullptr && te_addr->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-addr")
    {
        if(te_addr == nullptr)
        {
            te_addr = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr>();
        }
        return te_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(te_addr != nullptr)
    {
        children["te-addr"] = te_addr;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-addr")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::TeAddr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    type{YType::enumeration, "type"}
    	,
    ipv4_unnumbered_address(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress>())
{
    ipv4_unnumbered_address->parent = this;

    yang_name = "te-addr"; yang_parent_name = "egress-port"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::~TeAddr()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::has_data() const
{
    return ipv4_address.is_set
	|| type.is_set
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unnumbered-address")
    {
        if(ipv4_unnumbered_address == nullptr)
        {
            ipv4_unnumbered_address = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress>();
        }
        return ipv4_unnumbered_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_unnumbered_address != nullptr)
    {
        children["ipv4-unnumbered-address"] = ipv4_unnumbered_address;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unnumbered-address" || name == "ipv4-address" || name == "type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::Ipv4UnnumberedAddress()
    :
    interface_index{YType::uint32, "interface-index"},
    router_id{YType::str, "router-id"}
{

    yang_name = "ipv4-unnumbered-address"; yang_parent_name = "te-addr"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::~Ipv4UnnumberedAddress()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::has_data() const
{
    return interface_index.is_set
	|| router_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_index.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unnumbered-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-index" || name == "router-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TermEgressPort()
    :
    te_addr(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr>())
{
    te_addr->parent = this;

    yang_name = "term-egress-port"; yang_parent_name = "egress-static-uni"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::~TermEgressPort()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::has_data() const
{
    return (te_addr !=  nullptr && te_addr->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::has_operation() const
{
    return is_set(yfilter)
	|| (te_addr !=  nullptr && te_addr->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term-egress-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-addr")
    {
        if(te_addr == nullptr)
        {
            te_addr = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr>();
        }
        return te_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(te_addr != nullptr)
    {
        children["te-addr"] = te_addr;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-addr")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::TeAddr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    type{YType::enumeration, "type"}
    	,
    ipv4_unnumbered_address(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress>())
{
    ipv4_unnumbered_address->parent = this;

    yang_name = "te-addr"; yang_parent_name = "term-egress-port"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::~TeAddr()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::has_data() const
{
    return ipv4_address.is_set
	|| type.is_set
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unnumbered-address")
    {
        if(ipv4_unnumbered_address == nullptr)
        {
            ipv4_unnumbered_address = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress>();
        }
        return ipv4_unnumbered_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_unnumbered_address != nullptr)
    {
        children["ipv4-unnumbered-address"] = ipv4_unnumbered_address;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unnumbered-address" || name == "ipv4-address" || name == "type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::Ipv4UnnumberedAddress()
    :
    interface_index{YType::uint32, "interface-index"},
    router_id{YType::str, "router-id"}
{

    yang_name = "ipv4-unnumbered-address"; yang_parent_name = "te-addr"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::~Ipv4UnnumberedAddress()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::has_data() const
{
    return interface_index.is_set
	|| router_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_index.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unnumbered-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-index" || name == "router-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::HomepathEro()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "homepath-ero"; yang_parent_name = "transport-tunnel-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::~HomepathEro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "homepath-ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4ero_sub_object != nullptr)
    {
        children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    ero_address{YType::str, "ero-address"},
    is_strict_route{YType::boolean, "is-strict-route"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "homepath-ero"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::has_data() const
{
    return ero_address.is_set
	|| is_strict_route.is_set
	|| prefix_length.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-address" || name == "is-strict-route" || name == "prefix-length")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    is_strict_route{YType::boolean, "is-strict-route"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "homepath-ero"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::has_data() const
{
    return ero_interface_id.is_set
	|| ero_router_id.is_set
	|| is_strict_route.is_set
	|| status.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
        ero_interface_id.value_namespace = name_space;
        ero_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
        ero_router_id.value_namespace = name_space;
        ero_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-interface-id" || name == "ero-router-id" || name == "is-strict-route" || name == "status")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::Otn()
    :
    config_bit_rate{YType::uint32, "config-bit-rate"}
    	,
    bandwidth_cfg(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg>())
{
    bandwidth_cfg->parent = this;

    yang_name = "otn"; yang_parent_name = "transport-tunnel-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::~Otn()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::has_data() const
{
    return config_bit_rate.is_set
	|| (bandwidth_cfg !=  nullptr && bandwidth_cfg->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(config_bit_rate.yfilter)
	|| (bandwidth_cfg !=  nullptr && bandwidth_cfg->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config_bit_rate.is_set || is_set(config_bit_rate.yfilter)) leaf_name_data.push_back(config_bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-cfg")
    {
        if(bandwidth_cfg == nullptr)
        {
            bandwidth_cfg = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg>();
        }
        return bandwidth_cfg;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth_cfg != nullptr)
    {
        children["bandwidth-cfg"] = bandwidth_cfg;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "config-bit-rate")
    {
        config_bit_rate = value;
        config_bit_rate.value_namespace = name_space;
        config_bit_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "config-bit-rate")
    {
        config_bit_rate.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-cfg" || name == "config-bit-rate")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::BandwidthCfg()
    :
    odu_level{YType::enumeration, "odu-level"}
    	,
    odu_flex_cbr(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr>())
	,odu_flex_gfp_f_non_res(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes>())
	,odu_flex_gfp_f_res(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes>())
{
    odu_flex_cbr->parent = this;
    odu_flex_gfp_f_non_res->parent = this;
    odu_flex_gfp_f_res->parent = this;

    yang_name = "bandwidth-cfg"; yang_parent_name = "otn"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::~BandwidthCfg()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::has_data() const
{
    return odu_level.is_set
	|| (odu_flex_cbr !=  nullptr && odu_flex_cbr->has_data())
	|| (odu_flex_gfp_f_non_res !=  nullptr && odu_flex_gfp_f_non_res->has_data())
	|| (odu_flex_gfp_f_res !=  nullptr && odu_flex_gfp_f_res->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(odu_level.yfilter)
	|| (odu_flex_cbr !=  nullptr && odu_flex_cbr->has_operation())
	|| (odu_flex_gfp_f_non_res !=  nullptr && odu_flex_gfp_f_non_res->has_operation())
	|| (odu_flex_gfp_f_res !=  nullptr && odu_flex_gfp_f_res->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-cfg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (odu_level.is_set || is_set(odu_level.yfilter)) leaf_name_data.push_back(odu_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-flex-cbr")
    {
        if(odu_flex_cbr == nullptr)
        {
            odu_flex_cbr = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr>();
        }
        return odu_flex_cbr;
    }

    if(child_yang_name == "odu-flex-gfp-f-non-res")
    {
        if(odu_flex_gfp_f_non_res == nullptr)
        {
            odu_flex_gfp_f_non_res = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes>();
        }
        return odu_flex_gfp_f_non_res;
    }

    if(child_yang_name == "odu-flex-gfp-f-res")
    {
        if(odu_flex_gfp_f_res == nullptr)
        {
            odu_flex_gfp_f_res = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes>();
        }
        return odu_flex_gfp_f_res;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(odu_flex_cbr != nullptr)
    {
        children["odu-flex-cbr"] = odu_flex_cbr;
    }

    if(odu_flex_gfp_f_non_res != nullptr)
    {
        children["odu-flex-gfp-f-non-res"] = odu_flex_gfp_f_non_res;
    }

    if(odu_flex_gfp_f_res != nullptr)
    {
        children["odu-flex-gfp-f-res"] = odu_flex_gfp_f_res;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "odu-level")
    {
        odu_level = value;
        odu_level.value_namespace = name_space;
        odu_level.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "odu-level")
    {
        odu_level.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-flex-cbr" || name == "odu-flex-gfp-f-non-res" || name == "odu-flex-gfp-f-res" || name == "odu-level")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::OduFlexCbr()
    :
    bit_rate{YType::uint32, "bit-rate"},
    tolerance{YType::uint16, "tolerance"}
{

    yang_name = "odu-flex-cbr"; yang_parent_name = "bandwidth-cfg"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::~OduFlexCbr()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::has_data() const
{
    return bit_rate.is_set
	|| tolerance.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_rate.yfilter)
	|| ydk::is_set(tolerance.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-flex-cbr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (tolerance.is_set || is_set(tolerance.yfilter)) leaf_name_data.push_back(tolerance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tolerance")
    {
        tolerance = value;
        tolerance.value_namespace = name_space;
        tolerance.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
    if(value_path == "tolerance")
    {
        tolerance.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-rate" || name == "tolerance")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::OduFlexGfpFNonRes()
    :
    bit_rate{YType::uint32, "bit-rate"}
{

    yang_name = "odu-flex-gfp-f-non-res"; yang_parent_name = "bandwidth-cfg"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::~OduFlexGfpFNonRes()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::has_data() const
{
    return bit_rate.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_rate.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-flex-gfp-f-non-res";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-rate")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::OduFlexGfpFRes()
    :
    bit_rate{YType::uint32, "bit-rate"}
{

    yang_name = "odu-flex-gfp-f-res"; yang_parent_name = "bandwidth-cfg"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::~OduFlexGfpFRes()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::has_data() const
{
    return bit_rate.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_rate.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-flex-gfp-f-res";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-rate")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::StaticUni()
    :
    client_if_handle{YType::str, "client-if-handle"},
    client_odu_if_handle{YType::str, "client-odu-if-handle"},
    client_odu_name{YType::str, "client-odu-name"},
    client_port{YType::str, "client-port"},
    cross_connect_id{YType::uint32, "cross-connect-id"},
    is_connected{YType::boolean, "is-connected"},
    local_termination{YType::enumeration, "local-termination"},
    static_uni_type{YType::enumeration, "static-uni-type"},
    term_client_if_handle{YType::str, "term-client-if-handle"},
    term_client_port{YType::str, "term-client-port"},
    uptime{YType::uint32, "uptime"}
{

    yang_name = "static-uni"; yang_parent_name = "transport-tunnel-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::~StaticUni()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::has_data() const
{
    return client_if_handle.is_set
	|| client_odu_if_handle.is_set
	|| client_odu_name.is_set
	|| client_port.is_set
	|| cross_connect_id.is_set
	|| is_connected.is_set
	|| local_termination.is_set
	|| static_uni_type.is_set
	|| term_client_if_handle.is_set
	|| term_client_port.is_set
	|| uptime.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_if_handle.yfilter)
	|| ydk::is_set(client_odu_if_handle.yfilter)
	|| ydk::is_set(client_odu_name.yfilter)
	|| ydk::is_set(client_port.yfilter)
	|| ydk::is_set(cross_connect_id.yfilter)
	|| ydk::is_set(is_connected.yfilter)
	|| ydk::is_set(local_termination.yfilter)
	|| ydk::is_set(static_uni_type.yfilter)
	|| ydk::is_set(term_client_if_handle.yfilter)
	|| ydk::is_set(term_client_port.yfilter)
	|| ydk::is_set(uptime.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-uni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_if_handle.is_set || is_set(client_if_handle.yfilter)) leaf_name_data.push_back(client_if_handle.get_name_leafdata());
    if (client_odu_if_handle.is_set || is_set(client_odu_if_handle.yfilter)) leaf_name_data.push_back(client_odu_if_handle.get_name_leafdata());
    if (client_odu_name.is_set || is_set(client_odu_name.yfilter)) leaf_name_data.push_back(client_odu_name.get_name_leafdata());
    if (client_port.is_set || is_set(client_port.yfilter)) leaf_name_data.push_back(client_port.get_name_leafdata());
    if (cross_connect_id.is_set || is_set(cross_connect_id.yfilter)) leaf_name_data.push_back(cross_connect_id.get_name_leafdata());
    if (is_connected.is_set || is_set(is_connected.yfilter)) leaf_name_data.push_back(is_connected.get_name_leafdata());
    if (local_termination.is_set || is_set(local_termination.yfilter)) leaf_name_data.push_back(local_termination.get_name_leafdata());
    if (static_uni_type.is_set || is_set(static_uni_type.yfilter)) leaf_name_data.push_back(static_uni_type.get_name_leafdata());
    if (term_client_if_handle.is_set || is_set(term_client_if_handle.yfilter)) leaf_name_data.push_back(term_client_if_handle.get_name_leafdata());
    if (term_client_port.is_set || is_set(term_client_port.yfilter)) leaf_name_data.push_back(term_client_port.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-if-handle")
    {
        client_if_handle = value;
        client_if_handle.value_namespace = name_space;
        client_if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-odu-if-handle")
    {
        client_odu_if_handle = value;
        client_odu_if_handle.value_namespace = name_space;
        client_odu_if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-odu-name")
    {
        client_odu_name = value;
        client_odu_name.value_namespace = name_space;
        client_odu_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-port")
    {
        client_port = value;
        client_port.value_namespace = name_space;
        client_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cross-connect-id")
    {
        cross_connect_id = value;
        cross_connect_id.value_namespace = name_space;
        cross_connect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connected")
    {
        is_connected = value;
        is_connected.value_namespace = name_space;
        is_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-termination")
    {
        local_termination = value;
        local_termination.value_namespace = name_space;
        local_termination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static-uni-type")
    {
        static_uni_type = value;
        static_uni_type.value_namespace = name_space;
        static_uni_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "term-client-if-handle")
    {
        term_client_if_handle = value;
        term_client_if_handle.value_namespace = name_space;
        term_client_if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "term-client-port")
    {
        term_client_port = value;
        term_client_port.value_namespace = name_space;
        term_client_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-if-handle")
    {
        client_if_handle.yfilter = yfilter;
    }
    if(value_path == "client-odu-if-handle")
    {
        client_odu_if_handle.yfilter = yfilter;
    }
    if(value_path == "client-odu-name")
    {
        client_odu_name.yfilter = yfilter;
    }
    if(value_path == "client-port")
    {
        client_port.yfilter = yfilter;
    }
    if(value_path == "cross-connect-id")
    {
        cross_connect_id.yfilter = yfilter;
    }
    if(value_path == "is-connected")
    {
        is_connected.yfilter = yfilter;
    }
    if(value_path == "local-termination")
    {
        local_termination.yfilter = yfilter;
    }
    if(value_path == "static-uni-type")
    {
        static_uni_type.yfilter = yfilter;
    }
    if(value_path == "term-client-if-handle")
    {
        term_client_if_handle.yfilter = yfilter;
    }
    if(value_path == "term-client-port")
    {
        term_client_port.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-if-handle" || name == "client-odu-if-handle" || name == "client-odu-name" || name == "client-port" || name == "cross-connect-id" || name == "is-connected" || name == "local-termination" || name == "static-uni-type" || name == "term-client-if-handle" || name == "term-client-port" || name == "uptime")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::TunnelCurrentLsp()
    :
    dste_class_index{YType::uint8, "dste-class-index"},
    dste_class_match{YType::boolean, "dste-class-match"},
    frr_active_reason{YType::uint32, "frr-active-reason"},
    is_frr_failed{YType::boolean, "is-frr-failed"},
    is_interface{YType::boolean, "is-interface"},
    is_passive{YType::boolean, "is-passive"},
    last_path_change{YType::uint32, "last-path-change"},
    lsp_bandwidth{YType::uint32, "lsp-bandwidth"},
    lsp_bandwidth_type{YType::enumeration, "lsp-bandwidth-type"},
    lsp_hold_priority{YType::uint8, "lsp-hold-priority"},
    lsp_setup_priority{YType::uint8, "lsp-setup-priority"},
    persistent_bytes{YType::uint64, "persistent-bytes"},
    persistent_packets{YType::uint64, "persistent-packets"},
    reoptimize_reason{YType::enumeration, "reoptimize-reason"},
    reoptimize_trigger{YType::enumeration, "reoptimize-trigger"},
    s2_ls_down{YType::uint32, "s2-ls-down"},
    s2_ls_proceeding{YType::uint32, "s2-ls-proceeding"},
    s2_ls_up{YType::uint32, "s2-ls-up"},
    signaled_name{YType::str, "signaled-name"},
    timer_left{YType::uint32, "timer-left"},
    type{YType::enumeration, "type"},
    uptime{YType::uint32, "uptime"}
    	,
    lsp_fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec>())
{
    lsp_fec->parent = this;

    yang_name = "tunnel-current-lsp"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::~TunnelCurrentLsp()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::has_data() const
{
    for (std::size_t index=0; index<s2l.size(); index++)
    {
        if(s2l[index]->has_data())
            return true;
    }
    return dste_class_index.is_set
	|| dste_class_match.is_set
	|| frr_active_reason.is_set
	|| is_frr_failed.is_set
	|| is_interface.is_set
	|| is_passive.is_set
	|| last_path_change.is_set
	|| lsp_bandwidth.is_set
	|| lsp_bandwidth_type.is_set
	|| lsp_hold_priority.is_set
	|| lsp_setup_priority.is_set
	|| persistent_bytes.is_set
	|| persistent_packets.is_set
	|| reoptimize_reason.is_set
	|| reoptimize_trigger.is_set
	|| s2_ls_down.is_set
	|| s2_ls_proceeding.is_set
	|| s2_ls_up.is_set
	|| signaled_name.is_set
	|| timer_left.is_set
	|| type.is_set
	|| uptime.is_set
	|| (lsp_fec !=  nullptr && lsp_fec->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::has_operation() const
{
    for (std::size_t index=0; index<s2l.size(); index++)
    {
        if(s2l[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dste_class_index.yfilter)
	|| ydk::is_set(dste_class_match.yfilter)
	|| ydk::is_set(frr_active_reason.yfilter)
	|| ydk::is_set(is_frr_failed.yfilter)
	|| ydk::is_set(is_interface.yfilter)
	|| ydk::is_set(is_passive.yfilter)
	|| ydk::is_set(last_path_change.yfilter)
	|| ydk::is_set(lsp_bandwidth.yfilter)
	|| ydk::is_set(lsp_bandwidth_type.yfilter)
	|| ydk::is_set(lsp_hold_priority.yfilter)
	|| ydk::is_set(lsp_setup_priority.yfilter)
	|| ydk::is_set(persistent_bytes.yfilter)
	|| ydk::is_set(persistent_packets.yfilter)
	|| ydk::is_set(reoptimize_reason.yfilter)
	|| ydk::is_set(reoptimize_trigger.yfilter)
	|| ydk::is_set(s2_ls_down.yfilter)
	|| ydk::is_set(s2_ls_proceeding.yfilter)
	|| ydk::is_set(s2_ls_up.yfilter)
	|| ydk::is_set(signaled_name.yfilter)
	|| ydk::is_set(timer_left.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (lsp_fec !=  nullptr && lsp_fec->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-current-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_class_index.is_set || is_set(dste_class_index.yfilter)) leaf_name_data.push_back(dste_class_index.get_name_leafdata());
    if (dste_class_match.is_set || is_set(dste_class_match.yfilter)) leaf_name_data.push_back(dste_class_match.get_name_leafdata());
    if (frr_active_reason.is_set || is_set(frr_active_reason.yfilter)) leaf_name_data.push_back(frr_active_reason.get_name_leafdata());
    if (is_frr_failed.is_set || is_set(is_frr_failed.yfilter)) leaf_name_data.push_back(is_frr_failed.get_name_leafdata());
    if (is_interface.is_set || is_set(is_interface.yfilter)) leaf_name_data.push_back(is_interface.get_name_leafdata());
    if (is_passive.is_set || is_set(is_passive.yfilter)) leaf_name_data.push_back(is_passive.get_name_leafdata());
    if (last_path_change.is_set || is_set(last_path_change.yfilter)) leaf_name_data.push_back(last_path_change.get_name_leafdata());
    if (lsp_bandwidth.is_set || is_set(lsp_bandwidth.yfilter)) leaf_name_data.push_back(lsp_bandwidth.get_name_leafdata());
    if (lsp_bandwidth_type.is_set || is_set(lsp_bandwidth_type.yfilter)) leaf_name_data.push_back(lsp_bandwidth_type.get_name_leafdata());
    if (lsp_hold_priority.is_set || is_set(lsp_hold_priority.yfilter)) leaf_name_data.push_back(lsp_hold_priority.get_name_leafdata());
    if (lsp_setup_priority.is_set || is_set(lsp_setup_priority.yfilter)) leaf_name_data.push_back(lsp_setup_priority.get_name_leafdata());
    if (persistent_bytes.is_set || is_set(persistent_bytes.yfilter)) leaf_name_data.push_back(persistent_bytes.get_name_leafdata());
    if (persistent_packets.is_set || is_set(persistent_packets.yfilter)) leaf_name_data.push_back(persistent_packets.get_name_leafdata());
    if (reoptimize_reason.is_set || is_set(reoptimize_reason.yfilter)) leaf_name_data.push_back(reoptimize_reason.get_name_leafdata());
    if (reoptimize_trigger.is_set || is_set(reoptimize_trigger.yfilter)) leaf_name_data.push_back(reoptimize_trigger.get_name_leafdata());
    if (s2_ls_down.is_set || is_set(s2_ls_down.yfilter)) leaf_name_data.push_back(s2_ls_down.get_name_leafdata());
    if (s2_ls_proceeding.is_set || is_set(s2_ls_proceeding.yfilter)) leaf_name_data.push_back(s2_ls_proceeding.get_name_leafdata());
    if (s2_ls_up.is_set || is_set(s2_ls_up.yfilter)) leaf_name_data.push_back(s2_ls_up.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (timer_left.is_set || is_set(timer_left.yfilter)) leaf_name_data.push_back(timer_left.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-fec")
    {
        if(lsp_fec == nullptr)
        {
            lsp_fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec>();
        }
        return lsp_fec;
    }

    if(child_yang_name == "s2l")
    {
        for(auto const & c : s2l)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L>();
        c->parent = this;
        s2l.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp_fec != nullptr)
    {
        children["lsp-fec"] = lsp_fec;
    }

    for (auto const & c : s2l)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-class-index")
    {
        dste_class_index = value;
        dste_class_index.value_namespace = name_space;
        dste_class_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-match")
    {
        dste_class_match = value;
        dste_class_match.value_namespace = name_space;
        dste_class_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-active-reason")
    {
        frr_active_reason = value;
        frr_active_reason.value_namespace = name_space;
        frr_active_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-frr-failed")
    {
        is_frr_failed = value;
        is_frr_failed.value_namespace = name_space;
        is_frr_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface")
    {
        is_interface = value;
        is_interface.value_namespace = name_space;
        is_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-passive")
    {
        is_passive = value;
        is_passive.value_namespace = name_space;
        is_passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-path-change")
    {
        last_path_change = value;
        last_path_change.value_namespace = name_space;
        last_path_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth")
    {
        lsp_bandwidth = value;
        lsp_bandwidth.value_namespace = name_space;
        lsp_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-type")
    {
        lsp_bandwidth_type = value;
        lsp_bandwidth_type.value_namespace = name_space;
        lsp_bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-hold-priority")
    {
        lsp_hold_priority = value;
        lsp_hold_priority.value_namespace = name_space;
        lsp_hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-setup-priority")
    {
        lsp_setup_priority = value;
        lsp_setup_priority.value_namespace = name_space;
        lsp_setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "persistent-bytes")
    {
        persistent_bytes = value;
        persistent_bytes.value_namespace = name_space;
        persistent_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "persistent-packets")
    {
        persistent_packets = value;
        persistent_packets.value_namespace = name_space;
        persistent_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-reason")
    {
        reoptimize_reason = value;
        reoptimize_reason.value_namespace = name_space;
        reoptimize_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-trigger")
    {
        reoptimize_trigger = value;
        reoptimize_trigger.value_namespace = name_space;
        reoptimize_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2-ls-down")
    {
        s2_ls_down = value;
        s2_ls_down.value_namespace = name_space;
        s2_ls_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2-ls-proceeding")
    {
        s2_ls_proceeding = value;
        s2_ls_proceeding.value_namespace = name_space;
        s2_ls_proceeding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2-ls-up")
    {
        s2_ls_up = value;
        s2_ls_up.value_namespace = name_space;
        s2_ls_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
        signaled_name.value_namespace = name_space;
        signaled_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-left")
    {
        timer_left = value;
        timer_left.value_namespace = name_space;
        timer_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-class-index")
    {
        dste_class_index.yfilter = yfilter;
    }
    if(value_path == "dste-class-match")
    {
        dste_class_match.yfilter = yfilter;
    }
    if(value_path == "frr-active-reason")
    {
        frr_active_reason.yfilter = yfilter;
    }
    if(value_path == "is-frr-failed")
    {
        is_frr_failed.yfilter = yfilter;
    }
    if(value_path == "is-interface")
    {
        is_interface.yfilter = yfilter;
    }
    if(value_path == "is-passive")
    {
        is_passive.yfilter = yfilter;
    }
    if(value_path == "last-path-change")
    {
        last_path_change.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth")
    {
        lsp_bandwidth.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-type")
    {
        lsp_bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "lsp-hold-priority")
    {
        lsp_hold_priority.yfilter = yfilter;
    }
    if(value_path == "lsp-setup-priority")
    {
        lsp_setup_priority.yfilter = yfilter;
    }
    if(value_path == "persistent-bytes")
    {
        persistent_bytes.yfilter = yfilter;
    }
    if(value_path == "persistent-packets")
    {
        persistent_packets.yfilter = yfilter;
    }
    if(value_path == "reoptimize-reason")
    {
        reoptimize_reason.yfilter = yfilter;
    }
    if(value_path == "reoptimize-trigger")
    {
        reoptimize_trigger.yfilter = yfilter;
    }
    if(value_path == "s2-ls-down")
    {
        s2_ls_down.yfilter = yfilter;
    }
    if(value_path == "s2-ls-proceeding")
    {
        s2_ls_proceeding.yfilter = yfilter;
    }
    if(value_path == "s2-ls-up")
    {
        s2_ls_up.yfilter = yfilter;
    }
    if(value_path == "signaled-name")
    {
        signaled_name.yfilter = yfilter;
    }
    if(value_path == "timer-left")
    {
        timer_left.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-fec" || name == "s2l" || name == "dste-class-index" || name == "dste-class-match" || name == "frr-active-reason" || name == "is-frr-failed" || name == "is-interface" || name == "is-passive" || name == "last-path-change" || name == "lsp-bandwidth" || name == "lsp-bandwidth-type" || name == "lsp-hold-priority" || name == "lsp-setup-priority" || name == "persistent-bytes" || name == "persistent-packets" || name == "reoptimize-reason" || name == "reoptimize-trigger" || name == "s2-ls-down" || name == "s2-ls-proceeding" || name == "s2-ls-up" || name == "signaled-name" || name == "timer-left" || name == "type" || name == "uptime")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::LspFec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "lsp-fec"; yang_parent_name = "tunnel-current-lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::~LspFec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-extended-tunnel-id" || name == "fec-lsp-id" || name == "fec-source" || name == "fec-tunnel-id" || name == "fec-vrf")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "lsp-fec"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "fec-destination-p2mp-id" || name == "p2p-lsp-destination")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::S2L()
    :
    abr_auto_discovered{YType::str, "abr-auto-discovered"},
    backup_tunnel_interface{YType::str, "backup-tunnel-interface"},
    downstream_router_id{YType::str, "downstream-router-id"},
    egress_interface{YType::str, "egress-interface"},
    egress_interface_brief{YType::str, "egress-interface-brief"},
    egress_interface_state{YType::enumeration, "egress-interface-state"},
    expanded_ero_affinity_bits{YType::uint32, "expanded-ero-affinity-bits"},
    expanded_ero_affinity_mask{YType::uint32, "expanded-ero-affinity-mask"},
    expanded_ero_area_id{YType::str, "expanded-ero-area-id"},
    expanded_ero_metric{YType::uint32, "expanded-ero-metric"},
    expanded_ero_metric_type{YType::enumeration, "expanded-ero-metric-type"},
    frr_out_tunnel_interface{YType::str, "frr-out-tunnel-interface"},
    incoming_address{YType::str, "incoming-address"},
    ingress_interface{YType::str, "ingress-interface"},
    ingress_interface_brief{YType::str, "ingress-interface-brief"},
    ingress_interface_state{YType::enumeration, "ingress-interface-state"},
    is_bandwidth_protect{YType::boolean, "is-bandwidth-protect"},
    is_expanded_ero{YType::boolean, "is-expanded-ero"},
    is_frr_enabled{YType::boolean, "is-frr-enabled"},
    is_node_protected{YType::boolean, "is-node-protected"},
    is_optical{YType::boolean, "is-optical"},
    local_router_id{YType::str, "local-router-id"},
    next_hop_address{YType::str, "next-hop-address"},
    node_hop_count{YType::uint8, "node-hop-count"},
    outbound_frr_state{YType::enumeration, "outbound-frr-state"},
    path_reeval_query_mid{YType::uint32, "path-reeval-query-mid"},
    path_rro_enabled{YType::boolean, "path-rro-enabled"},
    path_using_strict_spf{YType::boolean, "path-using-strict-spf"},
    pcalc_area{YType::str, "pcalc-area"},
    previous_hop_address{YType::str, "previous-hop-address"},
    reverse_lsp_connected{YType::boolean, "reverse-lsp-connected"},
    reverse_lsp_name{YType::str, "reverse-lsp-name"},
    reverse_lsp_present{YType::boolean, "reverse-lsp-present"},
    reverse_weight{YType::uint64, "reverse-weight"},
    role{YType::enumeration, "role"},
    s2l_local_label{YType::uint32, "s2l-local-label"},
    s2l_out_label{YType::uint32, "s2l-out-label"},
    s2l_reverse_ero_obj_present{YType::boolean, "s2l-reverse-ero-obj-present"},
    s2l_reverse_tspec_obj_present{YType::boolean, "s2l-reverse-tspec-obj-present"},
    signalling_status{YType::enumeration, "signalling-status"},
    time_since_last_preferred_path_exists_send_mid{YType::uint32, "time-since-last-preferred-path-exists-send-mid"},
    time_since_last_preferred_tree_exists_send_mid{YType::uint32, "time-since-last-preferred-tree-exists-send-mid"},
    time_since_last_query_received_mid{YType::uint32, "time-since-last-query-received-mid"},
    upstream_router_id{YType::str, "upstream-router-id"},
    uptime{YType::uint32, "uptime"},
    weight{YType::uint64, "weight"}
    	,
    active_path_option(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption>())
	,association(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::Association>())
	,diversity_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::DiversityInfo>())
	,flex_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::FlexInfo>())
	,fspec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::Fspec>())
	,generic_fspec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::GenericFspec>())
	,generic_tspec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::GenericTspec>())
	,gmpls_labels(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::GmplsLabels>())
	,head_end_bfd_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::HeadEndBfdInfo>())
	,in_xro(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::InXro>())
	,incoming_address_generic(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::IncomingAddressGeneric>())
	,lsp_wrap_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::LspWrapInfo>())
	,next_hop_address_generic(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::NextHopAddressGeneric>())
	,otn_s2l(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::OtnS2L>())
	,out_xro(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::OutXro>())
	,previous_hop_address_generic(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::PreviousHopAddressGeneric>())
	,protection(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::Protection>())
	,reverse_lsp_fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ReverseLspFec>())
	,reverse_tspec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ReverseTspec>())
	,s2l_convergence(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::S2LConvergence>())
	,s2l_fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::S2LFec>())
	,soft_preemption(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::SoftPreemption>())
	,srlg_collection(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::SrlgCollection>())
	,tail_end_bfd_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::TailEndBfdInfo>())
	,tspec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::Tspec>())
{
    active_path_option->parent = this;
    association->parent = this;
    diversity_info->parent = this;
    flex_info->parent = this;
    fspec->parent = this;
    generic_fspec->parent = this;
    generic_tspec->parent = this;
    gmpls_labels->parent = this;
    head_end_bfd_info->parent = this;
    in_xro->parent = this;
    incoming_address_generic->parent = this;
    lsp_wrap_info->parent = this;
    next_hop_address_generic->parent = this;
    otn_s2l->parent = this;
    out_xro->parent = this;
    previous_hop_address_generic->parent = this;
    protection->parent = this;
    reverse_lsp_fec->parent = this;
    reverse_tspec->parent = this;
    s2l_convergence->parent = this;
    s2l_fec->parent = this;
    soft_preemption->parent = this;
    srlg_collection->parent = this;
    tail_end_bfd_info->parent = this;
    tspec->parent = this;

    yang_name = "s2l"; yang_parent_name = "tunnel-current-lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::~S2L()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::has_data() const
{
    for (std::size_t index=0; index<in_ero.size(); index++)
    {
        if(in_ero[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<out_ero.size(); index++)
    {
        if(out_ero[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path_affinity_array.size(); index++)
    {
        if(path_affinity_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path_rro.size(); index++)
    {
        if(path_rro[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<resv_rro.size(); index++)
    {
        if(resv_rro[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reverse_ero_in.size(); index++)
    {
        if(reverse_ero_in[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<s2l_reverse_lsp_sub_obj.size(); index++)
    {
        if(s2l_reverse_lsp_sub_obj[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<s2l_segment_routing_path.size(); index++)
    {
        if(s2l_segment_routing_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    return abr_auto_discovered.is_set
	|| backup_tunnel_interface.is_set
	|| downstream_router_id.is_set
	|| egress_interface.is_set
	|| egress_interface_brief.is_set
	|| egress_interface_state.is_set
	|| expanded_ero_affinity_bits.is_set
	|| expanded_ero_affinity_mask.is_set
	|| expanded_ero_area_id.is_set
	|| expanded_ero_metric.is_set
	|| expanded_ero_metric_type.is_set
	|| frr_out_tunnel_interface.is_set
	|| incoming_address.is_set
	|| ingress_interface.is_set
	|| ingress_interface_brief.is_set
	|| ingress_interface_state.is_set
	|| is_bandwidth_protect.is_set
	|| is_expanded_ero.is_set
	|| is_frr_enabled.is_set
	|| is_node_protected.is_set
	|| is_optical.is_set
	|| local_router_id.is_set
	|| next_hop_address.is_set
	|| node_hop_count.is_set
	|| outbound_frr_state.is_set
	|| path_reeval_query_mid.is_set
	|| path_rro_enabled.is_set
	|| path_using_strict_spf.is_set
	|| pcalc_area.is_set
	|| previous_hop_address.is_set
	|| reverse_lsp_connected.is_set
	|| reverse_lsp_name.is_set
	|| reverse_lsp_present.is_set
	|| reverse_weight.is_set
	|| role.is_set
	|| s2l_local_label.is_set
	|| s2l_out_label.is_set
	|| s2l_reverse_ero_obj_present.is_set
	|| s2l_reverse_tspec_obj_present.is_set
	|| signalling_status.is_set
	|| time_since_last_preferred_path_exists_send_mid.is_set
	|| time_since_last_preferred_tree_exists_send_mid.is_set
	|| time_since_last_query_received_mid.is_set
	|| upstream_router_id.is_set
	|| uptime.is_set
	|| weight.is_set
	|| (active_path_option !=  nullptr && active_path_option->has_data())
	|| (association !=  nullptr && association->has_data())
	|| (diversity_info !=  nullptr && diversity_info->has_data())
	|| (flex_info !=  nullptr && flex_info->has_data())
	|| (fspec !=  nullptr && fspec->has_data())
	|| (generic_fspec !=  nullptr && generic_fspec->has_data())
	|| (generic_tspec !=  nullptr && generic_tspec->has_data())
	|| (gmpls_labels !=  nullptr && gmpls_labels->has_data())
	|| (head_end_bfd_info !=  nullptr && head_end_bfd_info->has_data())
	|| (in_xro !=  nullptr && in_xro->has_data())
	|| (incoming_address_generic !=  nullptr && incoming_address_generic->has_data())
	|| (lsp_wrap_info !=  nullptr && lsp_wrap_info->has_data())
	|| (next_hop_address_generic !=  nullptr && next_hop_address_generic->has_data())
	|| (otn_s2l !=  nullptr && otn_s2l->has_data())
	|| (out_xro !=  nullptr && out_xro->has_data())
	|| (previous_hop_address_generic !=  nullptr && previous_hop_address_generic->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (reverse_lsp_fec !=  nullptr && reverse_lsp_fec->has_data())
	|| (reverse_tspec !=  nullptr && reverse_tspec->has_data())
	|| (s2l_convergence !=  nullptr && s2l_convergence->has_data())
	|| (s2l_fec !=  nullptr && s2l_fec->has_data())
	|| (soft_preemption !=  nullptr && soft_preemption->has_data())
	|| (srlg_collection !=  nullptr && srlg_collection->has_data())
	|| (tail_end_bfd_info !=  nullptr && tail_end_bfd_info->has_data())
	|| (tspec !=  nullptr && tspec->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::has_operation() const
{
    for (std::size_t index=0; index<in_ero.size(); index++)
    {
        if(in_ero[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<out_ero.size(); index++)
    {
        if(out_ero[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path_affinity_array.size(); index++)
    {
        if(path_affinity_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path_rro.size(); index++)
    {
        if(path_rro[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<resv_rro.size(); index++)
    {
        if(resv_rro[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reverse_ero_in.size(); index++)
    {
        if(reverse_ero_in[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<s2l_reverse_lsp_sub_obj.size(); index++)
    {
        if(s2l_reverse_lsp_sub_obj[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<s2l_segment_routing_path.size(); index++)
    {
        if(s2l_segment_routing_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(abr_auto_discovered.yfilter)
	|| ydk::is_set(backup_tunnel_interface.yfilter)
	|| ydk::is_set(downstream_router_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(egress_interface_brief.yfilter)
	|| ydk::is_set(egress_interface_state.yfilter)
	|| ydk::is_set(expanded_ero_affinity_bits.yfilter)
	|| ydk::is_set(expanded_ero_affinity_mask.yfilter)
	|| ydk::is_set(expanded_ero_area_id.yfilter)
	|| ydk::is_set(expanded_ero_metric.yfilter)
	|| ydk::is_set(expanded_ero_metric_type.yfilter)
	|| ydk::is_set(frr_out_tunnel_interface.yfilter)
	|| ydk::is_set(incoming_address.yfilter)
	|| ydk::is_set(ingress_interface.yfilter)
	|| ydk::is_set(ingress_interface_brief.yfilter)
	|| ydk::is_set(ingress_interface_state.yfilter)
	|| ydk::is_set(is_bandwidth_protect.yfilter)
	|| ydk::is_set(is_expanded_ero.yfilter)
	|| ydk::is_set(is_frr_enabled.yfilter)
	|| ydk::is_set(is_node_protected.yfilter)
	|| ydk::is_set(is_optical.yfilter)
	|| ydk::is_set(local_router_id.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(node_hop_count.yfilter)
	|| ydk::is_set(outbound_frr_state.yfilter)
	|| ydk::is_set(path_reeval_query_mid.yfilter)
	|| ydk::is_set(path_rro_enabled.yfilter)
	|| ydk::is_set(path_using_strict_spf.yfilter)
	|| ydk::is_set(pcalc_area.yfilter)
	|| ydk::is_set(previous_hop_address.yfilter)
	|| ydk::is_set(reverse_lsp_connected.yfilter)
	|| ydk::is_set(reverse_lsp_name.yfilter)
	|| ydk::is_set(reverse_lsp_present.yfilter)
	|| ydk::is_set(reverse_weight.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(s2l_local_label.yfilter)
	|| ydk::is_set(s2l_out_label.yfilter)
	|| ydk::is_set(s2l_reverse_ero_obj_present.yfilter)
	|| ydk::is_set(s2l_reverse_tspec_obj_present.yfilter)
	|| ydk::is_set(signalling_status.yfilter)
	|| ydk::is_set(time_since_last_preferred_path_exists_send_mid.yfilter)
	|| ydk::is_set(time_since_last_preferred_tree_exists_send_mid.yfilter)
	|| ydk::is_set(time_since_last_query_received_mid.yfilter)
	|| ydk::is_set(upstream_router_id.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| (active_path_option !=  nullptr && active_path_option->has_operation())
	|| (association !=  nullptr && association->has_operation())
	|| (diversity_info !=  nullptr && diversity_info->has_operation())
	|| (flex_info !=  nullptr && flex_info->has_operation())
	|| (fspec !=  nullptr && fspec->has_operation())
	|| (generic_fspec !=  nullptr && generic_fspec->has_operation())
	|| (generic_tspec !=  nullptr && generic_tspec->has_operation())
	|| (gmpls_labels !=  nullptr && gmpls_labels->has_operation())
	|| (head_end_bfd_info !=  nullptr && head_end_bfd_info->has_operation())
	|| (in_xro !=  nullptr && in_xro->has_operation())
	|| (incoming_address_generic !=  nullptr && incoming_address_generic->has_operation())
	|| (lsp_wrap_info !=  nullptr && lsp_wrap_info->has_operation())
	|| (next_hop_address_generic !=  nullptr && next_hop_address_generic->has_operation())
	|| (otn_s2l !=  nullptr && otn_s2l->has_operation())
	|| (out_xro !=  nullptr && out_xro->has_operation())
	|| (previous_hop_address_generic !=  nullptr && previous_hop_address_generic->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (reverse_lsp_fec !=  nullptr && reverse_lsp_fec->has_operation())
	|| (reverse_tspec !=  nullptr && reverse_tspec->has_operation())
	|| (s2l_convergence !=  nullptr && s2l_convergence->has_operation())
	|| (s2l_fec !=  nullptr && s2l_fec->has_operation())
	|| (soft_preemption !=  nullptr && soft_preemption->has_operation())
	|| (srlg_collection !=  nullptr && srlg_collection->has_operation())
	|| (tail_end_bfd_info !=  nullptr && tail_end_bfd_info->has_operation())
	|| (tspec !=  nullptr && tspec->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abr_auto_discovered.is_set || is_set(abr_auto_discovered.yfilter)) leaf_name_data.push_back(abr_auto_discovered.get_name_leafdata());
    if (backup_tunnel_interface.is_set || is_set(backup_tunnel_interface.yfilter)) leaf_name_data.push_back(backup_tunnel_interface.get_name_leafdata());
    if (downstream_router_id.is_set || is_set(downstream_router_id.yfilter)) leaf_name_data.push_back(downstream_router_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (egress_interface_brief.is_set || is_set(egress_interface_brief.yfilter)) leaf_name_data.push_back(egress_interface_brief.get_name_leafdata());
    if (egress_interface_state.is_set || is_set(egress_interface_state.yfilter)) leaf_name_data.push_back(egress_interface_state.get_name_leafdata());
    if (expanded_ero_affinity_bits.is_set || is_set(expanded_ero_affinity_bits.yfilter)) leaf_name_data.push_back(expanded_ero_affinity_bits.get_name_leafdata());
    if (expanded_ero_affinity_mask.is_set || is_set(expanded_ero_affinity_mask.yfilter)) leaf_name_data.push_back(expanded_ero_affinity_mask.get_name_leafdata());
    if (expanded_ero_area_id.is_set || is_set(expanded_ero_area_id.yfilter)) leaf_name_data.push_back(expanded_ero_area_id.get_name_leafdata());
    if (expanded_ero_metric.is_set || is_set(expanded_ero_metric.yfilter)) leaf_name_data.push_back(expanded_ero_metric.get_name_leafdata());
    if (expanded_ero_metric_type.is_set || is_set(expanded_ero_metric_type.yfilter)) leaf_name_data.push_back(expanded_ero_metric_type.get_name_leafdata());
    if (frr_out_tunnel_interface.is_set || is_set(frr_out_tunnel_interface.yfilter)) leaf_name_data.push_back(frr_out_tunnel_interface.get_name_leafdata());
    if (incoming_address.is_set || is_set(incoming_address.yfilter)) leaf_name_data.push_back(incoming_address.get_name_leafdata());
    if (ingress_interface.is_set || is_set(ingress_interface.yfilter)) leaf_name_data.push_back(ingress_interface.get_name_leafdata());
    if (ingress_interface_brief.is_set || is_set(ingress_interface_brief.yfilter)) leaf_name_data.push_back(ingress_interface_brief.get_name_leafdata());
    if (ingress_interface_state.is_set || is_set(ingress_interface_state.yfilter)) leaf_name_data.push_back(ingress_interface_state.get_name_leafdata());
    if (is_bandwidth_protect.is_set || is_set(is_bandwidth_protect.yfilter)) leaf_name_data.push_back(is_bandwidth_protect.get_name_leafdata());
    if (is_expanded_ero.is_set || is_set(is_expanded_ero.yfilter)) leaf_name_data.push_back(is_expanded_ero.get_name_leafdata());
    if (is_frr_enabled.is_set || is_set(is_frr_enabled.yfilter)) leaf_name_data.push_back(is_frr_enabled.get_name_leafdata());
    if (is_node_protected.is_set || is_set(is_node_protected.yfilter)) leaf_name_data.push_back(is_node_protected.get_name_leafdata());
    if (is_optical.is_set || is_set(is_optical.yfilter)) leaf_name_data.push_back(is_optical.get_name_leafdata());
    if (local_router_id.is_set || is_set(local_router_id.yfilter)) leaf_name_data.push_back(local_router_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (node_hop_count.is_set || is_set(node_hop_count.yfilter)) leaf_name_data.push_back(node_hop_count.get_name_leafdata());
    if (outbound_frr_state.is_set || is_set(outbound_frr_state.yfilter)) leaf_name_data.push_back(outbound_frr_state.get_name_leafdata());
    if (path_reeval_query_mid.is_set || is_set(path_reeval_query_mid.yfilter)) leaf_name_data.push_back(path_reeval_query_mid.get_name_leafdata());
    if (path_rro_enabled.is_set || is_set(path_rro_enabled.yfilter)) leaf_name_data.push_back(path_rro_enabled.get_name_leafdata());
    if (path_using_strict_spf.is_set || is_set(path_using_strict_spf.yfilter)) leaf_name_data.push_back(path_using_strict_spf.get_name_leafdata());
    if (pcalc_area.is_set || is_set(pcalc_area.yfilter)) leaf_name_data.push_back(pcalc_area.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.yfilter)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());
    if (reverse_lsp_connected.is_set || is_set(reverse_lsp_connected.yfilter)) leaf_name_data.push_back(reverse_lsp_connected.get_name_leafdata());
    if (reverse_lsp_name.is_set || is_set(reverse_lsp_name.yfilter)) leaf_name_data.push_back(reverse_lsp_name.get_name_leafdata());
    if (reverse_lsp_present.is_set || is_set(reverse_lsp_present.yfilter)) leaf_name_data.push_back(reverse_lsp_present.get_name_leafdata());
    if (reverse_weight.is_set || is_set(reverse_weight.yfilter)) leaf_name_data.push_back(reverse_weight.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (s2l_local_label.is_set || is_set(s2l_local_label.yfilter)) leaf_name_data.push_back(s2l_local_label.get_name_leafdata());
    if (s2l_out_label.is_set || is_set(s2l_out_label.yfilter)) leaf_name_data.push_back(s2l_out_label.get_name_leafdata());
    if (s2l_reverse_ero_obj_present.is_set || is_set(s2l_reverse_ero_obj_present.yfilter)) leaf_name_data.push_back(s2l_reverse_ero_obj_present.get_name_leafdata());
    if (s2l_reverse_tspec_obj_present.is_set || is_set(s2l_reverse_tspec_obj_present.yfilter)) leaf_name_data.push_back(s2l_reverse_tspec_obj_present.get_name_leafdata());
    if (signalling_status.is_set || is_set(signalling_status.yfilter)) leaf_name_data.push_back(signalling_status.get_name_leafdata());
    if (time_since_last_preferred_path_exists_send_mid.is_set || is_set(time_since_last_preferred_path_exists_send_mid.yfilter)) leaf_name_data.push_back(time_since_last_preferred_path_exists_send_mid.get_name_leafdata());
    if (time_since_last_preferred_tree_exists_send_mid.is_set || is_set(time_since_last_preferred_tree_exists_send_mid.yfilter)) leaf_name_data.push_back(time_since_last_preferred_tree_exists_send_mid.get_name_leafdata());
    if (time_since_last_query_received_mid.is_set || is_set(time_since_last_query_received_mid.yfilter)) leaf_name_data.push_back(time_since_last_query_received_mid.get_name_leafdata());
    if (upstream_router_id.is_set || is_set(upstream_router_id.yfilter)) leaf_name_data.push_back(upstream_router_id.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-path-option")
    {
        if(active_path_option == nullptr)
        {
            active_path_option = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption>();
        }
        return active_path_option;
    }

    if(child_yang_name == "association")
    {
        if(association == nullptr)
        {
            association = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::Association>();
        }
        return association;
    }

    if(child_yang_name == "diversity-info")
    {
        if(diversity_info == nullptr)
        {
            diversity_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::DiversityInfo>();
        }
        return diversity_info;
    }

    if(child_yang_name == "flex-info")
    {
        if(flex_info == nullptr)
        {
            flex_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::FlexInfo>();
        }
        return flex_info;
    }

    if(child_yang_name == "fspec")
    {
        if(fspec == nullptr)
        {
            fspec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::Fspec>();
        }
        return fspec;
    }

    if(child_yang_name == "generic-fspec")
    {
        if(generic_fspec == nullptr)
        {
            generic_fspec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::GenericFspec>();
        }
        return generic_fspec;
    }

    if(child_yang_name == "generic-tspec")
    {
        if(generic_tspec == nullptr)
        {
            generic_tspec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::GenericTspec>();
        }
        return generic_tspec;
    }

    if(child_yang_name == "gmpls-labels")
    {
        if(gmpls_labels == nullptr)
        {
            gmpls_labels = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::GmplsLabels>();
        }
        return gmpls_labels;
    }

    if(child_yang_name == "head-end-bfd-info")
    {
        if(head_end_bfd_info == nullptr)
        {
            head_end_bfd_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::HeadEndBfdInfo>();
        }
        return head_end_bfd_info;
    }

    if(child_yang_name == "in-ero")
    {
        for(auto const & c : in_ero)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::InEro>();
        c->parent = this;
        in_ero.push_back(c);
        return c;
    }

    if(child_yang_name == "in-xro")
    {
        if(in_xro == nullptr)
        {
            in_xro = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::InXro>();
        }
        return in_xro;
    }

    if(child_yang_name == "incoming-address-generic")
    {
        if(incoming_address_generic == nullptr)
        {
            incoming_address_generic = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::IncomingAddressGeneric>();
        }
        return incoming_address_generic;
    }

    if(child_yang_name == "lsp-wrap-info")
    {
        if(lsp_wrap_info == nullptr)
        {
            lsp_wrap_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::LspWrapInfo>();
        }
        return lsp_wrap_info;
    }

    if(child_yang_name == "next-hop-address-generic")
    {
        if(next_hop_address_generic == nullptr)
        {
            next_hop_address_generic = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::NextHopAddressGeneric>();
        }
        return next_hop_address_generic;
    }

    if(child_yang_name == "otn-s2l")
    {
        if(otn_s2l == nullptr)
        {
            otn_s2l = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::OtnS2L>();
        }
        return otn_s2l;
    }

    if(child_yang_name == "out-ero")
    {
        for(auto const & c : out_ero)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::OutEro>();
        c->parent = this;
        out_ero.push_back(c);
        return c;
    }

    if(child_yang_name == "out-xro")
    {
        if(out_xro == nullptr)
        {
            out_xro = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::OutXro>();
        }
        return out_xro;
    }

    if(child_yang_name == "path-affinity-array")
    {
        for(auto const & c : path_affinity_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::PathAffinityArray>();
        c->parent = this;
        path_affinity_array.push_back(c);
        return c;
    }

    if(child_yang_name == "path-rro")
    {
        for(auto const & c : path_rro)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::PathRro>();
        c->parent = this;
        path_rro.push_back(c);
        return c;
    }

    if(child_yang_name == "previous-hop-address-generic")
    {
        if(previous_hop_address_generic == nullptr)
        {
            previous_hop_address_generic = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::PreviousHopAddressGeneric>();
        }
        return previous_hop_address_generic;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::Protection>();
        }
        return protection;
    }

    if(child_yang_name == "resv-rro")
    {
        for(auto const & c : resv_rro)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ResvRro>();
        c->parent = this;
        resv_rro.push_back(c);
        return c;
    }

    if(child_yang_name == "reverse-ero-in")
    {
        for(auto const & c : reverse_ero_in)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ReverseEroIn>();
        c->parent = this;
        reverse_ero_in.push_back(c);
        return c;
    }

    if(child_yang_name == "reverse-lsp-fec")
    {
        if(reverse_lsp_fec == nullptr)
        {
            reverse_lsp_fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ReverseLspFec>();
        }
        return reverse_lsp_fec;
    }

    if(child_yang_name == "reverse-tspec")
    {
        if(reverse_tspec == nullptr)
        {
            reverse_tspec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ReverseTspec>();
        }
        return reverse_tspec;
    }

    if(child_yang_name == "s2l-convergence")
    {
        if(s2l_convergence == nullptr)
        {
            s2l_convergence = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::S2LConvergence>();
        }
        return s2l_convergence;
    }

    if(child_yang_name == "s2l-fec")
    {
        if(s2l_fec == nullptr)
        {
            s2l_fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::S2LFec>();
        }
        return s2l_fec;
    }

    if(child_yang_name == "s2l-reverse-lsp-sub-obj")
    {
        for(auto const & c : s2l_reverse_lsp_sub_obj)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::S2LReverseLspSubObj>();
        c->parent = this;
        s2l_reverse_lsp_sub_obj.push_back(c);
        return c;
    }

    if(child_yang_name == "s2l-segment-routing-path")
    {
        for(auto const & c : s2l_segment_routing_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::S2LSegmentRoutingPath>();
        c->parent = this;
        s2l_segment_routing_path.push_back(c);
        return c;
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(c);
        return c;
    }

    if(child_yang_name == "soft-preemption")
    {
        if(soft_preemption == nullptr)
        {
            soft_preemption = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::SoftPreemption>();
        }
        return soft_preemption;
    }

    if(child_yang_name == "srlg-collection")
    {
        if(srlg_collection == nullptr)
        {
            srlg_collection = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::SrlgCollection>();
        }
        return srlg_collection;
    }

    if(child_yang_name == "tail-end-bfd-info")
    {
        if(tail_end_bfd_info == nullptr)
        {
            tail_end_bfd_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::TailEndBfdInfo>();
        }
        return tail_end_bfd_info;
    }

    if(child_yang_name == "tspec")
    {
        if(tspec == nullptr)
        {
            tspec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::Tspec>();
        }
        return tspec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_path_option != nullptr)
    {
        children["active-path-option"] = active_path_option;
    }

    if(association != nullptr)
    {
        children["association"] = association;
    }

    if(diversity_info != nullptr)
    {
        children["diversity-info"] = diversity_info;
    }

    if(flex_info != nullptr)
    {
        children["flex-info"] = flex_info;
    }

    if(fspec != nullptr)
    {
        children["fspec"] = fspec;
    }

    if(generic_fspec != nullptr)
    {
        children["generic-fspec"] = generic_fspec;
    }

    if(generic_tspec != nullptr)
    {
        children["generic-tspec"] = generic_tspec;
    }

    if(gmpls_labels != nullptr)
    {
        children["gmpls-labels"] = gmpls_labels;
    }

    if(head_end_bfd_info != nullptr)
    {
        children["head-end-bfd-info"] = head_end_bfd_info;
    }

    for (auto const & c : in_ero)
    {
        children[c->get_segment_path()] = c;
    }

    if(in_xro != nullptr)
    {
        children["in-xro"] = in_xro;
    }

    if(incoming_address_generic != nullptr)
    {
        children["incoming-address-generic"] = incoming_address_generic;
    }

    if(lsp_wrap_info != nullptr)
    {
        children["lsp-wrap-info"] = lsp_wrap_info;
    }

    if(next_hop_address_generic != nullptr)
    {
        children["next-hop-address-generic"] = next_hop_address_generic;
    }

    if(otn_s2l != nullptr)
    {
        children["otn-s2l"] = otn_s2l;
    }

    for (auto const & c : out_ero)
    {
        children[c->get_segment_path()] = c;
    }

    if(out_xro != nullptr)
    {
        children["out-xro"] = out_xro;
    }

    for (auto const & c : path_affinity_array)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : path_rro)
    {
        children[c->get_segment_path()] = c;
    }

    if(previous_hop_address_generic != nullptr)
    {
        children["previous-hop-address-generic"] = previous_hop_address_generic;
    }

    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    for (auto const & c : resv_rro)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : reverse_ero_in)
    {
        children[c->get_segment_path()] = c;
    }

    if(reverse_lsp_fec != nullptr)
    {
        children["reverse-lsp-fec"] = reverse_lsp_fec;
    }

    if(reverse_tspec != nullptr)
    {
        children["reverse-tspec"] = reverse_tspec;
    }

    if(s2l_convergence != nullptr)
    {
        children["s2l-convergence"] = s2l_convergence;
    }

    if(s2l_fec != nullptr)
    {
        children["s2l-fec"] = s2l_fec;
    }

    for (auto const & c : s2l_reverse_lsp_sub_obj)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : s2l_segment_routing_path)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : shared_risk_link_group)
    {
        children[c->get_segment_path()] = c;
    }

    if(soft_preemption != nullptr)
    {
        children["soft-preemption"] = soft_preemption;
    }

    if(srlg_collection != nullptr)
    {
        children["srlg-collection"] = srlg_collection;
    }

    if(tail_end_bfd_info != nullptr)
    {
        children["tail-end-bfd-info"] = tail_end_bfd_info;
    }

    if(tspec != nullptr)
    {
        children["tspec"] = tspec;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "abr-auto-discovered")
    {
        abr_auto_discovered = value;
        abr_auto_discovered.value_namespace = name_space;
        abr_auto_discovered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-interface")
    {
        backup_tunnel_interface = value;
        backup_tunnel_interface.value_namespace = name_space;
        backup_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream-router-id")
    {
        downstream_router_id = value;
        downstream_router_id.value_namespace = name_space;
        downstream_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface-brief")
    {
        egress_interface_brief = value;
        egress_interface_brief.value_namespace = name_space;
        egress_interface_brief.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface-state")
    {
        egress_interface_state = value;
        egress_interface_state.value_namespace = name_space;
        egress_interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-ero-affinity-bits")
    {
        expanded_ero_affinity_bits = value;
        expanded_ero_affinity_bits.value_namespace = name_space;
        expanded_ero_affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-ero-affinity-mask")
    {
        expanded_ero_affinity_mask = value;
        expanded_ero_affinity_mask.value_namespace = name_space;
        expanded_ero_affinity_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-ero-area-id")
    {
        expanded_ero_area_id = value;
        expanded_ero_area_id.value_namespace = name_space;
        expanded_ero_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-ero-metric")
    {
        expanded_ero_metric = value;
        expanded_ero_metric.value_namespace = name_space;
        expanded_ero_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-ero-metric-type")
    {
        expanded_ero_metric_type = value;
        expanded_ero_metric_type.value_namespace = name_space;
        expanded_ero_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-out-tunnel-interface")
    {
        frr_out_tunnel_interface = value;
        frr_out_tunnel_interface.value_namespace = name_space;
        frr_out_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-address")
    {
        incoming_address = value;
        incoming_address.value_namespace = name_space;
        incoming_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-interface")
    {
        ingress_interface = value;
        ingress_interface.value_namespace = name_space;
        ingress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-interface-brief")
    {
        ingress_interface_brief = value;
        ingress_interface_brief.value_namespace = name_space;
        ingress_interface_brief.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-interface-state")
    {
        ingress_interface_state = value;
        ingress_interface_state.value_namespace = name_space;
        ingress_interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-protect")
    {
        is_bandwidth_protect = value;
        is_bandwidth_protect.value_namespace = name_space;
        is_bandwidth_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-expanded-ero")
    {
        is_expanded_ero = value;
        is_expanded_ero.value_namespace = name_space;
        is_expanded_ero.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-frr-enabled")
    {
        is_frr_enabled = value;
        is_frr_enabled.value_namespace = name_space;
        is_frr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protected")
    {
        is_node_protected = value;
        is_node_protected.value_namespace = name_space;
        is_node_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-optical")
    {
        is_optical = value;
        is_optical.value_namespace = name_space;
        is_optical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-router-id")
    {
        local_router_id = value;
        local_router_id.value_namespace = name_space;
        local_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count = value;
        node_hop_count.value_namespace = name_space;
        node_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound-frr-state")
    {
        outbound_frr_state = value;
        outbound_frr_state.value_namespace = name_space;
        outbound_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reeval-query-mid")
    {
        path_reeval_query_mid = value;
        path_reeval_query_mid.value_namespace = name_space;
        path_reeval_query_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rro-enabled")
    {
        path_rro_enabled = value;
        path_rro_enabled.value_namespace = name_space;
        path_rro_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-using-strict-spf")
    {
        path_using_strict_spf = value;
        path_using_strict_spf.value_namespace = name_space;
        path_using_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcalc-area")
    {
        pcalc_area = value;
        pcalc_area.value_namespace = name_space;
        pcalc_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address = value;
        previous_hop_address.value_namespace = name_space;
        previous_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-connected")
    {
        reverse_lsp_connected = value;
        reverse_lsp_connected.value_namespace = name_space;
        reverse_lsp_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-name")
    {
        reverse_lsp_name = value;
        reverse_lsp_name.value_namespace = name_space;
        reverse_lsp_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-present")
    {
        reverse_lsp_present = value;
        reverse_lsp_present.value_namespace = name_space;
        reverse_lsp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-weight")
    {
        reverse_weight = value;
        reverse_weight.value_namespace = name_space;
        reverse_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-local-label")
    {
        s2l_local_label = value;
        s2l_local_label.value_namespace = name_space;
        s2l_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-out-label")
    {
        s2l_out_label = value;
        s2l_out_label.value_namespace = name_space;
        s2l_out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-reverse-ero-obj-present")
    {
        s2l_reverse_ero_obj_present = value;
        s2l_reverse_ero_obj_present.value_namespace = name_space;
        s2l_reverse_ero_obj_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-reverse-tspec-obj-present")
    {
        s2l_reverse_tspec_obj_present = value;
        s2l_reverse_tspec_obj_present.value_namespace = name_space;
        s2l_reverse_tspec_obj_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-status")
    {
        signalling_status = value;
        signalling_status.value_namespace = name_space;
        signalling_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-preferred-path-exists-send-mid")
    {
        time_since_last_preferred_path_exists_send_mid = value;
        time_since_last_preferred_path_exists_send_mid.value_namespace = name_space;
        time_since_last_preferred_path_exists_send_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-preferred-tree-exists-send-mid")
    {
        time_since_last_preferred_tree_exists_send_mid = value;
        time_since_last_preferred_tree_exists_send_mid.value_namespace = name_space;
        time_since_last_preferred_tree_exists_send_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-query-received-mid")
    {
        time_since_last_query_received_mid = value;
        time_since_last_query_received_mid.value_namespace = name_space;
        time_since_last_query_received_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upstream-router-id")
    {
        upstream_router_id = value;
        upstream_router_id.value_namespace = name_space;
        upstream_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "abr-auto-discovered")
    {
        abr_auto_discovered.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-interface")
    {
        backup_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "downstream-router-id")
    {
        downstream_router_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "egress-interface-brief")
    {
        egress_interface_brief.yfilter = yfilter;
    }
    if(value_path == "egress-interface-state")
    {
        egress_interface_state.yfilter = yfilter;
    }
    if(value_path == "expanded-ero-affinity-bits")
    {
        expanded_ero_affinity_bits.yfilter = yfilter;
    }
    if(value_path == "expanded-ero-affinity-mask")
    {
        expanded_ero_affinity_mask.yfilter = yfilter;
    }
    if(value_path == "expanded-ero-area-id")
    {
        expanded_ero_area_id.yfilter = yfilter;
    }
    if(value_path == "expanded-ero-metric")
    {
        expanded_ero_metric.yfilter = yfilter;
    }
    if(value_path == "expanded-ero-metric-type")
    {
        expanded_ero_metric_type.yfilter = yfilter;
    }
    if(value_path == "frr-out-tunnel-interface")
    {
        frr_out_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "incoming-address")
    {
        incoming_address.yfilter = yfilter;
    }
    if(value_path == "ingress-interface")
    {
        ingress_interface.yfilter = yfilter;
    }
    if(value_path == "ingress-interface-brief")
    {
        ingress_interface_brief.yfilter = yfilter;
    }
    if(value_path == "ingress-interface-state")
    {
        ingress_interface_state.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-protect")
    {
        is_bandwidth_protect.yfilter = yfilter;
    }
    if(value_path == "is-expanded-ero")
    {
        is_expanded_ero.yfilter = yfilter;
    }
    if(value_path == "is-frr-enabled")
    {
        is_frr_enabled.yfilter = yfilter;
    }
    if(value_path == "is-node-protected")
    {
        is_node_protected.yfilter = yfilter;
    }
    if(value_path == "is-optical")
    {
        is_optical.yfilter = yfilter;
    }
    if(value_path == "local-router-id")
    {
        local_router_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count.yfilter = yfilter;
    }
    if(value_path == "outbound-frr-state")
    {
        outbound_frr_state.yfilter = yfilter;
    }
    if(value_path == "path-reeval-query-mid")
    {
        path_reeval_query_mid.yfilter = yfilter;
    }
    if(value_path == "path-rro-enabled")
    {
        path_rro_enabled.yfilter = yfilter;
    }
    if(value_path == "path-using-strict-spf")
    {
        path_using_strict_spf.yfilter = yfilter;
    }
    if(value_path == "pcalc-area")
    {
        pcalc_area.yfilter = yfilter;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-connected")
    {
        reverse_lsp_connected.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-name")
    {
        reverse_lsp_name.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-present")
    {
        reverse_lsp_present.yfilter = yfilter;
    }
    if(value_path == "reverse-weight")
    {
        reverse_weight.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "s2l-local-label")
    {
        s2l_local_label.yfilter = yfilter;
    }
    if(value_path == "s2l-out-label")
    {
        s2l_out_label.yfilter = yfilter;
    }
    if(value_path == "s2l-reverse-ero-obj-present")
    {
        s2l_reverse_ero_obj_present.yfilter = yfilter;
    }
    if(value_path == "s2l-reverse-tspec-obj-present")
    {
        s2l_reverse_tspec_obj_present.yfilter = yfilter;
    }
    if(value_path == "signalling-status")
    {
        signalling_status.yfilter = yfilter;
    }
    if(value_path == "time-since-last-preferred-path-exists-send-mid")
    {
        time_since_last_preferred_path_exists_send_mid.yfilter = yfilter;
    }
    if(value_path == "time-since-last-preferred-tree-exists-send-mid")
    {
        time_since_last_preferred_tree_exists_send_mid.yfilter = yfilter;
    }
    if(value_path == "time-since-last-query-received-mid")
    {
        time_since_last_query_received_mid.yfilter = yfilter;
    }
    if(value_path == "upstream-router-id")
    {
        upstream_router_id.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-path-option" || name == "association" || name == "diversity-info" || name == "flex-info" || name == "fspec" || name == "generic-fspec" || name == "generic-tspec" || name == "gmpls-labels" || name == "head-end-bfd-info" || name == "in-ero" || name == "in-xro" || name == "incoming-address-generic" || name == "lsp-wrap-info" || name == "next-hop-address-generic" || name == "otn-s2l" || name == "out-ero" || name == "out-xro" || name == "path-affinity-array" || name == "path-rro" || name == "previous-hop-address-generic" || name == "protection" || name == "resv-rro" || name == "reverse-ero-in" || name == "reverse-lsp-fec" || name == "reverse-tspec" || name == "s2l-convergence" || name == "s2l-fec" || name == "s2l-reverse-lsp-sub-obj" || name == "s2l-segment-routing-path" || name == "shared-risk-link-group" || name == "soft-preemption" || name == "srlg-collection" || name == "tail-end-bfd-info" || name == "tspec" || name == "abr-auto-discovered" || name == "backup-tunnel-interface" || name == "downstream-router-id" || name == "egress-interface" || name == "egress-interface-brief" || name == "egress-interface-state" || name == "expanded-ero-affinity-bits" || name == "expanded-ero-affinity-mask" || name == "expanded-ero-area-id" || name == "expanded-ero-metric" || name == "expanded-ero-metric-type" || name == "frr-out-tunnel-interface" || name == "incoming-address" || name == "ingress-interface" || name == "ingress-interface-brief" || name == "ingress-interface-state" || name == "is-bandwidth-protect" || name == "is-expanded-ero" || name == "is-frr-enabled" || name == "is-node-protected" || name == "is-optical" || name == "local-router-id" || name == "next-hop-address" || name == "node-hop-count" || name == "outbound-frr-state" || name == "path-reeval-query-mid" || name == "path-rro-enabled" || name == "path-using-strict-spf" || name == "pcalc-area" || name == "previous-hop-address" || name == "reverse-lsp-connected" || name == "reverse-lsp-name" || name == "reverse-lsp-present" || name == "reverse-weight" || name == "role" || name == "s2l-local-label" || name == "s2l-out-label" || name == "s2l-reverse-ero-obj-present" || name == "s2l-reverse-tspec-obj-present" || name == "signalling-status" || name == "time-since-last-preferred-path-exists-send-mid" || name == "time-since-last-preferred-tree-exists-send-mid" || name == "time-since-last-query-received-mid" || name == "upstream-router-id" || name == "uptime" || name == "weight")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::ActivePathOption()
    :
    attribute_set_found{YType::boolean, "attribute-set-found"},
    explicit_path_id{YType::uint16, "explicit-path-id"},
    explicit_path_name{YType::str, "explicit-path-name"},
    has_attribute_set{YType::boolean, "has-attribute-set"},
    has_xro_attribute_set{YType::boolean, "has-xro-attribute-set"},
    holddown_duration{YType::uint16, "holddown-duration"},
    is_disabled{YType::boolean, "is-disabled"},
    is_helddown{YType::boolean, "is-helddown"},
    is_lockdown{YType::boolean, "is-lockdown"},
    is_segment_routing{YType::boolean, "is-segment-routing"},
    is_strict_explicit_path{YType::boolean, "is-strict-explicit-path"},
    is_verbatim{YType::boolean, "is-verbatim"},
    option_index{YType::uint32, "option-index"},
    option_index_is_valid{YType::boolean, "option-index-is-valid"},
    path_option_area_id{YType::str, "path-option-area-id"},
    path_option_name{YType::str, "path-option-name"},
    path_option_type{YType::enumeration, "path-option-type"},
    pce_address{YType::str, "pce-address"},
    protected_by_path_option_index{YType::uint32, "protected-by-path-option-index"},
    restored_from_path_option_index{YType::uint32, "restored-from-path-option-index"},
    xro_attribute_set_found{YType::boolean, "xro-attribute-set-found"}
    	,
    attribute_set(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet>())
	,xro_attribute_set(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet>())
{
    attribute_set->parent = this;
    xro_attribute_set->parent = this;

    yang_name = "active-path-option"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::~ActivePathOption()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::has_data() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remerge_error.size(); index++)
    {
        if(remerge_error[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<signalling_error.size(); index++)
    {
        if(signalling_error[index]->has_data())
            return true;
    }
    return attribute_set_found.is_set
	|| explicit_path_id.is_set
	|| explicit_path_name.is_set
	|| has_attribute_set.is_set
	|| has_xro_attribute_set.is_set
	|| holddown_duration.is_set
	|| is_disabled.is_set
	|| is_helddown.is_set
	|| is_lockdown.is_set
	|| is_segment_routing.is_set
	|| is_strict_explicit_path.is_set
	|| is_verbatim.is_set
	|| option_index.is_set
	|| option_index_is_valid.is_set
	|| path_option_area_id.is_set
	|| path_option_name.is_set
	|| path_option_type.is_set
	|| pce_address.is_set
	|| protected_by_path_option_index.is_set
	|| restored_from_path_option_index.is_set
	|| xro_attribute_set_found.is_set
	|| (attribute_set !=  nullptr && attribute_set->has_data())
	|| (xro_attribute_set !=  nullptr && xro_attribute_set->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::has_operation() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remerge_error.size(); index++)
    {
        if(remerge_error[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<signalling_error.size(); index++)
    {
        if(signalling_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(attribute_set_found.yfilter)
	|| ydk::is_set(explicit_path_id.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(has_attribute_set.yfilter)
	|| ydk::is_set(has_xro_attribute_set.yfilter)
	|| ydk::is_set(holddown_duration.yfilter)
	|| ydk::is_set(is_disabled.yfilter)
	|| ydk::is_set(is_helddown.yfilter)
	|| ydk::is_set(is_lockdown.yfilter)
	|| ydk::is_set(is_segment_routing.yfilter)
	|| ydk::is_set(is_strict_explicit_path.yfilter)
	|| ydk::is_set(is_verbatim.yfilter)
	|| ydk::is_set(option_index.yfilter)
	|| ydk::is_set(option_index_is_valid.yfilter)
	|| ydk::is_set(path_option_area_id.yfilter)
	|| ydk::is_set(path_option_name.yfilter)
	|| ydk::is_set(path_option_type.yfilter)
	|| ydk::is_set(pce_address.yfilter)
	|| ydk::is_set(protected_by_path_option_index.yfilter)
	|| ydk::is_set(restored_from_path_option_index.yfilter)
	|| ydk::is_set(xro_attribute_set_found.yfilter)
	|| (attribute_set !=  nullptr && attribute_set->has_operation())
	|| (xro_attribute_set !=  nullptr && xro_attribute_set->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-path-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_found.is_set || is_set(attribute_set_found.yfilter)) leaf_name_data.push_back(attribute_set_found.get_name_leafdata());
    if (explicit_path_id.is_set || is_set(explicit_path_id.yfilter)) leaf_name_data.push_back(explicit_path_id.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (has_attribute_set.is_set || is_set(has_attribute_set.yfilter)) leaf_name_data.push_back(has_attribute_set.get_name_leafdata());
    if (has_xro_attribute_set.is_set || is_set(has_xro_attribute_set.yfilter)) leaf_name_data.push_back(has_xro_attribute_set.get_name_leafdata());
    if (holddown_duration.is_set || is_set(holddown_duration.yfilter)) leaf_name_data.push_back(holddown_duration.get_name_leafdata());
    if (is_disabled.is_set || is_set(is_disabled.yfilter)) leaf_name_data.push_back(is_disabled.get_name_leafdata());
    if (is_helddown.is_set || is_set(is_helddown.yfilter)) leaf_name_data.push_back(is_helddown.get_name_leafdata());
    if (is_lockdown.is_set || is_set(is_lockdown.yfilter)) leaf_name_data.push_back(is_lockdown.get_name_leafdata());
    if (is_segment_routing.is_set || is_set(is_segment_routing.yfilter)) leaf_name_data.push_back(is_segment_routing.get_name_leafdata());
    if (is_strict_explicit_path.is_set || is_set(is_strict_explicit_path.yfilter)) leaf_name_data.push_back(is_strict_explicit_path.get_name_leafdata());
    if (is_verbatim.is_set || is_set(is_verbatim.yfilter)) leaf_name_data.push_back(is_verbatim.get_name_leafdata());
    if (option_index.is_set || is_set(option_index.yfilter)) leaf_name_data.push_back(option_index.get_name_leafdata());
    if (option_index_is_valid.is_set || is_set(option_index_is_valid.yfilter)) leaf_name_data.push_back(option_index_is_valid.get_name_leafdata());
    if (path_option_area_id.is_set || is_set(path_option_area_id.yfilter)) leaf_name_data.push_back(path_option_area_id.get_name_leafdata());
    if (path_option_name.is_set || is_set(path_option_name.yfilter)) leaf_name_data.push_back(path_option_name.get_name_leafdata());
    if (path_option_type.is_set || is_set(path_option_type.yfilter)) leaf_name_data.push_back(path_option_type.get_name_leafdata());
    if (pce_address.is_set || is_set(pce_address.yfilter)) leaf_name_data.push_back(pce_address.get_name_leafdata());
    if (protected_by_path_option_index.is_set || is_set(protected_by_path_option_index.yfilter)) leaf_name_data.push_back(protected_by_path_option_index.get_name_leafdata());
    if (restored_from_path_option_index.is_set || is_set(restored_from_path_option_index.yfilter)) leaf_name_data.push_back(restored_from_path_option_index.get_name_leafdata());
    if (xro_attribute_set_found.is_set || is_set(xro_attribute_set_found.yfilter)) leaf_name_data.push_back(xro_attribute_set_found.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set")
    {
        if(attribute_set == nullptr)
        {
            attribute_set = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet>();
        }
        return attribute_set;
    }

    if(child_yang_name == "path-calculation-error")
    {
        for(auto const & c : path_calculation_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::PathCalculationError>();
        c->parent = this;
        path_calculation_error.push_back(c);
        return c;
    }

    if(child_yang_name == "remerge-error")
    {
        for(auto const & c : remerge_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::RemergeError>();
        c->parent = this;
        remerge_error.push_back(c);
        return c;
    }

    if(child_yang_name == "signalling-error")
    {
        for(auto const & c : signalling_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::SignallingError>();
        c->parent = this;
        signalling_error.push_back(c);
        return c;
    }

    if(child_yang_name == "xro-attribute-set")
    {
        if(xro_attribute_set == nullptr)
        {
            xro_attribute_set = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet>();
        }
        return xro_attribute_set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_set != nullptr)
    {
        children["attribute-set"] = attribute_set;
    }

    for (auto const & c : path_calculation_error)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : remerge_error)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : signalling_error)
    {
        children[c->get_segment_path()] = c;
    }

    if(xro_attribute_set != nullptr)
    {
        children["xro-attribute-set"] = xro_attribute_set;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-set-found")
    {
        attribute_set_found = value;
        attribute_set_found.value_namespace = name_space;
        attribute_set_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-id")
    {
        explicit_path_id = value;
        explicit_path_id.value_namespace = name_space;
        explicit_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set = value;
        has_attribute_set.value_namespace = name_space;
        has_attribute_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-xro-attribute-set")
    {
        has_xro_attribute_set = value;
        has_xro_attribute_set.value_namespace = name_space;
        has_xro_attribute_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown-duration")
    {
        holddown_duration = value;
        holddown_duration.value_namespace = name_space;
        holddown_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-disabled")
    {
        is_disabled = value;
        is_disabled.value_namespace = name_space;
        is_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-helddown")
    {
        is_helddown = value;
        is_helddown.value_namespace = name_space;
        is_helddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lockdown")
    {
        is_lockdown = value;
        is_lockdown.value_namespace = name_space;
        is_lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-segment-routing")
    {
        is_segment_routing = value;
        is_segment_routing.value_namespace = name_space;
        is_segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-explicit-path")
    {
        is_strict_explicit_path = value;
        is_strict_explicit_path.value_namespace = name_space;
        is_strict_explicit_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-verbatim")
    {
        is_verbatim = value;
        is_verbatim.value_namespace = name_space;
        is_verbatim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option-index")
    {
        option_index = value;
        option_index.value_namespace = name_space;
        option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option-index-is-valid")
    {
        option_index_is_valid = value;
        option_index_is_valid.value_namespace = name_space;
        option_index_is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-area-id")
    {
        path_option_area_id = value;
        path_option_area_id.value_namespace = name_space;
        path_option_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-name")
    {
        path_option_name = value;
        path_option_name.value_namespace = name_space;
        path_option_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-type")
    {
        path_option_type = value;
        path_option_type.value_namespace = name_space;
        path_option_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-address")
    {
        pce_address = value;
        pce_address.value_namespace = name_space;
        pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-by-path-option-index")
    {
        protected_by_path_option_index = value;
        protected_by_path_option_index.value_namespace = name_space;
        protected_by_path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restored-from-path-option-index")
    {
        restored_from_path_option_index = value;
        restored_from_path_option_index.value_namespace = name_space;
        restored_from_path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xro-attribute-set-found")
    {
        xro_attribute_set_found = value;
        xro_attribute_set_found.value_namespace = name_space;
        xro_attribute_set_found.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-set-found")
    {
        attribute_set_found.yfilter = yfilter;
    }
    if(value_path == "explicit-path-id")
    {
        explicit_path_id.yfilter = yfilter;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set.yfilter = yfilter;
    }
    if(value_path == "has-xro-attribute-set")
    {
        has_xro_attribute_set.yfilter = yfilter;
    }
    if(value_path == "holddown-duration")
    {
        holddown_duration.yfilter = yfilter;
    }
    if(value_path == "is-disabled")
    {
        is_disabled.yfilter = yfilter;
    }
    if(value_path == "is-helddown")
    {
        is_helddown.yfilter = yfilter;
    }
    if(value_path == "is-lockdown")
    {
        is_lockdown.yfilter = yfilter;
    }
    if(value_path == "is-segment-routing")
    {
        is_segment_routing.yfilter = yfilter;
    }
    if(value_path == "is-strict-explicit-path")
    {
        is_strict_explicit_path.yfilter = yfilter;
    }
    if(value_path == "is-verbatim")
    {
        is_verbatim.yfilter = yfilter;
    }
    if(value_path == "option-index")
    {
        option_index.yfilter = yfilter;
    }
    if(value_path == "option-index-is-valid")
    {
        option_index_is_valid.yfilter = yfilter;
    }
    if(value_path == "path-option-area-id")
    {
        path_option_area_id.yfilter = yfilter;
    }
    if(value_path == "path-option-name")
    {
        path_option_name.yfilter = yfilter;
    }
    if(value_path == "path-option-type")
    {
        path_option_type.yfilter = yfilter;
    }
    if(value_path == "pce-address")
    {
        pce_address.yfilter = yfilter;
    }
    if(value_path == "protected-by-path-option-index")
    {
        protected_by_path_option_index.yfilter = yfilter;
    }
    if(value_path == "restored-from-path-option-index")
    {
        restored_from_path_option_index.yfilter = yfilter;
    }
    if(value_path == "xro-attribute-set-found")
    {
        xro_attribute_set_found.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set" || name == "path-calculation-error" || name == "remerge-error" || name == "signalling-error" || name == "xro-attribute-set" || name == "attribute-set-found" || name == "explicit-path-id" || name == "explicit-path-name" || name == "has-attribute-set" || name == "has-xro-attribute-set" || name == "holddown-duration" || name == "is-disabled" || name == "is-helddown" || name == "is-lockdown" || name == "is-segment-routing" || name == "is-strict-explicit-path" || name == "is-verbatim" || name == "option-index" || name == "option-index-is-valid" || name == "path-option-area-id" || name == "path-option-name" || name == "path-option-type" || name == "pce-address" || name == "protected-by-path-option-index" || name == "restored-from-path-option-index" || name == "xro-attribute-set-found")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSet()
    :
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_attribute_set_name_crc32{YType::uint32, "tunnel-attribute-set-name-crc32"}
    	,
    attribute_set_union(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion>())
{
    attribute_set_union->parent = this;

    yang_name = "attribute-set"; yang_parent_name = "active-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::~AttributeSet()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::has_data() const
{
    return tunnel_attribute_set_name.is_set
	|| tunnel_attribute_set_name_crc32.is_set
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name_crc32.yfilter)
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (tunnel_attribute_set_name_crc32.is_set || is_set(tunnel_attribute_set_name_crc32.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name_crc32.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-union")
    {
        if(attribute_set_union == nullptr)
        {
            attribute_set_union = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion>();
        }
        return attribute_set_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_set_union != nullptr)
    {
        children["attribute-set-union"] = attribute_set_union;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-union" || name == "tunnel-attribute-set-name" || name == "tunnel-attribute-set-name-crc32")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetUnion()
    :
    tunnel_attribute_set_type{YType::enumeration, "tunnel-attribute-set-type"}
    	,
    attribute_set_aps_pp(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp>())
	,attribute_set_autobackup(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>())
	,attribute_set_automesh(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>())
	,attribute_set_p2mpte(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte>())
	,attribute_set_p2p_te(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe>())
	,attribute_set_path_option(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption>())
	,attribute_set_xro(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro>())
{
    attribute_set_aps_pp->parent = this;
    attribute_set_autobackup->parent = this;
    attribute_set_automesh->parent = this;
    attribute_set_p2mpte->parent = this;
    attribute_set_p2p_te->parent = this;
    attribute_set_path_option->parent = this;
    attribute_set_xro->parent = this;

    yang_name = "attribute-set-union"; yang_parent_name = "attribute-set"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::~AttributeSetUnion()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_type.is_set || is_set(tunnel_attribute_set_type.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-aps-pp")
    {
        if(attribute_set_aps_pp == nullptr)
        {
            attribute_set_aps_pp = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp>();
        }
        return attribute_set_aps_pp;
    }

    if(child_yang_name == "attribute-set-autobackup")
    {
        if(attribute_set_autobackup == nullptr)
        {
            attribute_set_autobackup = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>();
        }
        return attribute_set_autobackup;
    }

    if(child_yang_name == "attribute-set-automesh")
    {
        if(attribute_set_automesh == nullptr)
        {
            attribute_set_automesh = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>();
        }
        return attribute_set_automesh;
    }

    if(child_yang_name == "attribute-set-p2mpte")
    {
        if(attribute_set_p2mpte == nullptr)
        {
            attribute_set_p2mpte = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte>();
        }
        return attribute_set_p2mpte;
    }

    if(child_yang_name == "attribute-set-p2p-te")
    {
        if(attribute_set_p2p_te == nullptr)
        {
            attribute_set_p2p_te = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe>();
        }
        return attribute_set_p2p_te;
    }

    if(child_yang_name == "attribute-set-path-option")
    {
        if(attribute_set_path_option == nullptr)
        {
            attribute_set_path_option = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption>();
        }
        return attribute_set_path_option;
    }

    if(child_yang_name == "attribute-set-xro")
    {
        if(attribute_set_xro == nullptr)
        {
            attribute_set_xro = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro>();
        }
        return attribute_set_xro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type = value;
        tunnel_attribute_set_type.value_namespace = name_space;
        tunnel_attribute_set_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-aps-pp" || name == "attribute-set-autobackup" || name == "attribute-set-automesh" || name == "attribute-set-p2mpte" || name == "attribute-set-p2p-te" || name == "attribute-set-path-option" || name == "attribute-set-xro" || name == "tunnel-attribute-set-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::AttributeSetApsPp()
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
    revert_schedule(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>())
{
    revert_schedule->parent = this;

    yang_name = "attribute-set-aps-pp"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::~AttributeSetApsPp()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-aps-pp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_off_time.is_set || is_set(hold_off_time.yfilter)) leaf_name_data.push_back(hold_off_time.get_name_leafdata());
    if (path_prot_profile_type.is_set || is_set(path_prot_profile_type.yfilter)) leaf_name_data.push_back(path_prot_profile_type.get_name_leafdata());
    if (protection_mode.is_set || is_set(protection_mode.yfilter)) leaf_name_data.push_back(protection_mode.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.yfilter)) leaf_name_data.push_back(protection_type.get_name_leafdata());
    if (restoration_style.is_set || is_set(restoration_style.yfilter)) leaf_name_data.push_back(restoration_style.get_name_leafdata());
    if (snc_mode.is_set || is_set(snc_mode.yfilter)) leaf_name_data.push_back(snc_mode.get_name_leafdata());
    if (tcm_id.is_set || is_set(tcm_id.yfilter)) leaf_name_data.push_back(tcm_id.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "revert-schedule")
    {
        if(revert_schedule == nullptr)
        {
            revert_schedule = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>();
        }
        return revert_schedule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(revert_schedule != nullptr)
    {
        children["revert-schedule"] = revert_schedule;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "revert-schedule" || name == "hold-off-time" || name == "path-prot-profile-type" || name == "protection-mode" || name == "protection-type" || name == "restoration-style" || name == "snc-mode" || name == "tcm-id" || name == "wait-to-restore-time")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::RevertSchedule()
    :
    duration{YType::uint32, "duration"},
    max_tries{YType::uint32, "max-tries"},
    schedule_date{YType::uint32, "schedule-date"},
    schedule_frequency{YType::enumeration, "schedule-frequency"},
    schedulename{YType::str, "schedulename"}
{

    yang_name = "revert-schedule"; yang_parent_name = "attribute-set-aps-pp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::~RevertSchedule()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_data() const
{
    return duration.is_set
	|| max_tries.is_set
	|| schedule_date.is_set
	|| schedule_frequency.is_set
	|| schedulename.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(max_tries.yfilter)
	|| ydk::is_set(schedule_date.yfilter)
	|| ydk::is_set(schedule_frequency.yfilter)
	|| ydk::is_set(schedulename.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (max_tries.is_set || is_set(max_tries.yfilter)) leaf_name_data.push_back(max_tries.get_name_leafdata());
    if (schedule_date.is_set || is_set(schedule_date.yfilter)) leaf_name_data.push_back(schedule_date.get_name_leafdata());
    if (schedule_frequency.is_set || is_set(schedule_frequency.yfilter)) leaf_name_data.push_back(schedule_frequency.get_name_leafdata());
    if (schedulename.is_set || is_set(schedulename.yfilter)) leaf_name_data.push_back(schedulename.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "max-tries" || name == "schedule-date" || name == "schedule-frequency" || name == "schedulename")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::AttributeSetAutobackup()
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
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>())
	,logging(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>())
	,signalled_name(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>())
{
    affinity->parent = this;
    logging->parent = this;
    signalled_name->parent = this;

    yang_name = "attribute-set-autobackup"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::~AttributeSetAutobackup()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-autobackup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.yfilter)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (is_signalled_name_configured.is_set || is_set(is_signalled_name_configured.yfilter)) leaf_name_data.push_back(is_signalled_name_configured.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.yfilter)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface>();
        c->parent = this;
        protected_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "signalled-name")
    {
        if(signalled_name == nullptr)
        {
            signalled_name = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "policy-class-entry" || name == "protected-interface" || name == "signalled-name" || name == "tunnel-id" || name == "hold-priority" || name == "is-affinity-configured" || name == "is-policyclass-configured" || name == "is-priority-configured" || name == "is-signalled-name-configured" || name == "policy-class" || name == "record-route" || name == "setup-priority")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::Logging()
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

    yang_name = "logging"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::~Logging()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-logging-enabled" || name == "lsp-bandwidth-change" || name == "lsp-insufficient-bw" || name == "lsp-pcalc-failure-logging-enabled" || name == "lsp-re-opt" || name == "lsp-re-route" || name == "lsp-state" || name == "s2l-state")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::PolicyClassEntry()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "policy-class-entry"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::~PolicyClassEntry()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::ProtectedInterface()
    :
    protected_interface{YType::str, "protected-interface"}
{

    yang_name = "protected-interface"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::~ProtectedInterface()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_data() const
{
    return protected_interface.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protected_interface.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protected_interface.is_set || is_set(protected_interface.yfilter)) leaf_name_data.push_back(protected_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protected-interface")
    {
        protected_interface = value;
        protected_interface.value_namespace = name_space;
        protected_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protected-interface")
    {
        protected_interface.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected-interface")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::SignalledName()
    :
    is_mp_addresses{YType::boolean, "is-mp-addresses"},
    name{YType::str, "name"},
    protected_interface_type{YType::enumeration, "protected-interface-type"},
    source_type{YType::enumeration, "source-type"}
{

    yang_name = "signalled-name"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::~SignalledName()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_data() const
{
    return is_mp_addresses.is_set
	|| name.is_set
	|| protected_interface_type.is_set
	|| source_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_mp_addresses.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(protected_interface_type.yfilter)
	|| ydk::is_set(source_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_mp_addresses.is_set || is_set(is_mp_addresses.yfilter)) leaf_name_data.push_back(is_mp_addresses.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (protected_interface_type.is_set || is_set(protected_interface_type.yfilter)) leaf_name_data.push_back(protected_interface_type.get_name_leafdata());
    if (source_type.is_set || is_set(source_type.yfilter)) leaf_name_data.push_back(source_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-mp-addresses" || name == "name" || name == "protected-interface-type" || name == "source-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::~TunnelId()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::AttributeSetAutomesh()
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
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>())
	,logging(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>())
{
    affinity->parent = this;
    logging->parent = this;

    yang_name = "attribute-set-automesh"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::~AttributeSetAutomesh()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-automesh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_name_leaf_data() const
{
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

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "mesh-group-id" || name == "policy-class-entry" || name == "tunnel-id" || name == "auto-bandwidth-collect" || name == "auto-route-announce" || name == "bandwidth" || name == "configured-bandwidth" || name == "dste-class-type" || name == "fast-reroute" || name == "forward-class" || name == "frr-bandwidth-protection" || name == "frr-node-protection" || name == "hold-priority" || name == "is-affinity-configured" || name == "is-bandwidth-configured" || name == "is-interface-bw-configured" || name == "is-policyclass-configured" || name == "is-priority-configured" || name == "load-share" || name == "policy-class" || name == "record-route" || name == "setup-priority" || name == "soft-preemption-configured")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::Logging()
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

    yang_name = "logging"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::~Logging()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-logging-enabled" || name == "lsp-bandwidth-change" || name == "lsp-insufficient-bw" || name == "lsp-pcalc-failure-logging-enabled" || name == "lsp-re-opt" || name == "lsp-re-route" || name == "lsp-state" || name == "s2l-state")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::MeshGroupId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mesh-group-id"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::~MeshGroupId()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::PolicyClassEntry()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "policy-class-entry"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::~PolicyClassEntry()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::~TunnelId()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::AttributeSetP2Mpte()
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
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>())
{
    affinity->parent = this;

    yang_name = "attribute-set-p2mpte"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::~AttributeSetP2Mpte()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2mpte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_name_leaf_data() const
{
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

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "tunnel-id" || name == "configured-bandwidth" || name == "dste-class-type" || name == "fast-reroute" || name == "frr-bandwidth-protection" || name == "hold-priority" || name == "is-affinity-configured" || name == "is-bandwidth-configured" || name == "is-priority-configured" || name == "setup-priority")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-p2mpte"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2mpte"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::~TunnelId()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::AttributeSetP2PTe()
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
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>())
	,logging(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>())
	,prepend_list(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>())
{
    affinity->parent = this;
    logging->parent = this;
    prepend_list->parent = this;

    yang_name = "attribute-set-p2p-te"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::~AttributeSetP2PTe()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2p-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_name_leaf_data() const
{
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

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "prepend-list")
    {
        if(prepend_list == nullptr)
        {
            prepend_list = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "prepend-list" || name == "tunnel-id" || name == "is-affinity-configured" || name == "is-path-invalidation-action-configured" || name == "is-path-invalidation-timeout-configured" || name == "is-path-select-configured" || name == "is-path-selection-metric-configured" || name == "is-path-selection-segment-routing-adjacency-protection-configured" || name == "is-path-selection-segment-routing-margin-configured" || name == "is-path-selection-segment-routing-margin-relative" || name == "is-path-selection-segment-routing-segment-limit-configured" || name == "is-pce-configured" || name == "is-pce-disj-group-id-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "is-prepend-list-configured" || name == "path-invalidation-timeout" || name == "path-selection-invalidation-action" || name == "path-selection-metric" || name == "path-selection-segment-routing-adjacency-protection" || name == "path-selection-segment-routing-margin" || name == "path-selection-segment-routing-segment-limit" || name == "pcebd-group-id" || name == "pcebd-source-address" || name == "pcedp-group-id" || name == "pcedp-source-address" || name == "pcedp-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::Logging()
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

    yang_name = "logging"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::~Logging()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-logging-enabled" || name == "lsp-bandwidth-change" || name == "lsp-insufficient-bw" || name == "lsp-pcalc-failure-logging-enabled" || name == "lsp-re-opt" || name == "lsp-re-route" || name == "lsp-state" || name == "s2l-state")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependList()
{

    yang_name = "prepend-list"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::~PrependList()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_data() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_operation() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry>();
        c->parent = this;
        prepend_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prepend_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepend-entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::PrependEntry()
    :
    index_{YType::uint32, "index"},
    next_label{YType::uint32, "next-label"},
    type{YType::enumeration, "type"}
{

    yang_name = "prepend-entry"; yang_parent_name = "prepend-list"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::~PrependEntry()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_data() const
{
    return index_.is_set
	|| next_label.is_set
	|| type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(next_label.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (next_label.is_set || is_set(next_label.yfilter)) leaf_name_data.push_back(next_label.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "next-label" || name == "type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::~TunnelId()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::AttributeSetPathOption()
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
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>())
	,bfd_reverse_path(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>())
{
    affinity->parent = this;
    bfd_reverse_path->parent = this;

    yang_name = "attribute-set-path-option"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::~AttributeSetPathOption()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-path-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_name_leaf_data() const
{
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

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path == nullptr)
        {
            bfd_reverse_path = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo>();
        c->parent = this;
        version_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "bfd-reverse-path" || name == "tunnel-id" || name == "version-info" || name == "bandwidth-type" || name == "configured-bandwidth" || name == "cost-limit" || name == "dste-class-type" || name == "exclude-list-name" || name == "generation" || name == "is-affinity-configured" || name == "is-bandwidth-configured" || name == "is-bfd-reverse-pat-configured" || name == "is-cost-limit-configured" || name == "is-exclude-list-name-configured" || name == "is-path-invalidation-action-configured" || name == "is-path-invalidation-timeout-configured" || name == "is-pce-configured" || name == "is-pce-disj-group-id-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "path-invalidation-action" || name == "path-invalidation-timeout" || name == "pcebd-group-id" || name == "pcebd-source-address" || name == "pcedp-group-id" || name == "pcedp-source-address" || name == "pcedp-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::BfdReversePath()
    :
    binding_label{YType::uint32, "binding-label"},
    path_type{YType::enumeration, "path-type"}
{

    yang_name = "bfd-reverse-path"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::~BfdReversePath()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_data() const
{
    return binding_label.is_set
	|| path_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(path_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-label" || name == "path-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::~TunnelId()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::VersionInfo()
    :
    attribute_type{YType::str, "attribute-type"},
    generation{YType::uint32, "generation"},
    is_default{YType::boolean, "is-default"}
{

    yang_name = "version-info"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::~VersionInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_data() const
{
    return attribute_type.is_set
	|| generation.is_set
	|| is_default.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_type.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(is_default.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.yfilter)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.yfilter)) leaf_name_data.push_back(is_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-type" || name == "generation" || name == "is-default")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::AttributeSetXro()
    :
    xro(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro>())
{
    xro->parent = this;

    yang_name = "attribute-set-xro"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::~AttributeSetXro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::has_data() const
{
    return (xro !=  nullptr && xro->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::has_operation() const
{
    return is_set(yfilter)
	|| (xro !=  nullptr && xro->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-xro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro")
    {
        if(xro == nullptr)
        {
            xro = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro>();
        }
        return xro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xro != nullptr)
    {
        children["xro"] = xro;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::Xro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
{

    yang_name = "xro"; yang_parent_name = "attribute-set-xro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::~Xro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_data() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mutual_diversity_flag.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mutual_diversity_flag.is_set || is_set(mutual_diversity_flag.yfilter)) leaf_name_data.push_back(mutual_diversity_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject>();
        c->parent = this;
        xro_subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xro_subobject)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
        mutual_diversity_flag.value_namespace = name_space;
        mutual_diversity_flag.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro-subobject" || name == "mutual-diversity-flag")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
    	,
    as_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>())
	,ipv4_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>())
	,ipv6_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>())
	,lsp_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>())
	,srlg_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>())
	,unnumbered_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>())
{
    as_subobject->parent = this;
    ipv4_subobject->parent = this;
    ipv6_subobject->parent = this;
    lsp_subobject->parent = this;
    srlg_subobject->parent = this;
    unnumbered_subobject->parent = this;

    yang_name = "xro-subobject"; yang_parent_name = "xro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::~XroSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_data() const
{
    return type.is_set
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-subobject")
    {
        if(as_subobject == nullptr)
        {
            as_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>();
        }
        return as_subobject;
    }

    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject == nullptr)
        {
            ipv4_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>();
        }
        return ipv4_subobject;
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject == nullptr)
        {
            ipv6_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>();
        }
        return ipv6_subobject;
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject == nullptr)
        {
            lsp_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>();
        }
        return lsp_subobject;
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject == nullptr)
        {
            srlg_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>();
        }
        return srlg_subobject;
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject == nullptr)
        {
            unnumbered_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>();
        }
        return unnumbered_subobject;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-subobject" || name == "ipv4-subobject" || name == "ipv6-subobject" || name == "lsp-subobject" || name == "srlg-subobject" || name == "unnumbered-subobject" || name == "type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::AsSubobject()
    :
    as_number{YType::uint16, "as-number"}
{

    yang_name = "as-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::~AsSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_data() const
{
    return as_number.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{

    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(prefix_len.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "attribute" || name == "exclusion-type" || name == "prefix-len")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{

    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(prefix_len.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "attribute" || name == "exclusion-type" || name == "prefix-len")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::LspSubobject()
    :
    destination_node_exception{YType::boolean, "destination-node-exception"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    ignore_lsp_id{YType::boolean, "ignore-lsp-id"},
    penultimate_node_exception{YType::boolean, "penultimate-node-exception"},
    processing_node_exception{YType::boolean, "processing-node-exception"}
    	,
    fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>())
{
    fec->parent = this;

    yang_name = "lsp-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::~LspSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_data() const
{
    return destination_node_exception.is_set
	|| exclusion_type.is_set
	|| ignore_lsp_id.is_set
	|| penultimate_node_exception.is_set
	|| processing_node_exception.is_set
	|| (fec !=  nullptr && fec->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_node_exception.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(ignore_lsp_id.yfilter)
	|| ydk::is_set(penultimate_node_exception.yfilter)
	|| ydk::is_set(processing_node_exception.yfilter)
	|| (fec !=  nullptr && fec->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_node_exception.is_set || is_set(destination_node_exception.yfilter)) leaf_name_data.push_back(destination_node_exception.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (ignore_lsp_id.is_set || is_set(ignore_lsp_id.yfilter)) leaf_name_data.push_back(ignore_lsp_id.get_name_leafdata());
    if (penultimate_node_exception.is_set || is_set(penultimate_node_exception.yfilter)) leaf_name_data.push_back(penultimate_node_exception.get_name_leafdata());
    if (processing_node_exception.is_set || is_set(processing_node_exception.yfilter)) leaf_name_data.push_back(processing_node_exception.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec")
    {
        if(fec == nullptr)
        {
            fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>();
        }
        return fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec != nullptr)
    {
        children["fec"] = fec;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec" || name == "destination-node-exception" || name == "exclusion-type" || name == "ignore-lsp-id" || name == "penultimate-node-exception" || name == "processing-node-exception")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::Fec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "fec"; yang_parent_name = "lsp-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::~Fec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-extended-tunnel-id" || name == "fec-lsp-id" || name == "fec-source" || name == "fec-tunnel-id" || name == "fec-vrf")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "fec"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "fec-destination-p2mp-id" || name == "p2p-lsp-destination")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::SrlgSubobject()
    :
    exclusion_type{YType::enumeration, "exclusion-type"},
    srlg_id{YType::uint32, "srlg-id"}
{

    yang_name = "srlg-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::~SrlgSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_data() const
{
    return exclusion_type.is_set
	|| srlg_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(srlg_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (srlg_id.is_set || is_set(srlg_id.yfilter)) leaf_name_data.push_back(srlg_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclusion-type" || name == "srlg-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    interface_id{YType::uint32, "interface-id"},
    te_router_id{YType::str, "te-router-id"}
{

    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_data() const
{
    return attribute.is_set
	|| exclusion_type.is_set
	|| interface_id.is_set
	|| te_router_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(te_router_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (te_router_id.is_set || is_set(te_router_id.yfilter)) leaf_name_data.push_back(te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute" || name == "exclusion-type" || name == "interface-id" || name == "te-router-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::PathCalculationError::PathCalculationError()
    :
    error_message{YType::str, "error-message"},
    log_time{YType::uint32, "log-time"},
    lsp_mode{YType::enumeration, "lsp-mode"}
{

    yang_name = "path-calculation-error"; yang_parent_name = "active-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::PathCalculationError::~PathCalculationError()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::PathCalculationError::has_data() const
{
    return error_message.is_set
	|| log_time.is_set
	|| lsp_mode.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::PathCalculationError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(log_time.yfilter)
	|| ydk::is_set(lsp_mode.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::PathCalculationError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-calculation-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::PathCalculationError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.yfilter)) leaf_name_data.push_back(log_time.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.yfilter)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::PathCalculationError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::PathCalculationError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::PathCalculationError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::PathCalculationError::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::PathCalculationError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-message" || name == "log-time" || name == "lsp-mode")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::RemergeError::RemergeError()
    :
    error_message{YType::str, "error-message"},
    log_time{YType::uint32, "log-time"},
    lsp_mode{YType::enumeration, "lsp-mode"}
{

    yang_name = "remerge-error"; yang_parent_name = "active-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::RemergeError::~RemergeError()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::RemergeError::has_data() const
{
    return error_message.is_set
	|| log_time.is_set
	|| lsp_mode.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::RemergeError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(log_time.yfilter)
	|| ydk::is_set(lsp_mode.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::RemergeError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remerge-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::RemergeError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.yfilter)) leaf_name_data.push_back(log_time.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.yfilter)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::RemergeError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::RemergeError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::RemergeError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::RemergeError::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::RemergeError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-message" || name == "log-time" || name == "lsp-mode")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::SignallingError::SignallingError()
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

    yang_name = "signalling-error"; yang_parent_name = "active-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::SignallingError::~SignallingError()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::SignallingError::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::SignallingError::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::SignallingError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::SignallingError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (error_node.is_set || is_set(error_node.yfilter)) leaf_name_data.push_back(error_node.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.yfilter)) leaf_name_data.push_back(log_time.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.yfilter)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());
    if (reverse_lsp.is_set || is_set(reverse_lsp.yfilter)) leaf_name_data.push_back(reverse_lsp.get_name_leafdata());
    if (signalling_lsp_id.is_set || is_set(signalling_lsp_id.yfilter)) leaf_name_data.push_back(signalling_lsp_id.get_name_leafdata());
    if (sub_code.is_set || is_set(sub_code.yfilter)) leaf_name_data.push_back(sub_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::SignallingError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::SignallingError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::SignallingError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::SignallingError::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::SignallingError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "error-message" || name == "error-node" || name == "log-time" || name == "lsp-mode" || name == "reverse-lsp" || name == "signalling-lsp-id" || name == "sub-code")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::XroAttributeSet()
    :
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_attribute_set_name_crc32{YType::uint32, "tunnel-attribute-set-name-crc32"}
    	,
    attribute_set_union(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion>())
{
    attribute_set_union->parent = this;

    yang_name = "xro-attribute-set"; yang_parent_name = "active-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::~XroAttributeSet()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::has_data() const
{
    return tunnel_attribute_set_name.is_set
	|| tunnel_attribute_set_name_crc32.is_set
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name_crc32.yfilter)
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-attribute-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (tunnel_attribute_set_name_crc32.is_set || is_set(tunnel_attribute_set_name_crc32.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name_crc32.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-union")
    {
        if(attribute_set_union == nullptr)
        {
            attribute_set_union = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion>();
        }
        return attribute_set_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_set_union != nullptr)
    {
        children["attribute-set-union"] = attribute_set_union;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-union" || name == "tunnel-attribute-set-name" || name == "tunnel-attribute-set-name-crc32")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetUnion()
    :
    tunnel_attribute_set_type{YType::enumeration, "tunnel-attribute-set-type"}
    	,
    attribute_set_aps_pp(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp>())
	,attribute_set_autobackup(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup>())
	,attribute_set_automesh(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh>())
	,attribute_set_p2mpte(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte>())
	,attribute_set_p2p_te(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe>())
	,attribute_set_path_option(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption>())
	,attribute_set_xro(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro>())
{
    attribute_set_aps_pp->parent = this;
    attribute_set_autobackup->parent = this;
    attribute_set_automesh->parent = this;
    attribute_set_p2mpte->parent = this;
    attribute_set_p2p_te->parent = this;
    attribute_set_path_option->parent = this;
    attribute_set_xro->parent = this;

    yang_name = "attribute-set-union"; yang_parent_name = "xro-attribute-set"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::~AttributeSetUnion()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_type.is_set || is_set(tunnel_attribute_set_type.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-aps-pp")
    {
        if(attribute_set_aps_pp == nullptr)
        {
            attribute_set_aps_pp = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp>();
        }
        return attribute_set_aps_pp;
    }

    if(child_yang_name == "attribute-set-autobackup")
    {
        if(attribute_set_autobackup == nullptr)
        {
            attribute_set_autobackup = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup>();
        }
        return attribute_set_autobackup;
    }

    if(child_yang_name == "attribute-set-automesh")
    {
        if(attribute_set_automesh == nullptr)
        {
            attribute_set_automesh = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh>();
        }
        return attribute_set_automesh;
    }

    if(child_yang_name == "attribute-set-p2mpte")
    {
        if(attribute_set_p2mpte == nullptr)
        {
            attribute_set_p2mpte = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte>();
        }
        return attribute_set_p2mpte;
    }

    if(child_yang_name == "attribute-set-p2p-te")
    {
        if(attribute_set_p2p_te == nullptr)
        {
            attribute_set_p2p_te = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe>();
        }
        return attribute_set_p2p_te;
    }

    if(child_yang_name == "attribute-set-path-option")
    {
        if(attribute_set_path_option == nullptr)
        {
            attribute_set_path_option = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption>();
        }
        return attribute_set_path_option;
    }

    if(child_yang_name == "attribute-set-xro")
    {
        if(attribute_set_xro == nullptr)
        {
            attribute_set_xro = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro>();
        }
        return attribute_set_xro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type = value;
        tunnel_attribute_set_type.value_namespace = name_space;
        tunnel_attribute_set_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-aps-pp" || name == "attribute-set-autobackup" || name == "attribute-set-automesh" || name == "attribute-set-p2mpte" || name == "attribute-set-p2p-te" || name == "attribute-set-path-option" || name == "attribute-set-xro" || name == "tunnel-attribute-set-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::AttributeSetApsPp()
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
    revert_schedule(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>())
{
    revert_schedule->parent = this;

    yang_name = "attribute-set-aps-pp"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::~AttributeSetApsPp()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-aps-pp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_off_time.is_set || is_set(hold_off_time.yfilter)) leaf_name_data.push_back(hold_off_time.get_name_leafdata());
    if (path_prot_profile_type.is_set || is_set(path_prot_profile_type.yfilter)) leaf_name_data.push_back(path_prot_profile_type.get_name_leafdata());
    if (protection_mode.is_set || is_set(protection_mode.yfilter)) leaf_name_data.push_back(protection_mode.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.yfilter)) leaf_name_data.push_back(protection_type.get_name_leafdata());
    if (restoration_style.is_set || is_set(restoration_style.yfilter)) leaf_name_data.push_back(restoration_style.get_name_leafdata());
    if (snc_mode.is_set || is_set(snc_mode.yfilter)) leaf_name_data.push_back(snc_mode.get_name_leafdata());
    if (tcm_id.is_set || is_set(tcm_id.yfilter)) leaf_name_data.push_back(tcm_id.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "revert-schedule")
    {
        if(revert_schedule == nullptr)
        {
            revert_schedule = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>();
        }
        return revert_schedule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(revert_schedule != nullptr)
    {
        children["revert-schedule"] = revert_schedule;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "revert-schedule" || name == "hold-off-time" || name == "path-prot-profile-type" || name == "protection-mode" || name == "protection-type" || name == "restoration-style" || name == "snc-mode" || name == "tcm-id" || name == "wait-to-restore-time")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::RevertSchedule()
    :
    duration{YType::uint32, "duration"},
    max_tries{YType::uint32, "max-tries"},
    schedule_date{YType::uint32, "schedule-date"},
    schedule_frequency{YType::enumeration, "schedule-frequency"},
    schedulename{YType::str, "schedulename"}
{

    yang_name = "revert-schedule"; yang_parent_name = "attribute-set-aps-pp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::~RevertSchedule()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_data() const
{
    return duration.is_set
	|| max_tries.is_set
	|| schedule_date.is_set
	|| schedule_frequency.is_set
	|| schedulename.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(max_tries.yfilter)
	|| ydk::is_set(schedule_date.yfilter)
	|| ydk::is_set(schedule_frequency.yfilter)
	|| ydk::is_set(schedulename.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (max_tries.is_set || is_set(max_tries.yfilter)) leaf_name_data.push_back(max_tries.get_name_leafdata());
    if (schedule_date.is_set || is_set(schedule_date.yfilter)) leaf_name_data.push_back(schedule_date.get_name_leafdata());
    if (schedule_frequency.is_set || is_set(schedule_frequency.yfilter)) leaf_name_data.push_back(schedule_frequency.get_name_leafdata());
    if (schedulename.is_set || is_set(schedulename.yfilter)) leaf_name_data.push_back(schedulename.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "max-tries" || name == "schedule-date" || name == "schedule-frequency" || name == "schedulename")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::AttributeSetAutobackup()
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
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>())
	,logging(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>())
	,signalled_name(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>())
{
    affinity->parent = this;
    logging->parent = this;
    signalled_name->parent = this;

    yang_name = "attribute-set-autobackup"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::~AttributeSetAutobackup()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-autobackup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.yfilter)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (is_signalled_name_configured.is_set || is_set(is_signalled_name_configured.yfilter)) leaf_name_data.push_back(is_signalled_name_configured.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.yfilter)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface>();
        c->parent = this;
        protected_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "signalled-name")
    {
        if(signalled_name == nullptr)
        {
            signalled_name = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "policy-class-entry" || name == "protected-interface" || name == "signalled-name" || name == "tunnel-id" || name == "hold-priority" || name == "is-affinity-configured" || name == "is-policyclass-configured" || name == "is-priority-configured" || name == "is-signalled-name-configured" || name == "policy-class" || name == "record-route" || name == "setup-priority")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::Logging()
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

    yang_name = "logging"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::~Logging()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-logging-enabled" || name == "lsp-bandwidth-change" || name == "lsp-insufficient-bw" || name == "lsp-pcalc-failure-logging-enabled" || name == "lsp-re-opt" || name == "lsp-re-route" || name == "lsp-state" || name == "s2l-state")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::PolicyClassEntry()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "policy-class-entry"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::~PolicyClassEntry()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::ProtectedInterface()
    :
    protected_interface{YType::str, "protected-interface"}
{

    yang_name = "protected-interface"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::~ProtectedInterface()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_data() const
{
    return protected_interface.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protected_interface.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protected_interface.is_set || is_set(protected_interface.yfilter)) leaf_name_data.push_back(protected_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protected-interface")
    {
        protected_interface = value;
        protected_interface.value_namespace = name_space;
        protected_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protected-interface")
    {
        protected_interface.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected-interface")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::SignalledName()
    :
    is_mp_addresses{YType::boolean, "is-mp-addresses"},
    name{YType::str, "name"},
    protected_interface_type{YType::enumeration, "protected-interface-type"},
    source_type{YType::enumeration, "source-type"}
{

    yang_name = "signalled-name"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::~SignalledName()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_data() const
{
    return is_mp_addresses.is_set
	|| name.is_set
	|| protected_interface_type.is_set
	|| source_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_mp_addresses.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(protected_interface_type.yfilter)
	|| ydk::is_set(source_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_mp_addresses.is_set || is_set(is_mp_addresses.yfilter)) leaf_name_data.push_back(is_mp_addresses.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (protected_interface_type.is_set || is_set(protected_interface_type.yfilter)) leaf_name_data.push_back(protected_interface_type.get_name_leafdata());
    if (source_type.is_set || is_set(source_type.yfilter)) leaf_name_data.push_back(source_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-mp-addresses" || name == "name" || name == "protected-interface-type" || name == "source-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::~TunnelId()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::AttributeSetAutomesh()
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
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>())
	,logging(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>())
{
    affinity->parent = this;
    logging->parent = this;

    yang_name = "attribute-set-automesh"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::~AttributeSetAutomesh()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-automesh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_name_leaf_data() const
{
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

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "mesh-group-id" || name == "policy-class-entry" || name == "tunnel-id" || name == "auto-bandwidth-collect" || name == "auto-route-announce" || name == "bandwidth" || name == "configured-bandwidth" || name == "dste-class-type" || name == "fast-reroute" || name == "forward-class" || name == "frr-bandwidth-protection" || name == "frr-node-protection" || name == "hold-priority" || name == "is-affinity-configured" || name == "is-bandwidth-configured" || name == "is-interface-bw-configured" || name == "is-policyclass-configured" || name == "is-priority-configured" || name == "load-share" || name == "policy-class" || name == "record-route" || name == "setup-priority" || name == "soft-preemption-configured")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::Logging()
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

    yang_name = "logging"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::~Logging()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-logging-enabled" || name == "lsp-bandwidth-change" || name == "lsp-insufficient-bw" || name == "lsp-pcalc-failure-logging-enabled" || name == "lsp-re-opt" || name == "lsp-re-route" || name == "lsp-state" || name == "s2l-state")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::MeshGroupId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mesh-group-id"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::~MeshGroupId()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::PolicyClassEntry()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "policy-class-entry"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::~PolicyClassEntry()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::~TunnelId()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::AttributeSetP2Mpte()
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
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>())
{
    affinity->parent = this;

    yang_name = "attribute-set-p2mpte"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::~AttributeSetP2Mpte()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2mpte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_name_leaf_data() const
{
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

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "tunnel-id" || name == "configured-bandwidth" || name == "dste-class-type" || name == "fast-reroute" || name == "frr-bandwidth-protection" || name == "hold-priority" || name == "is-affinity-configured" || name == "is-bandwidth-configured" || name == "is-priority-configured" || name == "setup-priority")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-p2mpte"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2mpte"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::~TunnelId()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::AttributeSetP2PTe()
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
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>())
	,logging(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>())
	,prepend_list(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>())
{
    affinity->parent = this;
    logging->parent = this;
    prepend_list->parent = this;

    yang_name = "attribute-set-p2p-te"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::~AttributeSetP2PTe()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2p-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_name_leaf_data() const
{
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

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "prepend-list")
    {
        if(prepend_list == nullptr)
        {
            prepend_list = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "prepend-list" || name == "tunnel-id" || name == "is-affinity-configured" || name == "is-path-invalidation-action-configured" || name == "is-path-invalidation-timeout-configured" || name == "is-path-select-configured" || name == "is-path-selection-metric-configured" || name == "is-path-selection-segment-routing-adjacency-protection-configured" || name == "is-path-selection-segment-routing-margin-configured" || name == "is-path-selection-segment-routing-margin-relative" || name == "is-path-selection-segment-routing-segment-limit-configured" || name == "is-pce-configured" || name == "is-pce-disj-group-id-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "is-prepend-list-configured" || name == "path-invalidation-timeout" || name == "path-selection-invalidation-action" || name == "path-selection-metric" || name == "path-selection-segment-routing-adjacency-protection" || name == "path-selection-segment-routing-margin" || name == "path-selection-segment-routing-segment-limit" || name == "pcebd-group-id" || name == "pcebd-source-address" || name == "pcedp-group-id" || name == "pcedp-source-address" || name == "pcedp-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::Logging()
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

    yang_name = "logging"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::~Logging()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-logging-enabled" || name == "lsp-bandwidth-change" || name == "lsp-insufficient-bw" || name == "lsp-pcalc-failure-logging-enabled" || name == "lsp-re-opt" || name == "lsp-re-route" || name == "lsp-state" || name == "s2l-state")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependList()
{

    yang_name = "prepend-list"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::~PrependList()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_data() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_operation() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry>();
        c->parent = this;
        prepend_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prepend_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepend-entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::PrependEntry()
    :
    index_{YType::uint32, "index"},
    next_label{YType::uint32, "next-label"},
    type{YType::enumeration, "type"}
{

    yang_name = "prepend-entry"; yang_parent_name = "prepend-list"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::~PrependEntry()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_data() const
{
    return index_.is_set
	|| next_label.is_set
	|| type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(next_label.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (next_label.is_set || is_set(next_label.yfilter)) leaf_name_data.push_back(next_label.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "next-label" || name == "type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::~TunnelId()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::AttributeSetPathOption()
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
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>())
	,bfd_reverse_path(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>())
{
    affinity->parent = this;
    bfd_reverse_path->parent = this;

    yang_name = "attribute-set-path-option"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::~AttributeSetPathOption()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-path-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_name_leaf_data() const
{
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

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path == nullptr)
        {
            bfd_reverse_path = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo>();
        c->parent = this;
        version_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "bfd-reverse-path" || name == "tunnel-id" || name == "version-info" || name == "bandwidth-type" || name == "configured-bandwidth" || name == "cost-limit" || name == "dste-class-type" || name == "exclude-list-name" || name == "generation" || name == "is-affinity-configured" || name == "is-bandwidth-configured" || name == "is-bfd-reverse-pat-configured" || name == "is-cost-limit-configured" || name == "is-exclude-list-name-configured" || name == "is-path-invalidation-action-configured" || name == "is-path-invalidation-timeout-configured" || name == "is-pce-configured" || name == "is-pce-disj-group-id-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "path-invalidation-action" || name == "path-invalidation-timeout" || name == "pcebd-group-id" || name == "pcebd-source-address" || name == "pcedp-group-id" || name == "pcedp-source-address" || name == "pcedp-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::BfdReversePath()
    :
    binding_label{YType::uint32, "binding-label"},
    path_type{YType::enumeration, "path-type"}
{

    yang_name = "bfd-reverse-path"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::~BfdReversePath()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_data() const
{
    return binding_label.is_set
	|| path_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(path_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-label" || name == "path-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::~TunnelId()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::VersionInfo()
    :
    attribute_type{YType::str, "attribute-type"},
    generation{YType::uint32, "generation"},
    is_default{YType::boolean, "is-default"}
{

    yang_name = "version-info"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::~VersionInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_data() const
{
    return attribute_type.is_set
	|| generation.is_set
	|| is_default.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_type.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(is_default.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.yfilter)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.yfilter)) leaf_name_data.push_back(is_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-type" || name == "generation" || name == "is-default")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::AttributeSetXro()
    :
    xro(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro>())
{
    xro->parent = this;

    yang_name = "attribute-set-xro"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::~AttributeSetXro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::has_data() const
{
    return (xro !=  nullptr && xro->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::has_operation() const
{
    return is_set(yfilter)
	|| (xro !=  nullptr && xro->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-xro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro")
    {
        if(xro == nullptr)
        {
            xro = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro>();
        }
        return xro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xro != nullptr)
    {
        children["xro"] = xro;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::Xro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
{

    yang_name = "xro"; yang_parent_name = "attribute-set-xro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::~Xro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_data() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mutual_diversity_flag.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mutual_diversity_flag.is_set || is_set(mutual_diversity_flag.yfilter)) leaf_name_data.push_back(mutual_diversity_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject>();
        c->parent = this;
        xro_subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xro_subobject)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
        mutual_diversity_flag.value_namespace = name_space;
        mutual_diversity_flag.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro-subobject" || name == "mutual-diversity-flag")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
    	,
    as_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>())
	,ipv4_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>())
	,ipv6_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>())
	,lsp_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>())
	,srlg_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>())
	,unnumbered_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>())
{
    as_subobject->parent = this;
    ipv4_subobject->parent = this;
    ipv6_subobject->parent = this;
    lsp_subobject->parent = this;
    srlg_subobject->parent = this;
    unnumbered_subobject->parent = this;

    yang_name = "xro-subobject"; yang_parent_name = "xro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::~XroSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_data() const
{
    return type.is_set
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-subobject")
    {
        if(as_subobject == nullptr)
        {
            as_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>();
        }
        return as_subobject;
    }

    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject == nullptr)
        {
            ipv4_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>();
        }
        return ipv4_subobject;
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject == nullptr)
        {
            ipv6_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>();
        }
        return ipv6_subobject;
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject == nullptr)
        {
            lsp_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>();
        }
        return lsp_subobject;
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject == nullptr)
        {
            srlg_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>();
        }
        return srlg_subobject;
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject == nullptr)
        {
            unnumbered_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>();
        }
        return unnumbered_subobject;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-subobject" || name == "ipv4-subobject" || name == "ipv6-subobject" || name == "lsp-subobject" || name == "srlg-subobject" || name == "unnumbered-subobject" || name == "type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::AsSubobject()
    :
    as_number{YType::uint16, "as-number"}
{

    yang_name = "as-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::~AsSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_data() const
{
    return as_number.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{

    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(prefix_len.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "attribute" || name == "exclusion-type" || name == "prefix-len")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{

    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(prefix_len.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "attribute" || name == "exclusion-type" || name == "prefix-len")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::LspSubobject()
    :
    destination_node_exception{YType::boolean, "destination-node-exception"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    ignore_lsp_id{YType::boolean, "ignore-lsp-id"},
    penultimate_node_exception{YType::boolean, "penultimate-node-exception"},
    processing_node_exception{YType::boolean, "processing-node-exception"}
    	,
    fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>())
{
    fec->parent = this;

    yang_name = "lsp-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::~LspSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_data() const
{
    return destination_node_exception.is_set
	|| exclusion_type.is_set
	|| ignore_lsp_id.is_set
	|| penultimate_node_exception.is_set
	|| processing_node_exception.is_set
	|| (fec !=  nullptr && fec->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_node_exception.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(ignore_lsp_id.yfilter)
	|| ydk::is_set(penultimate_node_exception.yfilter)
	|| ydk::is_set(processing_node_exception.yfilter)
	|| (fec !=  nullptr && fec->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_node_exception.is_set || is_set(destination_node_exception.yfilter)) leaf_name_data.push_back(destination_node_exception.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (ignore_lsp_id.is_set || is_set(ignore_lsp_id.yfilter)) leaf_name_data.push_back(ignore_lsp_id.get_name_leafdata());
    if (penultimate_node_exception.is_set || is_set(penultimate_node_exception.yfilter)) leaf_name_data.push_back(penultimate_node_exception.get_name_leafdata());
    if (processing_node_exception.is_set || is_set(processing_node_exception.yfilter)) leaf_name_data.push_back(processing_node_exception.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec")
    {
        if(fec == nullptr)
        {
            fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>();
        }
        return fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec != nullptr)
    {
        children["fec"] = fec;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec" || name == "destination-node-exception" || name == "exclusion-type" || name == "ignore-lsp-id" || name == "penultimate-node-exception" || name == "processing-node-exception")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::Fec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "fec"; yang_parent_name = "lsp-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::~Fec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-extended-tunnel-id" || name == "fec-lsp-id" || name == "fec-source" || name == "fec-tunnel-id" || name == "fec-vrf")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "fec"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "fec-destination-p2mp-id" || name == "p2p-lsp-destination")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::SrlgSubobject()
    :
    exclusion_type{YType::enumeration, "exclusion-type"},
    srlg_id{YType::uint32, "srlg-id"}
{

    yang_name = "srlg-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::~SrlgSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_data() const
{
    return exclusion_type.is_set
	|| srlg_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(srlg_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (srlg_id.is_set || is_set(srlg_id.yfilter)) leaf_name_data.push_back(srlg_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclusion-type" || name == "srlg-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    interface_id{YType::uint32, "interface-id"},
    te_router_id{YType::str, "te-router-id"}
{

    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_data() const
{
    return attribute.is_set
	|| exclusion_type.is_set
	|| interface_id.is_set
	|| te_router_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(te_router_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (te_router_id.is_set || is_set(te_router_id.yfilter)) leaf_name_data.push_back(te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute" || name == "exclusion-type" || name == "interface-id" || name == "te-router-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::Association::Association()
    :
    s2l_association_id{YType::uint16, "s2l-association-id"},
    s2l_association_source{YType::str, "s2l-association-source"},
    s2l_association_tie_role{YType::enumeration, "s2l-association-tie-role"},
    s2l_association_type{YType::uint16, "s2l-association-type"},
    s2l_global_source{YType::uint32, "s2l-global-source"}
{

    yang_name = "association"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::Association::~Association()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::Association::has_data() const
{
    for (std::size_t index=0; index<s2l_extended_id.size(); index++)
    {
        if(s2l_extended_id[index]->has_data())
            return true;
    }
    return s2l_association_id.is_set
	|| s2l_association_source.is_set
	|| s2l_association_tie_role.is_set
	|| s2l_association_type.is_set
	|| s2l_global_source.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::Association::has_operation() const
{
    for (std::size_t index=0; index<s2l_extended_id.size(); index++)
    {
        if(s2l_extended_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(s2l_association_id.yfilter)
	|| ydk::is_set(s2l_association_source.yfilter)
	|| ydk::is_set(s2l_association_tie_role.yfilter)
	|| ydk::is_set(s2l_association_type.yfilter)
	|| ydk::is_set(s2l_global_source.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::Association::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_association_id.is_set || is_set(s2l_association_id.yfilter)) leaf_name_data.push_back(s2l_association_id.get_name_leafdata());
    if (s2l_association_source.is_set || is_set(s2l_association_source.yfilter)) leaf_name_data.push_back(s2l_association_source.get_name_leafdata());
    if (s2l_association_tie_role.is_set || is_set(s2l_association_tie_role.yfilter)) leaf_name_data.push_back(s2l_association_tie_role.get_name_leafdata());
    if (s2l_association_type.is_set || is_set(s2l_association_type.yfilter)) leaf_name_data.push_back(s2l_association_type.get_name_leafdata());
    if (s2l_global_source.is_set || is_set(s2l_global_source.yfilter)) leaf_name_data.push_back(s2l_global_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-extended-id")
    {
        for(auto const & c : s2l_extended_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::Association::S2LExtendedId>();
        c->parent = this;
        s2l_extended_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::Association::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : s2l_extended_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::Association::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-association-id")
    {
        s2l_association_id = value;
        s2l_association_id.value_namespace = name_space;
        s2l_association_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source = value;
        s2l_association_source.value_namespace = name_space;
        s2l_association_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role = value;
        s2l_association_tie_role.value_namespace = name_space;
        s2l_association_tie_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-type")
    {
        s2l_association_type = value;
        s2l_association_type.value_namespace = name_space;
        s2l_association_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source = value;
        s2l_global_source.value_namespace = name_space;
        s2l_global_source.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::Association::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-association-id")
    {
        s2l_association_id.yfilter = yfilter;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source.yfilter = yfilter;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role.yfilter = yfilter;
    }
    if(value_path == "s2l-association-type")
    {
        s2l_association_type.yfilter = yfilter;
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2L::Association::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-extended-id" || name == "s2l-association-id" || name == "s2l-association-source" || name == "s2l-association-tie-role" || name == "s2l-association-type" || name == "s2l-global-source")
        return true;
    return false;
}


}
}

