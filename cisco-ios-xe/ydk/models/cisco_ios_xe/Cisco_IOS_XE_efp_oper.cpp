
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_efp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_efp_oper {

EfpStats::EfpStats()
{
    yang_name = "efp-stats"; yang_parent_name = "Cisco-IOS-XE-efp-oper";
}

EfpStats::~EfpStats()
{
}

bool EfpStats::has_data() const
{
    for (std::size_t index=0; index<efp_stat.size(); index++)
    {
        if(efp_stat[index]->has_data())
            return true;
    }
    return false;
}

bool EfpStats::has_operation() const
{
    for (std::size_t index=0; index<efp_stat.size(); index++)
    {
        if(efp_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EfpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-efp-oper:efp-stats";

    return path_buffer.str();

}

const EntityPath EfpStats::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> EfpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "efp-stat")
    {
        for(auto const & c : efp_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EfpStats::EfpStat>();
        c->parent = this;
        efp_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EfpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : efp_stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EfpStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EfpStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> EfpStats::clone_ptr() const
{
    return std::make_shared<EfpStats>();
}

std::string EfpStats::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string EfpStats::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function EfpStats::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> EfpStats::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool EfpStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "efp-stat")
        return true;
    return false;
}

EfpStats::EfpStat::EfpStat()
    :
    id{YType::uint32, "id"},
    interface{YType::str, "interface"},
    in_bytes{YType::uint64, "in-bytes"},
    in_pkts{YType::uint64, "in-pkts"},
    out_bytes{YType::uint64, "out-bytes"},
    out_pkts{YType::uint64, "out-pkts"}
{
    yang_name = "efp-stat"; yang_parent_name = "efp-stats";
}

EfpStats::EfpStat::~EfpStat()
{
}

bool EfpStats::EfpStat::has_data() const
{
    return id.is_set
	|| interface.is_set
	|| in_bytes.is_set
	|| in_pkts.is_set
	|| out_bytes.is_set
	|| out_pkts.is_set;
}

bool EfpStats::EfpStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(in_bytes.yfilter)
	|| ydk::is_set(in_pkts.yfilter)
	|| ydk::is_set(out_bytes.yfilter)
	|| ydk::is_set(out_pkts.yfilter);
}

std::string EfpStats::EfpStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "efp-stat" <<"[id='" <<id <<"']" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath EfpStats::EfpStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-efp-oper:efp-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (in_bytes.is_set || is_set(in_bytes.yfilter)) leaf_name_data.push_back(in_bytes.get_name_leafdata());
    if (in_pkts.is_set || is_set(in_pkts.yfilter)) leaf_name_data.push_back(in_pkts.get_name_leafdata());
    if (out_bytes.is_set || is_set(out_bytes.yfilter)) leaf_name_data.push_back(out_bytes.get_name_leafdata());
    if (out_pkts.is_set || is_set(out_pkts.yfilter)) leaf_name_data.push_back(out_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EfpStats::EfpStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EfpStats::EfpStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EfpStats::EfpStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-bytes")
    {
        in_bytes = value;
        in_bytes.value_namespace = name_space;
        in_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts")
    {
        in_pkts = value;
        in_pkts.value_namespace = name_space;
        in_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-bytes")
    {
        out_bytes = value;
        out_bytes.value_namespace = name_space;
        out_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts")
    {
        out_pkts = value;
        out_pkts.value_namespace = name_space;
        out_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void EfpStats::EfpStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "in-bytes")
    {
        in_bytes.yfilter = yfilter;
    }
    if(value_path == "in-pkts")
    {
        in_pkts.yfilter = yfilter;
    }
    if(value_path == "out-bytes")
    {
        out_bytes.yfilter = yfilter;
    }
    if(value_path == "out-pkts")
    {
        out_pkts.yfilter = yfilter;
    }
}

bool EfpStats::EfpStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "interface" || name == "in-bytes" || name == "in-pkts" || name == "out-bytes" || name == "out-pkts")
        return true;
    return false;
}


}
}
