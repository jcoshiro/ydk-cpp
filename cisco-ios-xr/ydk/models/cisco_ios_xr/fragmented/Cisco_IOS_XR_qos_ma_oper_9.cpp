
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_qos_ma_oper_9.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_qos_ma_oper {

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ChildPolicy()
    :
    policy_name{YType::str, "policy-name"},
    satid{YType::uint32, "satid"},
    state{YType::enumeration, "state"},
    state_description{YType::str, "state-description"}
{

    yang_name = "child-policy"; yang_parent_name = "class-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::~ChildPolicy()
{
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::has_data() const
{
    for (std::size_t index=0; index<class_stats.size(); index++)
    {
        if(class_stats[index]->has_data())
            return true;
    }
    return policy_name.is_set
	|| satid.is_set
	|| state.is_set
	|| state_description.is_set;
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::has_operation() const
{
    for (std::size_t index=0; index<class_stats.size(); index++)
    {
        if(class_stats[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(satid.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(state_description.yfilter);
}

std::string Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "child-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (satid.is_set || is_set(satid.yfilter)) leaf_name_data.push_back(satid.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_description.is_set || is_set(state_description.yfilter)) leaf_name_data.push_back(state_description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-stats")
    {
        for(auto const & c : class_stats)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_>();
        c->parent = this;
        class_stats.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_stats)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satid")
    {
        satid = value;
        satid.value_namespace = name_space;
        satid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-description")
    {
        state_description = value;
        state_description.value_namespace = name_space;
        state_description.value_namespace_prefix = name_space_prefix;
    }
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "satid")
    {
        satid.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "state-description")
    {
        state_description.yfilter = yfilter;
    }
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-stats" || name == "policy-name" || name == "satid" || name == "state" || name == "state-description")
        return true;
    return false;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::ClassStats_()
    :
    cac_state{YType::enumeration, "cac-state"},
    class_name{YType::str, "class-name"},
    counter_validity_bitmask{YType::uint64, "counter-validity-bitmask"},
    queue_descr{YType::str, "queue-descr"},
    shared_queue_id{YType::uint32, "shared-queue-id"}
    	,
    cac_stats(std::make_shared<Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::CacStats>())
	,general_stats(std::make_shared<Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::GeneralStats>())
	,iphc_stats(std::make_shared<Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::IphcStats>())
{
    cac_stats->parent = this;
    general_stats->parent = this;
    iphc_stats->parent = this;

    yang_name = "class-stats"; yang_parent_name = "child-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::~ClassStats_()
{
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::has_data() const
{
    for (std::size_t index=0; index<police_stats_array.size(); index++)
    {
        if(police_stats_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_stats_array.size(); index++)
    {
        if(queue_stats_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wred_stats_array.size(); index++)
    {
        if(wred_stats_array[index]->has_data())
            return true;
    }
    return cac_state.is_set
	|| class_name.is_set
	|| counter_validity_bitmask.is_set
	|| queue_descr.is_set
	|| shared_queue_id.is_set
	|| (cac_stats !=  nullptr && cac_stats->has_data())
	|| (general_stats !=  nullptr && general_stats->has_data())
	|| (iphc_stats !=  nullptr && iphc_stats->has_data());
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::has_operation() const
{
    for (std::size_t index=0; index<police_stats_array.size(); index++)
    {
        if(police_stats_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_stats_array.size(); index++)
    {
        if(queue_stats_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wred_stats_array.size(); index++)
    {
        if(wred_stats_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cac_state.yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(counter_validity_bitmask.yfilter)
	|| ydk::is_set(queue_descr.yfilter)
	|| ydk::is_set(shared_queue_id.yfilter)
	|| (cac_stats !=  nullptr && cac_stats->has_operation())
	|| (general_stats !=  nullptr && general_stats->has_operation())
	|| (iphc_stats !=  nullptr && iphc_stats->has_operation());
}

std::string Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cac_state.is_set || is_set(cac_state.yfilter)) leaf_name_data.push_back(cac_state.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (counter_validity_bitmask.is_set || is_set(counter_validity_bitmask.yfilter)) leaf_name_data.push_back(counter_validity_bitmask.get_name_leafdata());
    if (queue_descr.is_set || is_set(queue_descr.yfilter)) leaf_name_data.push_back(queue_descr.get_name_leafdata());
    if (shared_queue_id.is_set || is_set(shared_queue_id.yfilter)) leaf_name_data.push_back(shared_queue_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cac-stats")
    {
        if(cac_stats == nullptr)
        {
            cac_stats = std::make_shared<Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::CacStats>();
        }
        return cac_stats;
    }

    if(child_yang_name == "general-stats")
    {
        if(general_stats == nullptr)
        {
            general_stats = std::make_shared<Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::GeneralStats>();
        }
        return general_stats;
    }

    if(child_yang_name == "iphc-stats")
    {
        if(iphc_stats == nullptr)
        {
            iphc_stats = std::make_shared<Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::IphcStats>();
        }
        return iphc_stats;
    }

    if(child_yang_name == "police-stats-array")
    {
        for(auto const & c : police_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray>();
        c->parent = this;
        police_stats_array.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-stats-array")
    {
        for(auto const & c : queue_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray>();
        c->parent = this;
        queue_stats_array.push_back(c);
        return c;
    }

    if(child_yang_name == "wred-stats-array")
    {
        for(auto const & c : wred_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray>();
        c->parent = this;
        wred_stats_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cac_stats != nullptr)
    {
        children["cac-stats"] = cac_stats;
    }

    if(general_stats != nullptr)
    {
        children["general-stats"] = general_stats;
    }

    if(iphc_stats != nullptr)
    {
        children["iphc-stats"] = iphc_stats;
    }

    for (auto const & c : police_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : wred_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cac-state")
    {
        cac_state = value;
        cac_state.value_namespace = name_space;
        cac_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-validity-bitmask")
    {
        counter_validity_bitmask = value;
        counter_validity_bitmask.value_namespace = name_space;
        counter_validity_bitmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-descr")
    {
        queue_descr = value;
        queue_descr.value_namespace = name_space;
        queue_descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shared-queue-id")
    {
        shared_queue_id = value;
        shared_queue_id.value_namespace = name_space;
        shared_queue_id.value_namespace_prefix = name_space_prefix;
    }
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cac-state")
    {
        cac_state.yfilter = yfilter;
    }
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "counter-validity-bitmask")
    {
        counter_validity_bitmask.yfilter = yfilter;
    }
    if(value_path == "queue-descr")
    {
        queue_descr.yfilter = yfilter;
    }
    if(value_path == "shared-queue-id")
    {
        shared_queue_id.yfilter = yfilter;
    }
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cac-stats" || name == "general-stats" || name == "iphc-stats" || name == "police-stats-array" || name == "queue-stats-array" || name == "wred-stats-array" || name == "cac-state" || name == "class-name" || name == "counter-validity-bitmask" || name == "queue-descr" || name == "shared-queue-id")
        return true;
    return false;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::CacStats::CacStats()
    :
    admit_bytes{YType::uint64, "admit-bytes"},
    admit_rates{YType::uint32, "admit-rates"},
    admitpackets{YType::uint64, "admitpackets"},
    drop_bytes{YType::uint64, "drop-bytes"},
    drop_packets{YType::uint64, "drop-packets"},
    drop_rates{YType::uint32, "drop-rates"}
{

    yang_name = "cac-stats"; yang_parent_name = "class-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::CacStats::~CacStats()
{
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::CacStats::has_data() const
{
    return admit_bytes.is_set
	|| admit_rates.is_set
	|| admitpackets.is_set
	|| drop_bytes.is_set
	|| drop_packets.is_set
	|| drop_rates.is_set;
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::CacStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admit_bytes.yfilter)
	|| ydk::is_set(admit_rates.yfilter)
	|| ydk::is_set(admitpackets.yfilter)
	|| ydk::is_set(drop_bytes.yfilter)
	|| ydk::is_set(drop_packets.yfilter)
	|| ydk::is_set(drop_rates.yfilter);
}

std::string Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::CacStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cac-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::CacStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admit_bytes.is_set || is_set(admit_bytes.yfilter)) leaf_name_data.push_back(admit_bytes.get_name_leafdata());
    if (admit_rates.is_set || is_set(admit_rates.yfilter)) leaf_name_data.push_back(admit_rates.get_name_leafdata());
    if (admitpackets.is_set || is_set(admitpackets.yfilter)) leaf_name_data.push_back(admitpackets.get_name_leafdata());
    if (drop_bytes.is_set || is_set(drop_bytes.yfilter)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (drop_packets.is_set || is_set(drop_packets.yfilter)) leaf_name_data.push_back(drop_packets.get_name_leafdata());
    if (drop_rates.is_set || is_set(drop_rates.yfilter)) leaf_name_data.push_back(drop_rates.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::CacStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::CacStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::CacStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admit-bytes")
    {
        admit_bytes = value;
        admit_bytes.value_namespace = name_space;
        admit_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admit-rates")
    {
        admit_rates = value;
        admit_rates.value_namespace = name_space;
        admit_rates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admitpackets")
    {
        admitpackets = value;
        admitpackets.value_namespace = name_space;
        admitpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
        drop_bytes.value_namespace = name_space;
        drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-packets")
    {
        drop_packets = value;
        drop_packets.value_namespace = name_space;
        drop_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-rates")
    {
        drop_rates = value;
        drop_rates.value_namespace = name_space;
        drop_rates.value_namespace_prefix = name_space_prefix;
    }
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::CacStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admit-bytes")
    {
        admit_bytes.yfilter = yfilter;
    }
    if(value_path == "admit-rates")
    {
        admit_rates.yfilter = yfilter;
    }
    if(value_path == "admitpackets")
    {
        admitpackets.yfilter = yfilter;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes.yfilter = yfilter;
    }
    if(value_path == "drop-packets")
    {
        drop_packets.yfilter = yfilter;
    }
    if(value_path == "drop-rates")
    {
        drop_rates.yfilter = yfilter;
    }
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::CacStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admit-bytes" || name == "admit-rates" || name == "admitpackets" || name == "drop-bytes" || name == "drop-packets" || name == "drop-rates")
        return true;
    return false;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::GeneralStats::GeneralStats()
    :
    match_data_rate{YType::uint32, "match-data-rate"},
    pre_policy_matched_bytes{YType::uint64, "pre-policy-matched-bytes"},
    pre_policy_matched_packets{YType::uint64, "pre-policy-matched-packets"},
    total_drop_bytes{YType::uint64, "total-drop-bytes"},
    total_drop_packets{YType::uint64, "total-drop-packets"},
    total_drop_rate{YType::uint32, "total-drop-rate"},
    total_transmit_rate{YType::uint32, "total-transmit-rate"},
    transmit_bytes{YType::uint64, "transmit-bytes"},
    transmit_packets{YType::uint64, "transmit-packets"}
{

    yang_name = "general-stats"; yang_parent_name = "class-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::GeneralStats::~GeneralStats()
{
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::GeneralStats::has_data() const
{
    return match_data_rate.is_set
	|| pre_policy_matched_bytes.is_set
	|| pre_policy_matched_packets.is_set
	|| total_drop_bytes.is_set
	|| total_drop_packets.is_set
	|| total_drop_rate.is_set
	|| total_transmit_rate.is_set
	|| transmit_bytes.is_set
	|| transmit_packets.is_set;
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::GeneralStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(match_data_rate.yfilter)
	|| ydk::is_set(pre_policy_matched_bytes.yfilter)
	|| ydk::is_set(pre_policy_matched_packets.yfilter)
	|| ydk::is_set(total_drop_bytes.yfilter)
	|| ydk::is_set(total_drop_packets.yfilter)
	|| ydk::is_set(total_drop_rate.yfilter)
	|| ydk::is_set(total_transmit_rate.yfilter)
	|| ydk::is_set(transmit_bytes.yfilter)
	|| ydk::is_set(transmit_packets.yfilter);
}

std::string Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::GeneralStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::GeneralStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_data_rate.is_set || is_set(match_data_rate.yfilter)) leaf_name_data.push_back(match_data_rate.get_name_leafdata());
    if (pre_policy_matched_bytes.is_set || is_set(pre_policy_matched_bytes.yfilter)) leaf_name_data.push_back(pre_policy_matched_bytes.get_name_leafdata());
    if (pre_policy_matched_packets.is_set || is_set(pre_policy_matched_packets.yfilter)) leaf_name_data.push_back(pre_policy_matched_packets.get_name_leafdata());
    if (total_drop_bytes.is_set || is_set(total_drop_bytes.yfilter)) leaf_name_data.push_back(total_drop_bytes.get_name_leafdata());
    if (total_drop_packets.is_set || is_set(total_drop_packets.yfilter)) leaf_name_data.push_back(total_drop_packets.get_name_leafdata());
    if (total_drop_rate.is_set || is_set(total_drop_rate.yfilter)) leaf_name_data.push_back(total_drop_rate.get_name_leafdata());
    if (total_transmit_rate.is_set || is_set(total_transmit_rate.yfilter)) leaf_name_data.push_back(total_transmit_rate.get_name_leafdata());
    if (transmit_bytes.is_set || is_set(transmit_bytes.yfilter)) leaf_name_data.push_back(transmit_bytes.get_name_leafdata());
    if (transmit_packets.is_set || is_set(transmit_packets.yfilter)) leaf_name_data.push_back(transmit_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::GeneralStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::GeneralStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::GeneralStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "match-data-rate")
    {
        match_data_rate = value;
        match_data_rate.value_namespace = name_space;
        match_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-policy-matched-bytes")
    {
        pre_policy_matched_bytes = value;
        pre_policy_matched_bytes.value_namespace = name_space;
        pre_policy_matched_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-policy-matched-packets")
    {
        pre_policy_matched_packets = value;
        pre_policy_matched_packets.value_namespace = name_space;
        pre_policy_matched_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-drop-bytes")
    {
        total_drop_bytes = value;
        total_drop_bytes.value_namespace = name_space;
        total_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-drop-packets")
    {
        total_drop_packets = value;
        total_drop_packets.value_namespace = name_space;
        total_drop_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-drop-rate")
    {
        total_drop_rate = value;
        total_drop_rate.value_namespace = name_space;
        total_drop_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-transmit-rate")
    {
        total_transmit_rate = value;
        total_transmit_rate.value_namespace = name_space;
        total_transmit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-bytes")
    {
        transmit_bytes = value;
        transmit_bytes.value_namespace = name_space;
        transmit_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-packets")
    {
        transmit_packets = value;
        transmit_packets.value_namespace = name_space;
        transmit_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::GeneralStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "match-data-rate")
    {
        match_data_rate.yfilter = yfilter;
    }
    if(value_path == "pre-policy-matched-bytes")
    {
        pre_policy_matched_bytes.yfilter = yfilter;
    }
    if(value_path == "pre-policy-matched-packets")
    {
        pre_policy_matched_packets.yfilter = yfilter;
    }
    if(value_path == "total-drop-bytes")
    {
        total_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "total-drop-packets")
    {
        total_drop_packets.yfilter = yfilter;
    }
    if(value_path == "total-drop-rate")
    {
        total_drop_rate.yfilter = yfilter;
    }
    if(value_path == "total-transmit-rate")
    {
        total_transmit_rate.yfilter = yfilter;
    }
    if(value_path == "transmit-bytes")
    {
        transmit_bytes.yfilter = yfilter;
    }
    if(value_path == "transmit-packets")
    {
        transmit_packets.yfilter = yfilter;
    }
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::GeneralStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-data-rate" || name == "pre-policy-matched-bytes" || name == "pre-policy-matched-packets" || name == "total-drop-bytes" || name == "total-drop-packets" || name == "total-drop-rate" || name == "total-transmit-rate" || name == "transmit-bytes" || name == "transmit-packets")
        return true;
    return false;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::IphcStats::IphcStats()
    :
    non_tcp_bytes_saved{YType::uint64, "non-tcp-bytes-saved"},
    non_tcp_bytes_sent_rate{YType::uint32, "non-tcp-bytes-sent-rate"},
    non_tcp_compressed_packets_out{YType::uint64, "non-tcp-compressed-packets-out"},
    non_tcp_full_header_packets_out{YType::uint64, "non-tcp-full-header-packets-out"},
    non_tcp_total_out_bytes{YType::uint64, "non-tcp-total-out-bytes"},
    non_tcp_total_out_packets{YType::uint64, "non-tcp-total-out-packets"},
    tcp_bytes_saved{YType::uint64, "tcp-bytes-saved"},
    tcp_bytes_sent_rate{YType::uint32, "tcp-bytes-sent-rate"},
    tcp_compressed_packets_out{YType::uint64, "tcp-compressed-packets-out"},
    tcp_full_header_packets_out{YType::uint64, "tcp-full-header-packets-out"},
    tcp_total_out_bytes{YType::uint64, "tcp-total-out-bytes"},
    tcp_total_out_packets{YType::uint64, "tcp-total-out-packets"}
{

    yang_name = "iphc-stats"; yang_parent_name = "class-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::IphcStats::~IphcStats()
{
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::IphcStats::has_data() const
{
    return non_tcp_bytes_saved.is_set
	|| non_tcp_bytes_sent_rate.is_set
	|| non_tcp_compressed_packets_out.is_set
	|| non_tcp_full_header_packets_out.is_set
	|| non_tcp_total_out_bytes.is_set
	|| non_tcp_total_out_packets.is_set
	|| tcp_bytes_saved.is_set
	|| tcp_bytes_sent_rate.is_set
	|| tcp_compressed_packets_out.is_set
	|| tcp_full_header_packets_out.is_set
	|| tcp_total_out_bytes.is_set
	|| tcp_total_out_packets.is_set;
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::IphcStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_tcp_bytes_saved.yfilter)
	|| ydk::is_set(non_tcp_bytes_sent_rate.yfilter)
	|| ydk::is_set(non_tcp_compressed_packets_out.yfilter)
	|| ydk::is_set(non_tcp_full_header_packets_out.yfilter)
	|| ydk::is_set(non_tcp_total_out_bytes.yfilter)
	|| ydk::is_set(non_tcp_total_out_packets.yfilter)
	|| ydk::is_set(tcp_bytes_saved.yfilter)
	|| ydk::is_set(tcp_bytes_sent_rate.yfilter)
	|| ydk::is_set(tcp_compressed_packets_out.yfilter)
	|| ydk::is_set(tcp_full_header_packets_out.yfilter)
	|| ydk::is_set(tcp_total_out_bytes.yfilter)
	|| ydk::is_set(tcp_total_out_packets.yfilter);
}

std::string Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::IphcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iphc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::IphcStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_tcp_bytes_saved.is_set || is_set(non_tcp_bytes_saved.yfilter)) leaf_name_data.push_back(non_tcp_bytes_saved.get_name_leafdata());
    if (non_tcp_bytes_sent_rate.is_set || is_set(non_tcp_bytes_sent_rate.yfilter)) leaf_name_data.push_back(non_tcp_bytes_sent_rate.get_name_leafdata());
    if (non_tcp_compressed_packets_out.is_set || is_set(non_tcp_compressed_packets_out.yfilter)) leaf_name_data.push_back(non_tcp_compressed_packets_out.get_name_leafdata());
    if (non_tcp_full_header_packets_out.is_set || is_set(non_tcp_full_header_packets_out.yfilter)) leaf_name_data.push_back(non_tcp_full_header_packets_out.get_name_leafdata());
    if (non_tcp_total_out_bytes.is_set || is_set(non_tcp_total_out_bytes.yfilter)) leaf_name_data.push_back(non_tcp_total_out_bytes.get_name_leafdata());
    if (non_tcp_total_out_packets.is_set || is_set(non_tcp_total_out_packets.yfilter)) leaf_name_data.push_back(non_tcp_total_out_packets.get_name_leafdata());
    if (tcp_bytes_saved.is_set || is_set(tcp_bytes_saved.yfilter)) leaf_name_data.push_back(tcp_bytes_saved.get_name_leafdata());
    if (tcp_bytes_sent_rate.is_set || is_set(tcp_bytes_sent_rate.yfilter)) leaf_name_data.push_back(tcp_bytes_sent_rate.get_name_leafdata());
    if (tcp_compressed_packets_out.is_set || is_set(tcp_compressed_packets_out.yfilter)) leaf_name_data.push_back(tcp_compressed_packets_out.get_name_leafdata());
    if (tcp_full_header_packets_out.is_set || is_set(tcp_full_header_packets_out.yfilter)) leaf_name_data.push_back(tcp_full_header_packets_out.get_name_leafdata());
    if (tcp_total_out_bytes.is_set || is_set(tcp_total_out_bytes.yfilter)) leaf_name_data.push_back(tcp_total_out_bytes.get_name_leafdata());
    if (tcp_total_out_packets.is_set || is_set(tcp_total_out_packets.yfilter)) leaf_name_data.push_back(tcp_total_out_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::IphcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::IphcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::IphcStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-tcp-bytes-saved")
    {
        non_tcp_bytes_saved = value;
        non_tcp_bytes_saved.value_namespace = name_space;
        non_tcp_bytes_saved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-tcp-bytes-sent-rate")
    {
        non_tcp_bytes_sent_rate = value;
        non_tcp_bytes_sent_rate.value_namespace = name_space;
        non_tcp_bytes_sent_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-tcp-compressed-packets-out")
    {
        non_tcp_compressed_packets_out = value;
        non_tcp_compressed_packets_out.value_namespace = name_space;
        non_tcp_compressed_packets_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-tcp-full-header-packets-out")
    {
        non_tcp_full_header_packets_out = value;
        non_tcp_full_header_packets_out.value_namespace = name_space;
        non_tcp_full_header_packets_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-tcp-total-out-bytes")
    {
        non_tcp_total_out_bytes = value;
        non_tcp_total_out_bytes.value_namespace = name_space;
        non_tcp_total_out_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-tcp-total-out-packets")
    {
        non_tcp_total_out_packets = value;
        non_tcp_total_out_packets.value_namespace = name_space;
        non_tcp_total_out_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-bytes-saved")
    {
        tcp_bytes_saved = value;
        tcp_bytes_saved.value_namespace = name_space;
        tcp_bytes_saved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-bytes-sent-rate")
    {
        tcp_bytes_sent_rate = value;
        tcp_bytes_sent_rate.value_namespace = name_space;
        tcp_bytes_sent_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-compressed-packets-out")
    {
        tcp_compressed_packets_out = value;
        tcp_compressed_packets_out.value_namespace = name_space;
        tcp_compressed_packets_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-full-header-packets-out")
    {
        tcp_full_header_packets_out = value;
        tcp_full_header_packets_out.value_namespace = name_space;
        tcp_full_header_packets_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-total-out-bytes")
    {
        tcp_total_out_bytes = value;
        tcp_total_out_bytes.value_namespace = name_space;
        tcp_total_out_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-total-out-packets")
    {
        tcp_total_out_packets = value;
        tcp_total_out_packets.value_namespace = name_space;
        tcp_total_out_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::IphcStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-tcp-bytes-saved")
    {
        non_tcp_bytes_saved.yfilter = yfilter;
    }
    if(value_path == "non-tcp-bytes-sent-rate")
    {
        non_tcp_bytes_sent_rate.yfilter = yfilter;
    }
    if(value_path == "non-tcp-compressed-packets-out")
    {
        non_tcp_compressed_packets_out.yfilter = yfilter;
    }
    if(value_path == "non-tcp-full-header-packets-out")
    {
        non_tcp_full_header_packets_out.yfilter = yfilter;
    }
    if(value_path == "non-tcp-total-out-bytes")
    {
        non_tcp_total_out_bytes.yfilter = yfilter;
    }
    if(value_path == "non-tcp-total-out-packets")
    {
        non_tcp_total_out_packets.yfilter = yfilter;
    }
    if(value_path == "tcp-bytes-saved")
    {
        tcp_bytes_saved.yfilter = yfilter;
    }
    if(value_path == "tcp-bytes-sent-rate")
    {
        tcp_bytes_sent_rate.yfilter = yfilter;
    }
    if(value_path == "tcp-compressed-packets-out")
    {
        tcp_compressed_packets_out.yfilter = yfilter;
    }
    if(value_path == "tcp-full-header-packets-out")
    {
        tcp_full_header_packets_out.yfilter = yfilter;
    }
    if(value_path == "tcp-total-out-bytes")
    {
        tcp_total_out_bytes.yfilter = yfilter;
    }
    if(value_path == "tcp-total-out-packets")
    {
        tcp_total_out_packets.yfilter = yfilter;
    }
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::IphcStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-tcp-bytes-saved" || name == "non-tcp-bytes-sent-rate" || name == "non-tcp-compressed-packets-out" || name == "non-tcp-full-header-packets-out" || name == "non-tcp-total-out-bytes" || name == "non-tcp-total-out-packets" || name == "tcp-bytes-saved" || name == "tcp-bytes-sent-rate" || name == "tcp-compressed-packets-out" || name == "tcp-full-header-packets-out" || name == "tcp-total-out-bytes" || name == "tcp-total-out-packets")
        return true;
    return false;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::PoliceStatsArray()
    :
    conform_bytes{YType::uint64, "conform-bytes"},
    conform_packets{YType::uint64, "conform-packets"},
    conform_rate{YType::uint32, "conform-rate"},
    drop_bytes{YType::uint64, "drop-bytes"},
    drop_packets{YType::uint64, "drop-packets"},
    exceed_bytes{YType::uint64, "exceed-bytes"},
    exceed_packets{YType::uint64, "exceed-packets"},
    exceed_rate{YType::uint32, "exceed-rate"},
    parent_drop_bytes{YType::uint64, "parent-drop-bytes"},
    parent_drop_packets{YType::uint64, "parent-drop-packets"},
    violate_bytes{YType::uint64, "violate-bytes"},
    violate_packets{YType::uint64, "violate-packets"},
    violate_rate{YType::uint32, "violate-rate"}
    	,
    color_class_stats(std::make_shared<Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats>())
{
    color_class_stats->parent = this;

    yang_name = "police-stats-array"; yang_parent_name = "class-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::~PoliceStatsArray()
{
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::has_data() const
{
    return conform_bytes.is_set
	|| conform_packets.is_set
	|| conform_rate.is_set
	|| drop_bytes.is_set
	|| drop_packets.is_set
	|| exceed_bytes.is_set
	|| exceed_packets.is_set
	|| exceed_rate.is_set
	|| parent_drop_bytes.is_set
	|| parent_drop_packets.is_set
	|| violate_bytes.is_set
	|| violate_packets.is_set
	|| violate_rate.is_set
	|| (color_class_stats !=  nullptr && color_class_stats->has_data());
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(conform_bytes.yfilter)
	|| ydk::is_set(conform_packets.yfilter)
	|| ydk::is_set(conform_rate.yfilter)
	|| ydk::is_set(drop_bytes.yfilter)
	|| ydk::is_set(drop_packets.yfilter)
	|| ydk::is_set(exceed_bytes.yfilter)
	|| ydk::is_set(exceed_packets.yfilter)
	|| ydk::is_set(exceed_rate.yfilter)
	|| ydk::is_set(parent_drop_bytes.yfilter)
	|| ydk::is_set(parent_drop_packets.yfilter)
	|| ydk::is_set(violate_bytes.yfilter)
	|| ydk::is_set(violate_packets.yfilter)
	|| ydk::is_set(violate_rate.yfilter)
	|| (color_class_stats !=  nullptr && color_class_stats->has_operation());
}

std::string Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-stats-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform_bytes.is_set || is_set(conform_bytes.yfilter)) leaf_name_data.push_back(conform_bytes.get_name_leafdata());
    if (conform_packets.is_set || is_set(conform_packets.yfilter)) leaf_name_data.push_back(conform_packets.get_name_leafdata());
    if (conform_rate.is_set || is_set(conform_rate.yfilter)) leaf_name_data.push_back(conform_rate.get_name_leafdata());
    if (drop_bytes.is_set || is_set(drop_bytes.yfilter)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (drop_packets.is_set || is_set(drop_packets.yfilter)) leaf_name_data.push_back(drop_packets.get_name_leafdata());
    if (exceed_bytes.is_set || is_set(exceed_bytes.yfilter)) leaf_name_data.push_back(exceed_bytes.get_name_leafdata());
    if (exceed_packets.is_set || is_set(exceed_packets.yfilter)) leaf_name_data.push_back(exceed_packets.get_name_leafdata());
    if (exceed_rate.is_set || is_set(exceed_rate.yfilter)) leaf_name_data.push_back(exceed_rate.get_name_leafdata());
    if (parent_drop_bytes.is_set || is_set(parent_drop_bytes.yfilter)) leaf_name_data.push_back(parent_drop_bytes.get_name_leafdata());
    if (parent_drop_packets.is_set || is_set(parent_drop_packets.yfilter)) leaf_name_data.push_back(parent_drop_packets.get_name_leafdata());
    if (violate_bytes.is_set || is_set(violate_bytes.yfilter)) leaf_name_data.push_back(violate_bytes.get_name_leafdata());
    if (violate_packets.is_set || is_set(violate_packets.yfilter)) leaf_name_data.push_back(violate_packets.get_name_leafdata());
    if (violate_rate.is_set || is_set(violate_rate.yfilter)) leaf_name_data.push_back(violate_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "color-class-stats")
    {
        if(color_class_stats == nullptr)
        {
            color_class_stats = std::make_shared<Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats>();
        }
        return color_class_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(color_class_stats != nullptr)
    {
        children["color-class-stats"] = color_class_stats;
    }

    return children;
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "conform-bytes")
    {
        conform_bytes = value;
        conform_bytes.value_namespace = name_space;
        conform_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-packets")
    {
        conform_packets = value;
        conform_packets.value_namespace = name_space;
        conform_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-rate")
    {
        conform_rate = value;
        conform_rate.value_namespace = name_space;
        conform_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
        drop_bytes.value_namespace = name_space;
        drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-packets")
    {
        drop_packets = value;
        drop_packets.value_namespace = name_space;
        drop_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-bytes")
    {
        exceed_bytes = value;
        exceed_bytes.value_namespace = name_space;
        exceed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-packets")
    {
        exceed_packets = value;
        exceed_packets.value_namespace = name_space;
        exceed_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-rate")
    {
        exceed_rate = value;
        exceed_rate.value_namespace = name_space;
        exceed_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-drop-bytes")
    {
        parent_drop_bytes = value;
        parent_drop_bytes.value_namespace = name_space;
        parent_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-drop-packets")
    {
        parent_drop_packets = value;
        parent_drop_packets.value_namespace = name_space;
        parent_drop_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violate-bytes")
    {
        violate_bytes = value;
        violate_bytes.value_namespace = name_space;
        violate_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violate-packets")
    {
        violate_packets = value;
        violate_packets.value_namespace = name_space;
        violate_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violate-rate")
    {
        violate_rate = value;
        violate_rate.value_namespace = name_space;
        violate_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "conform-bytes")
    {
        conform_bytes.yfilter = yfilter;
    }
    if(value_path == "conform-packets")
    {
        conform_packets.yfilter = yfilter;
    }
    if(value_path == "conform-rate")
    {
        conform_rate.yfilter = yfilter;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes.yfilter = yfilter;
    }
    if(value_path == "drop-packets")
    {
        drop_packets.yfilter = yfilter;
    }
    if(value_path == "exceed-bytes")
    {
        exceed_bytes.yfilter = yfilter;
    }
    if(value_path == "exceed-packets")
    {
        exceed_packets.yfilter = yfilter;
    }
    if(value_path == "exceed-rate")
    {
        exceed_rate.yfilter = yfilter;
    }
    if(value_path == "parent-drop-bytes")
    {
        parent_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "parent-drop-packets")
    {
        parent_drop_packets.yfilter = yfilter;
    }
    if(value_path == "violate-bytes")
    {
        violate_bytes.yfilter = yfilter;
    }
    if(value_path == "violate-packets")
    {
        violate_packets.yfilter = yfilter;
    }
    if(value_path == "violate-rate")
    {
        violate_rate.yfilter = yfilter;
    }
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "color-class-stats" || name == "conform-bytes" || name == "conform-packets" || name == "conform-rate" || name == "drop-bytes" || name == "drop-packets" || name == "exceed-bytes" || name == "exceed-packets" || name == "exceed-rate" || name == "parent-drop-bytes" || name == "parent-drop-packets" || name == "violate-bytes" || name == "violate-packets" || name == "violate-rate")
        return true;
    return false;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats::ColorClassStats()
    :
    conform_class_conform_bytes{YType::uint64, "conform-class-conform-bytes"},
    conform_class_conform_packets{YType::uint64, "conform-class-conform-packets"},
    conform_class_conform_rate{YType::uint32, "conform-class-conform-rate"},
    conform_class_exceed_bytes{YType::uint64, "conform-class-exceed-bytes"},
    conform_class_exceed_packets{YType::uint64, "conform-class-exceed-packets"},
    conform_class_exceed_rate{YType::uint32, "conform-class-exceed-rate"},
    conform_class_violate_bytes{YType::uint64, "conform-class-violate-bytes"},
    conform_class_violate_packets{YType::uint64, "conform-class-violate-packets"},
    conform_class_violate_rate{YType::uint32, "conform-class-violate-rate"},
    exceed_class_exceed_bytes{YType::uint64, "exceed-class-exceed-bytes"},
    exceed_class_exceed_packets{YType::uint64, "exceed-class-exceed-packets"},
    exceed_class_exceed_rate{YType::uint32, "exceed-class-exceed-rate"},
    exceed_class_violate_bytes{YType::uint64, "exceed-class-violate-bytes"},
    exceed_class_violate_packets{YType::uint64, "exceed-class-violate-packets"},
    exceed_class_violate_rate{YType::uint32, "exceed-class-violate-rate"},
    violate_class_violate_bytes{YType::uint64, "violate-class-violate-bytes"},
    violate_class_violate_packets{YType::uint64, "violate-class-violate-packets"},
    violate_class_violate_rate{YType::uint32, "violate-class-violate-rate"}
{

    yang_name = "color-class-stats"; yang_parent_name = "police-stats-array"; is_top_level_class = false; has_list_ancestor = true;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats::~ColorClassStats()
{
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats::has_data() const
{
    return conform_class_conform_bytes.is_set
	|| conform_class_conform_packets.is_set
	|| conform_class_conform_rate.is_set
	|| conform_class_exceed_bytes.is_set
	|| conform_class_exceed_packets.is_set
	|| conform_class_exceed_rate.is_set
	|| conform_class_violate_bytes.is_set
	|| conform_class_violate_packets.is_set
	|| conform_class_violate_rate.is_set
	|| exceed_class_exceed_bytes.is_set
	|| exceed_class_exceed_packets.is_set
	|| exceed_class_exceed_rate.is_set
	|| exceed_class_violate_bytes.is_set
	|| exceed_class_violate_packets.is_set
	|| exceed_class_violate_rate.is_set
	|| violate_class_violate_bytes.is_set
	|| violate_class_violate_packets.is_set
	|| violate_class_violate_rate.is_set;
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(conform_class_conform_bytes.yfilter)
	|| ydk::is_set(conform_class_conform_packets.yfilter)
	|| ydk::is_set(conform_class_conform_rate.yfilter)
	|| ydk::is_set(conform_class_exceed_bytes.yfilter)
	|| ydk::is_set(conform_class_exceed_packets.yfilter)
	|| ydk::is_set(conform_class_exceed_rate.yfilter)
	|| ydk::is_set(conform_class_violate_bytes.yfilter)
	|| ydk::is_set(conform_class_violate_packets.yfilter)
	|| ydk::is_set(conform_class_violate_rate.yfilter)
	|| ydk::is_set(exceed_class_exceed_bytes.yfilter)
	|| ydk::is_set(exceed_class_exceed_packets.yfilter)
	|| ydk::is_set(exceed_class_exceed_rate.yfilter)
	|| ydk::is_set(exceed_class_violate_bytes.yfilter)
	|| ydk::is_set(exceed_class_violate_packets.yfilter)
	|| ydk::is_set(exceed_class_violate_rate.yfilter)
	|| ydk::is_set(violate_class_violate_bytes.yfilter)
	|| ydk::is_set(violate_class_violate_packets.yfilter)
	|| ydk::is_set(violate_class_violate_rate.yfilter);
}

std::string Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "color-class-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform_class_conform_bytes.is_set || is_set(conform_class_conform_bytes.yfilter)) leaf_name_data.push_back(conform_class_conform_bytes.get_name_leafdata());
    if (conform_class_conform_packets.is_set || is_set(conform_class_conform_packets.yfilter)) leaf_name_data.push_back(conform_class_conform_packets.get_name_leafdata());
    if (conform_class_conform_rate.is_set || is_set(conform_class_conform_rate.yfilter)) leaf_name_data.push_back(conform_class_conform_rate.get_name_leafdata());
    if (conform_class_exceed_bytes.is_set || is_set(conform_class_exceed_bytes.yfilter)) leaf_name_data.push_back(conform_class_exceed_bytes.get_name_leafdata());
    if (conform_class_exceed_packets.is_set || is_set(conform_class_exceed_packets.yfilter)) leaf_name_data.push_back(conform_class_exceed_packets.get_name_leafdata());
    if (conform_class_exceed_rate.is_set || is_set(conform_class_exceed_rate.yfilter)) leaf_name_data.push_back(conform_class_exceed_rate.get_name_leafdata());
    if (conform_class_violate_bytes.is_set || is_set(conform_class_violate_bytes.yfilter)) leaf_name_data.push_back(conform_class_violate_bytes.get_name_leafdata());
    if (conform_class_violate_packets.is_set || is_set(conform_class_violate_packets.yfilter)) leaf_name_data.push_back(conform_class_violate_packets.get_name_leafdata());
    if (conform_class_violate_rate.is_set || is_set(conform_class_violate_rate.yfilter)) leaf_name_data.push_back(conform_class_violate_rate.get_name_leafdata());
    if (exceed_class_exceed_bytes.is_set || is_set(exceed_class_exceed_bytes.yfilter)) leaf_name_data.push_back(exceed_class_exceed_bytes.get_name_leafdata());
    if (exceed_class_exceed_packets.is_set || is_set(exceed_class_exceed_packets.yfilter)) leaf_name_data.push_back(exceed_class_exceed_packets.get_name_leafdata());
    if (exceed_class_exceed_rate.is_set || is_set(exceed_class_exceed_rate.yfilter)) leaf_name_data.push_back(exceed_class_exceed_rate.get_name_leafdata());
    if (exceed_class_violate_bytes.is_set || is_set(exceed_class_violate_bytes.yfilter)) leaf_name_data.push_back(exceed_class_violate_bytes.get_name_leafdata());
    if (exceed_class_violate_packets.is_set || is_set(exceed_class_violate_packets.yfilter)) leaf_name_data.push_back(exceed_class_violate_packets.get_name_leafdata());
    if (exceed_class_violate_rate.is_set || is_set(exceed_class_violate_rate.yfilter)) leaf_name_data.push_back(exceed_class_violate_rate.get_name_leafdata());
    if (violate_class_violate_bytes.is_set || is_set(violate_class_violate_bytes.yfilter)) leaf_name_data.push_back(violate_class_violate_bytes.get_name_leafdata());
    if (violate_class_violate_packets.is_set || is_set(violate_class_violate_packets.yfilter)) leaf_name_data.push_back(violate_class_violate_packets.get_name_leafdata());
    if (violate_class_violate_rate.is_set || is_set(violate_class_violate_rate.yfilter)) leaf_name_data.push_back(violate_class_violate_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "conform-class-conform-bytes")
    {
        conform_class_conform_bytes = value;
        conform_class_conform_bytes.value_namespace = name_space;
        conform_class_conform_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-class-conform-packets")
    {
        conform_class_conform_packets = value;
        conform_class_conform_packets.value_namespace = name_space;
        conform_class_conform_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-class-conform-rate")
    {
        conform_class_conform_rate = value;
        conform_class_conform_rate.value_namespace = name_space;
        conform_class_conform_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-class-exceed-bytes")
    {
        conform_class_exceed_bytes = value;
        conform_class_exceed_bytes.value_namespace = name_space;
        conform_class_exceed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-class-exceed-packets")
    {
        conform_class_exceed_packets = value;
        conform_class_exceed_packets.value_namespace = name_space;
        conform_class_exceed_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-class-exceed-rate")
    {
        conform_class_exceed_rate = value;
        conform_class_exceed_rate.value_namespace = name_space;
        conform_class_exceed_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-class-violate-bytes")
    {
        conform_class_violate_bytes = value;
        conform_class_violate_bytes.value_namespace = name_space;
        conform_class_violate_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-class-violate-packets")
    {
        conform_class_violate_packets = value;
        conform_class_violate_packets.value_namespace = name_space;
        conform_class_violate_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-class-violate-rate")
    {
        conform_class_violate_rate = value;
        conform_class_violate_rate.value_namespace = name_space;
        conform_class_violate_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-class-exceed-bytes")
    {
        exceed_class_exceed_bytes = value;
        exceed_class_exceed_bytes.value_namespace = name_space;
        exceed_class_exceed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-class-exceed-packets")
    {
        exceed_class_exceed_packets = value;
        exceed_class_exceed_packets.value_namespace = name_space;
        exceed_class_exceed_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-class-exceed-rate")
    {
        exceed_class_exceed_rate = value;
        exceed_class_exceed_rate.value_namespace = name_space;
        exceed_class_exceed_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-class-violate-bytes")
    {
        exceed_class_violate_bytes = value;
        exceed_class_violate_bytes.value_namespace = name_space;
        exceed_class_violate_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-class-violate-packets")
    {
        exceed_class_violate_packets = value;
        exceed_class_violate_packets.value_namespace = name_space;
        exceed_class_violate_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-class-violate-rate")
    {
        exceed_class_violate_rate = value;
        exceed_class_violate_rate.value_namespace = name_space;
        exceed_class_violate_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violate-class-violate-bytes")
    {
        violate_class_violate_bytes = value;
        violate_class_violate_bytes.value_namespace = name_space;
        violate_class_violate_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violate-class-violate-packets")
    {
        violate_class_violate_packets = value;
        violate_class_violate_packets.value_namespace = name_space;
        violate_class_violate_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violate-class-violate-rate")
    {
        violate_class_violate_rate = value;
        violate_class_violate_rate.value_namespace = name_space;
        violate_class_violate_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "conform-class-conform-bytes")
    {
        conform_class_conform_bytes.yfilter = yfilter;
    }
    if(value_path == "conform-class-conform-packets")
    {
        conform_class_conform_packets.yfilter = yfilter;
    }
    if(value_path == "conform-class-conform-rate")
    {
        conform_class_conform_rate.yfilter = yfilter;
    }
    if(value_path == "conform-class-exceed-bytes")
    {
        conform_class_exceed_bytes.yfilter = yfilter;
    }
    if(value_path == "conform-class-exceed-packets")
    {
        conform_class_exceed_packets.yfilter = yfilter;
    }
    if(value_path == "conform-class-exceed-rate")
    {
        conform_class_exceed_rate.yfilter = yfilter;
    }
    if(value_path == "conform-class-violate-bytes")
    {
        conform_class_violate_bytes.yfilter = yfilter;
    }
    if(value_path == "conform-class-violate-packets")
    {
        conform_class_violate_packets.yfilter = yfilter;
    }
    if(value_path == "conform-class-violate-rate")
    {
        conform_class_violate_rate.yfilter = yfilter;
    }
    if(value_path == "exceed-class-exceed-bytes")
    {
        exceed_class_exceed_bytes.yfilter = yfilter;
    }
    if(value_path == "exceed-class-exceed-packets")
    {
        exceed_class_exceed_packets.yfilter = yfilter;
    }
    if(value_path == "exceed-class-exceed-rate")
    {
        exceed_class_exceed_rate.yfilter = yfilter;
    }
    if(value_path == "exceed-class-violate-bytes")
    {
        exceed_class_violate_bytes.yfilter = yfilter;
    }
    if(value_path == "exceed-class-violate-packets")
    {
        exceed_class_violate_packets.yfilter = yfilter;
    }
    if(value_path == "exceed-class-violate-rate")
    {
        exceed_class_violate_rate.yfilter = yfilter;
    }
    if(value_path == "violate-class-violate-bytes")
    {
        violate_class_violate_bytes.yfilter = yfilter;
    }
    if(value_path == "violate-class-violate-packets")
    {
        violate_class_violate_packets.yfilter = yfilter;
    }
    if(value_path == "violate-class-violate-rate")
    {
        violate_class_violate_rate.yfilter = yfilter;
    }
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-class-conform-bytes" || name == "conform-class-conform-packets" || name == "conform-class-conform-rate" || name == "conform-class-exceed-bytes" || name == "conform-class-exceed-packets" || name == "conform-class-exceed-rate" || name == "conform-class-violate-bytes" || name == "conform-class-violate-packets" || name == "conform-class-violate-rate" || name == "exceed-class-exceed-bytes" || name == "exceed-class-exceed-packets" || name == "exceed-class-exceed-rate" || name == "exceed-class-violate-bytes" || name == "exceed-class-violate-packets" || name == "exceed-class-violate-rate" || name == "violate-class-violate-bytes" || name == "violate-class-violate-packets" || name == "violate-class-violate-rate")
        return true;
    return false;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueStatsArray()
    :
    atm_clp0_drop_bytes{YType::uint64, "atm-clp0-drop-bytes"},
    atm_clp0_drop_packets{YType::uint64, "atm-clp0-drop-packets"},
    atm_clp1_drop_bytes{YType::uint64, "atm-clp1-drop-bytes"},
    atm_clp1_drop_packets{YType::uint64, "atm-clp1-drop-packets"},
    conform_bytes{YType::uint64, "conform-bytes"},
    conform_packets{YType::uint64, "conform-packets"},
    conform_rate{YType::uint32, "conform-rate"},
    exceed_bytes{YType::uint64, "exceed-bytes"},
    exceed_packets{YType::uint64, "exceed-packets"},
    exceed_rate{YType::uint32, "exceed-rate"},
    forced_wred_stats_display{YType::boolean, "forced-wred-stats-display"},
    max_threshold_bytes{YType::uint64, "max-threshold-bytes"},
    max_threshold_packets{YType::uint64, "max-threshold-packets"},
    queue_drop_threshold{YType::uint32, "queue-drop-threshold"},
    queue_id{YType::uint32, "queue-id"},
    random_drop_bytes{YType::uint64, "random-drop-bytes"},
    random_drop_packets{YType::uint64, "random-drop-packets"},
    tail_drop_bytes{YType::uint64, "tail-drop-bytes"},
    tail_drop_packets{YType::uint64, "tail-drop-packets"}
{

    yang_name = "queue-stats-array"; yang_parent_name = "class-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::~QueueStatsArray()
{
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::has_data() const
{
    for (std::size_t index=0; index<queue_average_length.size(); index++)
    {
        if(queue_average_length[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_instance_length.size(); index++)
    {
        if(queue_instance_length[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_max_length.size(); index++)
    {
        if(queue_max_length[index]->has_data())
            return true;
    }
    return atm_clp0_drop_bytes.is_set
	|| atm_clp0_drop_packets.is_set
	|| atm_clp1_drop_bytes.is_set
	|| atm_clp1_drop_packets.is_set
	|| conform_bytes.is_set
	|| conform_packets.is_set
	|| conform_rate.is_set
	|| exceed_bytes.is_set
	|| exceed_packets.is_set
	|| exceed_rate.is_set
	|| forced_wred_stats_display.is_set
	|| max_threshold_bytes.is_set
	|| max_threshold_packets.is_set
	|| queue_drop_threshold.is_set
	|| queue_id.is_set
	|| random_drop_bytes.is_set
	|| random_drop_packets.is_set
	|| tail_drop_bytes.is_set
	|| tail_drop_packets.is_set;
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::has_operation() const
{
    for (std::size_t index=0; index<queue_average_length.size(); index++)
    {
        if(queue_average_length[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_instance_length.size(); index++)
    {
        if(queue_instance_length[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_max_length.size(); index++)
    {
        if(queue_max_length[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(atm_clp0_drop_bytes.yfilter)
	|| ydk::is_set(atm_clp0_drop_packets.yfilter)
	|| ydk::is_set(atm_clp1_drop_bytes.yfilter)
	|| ydk::is_set(atm_clp1_drop_packets.yfilter)
	|| ydk::is_set(conform_bytes.yfilter)
	|| ydk::is_set(conform_packets.yfilter)
	|| ydk::is_set(conform_rate.yfilter)
	|| ydk::is_set(exceed_bytes.yfilter)
	|| ydk::is_set(exceed_packets.yfilter)
	|| ydk::is_set(exceed_rate.yfilter)
	|| ydk::is_set(forced_wred_stats_display.yfilter)
	|| ydk::is_set(max_threshold_bytes.yfilter)
	|| ydk::is_set(max_threshold_packets.yfilter)
	|| ydk::is_set(queue_drop_threshold.yfilter)
	|| ydk::is_set(queue_id.yfilter)
	|| ydk::is_set(random_drop_bytes.yfilter)
	|| ydk::is_set(random_drop_packets.yfilter)
	|| ydk::is_set(tail_drop_bytes.yfilter)
	|| ydk::is_set(tail_drop_packets.yfilter);
}

std::string Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-stats-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_clp0_drop_bytes.is_set || is_set(atm_clp0_drop_bytes.yfilter)) leaf_name_data.push_back(atm_clp0_drop_bytes.get_name_leafdata());
    if (atm_clp0_drop_packets.is_set || is_set(atm_clp0_drop_packets.yfilter)) leaf_name_data.push_back(atm_clp0_drop_packets.get_name_leafdata());
    if (atm_clp1_drop_bytes.is_set || is_set(atm_clp1_drop_bytes.yfilter)) leaf_name_data.push_back(atm_clp1_drop_bytes.get_name_leafdata());
    if (atm_clp1_drop_packets.is_set || is_set(atm_clp1_drop_packets.yfilter)) leaf_name_data.push_back(atm_clp1_drop_packets.get_name_leafdata());
    if (conform_bytes.is_set || is_set(conform_bytes.yfilter)) leaf_name_data.push_back(conform_bytes.get_name_leafdata());
    if (conform_packets.is_set || is_set(conform_packets.yfilter)) leaf_name_data.push_back(conform_packets.get_name_leafdata());
    if (conform_rate.is_set || is_set(conform_rate.yfilter)) leaf_name_data.push_back(conform_rate.get_name_leafdata());
    if (exceed_bytes.is_set || is_set(exceed_bytes.yfilter)) leaf_name_data.push_back(exceed_bytes.get_name_leafdata());
    if (exceed_packets.is_set || is_set(exceed_packets.yfilter)) leaf_name_data.push_back(exceed_packets.get_name_leafdata());
    if (exceed_rate.is_set || is_set(exceed_rate.yfilter)) leaf_name_data.push_back(exceed_rate.get_name_leafdata());
    if (forced_wred_stats_display.is_set || is_set(forced_wred_stats_display.yfilter)) leaf_name_data.push_back(forced_wred_stats_display.get_name_leafdata());
    if (max_threshold_bytes.is_set || is_set(max_threshold_bytes.yfilter)) leaf_name_data.push_back(max_threshold_bytes.get_name_leafdata());
    if (max_threshold_packets.is_set || is_set(max_threshold_packets.yfilter)) leaf_name_data.push_back(max_threshold_packets.get_name_leafdata());
    if (queue_drop_threshold.is_set || is_set(queue_drop_threshold.yfilter)) leaf_name_data.push_back(queue_drop_threshold.get_name_leafdata());
    if (queue_id.is_set || is_set(queue_id.yfilter)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (random_drop_bytes.is_set || is_set(random_drop_bytes.yfilter)) leaf_name_data.push_back(random_drop_bytes.get_name_leafdata());
    if (random_drop_packets.is_set || is_set(random_drop_packets.yfilter)) leaf_name_data.push_back(random_drop_packets.get_name_leafdata());
    if (tail_drop_bytes.is_set || is_set(tail_drop_bytes.yfilter)) leaf_name_data.push_back(tail_drop_bytes.get_name_leafdata());
    if (tail_drop_packets.is_set || is_set(tail_drop_packets.yfilter)) leaf_name_data.push_back(tail_drop_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue-average-length")
    {
        for(auto const & c : queue_average_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength>();
        c->parent = this;
        queue_average_length.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-instance-length")
    {
        for(auto const & c : queue_instance_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength>();
        c->parent = this;
        queue_instance_length.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-max-length")
    {
        for(auto const & c : queue_max_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength>();
        c->parent = this;
        queue_max_length.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : queue_average_length)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_instance_length)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_max_length)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "atm-clp0-drop-bytes")
    {
        atm_clp0_drop_bytes = value;
        atm_clp0_drop_bytes.value_namespace = name_space;
        atm_clp0_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm-clp0-drop-packets")
    {
        atm_clp0_drop_packets = value;
        atm_clp0_drop_packets.value_namespace = name_space;
        atm_clp0_drop_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm-clp1-drop-bytes")
    {
        atm_clp1_drop_bytes = value;
        atm_clp1_drop_bytes.value_namespace = name_space;
        atm_clp1_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm-clp1-drop-packets")
    {
        atm_clp1_drop_packets = value;
        atm_clp1_drop_packets.value_namespace = name_space;
        atm_clp1_drop_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-bytes")
    {
        conform_bytes = value;
        conform_bytes.value_namespace = name_space;
        conform_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-packets")
    {
        conform_packets = value;
        conform_packets.value_namespace = name_space;
        conform_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-rate")
    {
        conform_rate = value;
        conform_rate.value_namespace = name_space;
        conform_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-bytes")
    {
        exceed_bytes = value;
        exceed_bytes.value_namespace = name_space;
        exceed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-packets")
    {
        exceed_packets = value;
        exceed_packets.value_namespace = name_space;
        exceed_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-rate")
    {
        exceed_rate = value;
        exceed_rate.value_namespace = name_space;
        exceed_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forced-wred-stats-display")
    {
        forced_wred_stats_display = value;
        forced_wred_stats_display.value_namespace = name_space;
        forced_wred_stats_display.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-threshold-bytes")
    {
        max_threshold_bytes = value;
        max_threshold_bytes.value_namespace = name_space;
        max_threshold_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-threshold-packets")
    {
        max_threshold_packets = value;
        max_threshold_packets.value_namespace = name_space;
        max_threshold_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-drop-threshold")
    {
        queue_drop_threshold = value;
        queue_drop_threshold.value_namespace = name_space;
        queue_drop_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-id")
    {
        queue_id = value;
        queue_id.value_namespace = name_space;
        queue_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "random-drop-bytes")
    {
        random_drop_bytes = value;
        random_drop_bytes.value_namespace = name_space;
        random_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "random-drop-packets")
    {
        random_drop_packets = value;
        random_drop_packets.value_namespace = name_space;
        random_drop_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail-drop-bytes")
    {
        tail_drop_bytes = value;
        tail_drop_bytes.value_namespace = name_space;
        tail_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail-drop-packets")
    {
        tail_drop_packets = value;
        tail_drop_packets.value_namespace = name_space;
        tail_drop_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "atm-clp0-drop-bytes")
    {
        atm_clp0_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "atm-clp0-drop-packets")
    {
        atm_clp0_drop_packets.yfilter = yfilter;
    }
    if(value_path == "atm-clp1-drop-bytes")
    {
        atm_clp1_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "atm-clp1-drop-packets")
    {
        atm_clp1_drop_packets.yfilter = yfilter;
    }
    if(value_path == "conform-bytes")
    {
        conform_bytes.yfilter = yfilter;
    }
    if(value_path == "conform-packets")
    {
        conform_packets.yfilter = yfilter;
    }
    if(value_path == "conform-rate")
    {
        conform_rate.yfilter = yfilter;
    }
    if(value_path == "exceed-bytes")
    {
        exceed_bytes.yfilter = yfilter;
    }
    if(value_path == "exceed-packets")
    {
        exceed_packets.yfilter = yfilter;
    }
    if(value_path == "exceed-rate")
    {
        exceed_rate.yfilter = yfilter;
    }
    if(value_path == "forced-wred-stats-display")
    {
        forced_wred_stats_display.yfilter = yfilter;
    }
    if(value_path == "max-threshold-bytes")
    {
        max_threshold_bytes.yfilter = yfilter;
    }
    if(value_path == "max-threshold-packets")
    {
        max_threshold_packets.yfilter = yfilter;
    }
    if(value_path == "queue-drop-threshold")
    {
        queue_drop_threshold.yfilter = yfilter;
    }
    if(value_path == "queue-id")
    {
        queue_id.yfilter = yfilter;
    }
    if(value_path == "random-drop-bytes")
    {
        random_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "random-drop-packets")
    {
        random_drop_packets.yfilter = yfilter;
    }
    if(value_path == "tail-drop-bytes")
    {
        tail_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "tail-drop-packets")
    {
        tail_drop_packets.yfilter = yfilter;
    }
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue-average-length" || name == "queue-instance-length" || name == "queue-max-length" || name == "atm-clp0-drop-bytes" || name == "atm-clp0-drop-packets" || name == "atm-clp1-drop-bytes" || name == "atm-clp1-drop-packets" || name == "conform-bytes" || name == "conform-packets" || name == "conform-rate" || name == "exceed-bytes" || name == "exceed-packets" || name == "exceed-rate" || name == "forced-wred-stats-display" || name == "max-threshold-bytes" || name == "max-threshold-packets" || name == "queue-drop-threshold" || name == "queue-id" || name == "random-drop-bytes" || name == "random-drop-packets" || name == "tail-drop-bytes" || name == "tail-drop-packets")
        return true;
    return false;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength::QueueAverageLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "queue-average-length"; yang_parent_name = "queue-stats-array"; is_top_level_class = false; has_list_ancestor = true;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength::~QueueAverageLength()
{
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-average-length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength::QueueInstanceLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "queue-instance-length"; yang_parent_name = "queue-stats-array"; is_top_level_class = false; has_list_ancestor = true;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength::~QueueInstanceLength()
{
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-instance-length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength::QueueMaxLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "queue-max-length"; yang_parent_name = "queue-stats-array"; is_top_level_class = false; has_list_ancestor = true;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength::~QueueMaxLength()
{
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-max-length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::WredStatsArray()
    :
    max_threshold_bytes{YType::uint64, "max-threshold-bytes"},
    max_threshold_packets{YType::uint64, "max-threshold-packets"},
    profile_title{YType::str, "profile-title"},
    random_drop_bytes{YType::uint64, "random-drop-bytes"},
    random_drop_packets{YType::uint64, "random-drop-packets"},
    red_ecn_marked_bytes{YType::uint64, "red-ecn-marked-bytes"},
    red_ecn_marked_packets{YType::uint64, "red-ecn-marked-packets"},
    red_transmit_bytes{YType::uint64, "red-transmit-bytes"},
    red_transmit_packets{YType::uint64, "red-transmit-packets"}
{

    yang_name = "wred-stats-array"; yang_parent_name = "class-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::~WredStatsArray()
{
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::has_data() const
{
    for (std::size_t index=0; index<red_label.size(); index++)
    {
        if(red_label[index]->has_data())
            return true;
    }
    return max_threshold_bytes.is_set
	|| max_threshold_packets.is_set
	|| profile_title.is_set
	|| random_drop_bytes.is_set
	|| random_drop_packets.is_set
	|| red_ecn_marked_bytes.is_set
	|| red_ecn_marked_packets.is_set
	|| red_transmit_bytes.is_set
	|| red_transmit_packets.is_set;
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::has_operation() const
{
    for (std::size_t index=0; index<red_label.size(); index++)
    {
        if(red_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(max_threshold_bytes.yfilter)
	|| ydk::is_set(max_threshold_packets.yfilter)
	|| ydk::is_set(profile_title.yfilter)
	|| ydk::is_set(random_drop_bytes.yfilter)
	|| ydk::is_set(random_drop_packets.yfilter)
	|| ydk::is_set(red_ecn_marked_bytes.yfilter)
	|| ydk::is_set(red_ecn_marked_packets.yfilter)
	|| ydk::is_set(red_transmit_bytes.yfilter)
	|| ydk::is_set(red_transmit_packets.yfilter);
}

std::string Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-stats-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_threshold_bytes.is_set || is_set(max_threshold_bytes.yfilter)) leaf_name_data.push_back(max_threshold_bytes.get_name_leafdata());
    if (max_threshold_packets.is_set || is_set(max_threshold_packets.yfilter)) leaf_name_data.push_back(max_threshold_packets.get_name_leafdata());
    if (profile_title.is_set || is_set(profile_title.yfilter)) leaf_name_data.push_back(profile_title.get_name_leafdata());
    if (random_drop_bytes.is_set || is_set(random_drop_bytes.yfilter)) leaf_name_data.push_back(random_drop_bytes.get_name_leafdata());
    if (random_drop_packets.is_set || is_set(random_drop_packets.yfilter)) leaf_name_data.push_back(random_drop_packets.get_name_leafdata());
    if (red_ecn_marked_bytes.is_set || is_set(red_ecn_marked_bytes.yfilter)) leaf_name_data.push_back(red_ecn_marked_bytes.get_name_leafdata());
    if (red_ecn_marked_packets.is_set || is_set(red_ecn_marked_packets.yfilter)) leaf_name_data.push_back(red_ecn_marked_packets.get_name_leafdata());
    if (red_transmit_bytes.is_set || is_set(red_transmit_bytes.yfilter)) leaf_name_data.push_back(red_transmit_bytes.get_name_leafdata());
    if (red_transmit_packets.is_set || is_set(red_transmit_packets.yfilter)) leaf_name_data.push_back(red_transmit_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "red-label")
    {
        for(auto const & c : red_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel>();
        c->parent = this;
        red_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : red_label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-threshold-bytes")
    {
        max_threshold_bytes = value;
        max_threshold_bytes.value_namespace = name_space;
        max_threshold_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-threshold-packets")
    {
        max_threshold_packets = value;
        max_threshold_packets.value_namespace = name_space;
        max_threshold_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-title")
    {
        profile_title = value;
        profile_title.value_namespace = name_space;
        profile_title.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "random-drop-bytes")
    {
        random_drop_bytes = value;
        random_drop_bytes.value_namespace = name_space;
        random_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "random-drop-packets")
    {
        random_drop_packets = value;
        random_drop_packets.value_namespace = name_space;
        random_drop_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "red-ecn-marked-bytes")
    {
        red_ecn_marked_bytes = value;
        red_ecn_marked_bytes.value_namespace = name_space;
        red_ecn_marked_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "red-ecn-marked-packets")
    {
        red_ecn_marked_packets = value;
        red_ecn_marked_packets.value_namespace = name_space;
        red_ecn_marked_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "red-transmit-bytes")
    {
        red_transmit_bytes = value;
        red_transmit_bytes.value_namespace = name_space;
        red_transmit_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "red-transmit-packets")
    {
        red_transmit_packets = value;
        red_transmit_packets.value_namespace = name_space;
        red_transmit_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-threshold-bytes")
    {
        max_threshold_bytes.yfilter = yfilter;
    }
    if(value_path == "max-threshold-packets")
    {
        max_threshold_packets.yfilter = yfilter;
    }
    if(value_path == "profile-title")
    {
        profile_title.yfilter = yfilter;
    }
    if(value_path == "random-drop-bytes")
    {
        random_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "random-drop-packets")
    {
        random_drop_packets.yfilter = yfilter;
    }
    if(value_path == "red-ecn-marked-bytes")
    {
        red_ecn_marked_bytes.yfilter = yfilter;
    }
    if(value_path == "red-ecn-marked-packets")
    {
        red_ecn_marked_packets.yfilter = yfilter;
    }
    if(value_path == "red-transmit-bytes")
    {
        red_transmit_bytes.yfilter = yfilter;
    }
    if(value_path == "red-transmit-packets")
    {
        red_transmit_packets.yfilter = yfilter;
    }
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "red-label" || name == "max-threshold-bytes" || name == "max-threshold-packets" || name == "profile-title" || name == "random-drop-bytes" || name == "random-drop-packets" || name == "red-ecn-marked-bytes" || name == "red-ecn-marked-packets" || name == "red-transmit-bytes" || name == "red-transmit-packets")
        return true;
    return false;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel::RedLabel()
    :
    value_{YType::uint8, "value"},
    wred_type{YType::enumeration, "wred-type"}
{

    yang_name = "red-label"; yang_parent_name = "wred-stats-array"; is_top_level_class = false; has_list_ancestor = true;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel::~RedLabel()
{
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel::has_data() const
{
    return value_.is_set
	|| wred_type.is_set;
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(wred_type.yfilter);
}

std::string Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "red-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (wred_type.is_set || is_set(wred_type.yfilter)) leaf_name_data.push_back(wred_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-type")
    {
        wred_type = value;
        wred_type.value_namespace = name_space;
        wred_type.value_namespace_prefix = name_space_prefix;
    }
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "wred-type")
    {
        wred_type.yfilter = yfilter;
    }
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "wred-type")
        return true;
    return false;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::GeneralStats::GeneralStats()
    :
    match_data_rate{YType::uint32, "match-data-rate"},
    pre_policy_matched_bytes{YType::uint64, "pre-policy-matched-bytes"},
    pre_policy_matched_packets{YType::uint64, "pre-policy-matched-packets"},
    total_drop_bytes{YType::uint64, "total-drop-bytes"},
    total_drop_packets{YType::uint64, "total-drop-packets"},
    total_drop_rate{YType::uint32, "total-drop-rate"},
    total_transmit_rate{YType::uint32, "total-transmit-rate"},
    transmit_bytes{YType::uint64, "transmit-bytes"},
    transmit_packets{YType::uint64, "transmit-packets"}
{

    yang_name = "general-stats"; yang_parent_name = "class-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::GeneralStats::~GeneralStats()
{
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::GeneralStats::has_data() const
{
    return match_data_rate.is_set
	|| pre_policy_matched_bytes.is_set
	|| pre_policy_matched_packets.is_set
	|| total_drop_bytes.is_set
	|| total_drop_packets.is_set
	|| total_drop_rate.is_set
	|| total_transmit_rate.is_set
	|| transmit_bytes.is_set
	|| transmit_packets.is_set;
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::GeneralStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(match_data_rate.yfilter)
	|| ydk::is_set(pre_policy_matched_bytes.yfilter)
	|| ydk::is_set(pre_policy_matched_packets.yfilter)
	|| ydk::is_set(total_drop_bytes.yfilter)
	|| ydk::is_set(total_drop_packets.yfilter)
	|| ydk::is_set(total_drop_rate.yfilter)
	|| ydk::is_set(total_transmit_rate.yfilter)
	|| ydk::is_set(transmit_bytes.yfilter)
	|| ydk::is_set(transmit_packets.yfilter);
}

std::string Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::GeneralStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::GeneralStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_data_rate.is_set || is_set(match_data_rate.yfilter)) leaf_name_data.push_back(match_data_rate.get_name_leafdata());
    if (pre_policy_matched_bytes.is_set || is_set(pre_policy_matched_bytes.yfilter)) leaf_name_data.push_back(pre_policy_matched_bytes.get_name_leafdata());
    if (pre_policy_matched_packets.is_set || is_set(pre_policy_matched_packets.yfilter)) leaf_name_data.push_back(pre_policy_matched_packets.get_name_leafdata());
    if (total_drop_bytes.is_set || is_set(total_drop_bytes.yfilter)) leaf_name_data.push_back(total_drop_bytes.get_name_leafdata());
    if (total_drop_packets.is_set || is_set(total_drop_packets.yfilter)) leaf_name_data.push_back(total_drop_packets.get_name_leafdata());
    if (total_drop_rate.is_set || is_set(total_drop_rate.yfilter)) leaf_name_data.push_back(total_drop_rate.get_name_leafdata());
    if (total_transmit_rate.is_set || is_set(total_transmit_rate.yfilter)) leaf_name_data.push_back(total_transmit_rate.get_name_leafdata());
    if (transmit_bytes.is_set || is_set(transmit_bytes.yfilter)) leaf_name_data.push_back(transmit_bytes.get_name_leafdata());
    if (transmit_packets.is_set || is_set(transmit_packets.yfilter)) leaf_name_data.push_back(transmit_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::GeneralStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::GeneralStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::GeneralStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "match-data-rate")
    {
        match_data_rate = value;
        match_data_rate.value_namespace = name_space;
        match_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-policy-matched-bytes")
    {
        pre_policy_matched_bytes = value;
        pre_policy_matched_bytes.value_namespace = name_space;
        pre_policy_matched_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-policy-matched-packets")
    {
        pre_policy_matched_packets = value;
        pre_policy_matched_packets.value_namespace = name_space;
        pre_policy_matched_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-drop-bytes")
    {
        total_drop_bytes = value;
        total_drop_bytes.value_namespace = name_space;
        total_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-drop-packets")
    {
        total_drop_packets = value;
        total_drop_packets.value_namespace = name_space;
        total_drop_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-drop-rate")
    {
        total_drop_rate = value;
        total_drop_rate.value_namespace = name_space;
        total_drop_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-transmit-rate")
    {
        total_transmit_rate = value;
        total_transmit_rate.value_namespace = name_space;
        total_transmit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-bytes")
    {
        transmit_bytes = value;
        transmit_bytes.value_namespace = name_space;
        transmit_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-packets")
    {
        transmit_packets = value;
        transmit_packets.value_namespace = name_space;
        transmit_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::GeneralStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "match-data-rate")
    {
        match_data_rate.yfilter = yfilter;
    }
    if(value_path == "pre-policy-matched-bytes")
    {
        pre_policy_matched_bytes.yfilter = yfilter;
    }
    if(value_path == "pre-policy-matched-packets")
    {
        pre_policy_matched_packets.yfilter = yfilter;
    }
    if(value_path == "total-drop-bytes")
    {
        total_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "total-drop-packets")
    {
        total_drop_packets.yfilter = yfilter;
    }
    if(value_path == "total-drop-rate")
    {
        total_drop_rate.yfilter = yfilter;
    }
    if(value_path == "total-transmit-rate")
    {
        total_transmit_rate.yfilter = yfilter;
    }
    if(value_path == "transmit-bytes")
    {
        transmit_bytes.yfilter = yfilter;
    }
    if(value_path == "transmit-packets")
    {
        transmit_packets.yfilter = yfilter;
    }
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::GeneralStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-data-rate" || name == "pre-policy-matched-bytes" || name == "pre-policy-matched-packets" || name == "total-drop-bytes" || name == "total-drop-packets" || name == "total-drop-rate" || name == "total-transmit-rate" || name == "transmit-bytes" || name == "transmit-packets")
        return true;
    return false;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::IphcStats::IphcStats()
    :
    non_tcp_bytes_saved{YType::uint64, "non-tcp-bytes-saved"},
    non_tcp_bytes_sent_rate{YType::uint32, "non-tcp-bytes-sent-rate"},
    non_tcp_compressed_packets_out{YType::uint64, "non-tcp-compressed-packets-out"},
    non_tcp_full_header_packets_out{YType::uint64, "non-tcp-full-header-packets-out"},
    non_tcp_total_out_bytes{YType::uint64, "non-tcp-total-out-bytes"},
    non_tcp_total_out_packets{YType::uint64, "non-tcp-total-out-packets"},
    tcp_bytes_saved{YType::uint64, "tcp-bytes-saved"},
    tcp_bytes_sent_rate{YType::uint32, "tcp-bytes-sent-rate"},
    tcp_compressed_packets_out{YType::uint64, "tcp-compressed-packets-out"},
    tcp_full_header_packets_out{YType::uint64, "tcp-full-header-packets-out"},
    tcp_total_out_bytes{YType::uint64, "tcp-total-out-bytes"},
    tcp_total_out_packets{YType::uint64, "tcp-total-out-packets"}
{

    yang_name = "iphc-stats"; yang_parent_name = "class-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::IphcStats::~IphcStats()
{
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::IphcStats::has_data() const
{
    return non_tcp_bytes_saved.is_set
	|| non_tcp_bytes_sent_rate.is_set
	|| non_tcp_compressed_packets_out.is_set
	|| non_tcp_full_header_packets_out.is_set
	|| non_tcp_total_out_bytes.is_set
	|| non_tcp_total_out_packets.is_set
	|| tcp_bytes_saved.is_set
	|| tcp_bytes_sent_rate.is_set
	|| tcp_compressed_packets_out.is_set
	|| tcp_full_header_packets_out.is_set
	|| tcp_total_out_bytes.is_set
	|| tcp_total_out_packets.is_set;
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::IphcStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_tcp_bytes_saved.yfilter)
	|| ydk::is_set(non_tcp_bytes_sent_rate.yfilter)
	|| ydk::is_set(non_tcp_compressed_packets_out.yfilter)
	|| ydk::is_set(non_tcp_full_header_packets_out.yfilter)
	|| ydk::is_set(non_tcp_total_out_bytes.yfilter)
	|| ydk::is_set(non_tcp_total_out_packets.yfilter)
	|| ydk::is_set(tcp_bytes_saved.yfilter)
	|| ydk::is_set(tcp_bytes_sent_rate.yfilter)
	|| ydk::is_set(tcp_compressed_packets_out.yfilter)
	|| ydk::is_set(tcp_full_header_packets_out.yfilter)
	|| ydk::is_set(tcp_total_out_bytes.yfilter)
	|| ydk::is_set(tcp_total_out_packets.yfilter);
}

std::string Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::IphcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iphc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::IphcStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_tcp_bytes_saved.is_set || is_set(non_tcp_bytes_saved.yfilter)) leaf_name_data.push_back(non_tcp_bytes_saved.get_name_leafdata());
    if (non_tcp_bytes_sent_rate.is_set || is_set(non_tcp_bytes_sent_rate.yfilter)) leaf_name_data.push_back(non_tcp_bytes_sent_rate.get_name_leafdata());
    if (non_tcp_compressed_packets_out.is_set || is_set(non_tcp_compressed_packets_out.yfilter)) leaf_name_data.push_back(non_tcp_compressed_packets_out.get_name_leafdata());
    if (non_tcp_full_header_packets_out.is_set || is_set(non_tcp_full_header_packets_out.yfilter)) leaf_name_data.push_back(non_tcp_full_header_packets_out.get_name_leafdata());
    if (non_tcp_total_out_bytes.is_set || is_set(non_tcp_total_out_bytes.yfilter)) leaf_name_data.push_back(non_tcp_total_out_bytes.get_name_leafdata());
    if (non_tcp_total_out_packets.is_set || is_set(non_tcp_total_out_packets.yfilter)) leaf_name_data.push_back(non_tcp_total_out_packets.get_name_leafdata());
    if (tcp_bytes_saved.is_set || is_set(tcp_bytes_saved.yfilter)) leaf_name_data.push_back(tcp_bytes_saved.get_name_leafdata());
    if (tcp_bytes_sent_rate.is_set || is_set(tcp_bytes_sent_rate.yfilter)) leaf_name_data.push_back(tcp_bytes_sent_rate.get_name_leafdata());
    if (tcp_compressed_packets_out.is_set || is_set(tcp_compressed_packets_out.yfilter)) leaf_name_data.push_back(tcp_compressed_packets_out.get_name_leafdata());
    if (tcp_full_header_packets_out.is_set || is_set(tcp_full_header_packets_out.yfilter)) leaf_name_data.push_back(tcp_full_header_packets_out.get_name_leafdata());
    if (tcp_total_out_bytes.is_set || is_set(tcp_total_out_bytes.yfilter)) leaf_name_data.push_back(tcp_total_out_bytes.get_name_leafdata());
    if (tcp_total_out_packets.is_set || is_set(tcp_total_out_packets.yfilter)) leaf_name_data.push_back(tcp_total_out_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::IphcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::IphcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::IphcStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-tcp-bytes-saved")
    {
        non_tcp_bytes_saved = value;
        non_tcp_bytes_saved.value_namespace = name_space;
        non_tcp_bytes_saved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-tcp-bytes-sent-rate")
    {
        non_tcp_bytes_sent_rate = value;
        non_tcp_bytes_sent_rate.value_namespace = name_space;
        non_tcp_bytes_sent_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-tcp-compressed-packets-out")
    {
        non_tcp_compressed_packets_out = value;
        non_tcp_compressed_packets_out.value_namespace = name_space;
        non_tcp_compressed_packets_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-tcp-full-header-packets-out")
    {
        non_tcp_full_header_packets_out = value;
        non_tcp_full_header_packets_out.value_namespace = name_space;
        non_tcp_full_header_packets_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-tcp-total-out-bytes")
    {
        non_tcp_total_out_bytes = value;
        non_tcp_total_out_bytes.value_namespace = name_space;
        non_tcp_total_out_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-tcp-total-out-packets")
    {
        non_tcp_total_out_packets = value;
        non_tcp_total_out_packets.value_namespace = name_space;
        non_tcp_total_out_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-bytes-saved")
    {
        tcp_bytes_saved = value;
        tcp_bytes_saved.value_namespace = name_space;
        tcp_bytes_saved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-bytes-sent-rate")
    {
        tcp_bytes_sent_rate = value;
        tcp_bytes_sent_rate.value_namespace = name_space;
        tcp_bytes_sent_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-compressed-packets-out")
    {
        tcp_compressed_packets_out = value;
        tcp_compressed_packets_out.value_namespace = name_space;
        tcp_compressed_packets_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-full-header-packets-out")
    {
        tcp_full_header_packets_out = value;
        tcp_full_header_packets_out.value_namespace = name_space;
        tcp_full_header_packets_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-total-out-bytes")
    {
        tcp_total_out_bytes = value;
        tcp_total_out_bytes.value_namespace = name_space;
        tcp_total_out_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-total-out-packets")
    {
        tcp_total_out_packets = value;
        tcp_total_out_packets.value_namespace = name_space;
        tcp_total_out_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::IphcStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-tcp-bytes-saved")
    {
        non_tcp_bytes_saved.yfilter = yfilter;
    }
    if(value_path == "non-tcp-bytes-sent-rate")
    {
        non_tcp_bytes_sent_rate.yfilter = yfilter;
    }
    if(value_path == "non-tcp-compressed-packets-out")
    {
        non_tcp_compressed_packets_out.yfilter = yfilter;
    }
    if(value_path == "non-tcp-full-header-packets-out")
    {
        non_tcp_full_header_packets_out.yfilter = yfilter;
    }
    if(value_path == "non-tcp-total-out-bytes")
    {
        non_tcp_total_out_bytes.yfilter = yfilter;
    }
    if(value_path == "non-tcp-total-out-packets")
    {
        non_tcp_total_out_packets.yfilter = yfilter;
    }
    if(value_path == "tcp-bytes-saved")
    {
        tcp_bytes_saved.yfilter = yfilter;
    }
    if(value_path == "tcp-bytes-sent-rate")
    {
        tcp_bytes_sent_rate.yfilter = yfilter;
    }
    if(value_path == "tcp-compressed-packets-out")
    {
        tcp_compressed_packets_out.yfilter = yfilter;
    }
    if(value_path == "tcp-full-header-packets-out")
    {
        tcp_full_header_packets_out.yfilter = yfilter;
    }
    if(value_path == "tcp-total-out-bytes")
    {
        tcp_total_out_bytes.yfilter = yfilter;
    }
    if(value_path == "tcp-total-out-packets")
    {
        tcp_total_out_packets.yfilter = yfilter;
    }
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::IphcStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-tcp-bytes-saved" || name == "non-tcp-bytes-sent-rate" || name == "non-tcp-compressed-packets-out" || name == "non-tcp-full-header-packets-out" || name == "non-tcp-total-out-bytes" || name == "non-tcp-total-out-packets" || name == "tcp-bytes-saved" || name == "tcp-bytes-sent-rate" || name == "tcp-compressed-packets-out" || name == "tcp-full-header-packets-out" || name == "tcp-total-out-bytes" || name == "tcp-total-out-packets")
        return true;
    return false;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::PoliceStatsArray()
    :
    conform_bytes{YType::uint64, "conform-bytes"},
    conform_packets{YType::uint64, "conform-packets"},
    conform_rate{YType::uint32, "conform-rate"},
    drop_bytes{YType::uint64, "drop-bytes"},
    drop_packets{YType::uint64, "drop-packets"},
    exceed_bytes{YType::uint64, "exceed-bytes"},
    exceed_packets{YType::uint64, "exceed-packets"},
    exceed_rate{YType::uint32, "exceed-rate"},
    parent_drop_bytes{YType::uint64, "parent-drop-bytes"},
    parent_drop_packets{YType::uint64, "parent-drop-packets"},
    violate_bytes{YType::uint64, "violate-bytes"},
    violate_packets{YType::uint64, "violate-packets"},
    violate_rate{YType::uint32, "violate-rate"}
    	,
    color_class_stats(std::make_shared<Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats>())
{
    color_class_stats->parent = this;

    yang_name = "police-stats-array"; yang_parent_name = "class-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::~PoliceStatsArray()
{
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::has_data() const
{
    return conform_bytes.is_set
	|| conform_packets.is_set
	|| conform_rate.is_set
	|| drop_bytes.is_set
	|| drop_packets.is_set
	|| exceed_bytes.is_set
	|| exceed_packets.is_set
	|| exceed_rate.is_set
	|| parent_drop_bytes.is_set
	|| parent_drop_packets.is_set
	|| violate_bytes.is_set
	|| violate_packets.is_set
	|| violate_rate.is_set
	|| (color_class_stats !=  nullptr && color_class_stats->has_data());
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(conform_bytes.yfilter)
	|| ydk::is_set(conform_packets.yfilter)
	|| ydk::is_set(conform_rate.yfilter)
	|| ydk::is_set(drop_bytes.yfilter)
	|| ydk::is_set(drop_packets.yfilter)
	|| ydk::is_set(exceed_bytes.yfilter)
	|| ydk::is_set(exceed_packets.yfilter)
	|| ydk::is_set(exceed_rate.yfilter)
	|| ydk::is_set(parent_drop_bytes.yfilter)
	|| ydk::is_set(parent_drop_packets.yfilter)
	|| ydk::is_set(violate_bytes.yfilter)
	|| ydk::is_set(violate_packets.yfilter)
	|| ydk::is_set(violate_rate.yfilter)
	|| (color_class_stats !=  nullptr && color_class_stats->has_operation());
}

std::string Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-stats-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform_bytes.is_set || is_set(conform_bytes.yfilter)) leaf_name_data.push_back(conform_bytes.get_name_leafdata());
    if (conform_packets.is_set || is_set(conform_packets.yfilter)) leaf_name_data.push_back(conform_packets.get_name_leafdata());
    if (conform_rate.is_set || is_set(conform_rate.yfilter)) leaf_name_data.push_back(conform_rate.get_name_leafdata());
    if (drop_bytes.is_set || is_set(drop_bytes.yfilter)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (drop_packets.is_set || is_set(drop_packets.yfilter)) leaf_name_data.push_back(drop_packets.get_name_leafdata());
    if (exceed_bytes.is_set || is_set(exceed_bytes.yfilter)) leaf_name_data.push_back(exceed_bytes.get_name_leafdata());
    if (exceed_packets.is_set || is_set(exceed_packets.yfilter)) leaf_name_data.push_back(exceed_packets.get_name_leafdata());
    if (exceed_rate.is_set || is_set(exceed_rate.yfilter)) leaf_name_data.push_back(exceed_rate.get_name_leafdata());
    if (parent_drop_bytes.is_set || is_set(parent_drop_bytes.yfilter)) leaf_name_data.push_back(parent_drop_bytes.get_name_leafdata());
    if (parent_drop_packets.is_set || is_set(parent_drop_packets.yfilter)) leaf_name_data.push_back(parent_drop_packets.get_name_leafdata());
    if (violate_bytes.is_set || is_set(violate_bytes.yfilter)) leaf_name_data.push_back(violate_bytes.get_name_leafdata());
    if (violate_packets.is_set || is_set(violate_packets.yfilter)) leaf_name_data.push_back(violate_packets.get_name_leafdata());
    if (violate_rate.is_set || is_set(violate_rate.yfilter)) leaf_name_data.push_back(violate_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "color-class-stats")
    {
        if(color_class_stats == nullptr)
        {
            color_class_stats = std::make_shared<Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats>();
        }
        return color_class_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(color_class_stats != nullptr)
    {
        children["color-class-stats"] = color_class_stats;
    }

    return children;
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "conform-bytes")
    {
        conform_bytes = value;
        conform_bytes.value_namespace = name_space;
        conform_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-packets")
    {
        conform_packets = value;
        conform_packets.value_namespace = name_space;
        conform_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-rate")
    {
        conform_rate = value;
        conform_rate.value_namespace = name_space;
        conform_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
        drop_bytes.value_namespace = name_space;
        drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-packets")
    {
        drop_packets = value;
        drop_packets.value_namespace = name_space;
        drop_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-bytes")
    {
        exceed_bytes = value;
        exceed_bytes.value_namespace = name_space;
        exceed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-packets")
    {
        exceed_packets = value;
        exceed_packets.value_namespace = name_space;
        exceed_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-rate")
    {
        exceed_rate = value;
        exceed_rate.value_namespace = name_space;
        exceed_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-drop-bytes")
    {
        parent_drop_bytes = value;
        parent_drop_bytes.value_namespace = name_space;
        parent_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-drop-packets")
    {
        parent_drop_packets = value;
        parent_drop_packets.value_namespace = name_space;
        parent_drop_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violate-bytes")
    {
        violate_bytes = value;
        violate_bytes.value_namespace = name_space;
        violate_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violate-packets")
    {
        violate_packets = value;
        violate_packets.value_namespace = name_space;
        violate_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violate-rate")
    {
        violate_rate = value;
        violate_rate.value_namespace = name_space;
        violate_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "conform-bytes")
    {
        conform_bytes.yfilter = yfilter;
    }
    if(value_path == "conform-packets")
    {
        conform_packets.yfilter = yfilter;
    }
    if(value_path == "conform-rate")
    {
        conform_rate.yfilter = yfilter;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes.yfilter = yfilter;
    }
    if(value_path == "drop-packets")
    {
        drop_packets.yfilter = yfilter;
    }
    if(value_path == "exceed-bytes")
    {
        exceed_bytes.yfilter = yfilter;
    }
    if(value_path == "exceed-packets")
    {
        exceed_packets.yfilter = yfilter;
    }
    if(value_path == "exceed-rate")
    {
        exceed_rate.yfilter = yfilter;
    }
    if(value_path == "parent-drop-bytes")
    {
        parent_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "parent-drop-packets")
    {
        parent_drop_packets.yfilter = yfilter;
    }
    if(value_path == "violate-bytes")
    {
        violate_bytes.yfilter = yfilter;
    }
    if(value_path == "violate-packets")
    {
        violate_packets.yfilter = yfilter;
    }
    if(value_path == "violate-rate")
    {
        violate_rate.yfilter = yfilter;
    }
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "color-class-stats" || name == "conform-bytes" || name == "conform-packets" || name == "conform-rate" || name == "drop-bytes" || name == "drop-packets" || name == "exceed-bytes" || name == "exceed-packets" || name == "exceed-rate" || name == "parent-drop-bytes" || name == "parent-drop-packets" || name == "violate-bytes" || name == "violate-packets" || name == "violate-rate")
        return true;
    return false;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats::ColorClassStats()
    :
    conform_class_conform_bytes{YType::uint64, "conform-class-conform-bytes"},
    conform_class_conform_packets{YType::uint64, "conform-class-conform-packets"},
    conform_class_conform_rate{YType::uint32, "conform-class-conform-rate"},
    conform_class_exceed_bytes{YType::uint64, "conform-class-exceed-bytes"},
    conform_class_exceed_packets{YType::uint64, "conform-class-exceed-packets"},
    conform_class_exceed_rate{YType::uint32, "conform-class-exceed-rate"},
    conform_class_violate_bytes{YType::uint64, "conform-class-violate-bytes"},
    conform_class_violate_packets{YType::uint64, "conform-class-violate-packets"},
    conform_class_violate_rate{YType::uint32, "conform-class-violate-rate"},
    exceed_class_exceed_bytes{YType::uint64, "exceed-class-exceed-bytes"},
    exceed_class_exceed_packets{YType::uint64, "exceed-class-exceed-packets"},
    exceed_class_exceed_rate{YType::uint32, "exceed-class-exceed-rate"},
    exceed_class_violate_bytes{YType::uint64, "exceed-class-violate-bytes"},
    exceed_class_violate_packets{YType::uint64, "exceed-class-violate-packets"},
    exceed_class_violate_rate{YType::uint32, "exceed-class-violate-rate"},
    violate_class_violate_bytes{YType::uint64, "violate-class-violate-bytes"},
    violate_class_violate_packets{YType::uint64, "violate-class-violate-packets"},
    violate_class_violate_rate{YType::uint32, "violate-class-violate-rate"}
{

    yang_name = "color-class-stats"; yang_parent_name = "police-stats-array"; is_top_level_class = false; has_list_ancestor = true;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats::~ColorClassStats()
{
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats::has_data() const
{
    return conform_class_conform_bytes.is_set
	|| conform_class_conform_packets.is_set
	|| conform_class_conform_rate.is_set
	|| conform_class_exceed_bytes.is_set
	|| conform_class_exceed_packets.is_set
	|| conform_class_exceed_rate.is_set
	|| conform_class_violate_bytes.is_set
	|| conform_class_violate_packets.is_set
	|| conform_class_violate_rate.is_set
	|| exceed_class_exceed_bytes.is_set
	|| exceed_class_exceed_packets.is_set
	|| exceed_class_exceed_rate.is_set
	|| exceed_class_violate_bytes.is_set
	|| exceed_class_violate_packets.is_set
	|| exceed_class_violate_rate.is_set
	|| violate_class_violate_bytes.is_set
	|| violate_class_violate_packets.is_set
	|| violate_class_violate_rate.is_set;
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(conform_class_conform_bytes.yfilter)
	|| ydk::is_set(conform_class_conform_packets.yfilter)
	|| ydk::is_set(conform_class_conform_rate.yfilter)
	|| ydk::is_set(conform_class_exceed_bytes.yfilter)
	|| ydk::is_set(conform_class_exceed_packets.yfilter)
	|| ydk::is_set(conform_class_exceed_rate.yfilter)
	|| ydk::is_set(conform_class_violate_bytes.yfilter)
	|| ydk::is_set(conform_class_violate_packets.yfilter)
	|| ydk::is_set(conform_class_violate_rate.yfilter)
	|| ydk::is_set(exceed_class_exceed_bytes.yfilter)
	|| ydk::is_set(exceed_class_exceed_packets.yfilter)
	|| ydk::is_set(exceed_class_exceed_rate.yfilter)
	|| ydk::is_set(exceed_class_violate_bytes.yfilter)
	|| ydk::is_set(exceed_class_violate_packets.yfilter)
	|| ydk::is_set(exceed_class_violate_rate.yfilter)
	|| ydk::is_set(violate_class_violate_bytes.yfilter)
	|| ydk::is_set(violate_class_violate_packets.yfilter)
	|| ydk::is_set(violate_class_violate_rate.yfilter);
}

std::string Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "color-class-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform_class_conform_bytes.is_set || is_set(conform_class_conform_bytes.yfilter)) leaf_name_data.push_back(conform_class_conform_bytes.get_name_leafdata());
    if (conform_class_conform_packets.is_set || is_set(conform_class_conform_packets.yfilter)) leaf_name_data.push_back(conform_class_conform_packets.get_name_leafdata());
    if (conform_class_conform_rate.is_set || is_set(conform_class_conform_rate.yfilter)) leaf_name_data.push_back(conform_class_conform_rate.get_name_leafdata());
    if (conform_class_exceed_bytes.is_set || is_set(conform_class_exceed_bytes.yfilter)) leaf_name_data.push_back(conform_class_exceed_bytes.get_name_leafdata());
    if (conform_class_exceed_packets.is_set || is_set(conform_class_exceed_packets.yfilter)) leaf_name_data.push_back(conform_class_exceed_packets.get_name_leafdata());
    if (conform_class_exceed_rate.is_set || is_set(conform_class_exceed_rate.yfilter)) leaf_name_data.push_back(conform_class_exceed_rate.get_name_leafdata());
    if (conform_class_violate_bytes.is_set || is_set(conform_class_violate_bytes.yfilter)) leaf_name_data.push_back(conform_class_violate_bytes.get_name_leafdata());
    if (conform_class_violate_packets.is_set || is_set(conform_class_violate_packets.yfilter)) leaf_name_data.push_back(conform_class_violate_packets.get_name_leafdata());
    if (conform_class_violate_rate.is_set || is_set(conform_class_violate_rate.yfilter)) leaf_name_data.push_back(conform_class_violate_rate.get_name_leafdata());
    if (exceed_class_exceed_bytes.is_set || is_set(exceed_class_exceed_bytes.yfilter)) leaf_name_data.push_back(exceed_class_exceed_bytes.get_name_leafdata());
    if (exceed_class_exceed_packets.is_set || is_set(exceed_class_exceed_packets.yfilter)) leaf_name_data.push_back(exceed_class_exceed_packets.get_name_leafdata());
    if (exceed_class_exceed_rate.is_set || is_set(exceed_class_exceed_rate.yfilter)) leaf_name_data.push_back(exceed_class_exceed_rate.get_name_leafdata());
    if (exceed_class_violate_bytes.is_set || is_set(exceed_class_violate_bytes.yfilter)) leaf_name_data.push_back(exceed_class_violate_bytes.get_name_leafdata());
    if (exceed_class_violate_packets.is_set || is_set(exceed_class_violate_packets.yfilter)) leaf_name_data.push_back(exceed_class_violate_packets.get_name_leafdata());
    if (exceed_class_violate_rate.is_set || is_set(exceed_class_violate_rate.yfilter)) leaf_name_data.push_back(exceed_class_violate_rate.get_name_leafdata());
    if (violate_class_violate_bytes.is_set || is_set(violate_class_violate_bytes.yfilter)) leaf_name_data.push_back(violate_class_violate_bytes.get_name_leafdata());
    if (violate_class_violate_packets.is_set || is_set(violate_class_violate_packets.yfilter)) leaf_name_data.push_back(violate_class_violate_packets.get_name_leafdata());
    if (violate_class_violate_rate.is_set || is_set(violate_class_violate_rate.yfilter)) leaf_name_data.push_back(violate_class_violate_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "conform-class-conform-bytes")
    {
        conform_class_conform_bytes = value;
        conform_class_conform_bytes.value_namespace = name_space;
        conform_class_conform_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-class-conform-packets")
    {
        conform_class_conform_packets = value;
        conform_class_conform_packets.value_namespace = name_space;
        conform_class_conform_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-class-conform-rate")
    {
        conform_class_conform_rate = value;
        conform_class_conform_rate.value_namespace = name_space;
        conform_class_conform_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-class-exceed-bytes")
    {
        conform_class_exceed_bytes = value;
        conform_class_exceed_bytes.value_namespace = name_space;
        conform_class_exceed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-class-exceed-packets")
    {
        conform_class_exceed_packets = value;
        conform_class_exceed_packets.value_namespace = name_space;
        conform_class_exceed_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-class-exceed-rate")
    {
        conform_class_exceed_rate = value;
        conform_class_exceed_rate.value_namespace = name_space;
        conform_class_exceed_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-class-violate-bytes")
    {
        conform_class_violate_bytes = value;
        conform_class_violate_bytes.value_namespace = name_space;
        conform_class_violate_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-class-violate-packets")
    {
        conform_class_violate_packets = value;
        conform_class_violate_packets.value_namespace = name_space;
        conform_class_violate_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-class-violate-rate")
    {
        conform_class_violate_rate = value;
        conform_class_violate_rate.value_namespace = name_space;
        conform_class_violate_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-class-exceed-bytes")
    {
        exceed_class_exceed_bytes = value;
        exceed_class_exceed_bytes.value_namespace = name_space;
        exceed_class_exceed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-class-exceed-packets")
    {
        exceed_class_exceed_packets = value;
        exceed_class_exceed_packets.value_namespace = name_space;
        exceed_class_exceed_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-class-exceed-rate")
    {
        exceed_class_exceed_rate = value;
        exceed_class_exceed_rate.value_namespace = name_space;
        exceed_class_exceed_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-class-violate-bytes")
    {
        exceed_class_violate_bytes = value;
        exceed_class_violate_bytes.value_namespace = name_space;
        exceed_class_violate_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-class-violate-packets")
    {
        exceed_class_violate_packets = value;
        exceed_class_violate_packets.value_namespace = name_space;
        exceed_class_violate_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-class-violate-rate")
    {
        exceed_class_violate_rate = value;
        exceed_class_violate_rate.value_namespace = name_space;
        exceed_class_violate_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violate-class-violate-bytes")
    {
        violate_class_violate_bytes = value;
        violate_class_violate_bytes.value_namespace = name_space;
        violate_class_violate_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violate-class-violate-packets")
    {
        violate_class_violate_packets = value;
        violate_class_violate_packets.value_namespace = name_space;
        violate_class_violate_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violate-class-violate-rate")
    {
        violate_class_violate_rate = value;
        violate_class_violate_rate.value_namespace = name_space;
        violate_class_violate_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "conform-class-conform-bytes")
    {
        conform_class_conform_bytes.yfilter = yfilter;
    }
    if(value_path == "conform-class-conform-packets")
    {
        conform_class_conform_packets.yfilter = yfilter;
    }
    if(value_path == "conform-class-conform-rate")
    {
        conform_class_conform_rate.yfilter = yfilter;
    }
    if(value_path == "conform-class-exceed-bytes")
    {
        conform_class_exceed_bytes.yfilter = yfilter;
    }
    if(value_path == "conform-class-exceed-packets")
    {
        conform_class_exceed_packets.yfilter = yfilter;
    }
    if(value_path == "conform-class-exceed-rate")
    {
        conform_class_exceed_rate.yfilter = yfilter;
    }
    if(value_path == "conform-class-violate-bytes")
    {
        conform_class_violate_bytes.yfilter = yfilter;
    }
    if(value_path == "conform-class-violate-packets")
    {
        conform_class_violate_packets.yfilter = yfilter;
    }
    if(value_path == "conform-class-violate-rate")
    {
        conform_class_violate_rate.yfilter = yfilter;
    }
    if(value_path == "exceed-class-exceed-bytes")
    {
        exceed_class_exceed_bytes.yfilter = yfilter;
    }
    if(value_path == "exceed-class-exceed-packets")
    {
        exceed_class_exceed_packets.yfilter = yfilter;
    }
    if(value_path == "exceed-class-exceed-rate")
    {
        exceed_class_exceed_rate.yfilter = yfilter;
    }
    if(value_path == "exceed-class-violate-bytes")
    {
        exceed_class_violate_bytes.yfilter = yfilter;
    }
    if(value_path == "exceed-class-violate-packets")
    {
        exceed_class_violate_packets.yfilter = yfilter;
    }
    if(value_path == "exceed-class-violate-rate")
    {
        exceed_class_violate_rate.yfilter = yfilter;
    }
    if(value_path == "violate-class-violate-bytes")
    {
        violate_class_violate_bytes.yfilter = yfilter;
    }
    if(value_path == "violate-class-violate-packets")
    {
        violate_class_violate_packets.yfilter = yfilter;
    }
    if(value_path == "violate-class-violate-rate")
    {
        violate_class_violate_rate.yfilter = yfilter;
    }
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::PoliceStatsArray::ColorClassStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-class-conform-bytes" || name == "conform-class-conform-packets" || name == "conform-class-conform-rate" || name == "conform-class-exceed-bytes" || name == "conform-class-exceed-packets" || name == "conform-class-exceed-rate" || name == "conform-class-violate-bytes" || name == "conform-class-violate-packets" || name == "conform-class-violate-rate" || name == "exceed-class-exceed-bytes" || name == "exceed-class-exceed-packets" || name == "exceed-class-exceed-rate" || name == "exceed-class-violate-bytes" || name == "exceed-class-violate-packets" || name == "exceed-class-violate-rate" || name == "violate-class-violate-bytes" || name == "violate-class-violate-packets" || name == "violate-class-violate-rate")
        return true;
    return false;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueStatsArray()
    :
    atm_clp0_drop_bytes{YType::uint64, "atm-clp0-drop-bytes"},
    atm_clp0_drop_packets{YType::uint64, "atm-clp0-drop-packets"},
    atm_clp1_drop_bytes{YType::uint64, "atm-clp1-drop-bytes"},
    atm_clp1_drop_packets{YType::uint64, "atm-clp1-drop-packets"},
    conform_bytes{YType::uint64, "conform-bytes"},
    conform_packets{YType::uint64, "conform-packets"},
    conform_rate{YType::uint32, "conform-rate"},
    exceed_bytes{YType::uint64, "exceed-bytes"},
    exceed_packets{YType::uint64, "exceed-packets"},
    exceed_rate{YType::uint32, "exceed-rate"},
    forced_wred_stats_display{YType::boolean, "forced-wred-stats-display"},
    max_threshold_bytes{YType::uint64, "max-threshold-bytes"},
    max_threshold_packets{YType::uint64, "max-threshold-packets"},
    queue_drop_threshold{YType::uint32, "queue-drop-threshold"},
    queue_id{YType::uint32, "queue-id"},
    random_drop_bytes{YType::uint64, "random-drop-bytes"},
    random_drop_packets{YType::uint64, "random-drop-packets"},
    tail_drop_bytes{YType::uint64, "tail-drop-bytes"},
    tail_drop_packets{YType::uint64, "tail-drop-packets"}
{

    yang_name = "queue-stats-array"; yang_parent_name = "class-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::~QueueStatsArray()
{
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::has_data() const
{
    for (std::size_t index=0; index<queue_average_length.size(); index++)
    {
        if(queue_average_length[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_instance_length.size(); index++)
    {
        if(queue_instance_length[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_max_length.size(); index++)
    {
        if(queue_max_length[index]->has_data())
            return true;
    }
    return atm_clp0_drop_bytes.is_set
	|| atm_clp0_drop_packets.is_set
	|| atm_clp1_drop_bytes.is_set
	|| atm_clp1_drop_packets.is_set
	|| conform_bytes.is_set
	|| conform_packets.is_set
	|| conform_rate.is_set
	|| exceed_bytes.is_set
	|| exceed_packets.is_set
	|| exceed_rate.is_set
	|| forced_wred_stats_display.is_set
	|| max_threshold_bytes.is_set
	|| max_threshold_packets.is_set
	|| queue_drop_threshold.is_set
	|| queue_id.is_set
	|| random_drop_bytes.is_set
	|| random_drop_packets.is_set
	|| tail_drop_bytes.is_set
	|| tail_drop_packets.is_set;
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::has_operation() const
{
    for (std::size_t index=0; index<queue_average_length.size(); index++)
    {
        if(queue_average_length[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_instance_length.size(); index++)
    {
        if(queue_instance_length[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_max_length.size(); index++)
    {
        if(queue_max_length[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(atm_clp0_drop_bytes.yfilter)
	|| ydk::is_set(atm_clp0_drop_packets.yfilter)
	|| ydk::is_set(atm_clp1_drop_bytes.yfilter)
	|| ydk::is_set(atm_clp1_drop_packets.yfilter)
	|| ydk::is_set(conform_bytes.yfilter)
	|| ydk::is_set(conform_packets.yfilter)
	|| ydk::is_set(conform_rate.yfilter)
	|| ydk::is_set(exceed_bytes.yfilter)
	|| ydk::is_set(exceed_packets.yfilter)
	|| ydk::is_set(exceed_rate.yfilter)
	|| ydk::is_set(forced_wred_stats_display.yfilter)
	|| ydk::is_set(max_threshold_bytes.yfilter)
	|| ydk::is_set(max_threshold_packets.yfilter)
	|| ydk::is_set(queue_drop_threshold.yfilter)
	|| ydk::is_set(queue_id.yfilter)
	|| ydk::is_set(random_drop_bytes.yfilter)
	|| ydk::is_set(random_drop_packets.yfilter)
	|| ydk::is_set(tail_drop_bytes.yfilter)
	|| ydk::is_set(tail_drop_packets.yfilter);
}

std::string Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-stats-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_clp0_drop_bytes.is_set || is_set(atm_clp0_drop_bytes.yfilter)) leaf_name_data.push_back(atm_clp0_drop_bytes.get_name_leafdata());
    if (atm_clp0_drop_packets.is_set || is_set(atm_clp0_drop_packets.yfilter)) leaf_name_data.push_back(atm_clp0_drop_packets.get_name_leafdata());
    if (atm_clp1_drop_bytes.is_set || is_set(atm_clp1_drop_bytes.yfilter)) leaf_name_data.push_back(atm_clp1_drop_bytes.get_name_leafdata());
    if (atm_clp1_drop_packets.is_set || is_set(atm_clp1_drop_packets.yfilter)) leaf_name_data.push_back(atm_clp1_drop_packets.get_name_leafdata());
    if (conform_bytes.is_set || is_set(conform_bytes.yfilter)) leaf_name_data.push_back(conform_bytes.get_name_leafdata());
    if (conform_packets.is_set || is_set(conform_packets.yfilter)) leaf_name_data.push_back(conform_packets.get_name_leafdata());
    if (conform_rate.is_set || is_set(conform_rate.yfilter)) leaf_name_data.push_back(conform_rate.get_name_leafdata());
    if (exceed_bytes.is_set || is_set(exceed_bytes.yfilter)) leaf_name_data.push_back(exceed_bytes.get_name_leafdata());
    if (exceed_packets.is_set || is_set(exceed_packets.yfilter)) leaf_name_data.push_back(exceed_packets.get_name_leafdata());
    if (exceed_rate.is_set || is_set(exceed_rate.yfilter)) leaf_name_data.push_back(exceed_rate.get_name_leafdata());
    if (forced_wred_stats_display.is_set || is_set(forced_wred_stats_display.yfilter)) leaf_name_data.push_back(forced_wred_stats_display.get_name_leafdata());
    if (max_threshold_bytes.is_set || is_set(max_threshold_bytes.yfilter)) leaf_name_data.push_back(max_threshold_bytes.get_name_leafdata());
    if (max_threshold_packets.is_set || is_set(max_threshold_packets.yfilter)) leaf_name_data.push_back(max_threshold_packets.get_name_leafdata());
    if (queue_drop_threshold.is_set || is_set(queue_drop_threshold.yfilter)) leaf_name_data.push_back(queue_drop_threshold.get_name_leafdata());
    if (queue_id.is_set || is_set(queue_id.yfilter)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (random_drop_bytes.is_set || is_set(random_drop_bytes.yfilter)) leaf_name_data.push_back(random_drop_bytes.get_name_leafdata());
    if (random_drop_packets.is_set || is_set(random_drop_packets.yfilter)) leaf_name_data.push_back(random_drop_packets.get_name_leafdata());
    if (tail_drop_bytes.is_set || is_set(tail_drop_bytes.yfilter)) leaf_name_data.push_back(tail_drop_bytes.get_name_leafdata());
    if (tail_drop_packets.is_set || is_set(tail_drop_packets.yfilter)) leaf_name_data.push_back(tail_drop_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue-average-length")
    {
        for(auto const & c : queue_average_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength>();
        c->parent = this;
        queue_average_length.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-instance-length")
    {
        for(auto const & c : queue_instance_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength>();
        c->parent = this;
        queue_instance_length.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-max-length")
    {
        for(auto const & c : queue_max_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength>();
        c->parent = this;
        queue_max_length.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : queue_average_length)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_instance_length)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_max_length)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "atm-clp0-drop-bytes")
    {
        atm_clp0_drop_bytes = value;
        atm_clp0_drop_bytes.value_namespace = name_space;
        atm_clp0_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm-clp0-drop-packets")
    {
        atm_clp0_drop_packets = value;
        atm_clp0_drop_packets.value_namespace = name_space;
        atm_clp0_drop_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm-clp1-drop-bytes")
    {
        atm_clp1_drop_bytes = value;
        atm_clp1_drop_bytes.value_namespace = name_space;
        atm_clp1_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm-clp1-drop-packets")
    {
        atm_clp1_drop_packets = value;
        atm_clp1_drop_packets.value_namespace = name_space;
        atm_clp1_drop_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-bytes")
    {
        conform_bytes = value;
        conform_bytes.value_namespace = name_space;
        conform_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-packets")
    {
        conform_packets = value;
        conform_packets.value_namespace = name_space;
        conform_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-rate")
    {
        conform_rate = value;
        conform_rate.value_namespace = name_space;
        conform_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-bytes")
    {
        exceed_bytes = value;
        exceed_bytes.value_namespace = name_space;
        exceed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-packets")
    {
        exceed_packets = value;
        exceed_packets.value_namespace = name_space;
        exceed_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-rate")
    {
        exceed_rate = value;
        exceed_rate.value_namespace = name_space;
        exceed_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forced-wred-stats-display")
    {
        forced_wred_stats_display = value;
        forced_wred_stats_display.value_namespace = name_space;
        forced_wred_stats_display.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-threshold-bytes")
    {
        max_threshold_bytes = value;
        max_threshold_bytes.value_namespace = name_space;
        max_threshold_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-threshold-packets")
    {
        max_threshold_packets = value;
        max_threshold_packets.value_namespace = name_space;
        max_threshold_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-drop-threshold")
    {
        queue_drop_threshold = value;
        queue_drop_threshold.value_namespace = name_space;
        queue_drop_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-id")
    {
        queue_id = value;
        queue_id.value_namespace = name_space;
        queue_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "random-drop-bytes")
    {
        random_drop_bytes = value;
        random_drop_bytes.value_namespace = name_space;
        random_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "random-drop-packets")
    {
        random_drop_packets = value;
        random_drop_packets.value_namespace = name_space;
        random_drop_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail-drop-bytes")
    {
        tail_drop_bytes = value;
        tail_drop_bytes.value_namespace = name_space;
        tail_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail-drop-packets")
    {
        tail_drop_packets = value;
        tail_drop_packets.value_namespace = name_space;
        tail_drop_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "atm-clp0-drop-bytes")
    {
        atm_clp0_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "atm-clp0-drop-packets")
    {
        atm_clp0_drop_packets.yfilter = yfilter;
    }
    if(value_path == "atm-clp1-drop-bytes")
    {
        atm_clp1_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "atm-clp1-drop-packets")
    {
        atm_clp1_drop_packets.yfilter = yfilter;
    }
    if(value_path == "conform-bytes")
    {
        conform_bytes.yfilter = yfilter;
    }
    if(value_path == "conform-packets")
    {
        conform_packets.yfilter = yfilter;
    }
    if(value_path == "conform-rate")
    {
        conform_rate.yfilter = yfilter;
    }
    if(value_path == "exceed-bytes")
    {
        exceed_bytes.yfilter = yfilter;
    }
    if(value_path == "exceed-packets")
    {
        exceed_packets.yfilter = yfilter;
    }
    if(value_path == "exceed-rate")
    {
        exceed_rate.yfilter = yfilter;
    }
    if(value_path == "forced-wred-stats-display")
    {
        forced_wred_stats_display.yfilter = yfilter;
    }
    if(value_path == "max-threshold-bytes")
    {
        max_threshold_bytes.yfilter = yfilter;
    }
    if(value_path == "max-threshold-packets")
    {
        max_threshold_packets.yfilter = yfilter;
    }
    if(value_path == "queue-drop-threshold")
    {
        queue_drop_threshold.yfilter = yfilter;
    }
    if(value_path == "queue-id")
    {
        queue_id.yfilter = yfilter;
    }
    if(value_path == "random-drop-bytes")
    {
        random_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "random-drop-packets")
    {
        random_drop_packets.yfilter = yfilter;
    }
    if(value_path == "tail-drop-bytes")
    {
        tail_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "tail-drop-packets")
    {
        tail_drop_packets.yfilter = yfilter;
    }
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue-average-length" || name == "queue-instance-length" || name == "queue-max-length" || name == "atm-clp0-drop-bytes" || name == "atm-clp0-drop-packets" || name == "atm-clp1-drop-bytes" || name == "atm-clp1-drop-packets" || name == "conform-bytes" || name == "conform-packets" || name == "conform-rate" || name == "exceed-bytes" || name == "exceed-packets" || name == "exceed-rate" || name == "forced-wred-stats-display" || name == "max-threshold-bytes" || name == "max-threshold-packets" || name == "queue-drop-threshold" || name == "queue-id" || name == "random-drop-bytes" || name == "random-drop-packets" || name == "tail-drop-bytes" || name == "tail-drop-packets")
        return true;
    return false;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength::QueueAverageLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "queue-average-length"; yang_parent_name = "queue-stats-array"; is_top_level_class = false; has_list_ancestor = true;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength::~QueueAverageLength()
{
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-average-length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueAverageLength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength::QueueInstanceLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "queue-instance-length"; yang_parent_name = "queue-stats-array"; is_top_level_class = false; has_list_ancestor = true;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength::~QueueInstanceLength()
{
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-instance-length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueInstanceLength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength::QueueMaxLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "queue-max-length"; yang_parent_name = "queue-stats-array"; is_top_level_class = false; has_list_ancestor = true;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength::~QueueMaxLength()
{
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-max-length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::QueueStatsArray::QueueMaxLength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::WredStatsArray()
    :
    max_threshold_bytes{YType::uint64, "max-threshold-bytes"},
    max_threshold_packets{YType::uint64, "max-threshold-packets"},
    profile_title{YType::str, "profile-title"},
    random_drop_bytes{YType::uint64, "random-drop-bytes"},
    random_drop_packets{YType::uint64, "random-drop-packets"},
    red_ecn_marked_bytes{YType::uint64, "red-ecn-marked-bytes"},
    red_ecn_marked_packets{YType::uint64, "red-ecn-marked-packets"},
    red_transmit_bytes{YType::uint64, "red-transmit-bytes"},
    red_transmit_packets{YType::uint64, "red-transmit-packets"}
{

    yang_name = "wred-stats-array"; yang_parent_name = "class-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::~WredStatsArray()
{
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::has_data() const
{
    for (std::size_t index=0; index<red_label.size(); index++)
    {
        if(red_label[index]->has_data())
            return true;
    }
    return max_threshold_bytes.is_set
	|| max_threshold_packets.is_set
	|| profile_title.is_set
	|| random_drop_bytes.is_set
	|| random_drop_packets.is_set
	|| red_ecn_marked_bytes.is_set
	|| red_ecn_marked_packets.is_set
	|| red_transmit_bytes.is_set
	|| red_transmit_packets.is_set;
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::has_operation() const
{
    for (std::size_t index=0; index<red_label.size(); index++)
    {
        if(red_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(max_threshold_bytes.yfilter)
	|| ydk::is_set(max_threshold_packets.yfilter)
	|| ydk::is_set(profile_title.yfilter)
	|| ydk::is_set(random_drop_bytes.yfilter)
	|| ydk::is_set(random_drop_packets.yfilter)
	|| ydk::is_set(red_ecn_marked_bytes.yfilter)
	|| ydk::is_set(red_ecn_marked_packets.yfilter)
	|| ydk::is_set(red_transmit_bytes.yfilter)
	|| ydk::is_set(red_transmit_packets.yfilter);
}

std::string Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-stats-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_threshold_bytes.is_set || is_set(max_threshold_bytes.yfilter)) leaf_name_data.push_back(max_threshold_bytes.get_name_leafdata());
    if (max_threshold_packets.is_set || is_set(max_threshold_packets.yfilter)) leaf_name_data.push_back(max_threshold_packets.get_name_leafdata());
    if (profile_title.is_set || is_set(profile_title.yfilter)) leaf_name_data.push_back(profile_title.get_name_leafdata());
    if (random_drop_bytes.is_set || is_set(random_drop_bytes.yfilter)) leaf_name_data.push_back(random_drop_bytes.get_name_leafdata());
    if (random_drop_packets.is_set || is_set(random_drop_packets.yfilter)) leaf_name_data.push_back(random_drop_packets.get_name_leafdata());
    if (red_ecn_marked_bytes.is_set || is_set(red_ecn_marked_bytes.yfilter)) leaf_name_data.push_back(red_ecn_marked_bytes.get_name_leafdata());
    if (red_ecn_marked_packets.is_set || is_set(red_ecn_marked_packets.yfilter)) leaf_name_data.push_back(red_ecn_marked_packets.get_name_leafdata());
    if (red_transmit_bytes.is_set || is_set(red_transmit_bytes.yfilter)) leaf_name_data.push_back(red_transmit_bytes.get_name_leafdata());
    if (red_transmit_packets.is_set || is_set(red_transmit_packets.yfilter)) leaf_name_data.push_back(red_transmit_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "red-label")
    {
        for(auto const & c : red_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::RedLabel>();
        c->parent = this;
        red_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : red_label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-threshold-bytes")
    {
        max_threshold_bytes = value;
        max_threshold_bytes.value_namespace = name_space;
        max_threshold_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-threshold-packets")
    {
        max_threshold_packets = value;
        max_threshold_packets.value_namespace = name_space;
        max_threshold_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-title")
    {
        profile_title = value;
        profile_title.value_namespace = name_space;
        profile_title.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "random-drop-bytes")
    {
        random_drop_bytes = value;
        random_drop_bytes.value_namespace = name_space;
        random_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "random-drop-packets")
    {
        random_drop_packets = value;
        random_drop_packets.value_namespace = name_space;
        random_drop_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "red-ecn-marked-bytes")
    {
        red_ecn_marked_bytes = value;
        red_ecn_marked_bytes.value_namespace = name_space;
        red_ecn_marked_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "red-ecn-marked-packets")
    {
        red_ecn_marked_packets = value;
        red_ecn_marked_packets.value_namespace = name_space;
        red_ecn_marked_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "red-transmit-bytes")
    {
        red_transmit_bytes = value;
        red_transmit_bytes.value_namespace = name_space;
        red_transmit_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "red-transmit-packets")
    {
        red_transmit_packets = value;
        red_transmit_packets.value_namespace = name_space;
        red_transmit_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-threshold-bytes")
    {
        max_threshold_bytes.yfilter = yfilter;
    }
    if(value_path == "max-threshold-packets")
    {
        max_threshold_packets.yfilter = yfilter;
    }
    if(value_path == "profile-title")
    {
        profile_title.yfilter = yfilter;
    }
    if(value_path == "random-drop-bytes")
    {
        random_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "random-drop-packets")
    {
        random_drop_packets.yfilter = yfilter;
    }
    if(value_path == "red-ecn-marked-bytes")
    {
        red_ecn_marked_bytes.yfilter = yfilter;
    }
    if(value_path == "red-ecn-marked-packets")
    {
        red_ecn_marked_packets.yfilter = yfilter;
    }
    if(value_path == "red-transmit-bytes")
    {
        red_transmit_bytes.yfilter = yfilter;
    }
    if(value_path == "red-transmit-packets")
    {
        red_transmit_packets.yfilter = yfilter;
    }
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "red-label" || name == "max-threshold-bytes" || name == "max-threshold-packets" || name == "profile-title" || name == "random-drop-bytes" || name == "random-drop-packets" || name == "red-ecn-marked-bytes" || name == "red-ecn-marked-packets" || name == "red-transmit-bytes" || name == "red-transmit-packets")
        return true;
    return false;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::RedLabel::RedLabel()
    :
    value_{YType::uint8, "value"},
    wred_type{YType::enumeration, "wred-type"}
{

    yang_name = "red-label"; yang_parent_name = "wred-stats-array"; is_top_level_class = false; has_list_ancestor = true;
}

Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::RedLabel::~RedLabel()
{
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::RedLabel::has_data() const
{
    return value_.is_set
	|| wred_type.is_set;
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::RedLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(wred_type.yfilter);
}

std::string Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::RedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "red-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::RedLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (wred_type.is_set || is_set(wred_type.yfilter)) leaf_name_data.push_back(wred_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::RedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::RedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::RedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-type")
    {
        wred_type = value;
        wred_type.value_namespace = name_space;
        wred_type.value_namespace_prefix = name_space_prefix;
    }
}

void Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::RedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "wred-type")
    {
        wred_type.yfilter = yfilter;
    }
}

bool Qos::QosGlobal::VoQ::VoQStatistics::VoQinterfaces::VoQinterface::VoQMemberInterfaces::VoQMemberInterface::VoQoutput::VoQStats::ClassStats::WredStatsArray::RedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "wred-type")
        return true;
    return false;
}


}
}

