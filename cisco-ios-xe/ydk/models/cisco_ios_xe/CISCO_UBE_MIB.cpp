
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_UBE_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_UBE_MIB {

CISCOUBEMIB::CISCOUBEMIB()
    :
    ciscoubemibobjects(std::make_shared<CISCOUBEMIB::Ciscoubemibobjects>())
{
    ciscoubemibobjects->parent = this;

    yang_name = "CISCO-UBE-MIB"; yang_parent_name = "CISCO-UBE-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOUBEMIB::~CISCOUBEMIB()
{
}

bool CISCOUBEMIB::has_data() const
{
    return (ciscoubemibobjects !=  nullptr && ciscoubemibobjects->has_data());
}

bool CISCOUBEMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ciscoubemibobjects !=  nullptr && ciscoubemibobjects->has_operation());
}

std::string CISCOUBEMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-UBE-MIB:CISCO-UBE-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOUBEMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOUBEMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoUbeMIBObjects")
    {
        if(ciscoubemibobjects == nullptr)
        {
            ciscoubemibobjects = std::make_shared<CISCOUBEMIB::Ciscoubemibobjects>();
        }
        return ciscoubemibobjects;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOUBEMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ciscoubemibobjects != nullptr)
    {
        children["ciscoUbeMIBObjects"] = ciscoubemibobjects;
    }

    return children;
}

void CISCOUBEMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOUBEMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOUBEMIB::clone_ptr() const
{
    return std::make_shared<CISCOUBEMIB>();
}

std::string CISCOUBEMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOUBEMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOUBEMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOUBEMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOUBEMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoUbeMIBObjects")
        return true;
    return false;
}

CISCOUBEMIB::Ciscoubemibobjects::Ciscoubemibobjects()
    :
    cubeenabled{YType::boolean, "cubeEnabled"},
    cubetotalsessionallowed{YType::uint32, "cubeTotalSessionAllowed"},
    cubeversion{YType::str, "cubeVersion"}
{

    yang_name = "ciscoUbeMIBObjects"; yang_parent_name = "CISCO-UBE-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOUBEMIB::Ciscoubemibobjects::~Ciscoubemibobjects()
{
}

bool CISCOUBEMIB::Ciscoubemibobjects::has_data() const
{
    return cubeenabled.is_set
	|| cubetotalsessionallowed.is_set
	|| cubeversion.is_set;
}

bool CISCOUBEMIB::Ciscoubemibobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cubeenabled.yfilter)
	|| ydk::is_set(cubetotalsessionallowed.yfilter)
	|| ydk::is_set(cubeversion.yfilter);
}

std::string CISCOUBEMIB::Ciscoubemibobjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-UBE-MIB:CISCO-UBE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOUBEMIB::Ciscoubemibobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoUbeMIBObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOUBEMIB::Ciscoubemibobjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cubeenabled.is_set || is_set(cubeenabled.yfilter)) leaf_name_data.push_back(cubeenabled.get_name_leafdata());
    if (cubetotalsessionallowed.is_set || is_set(cubetotalsessionallowed.yfilter)) leaf_name_data.push_back(cubetotalsessionallowed.get_name_leafdata());
    if (cubeversion.is_set || is_set(cubeversion.yfilter)) leaf_name_data.push_back(cubeversion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOUBEMIB::Ciscoubemibobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOUBEMIB::Ciscoubemibobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOUBEMIB::Ciscoubemibobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cubeEnabled")
    {
        cubeenabled = value;
        cubeenabled.value_namespace = name_space;
        cubeenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cubeTotalSessionAllowed")
    {
        cubetotalsessionallowed = value;
        cubetotalsessionallowed.value_namespace = name_space;
        cubetotalsessionallowed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cubeVersion")
    {
        cubeversion = value;
        cubeversion.value_namespace = name_space;
        cubeversion.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOUBEMIB::Ciscoubemibobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cubeEnabled")
    {
        cubeenabled.yfilter = yfilter;
    }
    if(value_path == "cubeTotalSessionAllowed")
    {
        cubetotalsessionallowed.yfilter = yfilter;
    }
    if(value_path == "cubeVersion")
    {
        cubeversion.yfilter = yfilter;
    }
}

bool CISCOUBEMIB::Ciscoubemibobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cubeEnabled" || name == "cubeTotalSessionAllowed" || name == "cubeVersion")
        return true;
    return false;
}


}
}

