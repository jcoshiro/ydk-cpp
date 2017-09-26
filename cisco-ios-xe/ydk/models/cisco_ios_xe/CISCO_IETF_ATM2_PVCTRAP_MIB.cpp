
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_ATM2_PVCTRAP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IETF_ATM2_PVCTRAP_MIB {

CISCOIETFATM2PVCTRAPMIB::CISCOIETFATM2PVCTRAPMIB()
    :
    atmcurrentlyfailingpvcltable(std::make_shared<CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable>())
{
    atmcurrentlyfailingpvcltable->parent = this;

    yang_name = "CISCO-IETF-ATM2-PVCTRAP-MIB"; yang_parent_name = "CISCO-IETF-ATM2-PVCTRAP-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOIETFATM2PVCTRAPMIB::~CISCOIETFATM2PVCTRAPMIB()
{
}

bool CISCOIETFATM2PVCTRAPMIB::has_data() const
{
    return (atmcurrentlyfailingpvcltable !=  nullptr && atmcurrentlyfailingpvcltable->has_data());
}

bool CISCOIETFATM2PVCTRAPMIB::has_operation() const
{
    return is_set(yfilter)
	|| (atmcurrentlyfailingpvcltable !=  nullptr && atmcurrentlyfailingpvcltable->has_operation());
}

std::string CISCOIETFATM2PVCTRAPMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ATM2-PVCTRAP-MIB:CISCO-IETF-ATM2-PVCTRAP-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFATM2PVCTRAPMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFATM2PVCTRAPMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atmCurrentlyFailingPVclTable")
    {
        if(atmcurrentlyfailingpvcltable == nullptr)
        {
            atmcurrentlyfailingpvcltable = std::make_shared<CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable>();
        }
        return atmcurrentlyfailingpvcltable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFATM2PVCTRAPMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atmcurrentlyfailingpvcltable != nullptr)
    {
        children["atmCurrentlyFailingPVclTable"] = atmcurrentlyfailingpvcltable;
    }

    return children;
}

void CISCOIETFATM2PVCTRAPMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFATM2PVCTRAPMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOIETFATM2PVCTRAPMIB::clone_ptr() const
{
    return std::make_shared<CISCOIETFATM2PVCTRAPMIB>();
}

std::string CISCOIETFATM2PVCTRAPMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIETFATM2PVCTRAPMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIETFATM2PVCTRAPMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIETFATM2PVCTRAPMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIETFATM2PVCTRAPMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atmCurrentlyFailingPVclTable")
        return true;
    return false;
}

CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable::Atmcurrentlyfailingpvcltable()
{

    yang_name = "atmCurrentlyFailingPVclTable"; yang_parent_name = "CISCO-IETF-ATM2-PVCTRAP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable::~Atmcurrentlyfailingpvcltable()
{
}

bool CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable::has_data() const
{
    for (std::size_t index=0; index<atmcurrentlyfailingpvclentry.size(); index++)
    {
        if(atmcurrentlyfailingpvclentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable::has_operation() const
{
    for (std::size_t index=0; index<atmcurrentlyfailingpvclentry.size(); index++)
    {
        if(atmcurrentlyfailingpvclentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ATM2-PVCTRAP-MIB:CISCO-IETF-ATM2-PVCTRAP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmCurrentlyFailingPVclTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atmCurrentlyFailingPVclEntry")
    {
        for(auto const & c : atmcurrentlyfailingpvclentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable::Atmcurrentlyfailingpvclentry>();
        c->parent = this;
        atmcurrentlyfailingpvclentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atmcurrentlyfailingpvclentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atmCurrentlyFailingPVclEntry")
        return true;
    return false;
}

CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable::Atmcurrentlyfailingpvclentry::Atmcurrentlyfailingpvclentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    atmvclvci{YType::str, "atmVclVci"},
    atmcurrentlyfailingpvcltimestamp{YType::uint32, "atmCurrentlyFailingPVclTimeStamp"},
    atmpreviouslyfailedpvcltimestamp{YType::uint32, "atmPreviouslyFailedPVclTimeStamp"}
{

    yang_name = "atmCurrentlyFailingPVclEntry"; yang_parent_name = "atmCurrentlyFailingPVclTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable::Atmcurrentlyfailingpvclentry::~Atmcurrentlyfailingpvclentry()
{
}

bool CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable::Atmcurrentlyfailingpvclentry::has_data() const
{
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| atmvclvci.is_set
	|| atmcurrentlyfailingpvcltimestamp.is_set
	|| atmpreviouslyfailedpvcltimestamp.is_set;
}

bool CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable::Atmcurrentlyfailingpvclentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atmvclvpi.yfilter)
	|| ydk::is_set(atmvclvci.yfilter)
	|| ydk::is_set(atmcurrentlyfailingpvcltimestamp.yfilter)
	|| ydk::is_set(atmpreviouslyfailedpvcltimestamp.yfilter);
}

std::string CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable::Atmcurrentlyfailingpvclentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ATM2-PVCTRAP-MIB:CISCO-IETF-ATM2-PVCTRAP-MIB/atmCurrentlyFailingPVclTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable::Atmcurrentlyfailingpvclentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmCurrentlyFailingPVclEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVclVpi='" <<atmvclvpi <<"']" <<"[atmVclVci='" <<atmvclvci <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable::Atmcurrentlyfailingpvclentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.yfilter)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (atmvclvci.is_set || is_set(atmvclvci.yfilter)) leaf_name_data.push_back(atmvclvci.get_name_leafdata());
    if (atmcurrentlyfailingpvcltimestamp.is_set || is_set(atmcurrentlyfailingpvcltimestamp.yfilter)) leaf_name_data.push_back(atmcurrentlyfailingpvcltimestamp.get_name_leafdata());
    if (atmpreviouslyfailedpvcltimestamp.is_set || is_set(atmpreviouslyfailedpvcltimestamp.yfilter)) leaf_name_data.push_back(atmpreviouslyfailedpvcltimestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable::Atmcurrentlyfailingpvclentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable::Atmcurrentlyfailingpvclentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable::Atmcurrentlyfailingpvclentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi = value;
        atmvclvpi.value_namespace = name_space;
        atmvclvpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVclVci")
    {
        atmvclvci = value;
        atmvclvci.value_namespace = name_space;
        atmvclvci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmCurrentlyFailingPVclTimeStamp")
    {
        atmcurrentlyfailingpvcltimestamp = value;
        atmcurrentlyfailingpvcltimestamp.value_namespace = name_space;
        atmcurrentlyfailingpvcltimestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmPreviouslyFailedPVclTimeStamp")
    {
        atmpreviouslyfailedpvcltimestamp = value;
        atmpreviouslyfailedpvcltimestamp.value_namespace = name_space;
        atmpreviouslyfailedpvcltimestamp.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable::Atmcurrentlyfailingpvclentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi.yfilter = yfilter;
    }
    if(value_path == "atmVclVci")
    {
        atmvclvci.yfilter = yfilter;
    }
    if(value_path == "atmCurrentlyFailingPVclTimeStamp")
    {
        atmcurrentlyfailingpvcltimestamp.yfilter = yfilter;
    }
    if(value_path == "atmPreviouslyFailedPVclTimeStamp")
    {
        atmpreviouslyfailedpvcltimestamp.yfilter = yfilter;
    }
}

bool CISCOIETFATM2PVCTRAPMIB::Atmcurrentlyfailingpvcltable::Atmcurrentlyfailingpvclentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmVclVpi" || name == "atmVclVci" || name == "atmCurrentlyFailingPVclTimeStamp" || name == "atmPreviouslyFailedPVclTimeStamp")
        return true;
    return false;
}


}
}

