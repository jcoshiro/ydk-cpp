
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_23.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_24.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_26.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_28.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_25.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_27.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_policymgr_oper {

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarList()
    :
    offset{YType::uint8, "offset"}
{

    yang_name = "pmap-var-list"; yang_parent_name = "policy-map-bg"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::~PmapVarList()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::has_data() const
{
    for (std::size_t index=0; index<pmap_var_list_arr.size(); index++)
    {
        if(pmap_var_list_arr[index]->has_data())
            return true;
    }
    for (auto const & leaf : offset.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::has_operation() const
{
    for (std::size_t index=0; index<pmap_var_list_arr.size(); index++)
    {
        if(pmap_var_list_arr[index]->has_operation())
            return true;
    }
    for (auto const & leaf : offset.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(offset.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-var-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto offset_name_datas = offset.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), offset_name_datas.begin(), offset_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmap-var-list-arr")
    {
        for(auto const & c : pmap_var_list_arr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarListArr>();
        c->parent = this;
        pmap_var_list_arr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pmap_var_list_arr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "offset")
    {
        offset.append(value);
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmap-var-list-arr" || name == "offset")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarListArr::PmapVarListArr()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
    	,
    val(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarListArr::Val>())
{
    val->parent = this;

    yang_name = "pmap-var-list-arr"; yang_parent_name = "pmap-var-list"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarListArr::~PmapVarListArr()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarListArr::has_data() const
{
    return id.is_set
	|| name.is_set
	|| (val !=  nullptr && val->has_data());
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarListArr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (val !=  nullptr && val->has_operation());
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarListArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-var-list-arr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarListArr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarListArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "val")
    {
        if(val == nullptr)
        {
            val = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarListArr::Val>();
        }
        return val;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarListArr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(val != nullptr)
    {
        children["val"] = val;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarListArr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarListArr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarListArr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "id" || name == "name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarListArr::Val::Val()
    :
    class_name{YType::str, "class-name"},
    dscp_val{YType::uint8, "dscp-val"},
    param_uint32_val{YType::uint32, "param-uint32-val"},
    prec_val{YType::uint8, "prec-val"},
    type{YType::enumeration, "type"},
    uint16_val{YType::uint16, "uint16_val"},
    uint32_val{YType::uint32, "uint32_val"},
    uint8_val{YType::uint8, "uint8_val"}
{

    yang_name = "val"; yang_parent_name = "pmap-var-list-arr"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarListArr::Val::~Val()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarListArr::Val::has_data() const
{
    return class_name.is_set
	|| dscp_val.is_set
	|| param_uint32_val.is_set
	|| prec_val.is_set
	|| type.is_set
	|| uint16_val.is_set
	|| uint32_val.is_set
	|| uint8_val.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarListArr::Val::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(dscp_val.yfilter)
	|| ydk::is_set(param_uint32_val.yfilter)
	|| ydk::is_set(prec_val.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(uint16_val.yfilter)
	|| ydk::is_set(uint32_val.yfilter)
	|| ydk::is_set(uint8_val.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarListArr::Val::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarListArr::Val::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (dscp_val.is_set || is_set(dscp_val.yfilter)) leaf_name_data.push_back(dscp_val.get_name_leafdata());
    if (param_uint32_val.is_set || is_set(param_uint32_val.yfilter)) leaf_name_data.push_back(param_uint32_val.get_name_leafdata());
    if (prec_val.is_set || is_set(prec_val.yfilter)) leaf_name_data.push_back(prec_val.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (uint16_val.is_set || is_set(uint16_val.yfilter)) leaf_name_data.push_back(uint16_val.get_name_leafdata());
    if (uint32_val.is_set || is_set(uint32_val.yfilter)) leaf_name_data.push_back(uint32_val.get_name_leafdata());
    if (uint8_val.is_set || is_set(uint8_val.yfilter)) leaf_name_data.push_back(uint8_val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarListArr::Val::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarListArr::Val::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarListArr::Val::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp-val")
    {
        dscp_val = value;
        dscp_val.value_namespace = name_space;
        dscp_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "param-uint32-val")
    {
        param_uint32_val = value;
        param_uint32_val.value_namespace = name_space;
        param_uint32_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec-val")
    {
        prec_val = value;
        prec_val.value_namespace = name_space;
        prec_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uint16_val")
    {
        uint16_val = value;
        uint16_val.value_namespace = name_space;
        uint16_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uint32_val")
    {
        uint32_val = value;
        uint32_val.value_namespace = name_space;
        uint32_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uint8_val")
    {
        uint8_val = value;
        uint8_val.value_namespace = name_space;
        uint8_val.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarListArr::Val::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "dscp-val")
    {
        dscp_val.yfilter = yfilter;
    }
    if(value_path == "param-uint32-val")
    {
        param_uint32_val.yfilter = yfilter;
    }
    if(value_path == "prec-val")
    {
        prec_val.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "uint16_val")
    {
        uint16_val.yfilter = yfilter;
    }
    if(value_path == "uint32_val")
    {
        uint32_val.yfilter = yfilter;
    }
    if(value_path == "uint8_val")
    {
        uint8_val.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::PmapVarList::PmapVarListArr::Val::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-name" || name == "dscp-val" || name == "param-uint32-val" || name == "prec-val" || name == "type" || name == "uint16_val" || name == "uint32_val" || name == "uint8_val")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapTypes()
{

    yang_name = "transient-policy-map-types"; yang_parent_name = "policy-map"; is_top_level_class = false; has_list_ancestor = false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::~TransientPolicyMapTypes()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::has_data() const
{
    for (std::size_t index=0; index<transient_policy_map_type.size(); index++)
    {
        if(transient_policy_map_type[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::has_operation() const
{
    for (std::size_t index=0; index<transient_policy_map_type.size(); index++)
    {
        if(transient_policy_map_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/policy-map/" << get_segment_path();
    return path_buffer.str();
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transient-policy-map-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transient-policy-map-type")
    {
        for(auto const & c : transient_policy_map_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType>();
        c->parent = this;
        transient_policy_map_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : transient_policy_map_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transient-policy-map-type")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientPolicyMapType()
    :
    type{YType::enumeration, "type"}
    	,
    transient_list_unuseds(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds>())
{
    transient_list_unuseds->parent = this;

    yang_name = "transient-policy-map-type"; yang_parent_name = "transient-policy-map-types"; is_top_level_class = false; has_list_ancestor = false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::~TransientPolicyMapType()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::has_data() const
{
    return type.is_set
	|| (transient_list_unuseds !=  nullptr && transient_list_unuseds->has_data());
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (transient_list_unuseds !=  nullptr && transient_list_unuseds->has_operation());
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/policy-map/transient-policy-map-types/" << get_segment_path();
    return path_buffer.str();
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transient-policy-map-type" <<"[type='" <<type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transient-list-unuseds")
    {
        if(transient_list_unuseds == nullptr)
        {
            transient_list_unuseds = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds>();
        }
        return transient_list_unuseds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transient_list_unuseds != nullptr)
    {
        children["transient-list-unuseds"] = transient_list_unuseds;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transient-list-unuseds" || name == "type")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnuseds()
{

    yang_name = "transient-list-unuseds"; yang_parent_name = "transient-policy-map-type"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::~TransientListUnuseds()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::has_data() const
{
    for (std::size_t index=0; index<transient_list_unused.size(); index++)
    {
        if(transient_list_unused[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::has_operation() const
{
    for (std::size_t index=0; index<transient_list_unused.size(); index++)
    {
        if(transient_list_unused[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transient-list-unuseds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transient-list-unused")
    {
        for(auto const & c : transient_list_unused)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused>();
        c->parent = this;
        transient_list_unused.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : transient_list_unused)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transient-list-unused")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::TransientListUnused()
    :
    policy_map_name{YType::str, "policy-map-name"},
    object_type{YType::enumeration, "object-type"},
    total_objects{YType::uint32, "total-objects"},
    transient{YType::boolean, "transient"}
{

    yang_name = "transient-list-unused"; yang_parent_name = "transient-list-unuseds"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::~TransientListUnused()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::has_data() const
{
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<objects.size(); index++)
    {
        if(objects[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return policy_map_name.is_set
	|| object_type.is_set
	|| total_objects.is_set
	|| transient.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::has_operation() const
{
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<objects.size(); index++)
    {
        if(objects[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter)
	|| ydk::is_set(object_type.yfilter)
	|| ydk::is_set(total_objects.yfilter)
	|| ydk::is_set(transient.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transient-list-unused" <<"[policy-map-name='" <<policy_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());
    if (object_type.is_set || is_set(object_type.yfilter)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (total_objects.is_set || is_set(total_objects.yfilter)) leaf_name_data.push_back(total_objects.get_name_leafdata());
    if (transient.is_set || is_set(transient.yfilter)) leaf_name_data.push_back(transient.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-map-reference")
    {
        for(auto const & c : class_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference>();
        c->parent = this;
        class_map_reference.push_back(c);
        return c;
    }

    if(child_yang_name == "objects")
    {
        for(auto const & c : objects)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Objects>();
        c->parent = this;
        objects.push_back(c);
        return c;
    }

    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_map_reference)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : objects)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-type")
    {
        object_type = value;
        object_type.value_namespace = name_space;
        object_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-objects")
    {
        total_objects = value;
        total_objects.value_namespace = name_space;
        total_objects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transient")
    {
        transient = value;
        transient.value_namespace = name_space;
        transient.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
    if(value_path == "object-type")
    {
        object_type.yfilter = yfilter;
    }
    if(value_path == "total-objects")
    {
        total_objects.yfilter = yfilter;
    }
    if(value_path == "transient")
    {
        transient.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-map-reference" || name == "objects" || name == "reference" || name == "policy-map-name" || name == "object-type" || name == "total-objects" || name == "transient")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::ClassMapReference()
    :
    total_reference_objects{YType::uint32, "total-reference-objects"}
{

    yang_name = "class-map-reference"; yang_parent_name = "transient-list-unused"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::~ClassMapReference()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::has_data() const
{
    for (std::size_t index=0; index<policy_map_reference.size(); index++)
    {
        if(policy_map_reference[index]->has_data())
            return true;
    }
    return total_reference_objects.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::has_operation() const
{
    for (std::size_t index=0; index<policy_map_reference.size(); index++)
    {
        if(policy_map_reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(total_reference_objects.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_reference_objects.is_set || is_set(total_reference_objects.yfilter)) leaf_name_data.push_back(total_reference_objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-map-reference")
    {
        for(auto const & c : policy_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference>();
        c->parent = this;
        policy_map_reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_map_reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-reference-objects")
    {
        total_reference_objects = value;
        total_reference_objects.value_namespace = name_space;
        total_reference_objects.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-reference-objects")
    {
        total_reference_objects.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-reference" || name == "total-reference-objects")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::PolicyMapReference()
    :
    object_type{YType::enumeration, "object-type"},
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "policy-map-reference"; yang_parent_name = "class-map-reference"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::~PolicyMapReference()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::has_data() const
{
    return object_type.is_set
	|| policy_map_name.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_type.yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_type.is_set || is_set(object_type.yfilter)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-type")
    {
        object_type = value;
        object_type.value_namespace = name_space;
        object_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-type")
    {
        object_type.yfilter = yfilter;
    }
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-type" || name == "policy-map-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Objects::Objects()
    :
    object_name{YType::str, "object-name"}
{

    yang_name = "objects"; yang_parent_name = "transient-list-unused"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Objects::~Objects()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Objects::has_data() const
{
    return object_name.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Objects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Objects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Objects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Objects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Objects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Objects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Objects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Objects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::Reference()
    :
    total_class_maps{YType::uint32, "total-class-maps"},
    total_flows{YType::uint32, "total-flows"},
    total_internal_reference_objects{YType::uint32, "total-internal-reference-objects"}
{

    yang_name = "reference"; yang_parent_name = "transient-list-unused"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::~Reference()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::has_data() const
{
    return total_class_maps.is_set
	|| total_flows.is_set
	|| total_internal_reference_objects.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_class_maps.yfilter)
	|| ydk::is_set(total_flows.yfilter)
	|| ydk::is_set(total_internal_reference_objects.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_class_maps.is_set || is_set(total_class_maps.yfilter)) leaf_name_data.push_back(total_class_maps.get_name_leafdata());
    if (total_flows.is_set || is_set(total_flows.yfilter)) leaf_name_data.push_back(total_flows.get_name_leafdata());
    if (total_internal_reference_objects.is_set || is_set(total_internal_reference_objects.yfilter)) leaf_name_data.push_back(total_internal_reference_objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-class-maps")
    {
        total_class_maps = value;
        total_class_maps.value_namespace = name_space;
        total_class_maps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-flows")
    {
        total_flows = value;
        total_flows.value_namespace = name_space;
        total_flows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-internal-reference-objects")
    {
        total_internal_reference_objects = value;
        total_internal_reference_objects.value_namespace = name_space;
        total_internal_reference_objects.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-class-maps")
    {
        total_class_maps.yfilter = yfilter;
    }
    if(value_path == "total-flows")
    {
        total_flows.yfilter = yfilter;
    }
    if(value_path == "total-internal-reference-objects")
    {
        total_internal_reference_objects.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-class-maps" || name == "total-flows" || name == "total-internal-reference-objects")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedTypes()
{

    yang_name = "policy-map-applied-types"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

PolicyManager::Global::PolicyMapAppliedTypes::~PolicyMapAppliedTypes()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::has_data() const
{
    for (std::size_t index=0; index<policy_map_applied_type.size(); index++)
    {
        if(policy_map_applied_type[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::has_operation() const
{
    for (std::size_t index=0; index<policy_map_applied_type.size(); index++)
    {
        if(policy_map_applied_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/" << get_segment_path();
    return path_buffer.str();
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-applied-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-map-applied-type")
    {
        for(auto const & c : policy_map_applied_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType>();
        c->parent = this;
        policy_map_applied_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_map_applied_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-applied-type")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::PolicyMapAppliedType()
    :
    type{YType::enumeration, "type"}
    	,
    if_names(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames>())
{
    if_names->parent = this;

    yang_name = "policy-map-applied-type"; yang_parent_name = "policy-map-applied-types"; is_top_level_class = false; has_list_ancestor = false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::~PolicyMapAppliedType()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::has_data() const
{
    return type.is_set
	|| (if_names !=  nullptr && if_names->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (if_names !=  nullptr && if_names->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/policy-map-applied-types/" << get_segment_path();
    return path_buffer.str();
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-applied-type" <<"[type='" <<type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-names")
    {
        if(if_names == nullptr)
        {
            if_names = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames>();
        }
        return if_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(if_names != nullptr)
    {
        children["if-names"] = if_names;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-names" || name == "type")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfNames()
{

    yang_name = "if-names"; yang_parent_name = "policy-map-applied-type"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::~IfNames()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::has_data() const
{
    for (std::size_t index=0; index<if_name.size(); index++)
    {
        if(if_name[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::has_operation() const
{
    for (std::size_t index=0; index<if_name.size(); index++)
    {
        if(if_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-name")
    {
        for(auto const & c : if_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName>();
        c->parent = this;
        if_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : if_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::IfName()
    :
    interface_name{YType::str, "interface-name"}
    	,
    input(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input>())
	,output(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "if-name"; yang_parent_name = "if-names"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::~IfName()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::has_data() const
{
    return interface_name.is_set
	|| (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-name" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output" || name == "interface-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Input()
    :
    detail(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail>())
{
    detail->parent = this;

    yang_name = "input"; yang_parent_name = "if-name"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::~Input()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::has_data() const
{
    return (detail !=  nullptr && detail->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::has_operation() const
{
    return is_set(yfilter)
	|| (detail !=  nullptr && detail->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Detail()
    :
    parent_pmap_name{YType::str, "parent-pmap-name"},
    pmap_type{YType::enumeration, "pmap-type"},
    subscriber_grp{YType::str, "subscriber-grp"}
{

    yang_name = "detail"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::~Detail()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::has_data() const
{
    for (std::size_t index=0; index<pmap_var_list.size(); index++)
    {
        if(pmap_var_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pmaps.size(); index++)
    {
        if(pmaps[index]->has_data())
            return true;
    }
    for (auto const & leaf : subscriber_grp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return parent_pmap_name.is_set
	|| pmap_type.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::has_operation() const
{
    for (std::size_t index=0; index<pmap_var_list.size(); index++)
    {
        if(pmap_var_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pmaps.size(); index++)
    {
        if(pmaps[index]->has_operation())
            return true;
    }
    for (auto const & leaf : subscriber_grp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(parent_pmap_name.yfilter)
	|| ydk::is_set(pmap_type.yfilter)
	|| ydk::is_set(subscriber_grp.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (parent_pmap_name.is_set || is_set(parent_pmap_name.yfilter)) leaf_name_data.push_back(parent_pmap_name.get_name_leafdata());
    if (pmap_type.is_set || is_set(pmap_type.yfilter)) leaf_name_data.push_back(pmap_type.get_name_leafdata());

    auto subscriber_grp_name_datas = subscriber_grp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), subscriber_grp_name_datas.begin(), subscriber_grp_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmap-var-list")
    {
        for(auto const & c : pmap_var_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::PmapVarList>();
        c->parent = this;
        pmap_var_list.push_back(c);
        return c;
    }

    if(child_yang_name == "pmaps")
    {
        for(auto const & c : pmaps)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps>();
        c->parent = this;
        pmaps.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pmap_var_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pmaps)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "parent-pmap-name")
    {
        parent_pmap_name = value;
        parent_pmap_name.value_namespace = name_space;
        parent_pmap_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmap-type")
    {
        pmap_type = value;
        pmap_type.value_namespace = name_space;
        pmap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-grp")
    {
        subscriber_grp.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "parent-pmap-name")
    {
        parent_pmap_name.yfilter = yfilter;
    }
    if(value_path == "pmap-type")
    {
        pmap_type.yfilter = yfilter;
    }
    if(value_path == "subscriber-grp")
    {
        subscriber_grp.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmap-var-list" || name == "pmaps" || name == "parent-pmap-name" || name == "pmap-type" || name == "subscriber-grp")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::PmapVarList::PmapVarList()
{

    yang_name = "pmap-var-list"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::PmapVarList::~PmapVarList()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::PmapVarList::has_data() const
{
    for (std::size_t index=0; index<var_list.size(); index++)
    {
        if(var_list[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::PmapVarList::has_operation() const
{
    for (std::size_t index=0; index<var_list.size(); index++)
    {
        if(var_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::PmapVarList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-var-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::PmapVarList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::PmapVarList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "var-list")
    {
        for(auto const & c : var_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::PmapVarList::VarList>();
        c->parent = this;
        var_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::PmapVarList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : var_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::PmapVarList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::PmapVarList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::PmapVarList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "var-list")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::PmapVarList::VarList::VarList()
    :
    class_name{YType::str, "class-name"},
    dscp_val{YType::uint8, "dscp-val"},
    param_uint32_val{YType::uint32, "param-uint32-val"},
    prec_val{YType::uint8, "prec-val"},
    type{YType::enumeration, "type"},
    uint16_val{YType::uint16, "uint16_val"},
    uint32_val{YType::uint32, "uint32_val"},
    uint8_val{YType::uint8, "uint8_val"}
{

    yang_name = "var-list"; yang_parent_name = "pmap-var-list"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::PmapVarList::VarList::~VarList()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::PmapVarList::VarList::has_data() const
{
    return class_name.is_set
	|| dscp_val.is_set
	|| param_uint32_val.is_set
	|| prec_val.is_set
	|| type.is_set
	|| uint16_val.is_set
	|| uint32_val.is_set
	|| uint8_val.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::PmapVarList::VarList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(dscp_val.yfilter)
	|| ydk::is_set(param_uint32_val.yfilter)
	|| ydk::is_set(prec_val.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(uint16_val.yfilter)
	|| ydk::is_set(uint32_val.yfilter)
	|| ydk::is_set(uint8_val.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::PmapVarList::VarList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "var-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::PmapVarList::VarList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (dscp_val.is_set || is_set(dscp_val.yfilter)) leaf_name_data.push_back(dscp_val.get_name_leafdata());
    if (param_uint32_val.is_set || is_set(param_uint32_val.yfilter)) leaf_name_data.push_back(param_uint32_val.get_name_leafdata());
    if (prec_val.is_set || is_set(prec_val.yfilter)) leaf_name_data.push_back(prec_val.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (uint16_val.is_set || is_set(uint16_val.yfilter)) leaf_name_data.push_back(uint16_val.get_name_leafdata());
    if (uint32_val.is_set || is_set(uint32_val.yfilter)) leaf_name_data.push_back(uint32_val.get_name_leafdata());
    if (uint8_val.is_set || is_set(uint8_val.yfilter)) leaf_name_data.push_back(uint8_val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::PmapVarList::VarList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::PmapVarList::VarList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::PmapVarList::VarList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp-val")
    {
        dscp_val = value;
        dscp_val.value_namespace = name_space;
        dscp_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "param-uint32-val")
    {
        param_uint32_val = value;
        param_uint32_val.value_namespace = name_space;
        param_uint32_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec-val")
    {
        prec_val = value;
        prec_val.value_namespace = name_space;
        prec_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uint16_val")
    {
        uint16_val = value;
        uint16_val.value_namespace = name_space;
        uint16_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uint32_val")
    {
        uint32_val = value;
        uint32_val.value_namespace = name_space;
        uint32_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uint8_val")
    {
        uint8_val = value;
        uint8_val.value_namespace = name_space;
        uint8_val.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::PmapVarList::VarList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "dscp-val")
    {
        dscp_val.yfilter = yfilter;
    }
    if(value_path == "param-uint32-val")
    {
        param_uint32_val.yfilter = yfilter;
    }
    if(value_path == "prec-val")
    {
        prec_val.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "uint16_val")
    {
        uint16_val.yfilter = yfilter;
    }
    if(value_path == "uint32_val")
    {
        uint32_val.yfilter = yfilter;
    }
    if(value_path == "uint8_val")
    {
        uint8_val.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::PmapVarList::VarList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-name" || name == "dscp-val" || name == "param-uint32-val" || name == "prec-val" || name == "type" || name == "uint16_val" || name == "uint32_val" || name == "uint8_val")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::Pmaps()
{

    yang_name = "pmaps"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::~Pmaps()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::has_data() const
{
    for (std::size_t index=0; index<policy_map_bg.size(); index++)
    {
        if(policy_map_bg[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::has_operation() const
{
    for (std::size_t index=0; index<policy_map_bg.size(); index++)
    {
        if(policy_map_bg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmaps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-map-bg")
    {
        for(auto const & c : policy_map_bg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg>();
        c->parent = this;
        policy_map_bg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_map_bg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-bg")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PolicyMapBg()
    :
    description{YType::str, "description"},
    name{YType::str, "name"},
    type{YType::enumeration, "type"}
    	,
    event_infop(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop>())
	,pmap_var_list(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList>())
{
    event_infop->parent = this;
    pmap_var_list->parent = this;

    yang_name = "policy-map-bg"; yang_parent_name = "pmaps"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::~PolicyMapBg()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::has_data() const
{
    return description.is_set
	|| name.is_set
	|| type.is_set
	|| (event_infop !=  nullptr && event_infop->has_data())
	|| (pmap_var_list !=  nullptr && pmap_var_list->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (event_infop !=  nullptr && event_infop->has_operation())
	|| (pmap_var_list !=  nullptr && pmap_var_list->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-bg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-infop")
    {
        if(event_infop == nullptr)
        {
            event_infop = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop>();
        }
        return event_infop;
    }

    if(child_yang_name == "pmap-var-list")
    {
        if(pmap_var_list == nullptr)
        {
            pmap_var_list = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList>();
        }
        return pmap_var_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(event_infop != nullptr)
    {
        children["event-infop"] = event_infop;
    }

    if(pmap_var_list != nullptr)
    {
        children["pmap-var-list"] = pmap_var_list;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-infop" || name == "pmap-var-list" || name == "description" || name == "name" || name == "type")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::EventInfop()
{

    yang_name = "event-infop"; yang_parent_name = "policy-map-bg"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::~EventInfop()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::has_data() const
{
    for (std::size_t index=0; index<policy_event_info_bg.size(); index++)
    {
        if(policy_event_info_bg[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::has_operation() const
{
    for (std::size_t index=0; index<policy_event_info_bg.size(); index++)
    {
        if(policy_event_info_bg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-infop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-event-info-bg")
    {
        for(auto const & c : policy_event_info_bg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg>();
        c->parent = this;
        policy_event_info_bg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_event_info_bg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-event-info-bg")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::PolicyEventInfoBg()
    :
    avl_tree{YType::uint64, "avl-tree"},
    cond_eval{YType::enumeration, "cond-eval"},
    event_type{YType::enumeration, "event-type"},
    flags{YType::uint32, "flags"}
    	,
    class_infop(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop>())
{
    class_infop->parent = this;

    yang_name = "policy-event-info-bg"; yang_parent_name = "event-infop"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::~PolicyEventInfoBg()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::has_data() const
{
    return avl_tree.is_set
	|| cond_eval.is_set
	|| event_type.is_set
	|| flags.is_set
	|| (class_infop !=  nullptr && class_infop->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(avl_tree.yfilter)
	|| ydk::is_set(cond_eval.yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (class_infop !=  nullptr && class_infop->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-event-info-bg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avl_tree.is_set || is_set(avl_tree.yfilter)) leaf_name_data.push_back(avl_tree.get_name_leafdata());
    if (cond_eval.is_set || is_set(cond_eval.yfilter)) leaf_name_data.push_back(cond_eval.get_name_leafdata());
    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-infop")
    {
        if(class_infop == nullptr)
        {
            class_infop = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop>();
        }
        return class_infop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(class_infop != nullptr)
    {
        children["class-infop"] = class_infop;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "avl-tree")
    {
        avl_tree = value;
        avl_tree.value_namespace = name_space;
        avl_tree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cond-eval")
    {
        cond_eval = value;
        cond_eval.value_namespace = name_space;
        cond_eval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "avl-tree")
    {
        avl_tree.yfilter = yfilter;
    }
    if(value_path == "cond-eval")
    {
        cond_eval.yfilter = yfilter;
    }
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-infop" || name == "avl-tree" || name == "cond-eval" || name == "event-type" || name == "flags")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::ClassInfop()
{

    yang_name = "class-infop"; yang_parent_name = "policy-event-info-bg"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::~ClassInfop()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::has_data() const
{
    for (std::size_t index=0; index<policy_class_info_bg.size(); index++)
    {
        if(policy_class_info_bg[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::has_operation() const
{
    for (std::size_t index=0; index<policy_class_info_bg.size(); index++)
    {
        if(policy_class_info_bg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-infop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-class-info-bg")
    {
        for(auto const & c : policy_class_info_bg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg>();
        c->parent = this;
        policy_class_info_bg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_class_info_bg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-class-info-bg")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::PolicyClassInfoBg()
    :
    ctype{YType::enumeration, "ctype"},
    exe_strat{YType::enumeration, "exe-strat"},
    flags{YType::uint32, "flags"},
    num_actions{YType::uint16, "num-actions"},
    policy_class_hd{YType::uint32, "policy-class-hd"},
    seq{YType::uint32, "seq"},
    version{YType::uint8, "version"}
    	,
    act_infop(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop>())
	,cl_encode(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode>())
	,clmp_p(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP>())
{
    act_infop->parent = this;
    cl_encode->parent = this;
    clmp_p->parent = this;

    yang_name = "policy-class-info-bg"; yang_parent_name = "class-infop"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::~PolicyClassInfoBg()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::has_data() const
{
    return ctype.is_set
	|| exe_strat.is_set
	|| flags.is_set
	|| num_actions.is_set
	|| policy_class_hd.is_set
	|| seq.is_set
	|| version.is_set
	|| (act_infop !=  nullptr && act_infop->has_data())
	|| (cl_encode !=  nullptr && cl_encode->has_data())
	|| (clmp_p !=  nullptr && clmp_p->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(exe_strat.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(num_actions.yfilter)
	|| ydk::is_set(policy_class_hd.yfilter)
	|| ydk::is_set(seq.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (act_infop !=  nullptr && act_infop->has_operation())
	|| (cl_encode !=  nullptr && cl_encode->has_operation())
	|| (clmp_p !=  nullptr && clmp_p->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-info-bg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (exe_strat.is_set || is_set(exe_strat.yfilter)) leaf_name_data.push_back(exe_strat.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (num_actions.is_set || is_set(num_actions.yfilter)) leaf_name_data.push_back(num_actions.get_name_leafdata());
    if (policy_class_hd.is_set || is_set(policy_class_hd.yfilter)) leaf_name_data.push_back(policy_class_hd.get_name_leafdata());
    if (seq.is_set || is_set(seq.yfilter)) leaf_name_data.push_back(seq.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "act-infop")
    {
        if(act_infop == nullptr)
        {
            act_infop = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop>();
        }
        return act_infop;
    }

    if(child_yang_name == "cl-encode")
    {
        if(cl_encode == nullptr)
        {
            cl_encode = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode>();
        }
        return cl_encode;
    }

    if(child_yang_name == "clmp-p")
    {
        if(clmp_p == nullptr)
        {
            clmp_p = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP>();
        }
        return clmp_p;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(act_infop != nullptr)
    {
        children["act-infop"] = act_infop;
    }

    if(cl_encode != nullptr)
    {
        children["cl-encode"] = cl_encode;
    }

    if(clmp_p != nullptr)
    {
        children["clmp-p"] = clmp_p;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exe-strat")
    {
        exe_strat = value;
        exe_strat.value_namespace = name_space;
        exe_strat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-actions")
    {
        num_actions = value;
        num_actions.value_namespace = name_space;
        num_actions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-class-hd")
    {
        policy_class_hd = value;
        policy_class_hd.value_namespace = name_space;
        policy_class_hd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq")
    {
        seq = value;
        seq.value_namespace = name_space;
        seq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "exe-strat")
    {
        exe_strat.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "num-actions")
    {
        num_actions.yfilter = yfilter;
    }
    if(value_path == "policy-class-hd")
    {
        policy_class_hd.yfilter = yfilter;
    }
    if(value_path == "seq")
    {
        seq.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "act-infop" || name == "cl-encode" || name == "clmp-p" || name == "ctype" || name == "exe-strat" || name == "flags" || name == "num-actions" || name == "policy-class-hd" || name == "seq" || name == "version")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::ActInfop()
{

    yang_name = "act-infop"; yang_parent_name = "policy-class-info-bg"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::~ActInfop()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::has_data() const
{
    for (std::size_t index=0; index<policy_action_info_st.size(); index++)
    {
        if(policy_action_info_st[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::has_operation() const
{
    for (std::size_t index=0; index<policy_action_info_st.size(); index++)
    {
        if(policy_action_info_st[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "act-infop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-action-info-st")
    {
        for(auto const & c : policy_action_info_st)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt>();
        c->parent = this;
        policy_action_info_st.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_action_info_st)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-action-info-st")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::PolicyActionInfoSt()
    :
    flags{YType::uint16, "flags"},
    seq{YType::uint16, "seq"}
    	,
    actp(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp>())
{
    actp->parent = this;

    yang_name = "policy-action-info-st"; yang_parent_name = "act-infop"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::~PolicyActionInfoSt()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::has_data() const
{
    return flags.is_set
	|| seq.is_set
	|| (actp !=  nullptr && actp->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(seq.yfilter)
	|| (actp !=  nullptr && actp->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-action-info-st";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (seq.is_set || is_set(seq.yfilter)) leaf_name_data.push_back(seq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actp")
    {
        if(actp == nullptr)
        {
            actp = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp>();
        }
        return actp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(actp != nullptr)
    {
        children["actp"] = actp;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq")
    {
        seq = value;
        seq.value_namespace = name_space;
        seq.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "seq")
    {
        seq.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actp" || name == "flags" || name == "seq")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Actp()
    :
    data_p{YType::uint32, "data-p"},
    type{YType::enumeration, "type"}
    	,
    accounting_event_aaa(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa>())
	,acct_aaa_list(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList>())
	,act_template(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate>())
	,afm_react(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact>())
	,authen_aaa(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa>())
	,authorize_id(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId>())
	,bwrem(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem>())
	,cac(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac>())
	,child_policy(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy>())
	,collect_id(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId>())
	,copy(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy>())
	,deact_template(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate>())
	,decode_id(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId>())
	,encap(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap>())
	,flow_parm(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm>())
	,fmm(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm>())
	,httpr(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr>())
	,ipcbr(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr>())
	,ipv4_nh(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh>())
	,ipv6_nh(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh>())
	,mark(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark>())
	,mark2(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2>())
	,mdi(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi>())
	,mdi_rtp(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp>())
	,min_bw(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw>())
	,out_intf(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf>())
	,pbf(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf>())
	,pfc(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc>())
	,police(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police>())
	,prepaid_cfg(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg>())
	,prio(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio>())
	,proxy_aaa(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa>())
	,punt(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt>())
	,qlimit(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit>())
	,query_ancp(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp>())
	,redirect(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Redirect>())
	,rtp(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp>())
	,rtp_j2k(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K>())
	,rtp_mmr(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr>())
	,rtp_voice(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice>())
	,serv_func(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ServFunc>())
	,set_timer(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer>())
	,sfrag(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag>())
	,shape(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape>())
	,stop_timer(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer>())
	,timeout_idle(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle>())
	,wred(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred>())
{
    accounting_event_aaa->parent = this;
    acct_aaa_list->parent = this;
    act_template->parent = this;
    afm_react->parent = this;
    authen_aaa->parent = this;
    authorize_id->parent = this;
    bwrem->parent = this;
    cac->parent = this;
    child_policy->parent = this;
    collect_id->parent = this;
    copy->parent = this;
    deact_template->parent = this;
    decode_id->parent = this;
    encap->parent = this;
    flow_parm->parent = this;
    fmm->parent = this;
    httpr->parent = this;
    ipcbr->parent = this;
    ipv4_nh->parent = this;
    ipv6_nh->parent = this;
    mark->parent = this;
    mark2->parent = this;
    mdi->parent = this;
    mdi_rtp->parent = this;
    min_bw->parent = this;
    out_intf->parent = this;
    pbf->parent = this;
    pfc->parent = this;
    police->parent = this;
    prepaid_cfg->parent = this;
    prio->parent = this;
    proxy_aaa->parent = this;
    punt->parent = this;
    qlimit->parent = this;
    query_ancp->parent = this;
    redirect->parent = this;
    rtp->parent = this;
    rtp_j2k->parent = this;
    rtp_mmr->parent = this;
    rtp_voice->parent = this;
    serv_func->parent = this;
    set_timer->parent = this;
    sfrag->parent = this;
    shape->parent = this;
    stop_timer->parent = this;
    timeout_idle->parent = this;
    wred->parent = this;

    yang_name = "actp"; yang_parent_name = "policy-action-info-st"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::~Actp()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::has_data() const
{
    return data_p.is_set
	|| type.is_set
	|| (accounting_event_aaa !=  nullptr && accounting_event_aaa->has_data())
	|| (acct_aaa_list !=  nullptr && acct_aaa_list->has_data())
	|| (act_template !=  nullptr && act_template->has_data())
	|| (afm_react !=  nullptr && afm_react->has_data())
	|| (authen_aaa !=  nullptr && authen_aaa->has_data())
	|| (authorize_id !=  nullptr && authorize_id->has_data())
	|| (bwrem !=  nullptr && bwrem->has_data())
	|| (cac !=  nullptr && cac->has_data())
	|| (child_policy !=  nullptr && child_policy->has_data())
	|| (collect_id !=  nullptr && collect_id->has_data())
	|| (copy !=  nullptr && copy->has_data())
	|| (deact_template !=  nullptr && deact_template->has_data())
	|| (decode_id !=  nullptr && decode_id->has_data())
	|| (encap !=  nullptr && encap->has_data())
	|| (flow_parm !=  nullptr && flow_parm->has_data())
	|| (fmm !=  nullptr && fmm->has_data())
	|| (httpr !=  nullptr && httpr->has_data())
	|| (ipcbr !=  nullptr && ipcbr->has_data())
	|| (ipv4_nh !=  nullptr && ipv4_nh->has_data())
	|| (ipv6_nh !=  nullptr && ipv6_nh->has_data())
	|| (mark !=  nullptr && mark->has_data())
	|| (mark2 !=  nullptr && mark2->has_data())
	|| (mdi !=  nullptr && mdi->has_data())
	|| (mdi_rtp !=  nullptr && mdi_rtp->has_data())
	|| (min_bw !=  nullptr && min_bw->has_data())
	|| (out_intf !=  nullptr && out_intf->has_data())
	|| (pbf !=  nullptr && pbf->has_data())
	|| (pfc !=  nullptr && pfc->has_data())
	|| (police !=  nullptr && police->has_data())
	|| (prepaid_cfg !=  nullptr && prepaid_cfg->has_data())
	|| (prio !=  nullptr && prio->has_data())
	|| (proxy_aaa !=  nullptr && proxy_aaa->has_data())
	|| (punt !=  nullptr && punt->has_data())
	|| (qlimit !=  nullptr && qlimit->has_data())
	|| (query_ancp !=  nullptr && query_ancp->has_data())
	|| (redirect !=  nullptr && redirect->has_data())
	|| (rtp !=  nullptr && rtp->has_data())
	|| (rtp_j2k !=  nullptr && rtp_j2k->has_data())
	|| (rtp_mmr !=  nullptr && rtp_mmr->has_data())
	|| (rtp_voice !=  nullptr && rtp_voice->has_data())
	|| (serv_func !=  nullptr && serv_func->has_data())
	|| (set_timer !=  nullptr && set_timer->has_data())
	|| (sfrag !=  nullptr && sfrag->has_data())
	|| (shape !=  nullptr && shape->has_data())
	|| (stop_timer !=  nullptr && stop_timer->has_data())
	|| (timeout_idle !=  nullptr && timeout_idle->has_data())
	|| (wred !=  nullptr && wred->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_p.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (accounting_event_aaa !=  nullptr && accounting_event_aaa->has_operation())
	|| (acct_aaa_list !=  nullptr && acct_aaa_list->has_operation())
	|| (act_template !=  nullptr && act_template->has_operation())
	|| (afm_react !=  nullptr && afm_react->has_operation())
	|| (authen_aaa !=  nullptr && authen_aaa->has_operation())
	|| (authorize_id !=  nullptr && authorize_id->has_operation())
	|| (bwrem !=  nullptr && bwrem->has_operation())
	|| (cac !=  nullptr && cac->has_operation())
	|| (child_policy !=  nullptr && child_policy->has_operation())
	|| (collect_id !=  nullptr && collect_id->has_operation())
	|| (copy !=  nullptr && copy->has_operation())
	|| (deact_template !=  nullptr && deact_template->has_operation())
	|| (decode_id !=  nullptr && decode_id->has_operation())
	|| (encap !=  nullptr && encap->has_operation())
	|| (flow_parm !=  nullptr && flow_parm->has_operation())
	|| (fmm !=  nullptr && fmm->has_operation())
	|| (httpr !=  nullptr && httpr->has_operation())
	|| (ipcbr !=  nullptr && ipcbr->has_operation())
	|| (ipv4_nh !=  nullptr && ipv4_nh->has_operation())
	|| (ipv6_nh !=  nullptr && ipv6_nh->has_operation())
	|| (mark !=  nullptr && mark->has_operation())
	|| (mark2 !=  nullptr && mark2->has_operation())
	|| (mdi !=  nullptr && mdi->has_operation())
	|| (mdi_rtp !=  nullptr && mdi_rtp->has_operation())
	|| (min_bw !=  nullptr && min_bw->has_operation())
	|| (out_intf !=  nullptr && out_intf->has_operation())
	|| (pbf !=  nullptr && pbf->has_operation())
	|| (pfc !=  nullptr && pfc->has_operation())
	|| (police !=  nullptr && police->has_operation())
	|| (prepaid_cfg !=  nullptr && prepaid_cfg->has_operation())
	|| (prio !=  nullptr && prio->has_operation())
	|| (proxy_aaa !=  nullptr && proxy_aaa->has_operation())
	|| (punt !=  nullptr && punt->has_operation())
	|| (qlimit !=  nullptr && qlimit->has_operation())
	|| (query_ancp !=  nullptr && query_ancp->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (rtp !=  nullptr && rtp->has_operation())
	|| (rtp_j2k !=  nullptr && rtp_j2k->has_operation())
	|| (rtp_mmr !=  nullptr && rtp_mmr->has_operation())
	|| (rtp_voice !=  nullptr && rtp_voice->has_operation())
	|| (serv_func !=  nullptr && serv_func->has_operation())
	|| (set_timer !=  nullptr && set_timer->has_operation())
	|| (sfrag !=  nullptr && sfrag->has_operation())
	|| (shape !=  nullptr && shape->has_operation())
	|| (stop_timer !=  nullptr && stop_timer->has_operation())
	|| (timeout_idle !=  nullptr && timeout_idle->has_operation())
	|| (wred !=  nullptr && wred->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_p.is_set || is_set(data_p.yfilter)) leaf_name_data.push_back(data_p.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting-event-aaa")
    {
        if(accounting_event_aaa == nullptr)
        {
            accounting_event_aaa = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa>();
        }
        return accounting_event_aaa;
    }

    if(child_yang_name == "acct-aaa-list")
    {
        if(acct_aaa_list == nullptr)
        {
            acct_aaa_list = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList>();
        }
        return acct_aaa_list;
    }

    if(child_yang_name == "act-template")
    {
        if(act_template == nullptr)
        {
            act_template = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate>();
        }
        return act_template;
    }

    if(child_yang_name == "afm-react")
    {
        if(afm_react == nullptr)
        {
            afm_react = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact>();
        }
        return afm_react;
    }

    if(child_yang_name == "authen-aaa")
    {
        if(authen_aaa == nullptr)
        {
            authen_aaa = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa>();
        }
        return authen_aaa;
    }

    if(child_yang_name == "authorize-id")
    {
        if(authorize_id == nullptr)
        {
            authorize_id = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId>();
        }
        return authorize_id;
    }

    if(child_yang_name == "bwrem")
    {
        if(bwrem == nullptr)
        {
            bwrem = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem>();
        }
        return bwrem;
    }

    if(child_yang_name == "cac")
    {
        if(cac == nullptr)
        {
            cac = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac>();
        }
        return cac;
    }

    if(child_yang_name == "child-policy")
    {
        if(child_policy == nullptr)
        {
            child_policy = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy>();
        }
        return child_policy;
    }

    if(child_yang_name == "collect-id")
    {
        if(collect_id == nullptr)
        {
            collect_id = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId>();
        }
        return collect_id;
    }

    if(child_yang_name == "copy")
    {
        if(copy == nullptr)
        {
            copy = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy>();
        }
        return copy;
    }

    if(child_yang_name == "deact-template")
    {
        if(deact_template == nullptr)
        {
            deact_template = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate>();
        }
        return deact_template;
    }

    if(child_yang_name == "decode-id")
    {
        if(decode_id == nullptr)
        {
            decode_id = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId>();
        }
        return decode_id;
    }

    if(child_yang_name == "encap")
    {
        if(encap == nullptr)
        {
            encap = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap>();
        }
        return encap;
    }

    if(child_yang_name == "flow-parm")
    {
        if(flow_parm == nullptr)
        {
            flow_parm = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm>();
        }
        return flow_parm;
    }

    if(child_yang_name == "fmm")
    {
        if(fmm == nullptr)
        {
            fmm = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm>();
        }
        return fmm;
    }

    if(child_yang_name == "httpr")
    {
        if(httpr == nullptr)
        {
            httpr = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr>();
        }
        return httpr;
    }

    if(child_yang_name == "ipcbr")
    {
        if(ipcbr == nullptr)
        {
            ipcbr = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr>();
        }
        return ipcbr;
    }

    if(child_yang_name == "ipv4-nh")
    {
        if(ipv4_nh == nullptr)
        {
            ipv4_nh = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh>();
        }
        return ipv4_nh;
    }

    if(child_yang_name == "ipv6-nh")
    {
        if(ipv6_nh == nullptr)
        {
            ipv6_nh = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh>();
        }
        return ipv6_nh;
    }

    if(child_yang_name == "mark")
    {
        if(mark == nullptr)
        {
            mark = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark>();
        }
        return mark;
    }

    if(child_yang_name == "mark2")
    {
        if(mark2 == nullptr)
        {
            mark2 = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2>();
        }
        return mark2;
    }

    if(child_yang_name == "mdi")
    {
        if(mdi == nullptr)
        {
            mdi = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi>();
        }
        return mdi;
    }

    if(child_yang_name == "mdi-rtp")
    {
        if(mdi_rtp == nullptr)
        {
            mdi_rtp = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp>();
        }
        return mdi_rtp;
    }

    if(child_yang_name == "min-bw")
    {
        if(min_bw == nullptr)
        {
            min_bw = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw>();
        }
        return min_bw;
    }

    if(child_yang_name == "out-intf")
    {
        if(out_intf == nullptr)
        {
            out_intf = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf>();
        }
        return out_intf;
    }

    if(child_yang_name == "pbf")
    {
        if(pbf == nullptr)
        {
            pbf = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf>();
        }
        return pbf;
    }

    if(child_yang_name == "pfc")
    {
        if(pfc == nullptr)
        {
            pfc = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc>();
        }
        return pfc;
    }

    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police>();
        }
        return police;
    }

    if(child_yang_name == "prepaid-cfg")
    {
        if(prepaid_cfg == nullptr)
        {
            prepaid_cfg = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg>();
        }
        return prepaid_cfg;
    }

    if(child_yang_name == "prio")
    {
        if(prio == nullptr)
        {
            prio = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio>();
        }
        return prio;
    }

    if(child_yang_name == "proxy-aaa")
    {
        if(proxy_aaa == nullptr)
        {
            proxy_aaa = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa>();
        }
        return proxy_aaa;
    }

    if(child_yang_name == "punt")
    {
        if(punt == nullptr)
        {
            punt = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt>();
        }
        return punt;
    }

    if(child_yang_name == "qlimit")
    {
        if(qlimit == nullptr)
        {
            qlimit = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit>();
        }
        return qlimit;
    }

    if(child_yang_name == "query-ancp")
    {
        if(query_ancp == nullptr)
        {
            query_ancp = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp>();
        }
        return query_ancp;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "rtp")
    {
        if(rtp == nullptr)
        {
            rtp = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp>();
        }
        return rtp;
    }

    if(child_yang_name == "rtp-j2k")
    {
        if(rtp_j2k == nullptr)
        {
            rtp_j2k = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K>();
        }
        return rtp_j2k;
    }

    if(child_yang_name == "rtp-mmr")
    {
        if(rtp_mmr == nullptr)
        {
            rtp_mmr = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr>();
        }
        return rtp_mmr;
    }

    if(child_yang_name == "rtp-voice")
    {
        if(rtp_voice == nullptr)
        {
            rtp_voice = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice>();
        }
        return rtp_voice;
    }

    if(child_yang_name == "serv-func")
    {
        if(serv_func == nullptr)
        {
            serv_func = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ServFunc>();
        }
        return serv_func;
    }

    if(child_yang_name == "set-timer")
    {
        if(set_timer == nullptr)
        {
            set_timer = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer>();
        }
        return set_timer;
    }

    if(child_yang_name == "sfrag")
    {
        if(sfrag == nullptr)
        {
            sfrag = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag>();
        }
        return sfrag;
    }

    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape>();
        }
        return shape;
    }

    if(child_yang_name == "stop-timer")
    {
        if(stop_timer == nullptr)
        {
            stop_timer = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer>();
        }
        return stop_timer;
    }

    if(child_yang_name == "timeout-idle")
    {
        if(timeout_idle == nullptr)
        {
            timeout_idle = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle>();
        }
        return timeout_idle;
    }

    if(child_yang_name == "wred")
    {
        if(wred == nullptr)
        {
            wred = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred>();
        }
        return wred;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting_event_aaa != nullptr)
    {
        children["accounting-event-aaa"] = accounting_event_aaa;
    }

    if(acct_aaa_list != nullptr)
    {
        children["acct-aaa-list"] = acct_aaa_list;
    }

    if(act_template != nullptr)
    {
        children["act-template"] = act_template;
    }

    if(afm_react != nullptr)
    {
        children["afm-react"] = afm_react;
    }

    if(authen_aaa != nullptr)
    {
        children["authen-aaa"] = authen_aaa;
    }

    if(authorize_id != nullptr)
    {
        children["authorize-id"] = authorize_id;
    }

    if(bwrem != nullptr)
    {
        children["bwrem"] = bwrem;
    }

    if(cac != nullptr)
    {
        children["cac"] = cac;
    }

    if(child_policy != nullptr)
    {
        children["child-policy"] = child_policy;
    }

    if(collect_id != nullptr)
    {
        children["collect-id"] = collect_id;
    }

    if(copy != nullptr)
    {
        children["copy"] = copy;
    }

    if(deact_template != nullptr)
    {
        children["deact-template"] = deact_template;
    }

    if(decode_id != nullptr)
    {
        children["decode-id"] = decode_id;
    }

    if(encap != nullptr)
    {
        children["encap"] = encap;
    }

    if(flow_parm != nullptr)
    {
        children["flow-parm"] = flow_parm;
    }

    if(fmm != nullptr)
    {
        children["fmm"] = fmm;
    }

    if(httpr != nullptr)
    {
        children["httpr"] = httpr;
    }

    if(ipcbr != nullptr)
    {
        children["ipcbr"] = ipcbr;
    }

    if(ipv4_nh != nullptr)
    {
        children["ipv4-nh"] = ipv4_nh;
    }

    if(ipv6_nh != nullptr)
    {
        children["ipv6-nh"] = ipv6_nh;
    }

    if(mark != nullptr)
    {
        children["mark"] = mark;
    }

    if(mark2 != nullptr)
    {
        children["mark2"] = mark2;
    }

    if(mdi != nullptr)
    {
        children["mdi"] = mdi;
    }

    if(mdi_rtp != nullptr)
    {
        children["mdi-rtp"] = mdi_rtp;
    }

    if(min_bw != nullptr)
    {
        children["min-bw"] = min_bw;
    }

    if(out_intf != nullptr)
    {
        children["out-intf"] = out_intf;
    }

    if(pbf != nullptr)
    {
        children["pbf"] = pbf;
    }

    if(pfc != nullptr)
    {
        children["pfc"] = pfc;
    }

    if(police != nullptr)
    {
        children["police"] = police;
    }

    if(prepaid_cfg != nullptr)
    {
        children["prepaid-cfg"] = prepaid_cfg;
    }

    if(prio != nullptr)
    {
        children["prio"] = prio;
    }

    if(proxy_aaa != nullptr)
    {
        children["proxy-aaa"] = proxy_aaa;
    }

    if(punt != nullptr)
    {
        children["punt"] = punt;
    }

    if(qlimit != nullptr)
    {
        children["qlimit"] = qlimit;
    }

    if(query_ancp != nullptr)
    {
        children["query-ancp"] = query_ancp;
    }

    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    if(rtp != nullptr)
    {
        children["rtp"] = rtp;
    }

    if(rtp_j2k != nullptr)
    {
        children["rtp-j2k"] = rtp_j2k;
    }

    if(rtp_mmr != nullptr)
    {
        children["rtp-mmr"] = rtp_mmr;
    }

    if(rtp_voice != nullptr)
    {
        children["rtp-voice"] = rtp_voice;
    }

    if(serv_func != nullptr)
    {
        children["serv-func"] = serv_func;
    }

    if(set_timer != nullptr)
    {
        children["set-timer"] = set_timer;
    }

    if(sfrag != nullptr)
    {
        children["sfrag"] = sfrag;
    }

    if(shape != nullptr)
    {
        children["shape"] = shape;
    }

    if(stop_timer != nullptr)
    {
        children["stop-timer"] = stop_timer;
    }

    if(timeout_idle != nullptr)
    {
        children["timeout-idle"] = timeout_idle;
    }

    if(wred != nullptr)
    {
        children["wred"] = wred;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-p")
    {
        data_p = value;
        data_p.value_namespace = name_space;
        data_p.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-p")
    {
        data_p.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting-event-aaa" || name == "acct-aaa-list" || name == "act-template" || name == "afm-react" || name == "authen-aaa" || name == "authorize-id" || name == "bwrem" || name == "cac" || name == "child-policy" || name == "collect-id" || name == "copy" || name == "deact-template" || name == "decode-id" || name == "encap" || name == "flow-parm" || name == "fmm" || name == "httpr" || name == "ipcbr" || name == "ipv4-nh" || name == "ipv6-nh" || name == "mark" || name == "mark2" || name == "mdi" || name == "mdi-rtp" || name == "min-bw" || name == "out-intf" || name == "pbf" || name == "pfc" || name == "police" || name == "prepaid-cfg" || name == "prio" || name == "proxy-aaa" || name == "punt" || name == "qlimit" || name == "query-ancp" || name == "redirect" || name == "rtp" || name == "rtp-j2k" || name == "rtp-mmr" || name == "rtp-voice" || name == "serv-func" || name == "set-timer" || name == "sfrag" || name == "shape" || name == "stop-timer" || name == "timeout-idle" || name == "wred" || name == "data-p" || name == "type")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::AccountingEventAaa()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    action{YType::enumeration, "action"}
{

    yang_name = "accounting-event-aaa"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::~AccountingEventAaa()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::has_data() const
{
    return aaa_list_name.is_set
	|| action.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_list_name.yfilter)
	|| ydk::is_set(action.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting-event-aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.yfilter)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
        aaa_list_name.value_namespace = name_space;
        aaa_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-list-name" || name == "action")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::AcctAaaList()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    secs{YType::uint32, "secs"}
{

    yang_name = "acct-aaa-list"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::~AcctAaaList()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::has_data() const
{
    return aaa_list_name.is_set
	|| secs.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_list_name.yfilter)
	|| ydk::is_set(secs.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acct-aaa-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.yfilter)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (secs.is_set || is_set(secs.yfilter)) leaf_name_data.push_back(secs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
        aaa_list_name.value_namespace = name_space;
        aaa_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secs")
    {
        secs = value;
        secs.value_namespace = name_space;
        secs.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name.yfilter = yfilter;
    }
    if(value_path == "secs")
    {
        secs.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-list-name" || name == "secs")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::ActTemplate()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    flags{YType::uint32, "flags"},
    template_name{YType::str, "template-name"}
{

    yang_name = "act-template"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::~ActTemplate()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::has_data() const
{
    return aaa_list_name.is_set
	|| flags.is_set
	|| template_name.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_list_name.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "act-template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.yfilter)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
        aaa_list_name.value_namespace = name_space;
        aaa_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-list-name" || name == "flags" || name == "template-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::AfmReact()
{

    yang_name = "afm-react"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::~AfmReact()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::has_data() const
{
    for (std::size_t index=0; index<action_afmon_react_info.size(); index++)
    {
        if(action_afmon_react_info[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::has_operation() const
{
    for (std::size_t index=0; index<action_afmon_react_info.size(); index++)
    {
        if(action_afmon_react_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afm-react";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-afmon-react-info")
    {
        for(auto const & c : action_afmon_react_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo>();
        c->parent = this;
        action_afmon_react_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : action_afmon_react_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-afmon-react-info")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::ActionAfmonReactInfo()
    :
    alm_grp_thresh{YType::uint16, "alm-grp-thresh"},
    alm_severity{YType::uint8, "alm-severity"},
    alm_type{YType::uint8, "alm-type"},
    clone_ifh{YType::uint32, "clone-ifh"},
    criterion{YType::uint8, "criterion"},
    description{YType::str, "description"},
    notif_actns{YType::uint8, "notif-actns"},
    oper_id{YType::uint32, "oper-id"},
    trig_level_1{YType::str, "trig-level-1"},
    trig_level_2{YType::str, "trig-level-2"},
    trig_num_intvls{YType::uint32, "trig-num-intvls"},
    trig_relop{YType::uint8, "trig-relop"},
    trig_type{YType::uint8, "trig-type"}
{

    yang_name = "action-afmon-react-info"; yang_parent_name = "afm-react"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::~ActionAfmonReactInfo()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::has_data() const
{
    return alm_grp_thresh.is_set
	|| alm_severity.is_set
	|| alm_type.is_set
	|| clone_ifh.is_set
	|| criterion.is_set
	|| description.is_set
	|| notif_actns.is_set
	|| oper_id.is_set
	|| trig_level_1.is_set
	|| trig_level_2.is_set
	|| trig_num_intvls.is_set
	|| trig_relop.is_set
	|| trig_type.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alm_grp_thresh.yfilter)
	|| ydk::is_set(alm_severity.yfilter)
	|| ydk::is_set(alm_type.yfilter)
	|| ydk::is_set(clone_ifh.yfilter)
	|| ydk::is_set(criterion.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(notif_actns.yfilter)
	|| ydk::is_set(oper_id.yfilter)
	|| ydk::is_set(trig_level_1.yfilter)
	|| ydk::is_set(trig_level_2.yfilter)
	|| ydk::is_set(trig_num_intvls.yfilter)
	|| ydk::is_set(trig_relop.yfilter)
	|| ydk::is_set(trig_type.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-afmon-react-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alm_grp_thresh.is_set || is_set(alm_grp_thresh.yfilter)) leaf_name_data.push_back(alm_grp_thresh.get_name_leafdata());
    if (alm_severity.is_set || is_set(alm_severity.yfilter)) leaf_name_data.push_back(alm_severity.get_name_leafdata());
    if (alm_type.is_set || is_set(alm_type.yfilter)) leaf_name_data.push_back(alm_type.get_name_leafdata());
    if (clone_ifh.is_set || is_set(clone_ifh.yfilter)) leaf_name_data.push_back(clone_ifh.get_name_leafdata());
    if (criterion.is_set || is_set(criterion.yfilter)) leaf_name_data.push_back(criterion.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (notif_actns.is_set || is_set(notif_actns.yfilter)) leaf_name_data.push_back(notif_actns.get_name_leafdata());
    if (oper_id.is_set || is_set(oper_id.yfilter)) leaf_name_data.push_back(oper_id.get_name_leafdata());
    if (trig_level_1.is_set || is_set(trig_level_1.yfilter)) leaf_name_data.push_back(trig_level_1.get_name_leafdata());
    if (trig_level_2.is_set || is_set(trig_level_2.yfilter)) leaf_name_data.push_back(trig_level_2.get_name_leafdata());
    if (trig_num_intvls.is_set || is_set(trig_num_intvls.yfilter)) leaf_name_data.push_back(trig_num_intvls.get_name_leafdata());
    if (trig_relop.is_set || is_set(trig_relop.yfilter)) leaf_name_data.push_back(trig_relop.get_name_leafdata());
    if (trig_type.is_set || is_set(trig_type.yfilter)) leaf_name_data.push_back(trig_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alm-grp-thresh")
    {
        alm_grp_thresh = value;
        alm_grp_thresh.value_namespace = name_space;
        alm_grp_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alm-severity")
    {
        alm_severity = value;
        alm_severity.value_namespace = name_space;
        alm_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alm-type")
    {
        alm_type = value;
        alm_type.value_namespace = name_space;
        alm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clone-ifh")
    {
        clone_ifh = value;
        clone_ifh.value_namespace = name_space;
        clone_ifh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "criterion")
    {
        criterion = value;
        criterion.value_namespace = name_space;
        criterion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notif-actns")
    {
        notif_actns = value;
        notif_actns.value_namespace = name_space;
        notif_actns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-id")
    {
        oper_id = value;
        oper_id.value_namespace = name_space;
        oper_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trig-level-1")
    {
        trig_level_1 = value;
        trig_level_1.value_namespace = name_space;
        trig_level_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trig-level-2")
    {
        trig_level_2 = value;
        trig_level_2.value_namespace = name_space;
        trig_level_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trig-num-intvls")
    {
        trig_num_intvls = value;
        trig_num_intvls.value_namespace = name_space;
        trig_num_intvls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trig-relop")
    {
        trig_relop = value;
        trig_relop.value_namespace = name_space;
        trig_relop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trig-type")
    {
        trig_type = value;
        trig_type.value_namespace = name_space;
        trig_type.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alm-grp-thresh")
    {
        alm_grp_thresh.yfilter = yfilter;
    }
    if(value_path == "alm-severity")
    {
        alm_severity.yfilter = yfilter;
    }
    if(value_path == "alm-type")
    {
        alm_type.yfilter = yfilter;
    }
    if(value_path == "clone-ifh")
    {
        clone_ifh.yfilter = yfilter;
    }
    if(value_path == "criterion")
    {
        criterion.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "notif-actns")
    {
        notif_actns.yfilter = yfilter;
    }
    if(value_path == "oper-id")
    {
        oper_id.yfilter = yfilter;
    }
    if(value_path == "trig-level-1")
    {
        trig_level_1.yfilter = yfilter;
    }
    if(value_path == "trig-level-2")
    {
        trig_level_2.yfilter = yfilter;
    }
    if(value_path == "trig-num-intvls")
    {
        trig_num_intvls.yfilter = yfilter;
    }
    if(value_path == "trig-relop")
    {
        trig_relop.yfilter = yfilter;
    }
    if(value_path == "trig-type")
    {
        trig_type.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alm-grp-thresh" || name == "alm-severity" || name == "alm-type" || name == "clone-ifh" || name == "criterion" || name == "description" || name == "notif-actns" || name == "oper-id" || name == "trig-level-1" || name == "trig-level-2" || name == "trig-num-intvls" || name == "trig-relop" || name == "trig-type")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::AuthenAaa()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    authen_password{YType::str, "authen-password"}
{

    yang_name = "authen-aaa"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::~AuthenAaa()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::has_data() const
{
    return aaa_list_name.is_set
	|| authen_password.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_list_name.yfilter)
	|| ydk::is_set(authen_password.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authen-aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.yfilter)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (authen_password.is_set || is_set(authen_password.yfilter)) leaf_name_data.push_back(authen_password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
        aaa_list_name.value_namespace = name_space;
        aaa_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-password")
    {
        authen_password = value;
        authen_password.value_namespace = name_space;
        authen_password.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name.yfilter = yfilter;
    }
    if(value_path == "authen-password")
    {
        authen_password.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-list-name" || name == "authen-password")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::AuthorizeId()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    format_name{YType::str, "format-name"},
    id{YType::uint8, "id"},
    password{YType::str, "password"}
{

    yang_name = "authorize-id"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::~AuthorizeId()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::has_data() const
{
    return aaa_list_name.is_set
	|| format_name.is_set
	|| id.is_set
	|| password.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_list_name.yfilter)
	|| ydk::is_set(format_name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.yfilter)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (format_name.is_set || is_set(format_name.yfilter)) leaf_name_data.push_back(format_name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
        aaa_list_name.value_namespace = name_space;
        aaa_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format-name")
    {
        format_name = value;
        format_name.value_namespace = name_space;
        format_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name.yfilter = yfilter;
    }
    if(value_path == "format-name")
    {
        format_name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-list-name" || name == "format-name" || name == "id" || name == "password")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem()
    :
    bwrem(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_>())
{
    bwrem->parent = this;

    yang_name = "bwrem"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::~Bwrem()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::has_data() const
{
    return (bwrem !=  nullptr && bwrem->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::has_operation() const
{
    return is_set(yfilter)
	|| (bwrem !=  nullptr && bwrem->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bwrem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bwrem")
    {
        if(bwrem == nullptr)
        {
            bwrem = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_>();
        }
        return bwrem;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bwrem != nullptr)
    {
        children["bwrem"] = bwrem;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bwrem")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::Bwrem_()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "bwrem"; yang_parent_name = "bwrem"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::~Bwrem_()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bwrem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Cac()
    :
    cac_type{YType::uint8, "cac-type"},
    idle_timeout{YType::uint16, "idle-timeout"}
    	,
    flow_rate(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate>())
	,rate(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate>())
{
    flow_rate->parent = this;
    rate->parent = this;

    yang_name = "cac"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::~Cac()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::has_data() const
{
    return cac_type.is_set
	|| idle_timeout.is_set
	|| (flow_rate !=  nullptr && flow_rate->has_data())
	|| (rate !=  nullptr && rate->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cac_type.yfilter)
	|| ydk::is_set(idle_timeout.yfilter)
	|| (flow_rate !=  nullptr && flow_rate->has_operation())
	|| (rate !=  nullptr && rate->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cac_type.is_set || is_set(cac_type.yfilter)) leaf_name_data.push_back(cac_type.get_name_leafdata());
    if (idle_timeout.is_set || is_set(idle_timeout.yfilter)) leaf_name_data.push_back(idle_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-rate")
    {
        if(flow_rate == nullptr)
        {
            flow_rate = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate>();
        }
        return flow_rate;
    }

    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_rate != nullptr)
    {
        children["flow-rate"] = flow_rate;
    }

    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cac-type")
    {
        cac_type = value;
        cac_type.value_namespace = name_space;
        cac_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-timeout")
    {
        idle_timeout = value;
        idle_timeout.value_namespace = name_space;
        idle_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cac-type")
    {
        cac_type.yfilter = yfilter;
    }
    if(value_path == "idle-timeout")
    {
        idle_timeout.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-rate" || name == "rate" || name == "cac-type" || name == "idle-timeout")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::FlowRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "flow-rate"; yang_parent_name = "cac"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::~FlowRate()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::Rate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "rate"; yang_parent_name = "cac"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::~Rate()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::ChildPolicy()
    :
    enc{YType::enumeration, "enc"}
    	,
    hd_info(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo>())
	,info(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info>())
{
    hd_info->parent = this;
    info->parent = this;

    yang_name = "child-policy"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::~ChildPolicy()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::has_data() const
{
    return enc.is_set
	|| (hd_info !=  nullptr && hd_info->has_data())
	|| (info !=  nullptr && info->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enc.yfilter)
	|| (hd_info !=  nullptr && hd_info->has_operation())
	|| (info !=  nullptr && info->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "child-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enc.is_set || is_set(enc.yfilter)) leaf_name_data.push_back(enc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hd-info")
    {
        if(hd_info == nullptr)
        {
            hd_info = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo>();
        }
        return hd_info;
    }

    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info>();
        }
        return info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hd_info != nullptr)
    {
        children["hd-info"] = hd_info;
    }

    if(info != nullptr)
    {
        children["info"] = info;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enc")
    {
        enc = value;
        enc.value_namespace = name_space;
        enc.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enc")
    {
        enc.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hd-info" || name == "info" || name == "enc")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::HdInfo()
    :
    hd{YType::uint64, "hd"}
    	,
    data_hd(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd>())
{
    data_hd->parent = this;

    yang_name = "hd-info"; yang_parent_name = "child-policy"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::~HdInfo()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::has_data() const
{
    return hd.is_set
	|| (data_hd !=  nullptr && data_hd->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hd.yfilter)
	|| (data_hd !=  nullptr && data_hd->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hd-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hd.is_set || is_set(hd.yfilter)) leaf_name_data.push_back(hd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-hd")
    {
        if(data_hd == nullptr)
        {
            data_hd = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd>();
        }
        return data_hd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data_hd != nullptr)
    {
        children["data-hd"] = data_hd;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hd")
    {
        hd = value;
        hd.value_namespace = name_space;
        hd.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hd")
    {
        hd.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-hd" || name == "hd")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::DataHd()
{

    yang_name = "data-hd"; yang_parent_name = "hd-info"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::~DataHd()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::has_data() const
{
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::has_operation() const
{
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-hd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::Info()
    :
    name{YType::str, "name"},
    type{YType::enumeration, "type"}
{

    yang_name = "info"; yang_parent_name = "child-policy"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::~Info()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::has_data() const
{
    return name.is_set
	|| type.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "type")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::CollectId()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    id{YType::enumeration, "id"}
{

    yang_name = "collect-id"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::~CollectId()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::has_data() const
{
    return aaa_list_name.is_set
	|| id.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_list_name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collect-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.yfilter)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
        aaa_list_name.value_namespace = name_space;
        aaa_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-list-name" || name == "id")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::Copy()
    :
    app_id{YType::uint32, "app-id"},
    local_id{YType::uint32, "local-id"},
    num_byte{YType::uint32, "num-byte"},
    sn_index{YType::uint32, "sn-index"},
    sn_name{YType::str, "sn-name"},
    sn_type{YType::enumeration, "sn-type"},
    vsnode_type{YType::enumeration, "vsnode-type"}
{

    yang_name = "copy"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::~Copy()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::has_data() const
{
    return app_id.is_set
	|| local_id.is_set
	|| num_byte.is_set
	|| sn_index.is_set
	|| sn_name.is_set
	|| sn_type.is_set
	|| vsnode_type.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(app_id.yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| ydk::is_set(num_byte.yfilter)
	|| ydk::is_set(sn_index.yfilter)
	|| ydk::is_set(sn_name.yfilter)
	|| ydk::is_set(sn_type.yfilter)
	|| ydk::is_set(vsnode_type.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "copy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_id.is_set || is_set(app_id.yfilter)) leaf_name_data.push_back(app_id.get_name_leafdata());
    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (num_byte.is_set || is_set(num_byte.yfilter)) leaf_name_data.push_back(num_byte.get_name_leafdata());
    if (sn_index.is_set || is_set(sn_index.yfilter)) leaf_name_data.push_back(sn_index.get_name_leafdata());
    if (sn_name.is_set || is_set(sn_name.yfilter)) leaf_name_data.push_back(sn_name.get_name_leafdata());
    if (sn_type.is_set || is_set(sn_type.yfilter)) leaf_name_data.push_back(sn_type.get_name_leafdata());
    if (vsnode_type.is_set || is_set(vsnode_type.yfilter)) leaf_name_data.push_back(vsnode_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app-id")
    {
        app_id = value;
        app_id.value_namespace = name_space;
        app_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-byte")
    {
        num_byte = value;
        num_byte.value_namespace = name_space;
        num_byte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sn-index")
    {
        sn_index = value;
        sn_index.value_namespace = name_space;
        sn_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sn-name")
    {
        sn_name = value;
        sn_name.value_namespace = name_space;
        sn_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sn-type")
    {
        sn_type = value;
        sn_type.value_namespace = name_space;
        sn_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vsnode-type")
    {
        vsnode_type = value;
        vsnode_type.value_namespace = name_space;
        vsnode_type.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app-id")
    {
        app_id.yfilter = yfilter;
    }
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
    if(value_path == "num-byte")
    {
        num_byte.yfilter = yfilter;
    }
    if(value_path == "sn-index")
    {
        sn_index.yfilter = yfilter;
    }
    if(value_path == "sn-name")
    {
        sn_name.yfilter = yfilter;
    }
    if(value_path == "sn-type")
    {
        sn_type.yfilter = yfilter;
    }
    if(value_path == "vsnode-type")
    {
        vsnode_type.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app-id" || name == "local-id" || name == "num-byte" || name == "sn-index" || name == "sn-name" || name == "sn-type" || name == "vsnode-type")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::DeactTemplate()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    flags{YType::uint32, "flags"},
    template_name{YType::str, "template-name"}
{

    yang_name = "deact-template"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::~DeactTemplate()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::has_data() const
{
    return aaa_list_name.is_set
	|| flags.is_set
	|| template_name.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_list_name.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deact-template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.yfilter)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
        aaa_list_name.value_namespace = name_space;
        aaa_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-list-name" || name == "flags" || name == "template-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::DecodeId()
    :
    format_name{YType::str, "format-name"},
    id{YType::enumeration, "id"}
{

    yang_name = "decode-id"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::~DecodeId()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::has_data() const
{
    return format_name.is_set
	|| id.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format_name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "decode-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format_name.is_set || is_set(format_name.yfilter)) leaf_name_data.push_back(format_name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format-name")
    {
        format_name = value;
        format_name.value_namespace = name_space;
        format_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format-name")
    {
        format_name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format-name" || name == "id")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::Encap()
    :
    seq{YType::uint8, "seq"}
{

    yang_name = "encap"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::~Encap()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::has_data() const
{
    return seq.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seq.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seq.is_set || is_set(seq.yfilter)) leaf_name_data.push_back(seq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seq")
    {
        seq = value;
        seq.value_namespace = name_space;
        seq.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seq")
    {
        seq.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::FlowParm()
    :
    flow_timeout{YType::uint32, "flow-timeout"},
    intvl_hist{YType::uint32, "intvl-hist"},
    max_mon_flows{YType::uint32, "max-mon-flows"},
    mon_interval{YType::uint32, "mon-interval"}
{

    yang_name = "flow-parm"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::~FlowParm()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::has_data() const
{
    return flow_timeout.is_set
	|| intvl_hist.is_set
	|| max_mon_flows.is_set
	|| mon_interval.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_timeout.yfilter)
	|| ydk::is_set(intvl_hist.yfilter)
	|| ydk::is_set(max_mon_flows.yfilter)
	|| ydk::is_set(mon_interval.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-parm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_timeout.is_set || is_set(flow_timeout.yfilter)) leaf_name_data.push_back(flow_timeout.get_name_leafdata());
    if (intvl_hist.is_set || is_set(intvl_hist.yfilter)) leaf_name_data.push_back(intvl_hist.get_name_leafdata());
    if (max_mon_flows.is_set || is_set(max_mon_flows.yfilter)) leaf_name_data.push_back(max_mon_flows.get_name_leafdata());
    if (mon_interval.is_set || is_set(mon_interval.yfilter)) leaf_name_data.push_back(mon_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-timeout")
    {
        flow_timeout = value;
        flow_timeout.value_namespace = name_space;
        flow_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intvl-hist")
    {
        intvl_hist = value;
        intvl_hist.value_namespace = name_space;
        intvl_hist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-mon-flows")
    {
        max_mon_flows = value;
        max_mon_flows.value_namespace = name_space;
        max_mon_flows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mon-interval")
    {
        mon_interval = value;
        mon_interval.value_namespace = name_space;
        mon_interval.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-timeout")
    {
        flow_timeout.yfilter = yfilter;
    }
    if(value_path == "intvl-hist")
    {
        intvl_hist.yfilter = yfilter;
    }
    if(value_path == "max-mon-flows")
    {
        max_mon_flows.yfilter = yfilter;
    }
    if(value_path == "mon-interval")
    {
        mon_interval.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-timeout" || name == "intvl-hist" || name == "max-mon-flows" || name == "mon-interval")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::Fmm()
    :
    fmm_name{YType::str, "fmm-name"}
{

    yang_name = "fmm"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::~Fmm()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::has_data() const
{
    return fmm_name.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fmm_name.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fmm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fmm_name.is_set || is_set(fmm_name.yfilter)) leaf_name_data.push_back(fmm_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fmm-name")
    {
        fmm_name = value;
        fmm_name.value_namespace = name_space;
        fmm_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fmm-name")
    {
        fmm_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fmm-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::Httpr()
    :
    redirect_url{YType::str, "redirect-url"}
{

    yang_name = "httpr"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::~Httpr()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::has_data() const
{
    return redirect_url.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redirect_url.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "httpr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redirect_url.is_set || is_set(redirect_url.yfilter)) leaf_name_data.push_back(redirect_url.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redirect-url")
    {
        redirect_url = value;
        redirect_url.value_namespace = name_space;
        redirect_url.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redirect-url")
    {
        redirect_url.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redirect-url")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::Ipcbr()
    :
    action_metric_type{YType::enumeration, "action-metric-type"},
    ip_pkt_rate{YType::uint32, "ip-pkt-rate"},
    media_pkt_size{YType::uint32, "media-pkt-size"},
    media_pkts_per_ip{YType::uint32, "media-pkts-per-ip"}
    	,
    ip_bit_rate(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate>())
	,media_bit_rate(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate>())
{
    ip_bit_rate->parent = this;
    media_bit_rate->parent = this;

    yang_name = "ipcbr"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::~Ipcbr()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::has_data() const
{
    return action_metric_type.is_set
	|| ip_pkt_rate.is_set
	|| media_pkt_size.is_set
	|| media_pkts_per_ip.is_set
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_data())
	|| (media_bit_rate !=  nullptr && media_bit_rate->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_metric_type.yfilter)
	|| ydk::is_set(ip_pkt_rate.yfilter)
	|| ydk::is_set(media_pkt_size.yfilter)
	|| ydk::is_set(media_pkts_per_ip.yfilter)
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_operation())
	|| (media_bit_rate !=  nullptr && media_bit_rate->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipcbr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.yfilter)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (ip_pkt_rate.is_set || is_set(ip_pkt_rate.yfilter)) leaf_name_data.push_back(ip_pkt_rate.get_name_leafdata());
    if (media_pkt_size.is_set || is_set(media_pkt_size.yfilter)) leaf_name_data.push_back(media_pkt_size.get_name_leafdata());
    if (media_pkts_per_ip.is_set || is_set(media_pkts_per_ip.yfilter)) leaf_name_data.push_back(media_pkts_per_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-bit-rate")
    {
        if(ip_bit_rate == nullptr)
        {
            ip_bit_rate = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate>();
        }
        return ip_bit_rate;
    }

    if(child_yang_name == "media-bit-rate")
    {
        if(media_bit_rate == nullptr)
        {
            media_bit_rate = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate>();
        }
        return media_bit_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_bit_rate != nullptr)
    {
        children["ip-bit-rate"] = ip_bit_rate;
    }

    if(media_bit_rate != nullptr)
    {
        children["media-bit-rate"] = media_bit_rate;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
        action_metric_type.value_namespace = name_space;
        action_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-pkt-rate")
    {
        ip_pkt_rate = value;
        ip_pkt_rate.value_namespace = name_space;
        ip_pkt_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media-pkt-size")
    {
        media_pkt_size = value;
        media_pkt_size.value_namespace = name_space;
        media_pkt_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media-pkts-per-ip")
    {
        media_pkts_per_ip = value;
        media_pkts_per_ip.value_namespace = name_space;
        media_pkts_per_ip.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type.yfilter = yfilter;
    }
    if(value_path == "ip-pkt-rate")
    {
        ip_pkt_rate.yfilter = yfilter;
    }
    if(value_path == "media-pkt-size")
    {
        media_pkt_size.yfilter = yfilter;
    }
    if(value_path == "media-pkts-per-ip")
    {
        media_pkts_per_ip.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-bit-rate" || name == "media-bit-rate" || name == "action-metric-type" || name == "ip-pkt-rate" || name == "media-pkt-size" || name == "media-pkts-per-ip")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::IpBitRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "ip-bit-rate"; yang_parent_name = "ipcbr"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::~IpBitRate()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-bit-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::MediaBitRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "media-bit-rate"; yang_parent_name = "ipcbr"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::~MediaBitRate()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-bit-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::Ipv4Nh()
{

    yang_name = "ipv4-nh"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::~Ipv4Nh()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::has_data() const
{
    for (std::size_t index=0; index<action_ipv4_nh_info_array.size(); index++)
    {
        if(action_ipv4_nh_info_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::has_operation() const
{
    for (std::size_t index=0; index<action_ipv4_nh_info_array.size(); index++)
    {
        if(action_ipv4_nh_info_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-nh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-ipv4-nh-info-array")
    {
        for(auto const & c : action_ipv4_nh_info_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray>();
        c->parent = this;
        action_ipv4_nh_info_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : action_ipv4_nh_info_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-ipv4-nh-info-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::ActionIpv4NhInfoArray()
    :
    nh_addr{YType::str, "nh-addr"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "action-ipv4-nh-info-array"; yang_parent_name = "ipv4-nh"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::~ActionIpv4NhInfoArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::has_data() const
{
    return nh_addr.is_set
	|| vrf_name.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nh_addr.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-ipv4-nh-info-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nh_addr.is_set || is_set(nh_addr.yfilter)) leaf_name_data.push_back(nh_addr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nh-addr")
    {
        nh_addr = value;
        nh_addr.value_namespace = name_space;
        nh_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nh-addr")
    {
        nh_addr.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-addr" || name == "vrf-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::Ipv6Nh()
{

    yang_name = "ipv6-nh"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::~Ipv6Nh()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::has_data() const
{
    for (std::size_t index=0; index<action_ipv6_nh_info_array.size(); index++)
    {
        if(action_ipv6_nh_info_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::has_operation() const
{
    for (std::size_t index=0; index<action_ipv6_nh_info_array.size(); index++)
    {
        if(action_ipv6_nh_info_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-nh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-ipv6-nh-info-array")
    {
        for(auto const & c : action_ipv6_nh_info_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray>();
        c->parent = this;
        action_ipv6_nh_info_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : action_ipv6_nh_info_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-ipv6-nh-info-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::ActionIpv6NhInfoArray()
    :
    nh_addr{YType::str, "nh-addr"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "action-ipv6-nh-info-array"; yang_parent_name = "ipv6-nh"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::~ActionIpv6NhInfoArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::has_data() const
{
    return nh_addr.is_set
	|| vrf_name.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nh_addr.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-ipv6-nh-info-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nh_addr.is_set || is_set(nh_addr.yfilter)) leaf_name_data.push_back(nh_addr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nh-addr")
    {
        nh_addr = value;
        nh_addr.value_namespace = name_space;
        nh_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nh-addr")
    {
        nh_addr.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-addr" || name == "vrf-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::Mark()
{

    yang_name = "mark"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::~Mark()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::has_data() const
{
    for (std::size_t index=0; index<action_mark_info.size(); index++)
    {
        if(action_mark_info[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::has_operation() const
{
    for (std::size_t index=0; index<action_mark_info.size(); index++)
    {
        if(action_mark_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-mark-info")
    {
        for(auto const & c : action_mark_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo>();
        c->parent = this;
        action_mark_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : action_mark_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-mark-info")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::ActionMarkInfo()
    :
    mark_flags{YType::uint32, "mark-flags"},
    type{YType::enumeration, "type"},
    value_{YType::uint16, "value"}
{

    yang_name = "action-mark-info"; yang_parent_name = "mark"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::~ActionMarkInfo()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::has_data() const
{
    return mark_flags.is_set
	|| type.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_flags.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-mark-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_flags.is_set || is_set(mark_flags.yfilter)) leaf_name_data.push_back(mark_flags.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-flags")
    {
        mark_flags = value;
        mark_flags.value_namespace = name_space;
        mark_flags.value_namespace_prefix = name_space_prefix;
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

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-flags")
    {
        mark_flags.yfilter = yfilter;
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

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-flags" || name == "type" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::Mark2()
{

    yang_name = "mark2"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::~Mark2()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::has_data() const
{
    for (std::size_t index=0; index<action_mark2_info.size(); index++)
    {
        if(action_mark2_info[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::has_operation() const
{
    for (std::size_t index=0; index<action_mark2_info.size(); index++)
    {
        if(action_mark2_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-mark2-info")
    {
        for(auto const & c : action_mark2_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info>();
        c->parent = this;
        action_mark2_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : action_mark2_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-mark2-info")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::ActionMark2Info()
    :
    mark_flags{YType::uint8, "mark-flags"},
    type{YType::uint8, "type"},
    value_{YType::uint32, "value"},
    value_overflow{YType::uint16, "value-overflow"}
{

    yang_name = "action-mark2-info"; yang_parent_name = "mark2"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::~ActionMark2Info()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::has_data() const
{
    return mark_flags.is_set
	|| type.is_set
	|| value_.is_set
	|| value_overflow.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_flags.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(value_overflow.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-mark2-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_flags.is_set || is_set(mark_flags.yfilter)) leaf_name_data.push_back(mark_flags.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (value_overflow.is_set || is_set(value_overflow.yfilter)) leaf_name_data.push_back(value_overflow.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-flags")
    {
        mark_flags = value;
        mark_flags.value_namespace = name_space;
        mark_flags.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "value-overflow")
    {
        value_overflow = value;
        value_overflow.value_namespace = name_space;
        value_overflow.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-flags")
    {
        mark_flags.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "value-overflow")
    {
        value_overflow.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-flags" || name == "type" || name == "value" || name == "value-overflow")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::Mdi()
    :
    action_metric_type{YType::enumeration, "action-metric-type"},
    filtered_pkt_rate{YType::uint32, "filtered-pkt-rate"},
    ip_pkt_rate{YType::uint32, "ip-pkt-rate"},
    pids{YType::uint32, "pids"}
    	,
    ip_bit_rate(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate>())
{
    ip_bit_rate->parent = this;

    yang_name = "mdi"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::~Mdi()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::has_data() const
{
    for (auto const & leaf : pids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return action_metric_type.is_set
	|| filtered_pkt_rate.is_set
	|| ip_pkt_rate.is_set
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::has_operation() const
{
    for (auto const & leaf : pids.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_metric_type.yfilter)
	|| ydk::is_set(filtered_pkt_rate.yfilter)
	|| ydk::is_set(ip_pkt_rate.yfilter)
	|| ydk::is_set(pids.yfilter)
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.yfilter)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (filtered_pkt_rate.is_set || is_set(filtered_pkt_rate.yfilter)) leaf_name_data.push_back(filtered_pkt_rate.get_name_leafdata());
    if (ip_pkt_rate.is_set || is_set(ip_pkt_rate.yfilter)) leaf_name_data.push_back(ip_pkt_rate.get_name_leafdata());

    auto pids_name_datas = pids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pids_name_datas.begin(), pids_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-bit-rate")
    {
        if(ip_bit_rate == nullptr)
        {
            ip_bit_rate = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate>();
        }
        return ip_bit_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_bit_rate != nullptr)
    {
        children["ip-bit-rate"] = ip_bit_rate;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
        action_metric_type.value_namespace = name_space;
        action_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filtered-pkt-rate")
    {
        filtered_pkt_rate = value;
        filtered_pkt_rate.value_namespace = name_space;
        filtered_pkt_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-pkt-rate")
    {
        ip_pkt_rate = value;
        ip_pkt_rate.value_namespace = name_space;
        ip_pkt_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pids")
    {
        pids.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type.yfilter = yfilter;
    }
    if(value_path == "filtered-pkt-rate")
    {
        filtered_pkt_rate.yfilter = yfilter;
    }
    if(value_path == "ip-pkt-rate")
    {
        ip_pkt_rate.yfilter = yfilter;
    }
    if(value_path == "pids")
    {
        pids.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-bit-rate" || name == "action-metric-type" || name == "filtered-pkt-rate" || name == "ip-pkt-rate" || name == "pids")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::IpBitRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "ip-bit-rate"; yang_parent_name = "mdi"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::~IpBitRate()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-bit-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::MdiRtp()
    :
    action_metric_type{YType::enumeration, "action-metric-type"},
    filtered_pkt_rate{YType::uint32, "filtered-pkt-rate"},
    ip_pkt_rate{YType::uint32, "ip-pkt-rate"},
    pids{YType::uint32, "pids"}
    	,
    ip_bit_rate(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate>())
{
    ip_bit_rate->parent = this;

    yang_name = "mdi-rtp"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::~MdiRtp()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::has_data() const
{
    for (auto const & leaf : pids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return action_metric_type.is_set
	|| filtered_pkt_rate.is_set
	|| ip_pkt_rate.is_set
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::has_operation() const
{
    for (auto const & leaf : pids.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_metric_type.yfilter)
	|| ydk::is_set(filtered_pkt_rate.yfilter)
	|| ydk::is_set(ip_pkt_rate.yfilter)
	|| ydk::is_set(pids.yfilter)
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdi-rtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.yfilter)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (filtered_pkt_rate.is_set || is_set(filtered_pkt_rate.yfilter)) leaf_name_data.push_back(filtered_pkt_rate.get_name_leafdata());
    if (ip_pkt_rate.is_set || is_set(ip_pkt_rate.yfilter)) leaf_name_data.push_back(ip_pkt_rate.get_name_leafdata());

    auto pids_name_datas = pids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pids_name_datas.begin(), pids_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-bit-rate")
    {
        if(ip_bit_rate == nullptr)
        {
            ip_bit_rate = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate>();
        }
        return ip_bit_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_bit_rate != nullptr)
    {
        children["ip-bit-rate"] = ip_bit_rate;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
        action_metric_type.value_namespace = name_space;
        action_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filtered-pkt-rate")
    {
        filtered_pkt_rate = value;
        filtered_pkt_rate.value_namespace = name_space;
        filtered_pkt_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-pkt-rate")
    {
        ip_pkt_rate = value;
        ip_pkt_rate.value_namespace = name_space;
        ip_pkt_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pids")
    {
        pids.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type.yfilter = yfilter;
    }
    if(value_path == "filtered-pkt-rate")
    {
        filtered_pkt_rate.yfilter = yfilter;
    }
    if(value_path == "ip-pkt-rate")
    {
        ip_pkt_rate.yfilter = yfilter;
    }
    if(value_path == "pids")
    {
        pids.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-bit-rate" || name == "action-metric-type" || name == "filtered-pkt-rate" || name == "ip-pkt-rate" || name == "pids")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::IpBitRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "ip-bit-rate"; yang_parent_name = "mdi-rtp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::~IpBitRate()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-bit-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::MinBw()
    :
    bw(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw>())
{
    bw->parent = this;

    yang_name = "min-bw"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::~MinBw()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::has_data() const
{
    return (bw !=  nullptr && bw->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::has_operation() const
{
    return is_set(yfilter)
	|| (bw !=  nullptr && bw->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-bw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw")
    {
        if(bw == nullptr)
        {
            bw = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw>();
        }
        return bw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bw != nullptr)
    {
        children["bw"] = bw;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::Bw()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "bw"; yang_parent_name = "min-bw"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::~Bw()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf::OutIntf()
    :
    out_ifname{YType::str, "out-ifname"}
{

    yang_name = "out-intf"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf::~OutIntf()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf::has_data() const
{
    return out_ifname.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_ifname.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-intf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_ifname.is_set || is_set(out_ifname.yfilter)) leaf_name_data.push_back(out_ifname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-ifname")
    {
        out_ifname = value;
        out_ifname.value_namespace = name_space;
        out_ifname.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-ifname")
    {
        out_ifname.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-ifname")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::Pbf()
{

    yang_name = "pbf"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::~Pbf()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::has_data() const
{
    for (std::size_t index=0; index<action_pbf_info_array.size(); index++)
    {
        if(action_pbf_info_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::has_operation() const
{
    for (std::size_t index=0; index<action_pbf_info_array.size(); index++)
    {
        if(action_pbf_info_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-pbf-info-array")
    {
        for(auto const & c : action_pbf_info_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray>();
        c->parent = this;
        action_pbf_info_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : action_pbf_info_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-pbf-info-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::ActionPbfInfoArray()
    :
    addr{YType::str, "addr"},
    rt{YType::str, "rt"},
    rt_type{YType::uint8, "rt-type"},
    vrf{YType::str, "vrf"}
{

    yang_name = "action-pbf-info-array"; yang_parent_name = "pbf"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::~ActionPbfInfoArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::has_data() const
{
    return addr.is_set
	|| rt.is_set
	|| rt_type.is_set
	|| vrf.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(rt.yfilter)
	|| ydk::is_set(rt_type.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-pbf-info-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (rt.is_set || is_set(rt.yfilter)) leaf_name_data.push_back(rt.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt")
    {
        rt = value;
        rt.value_namespace = name_space;
        rt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "rt")
    {
        rt.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "rt" || name == "rt-type" || name == "vrf")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::Pfc()
    :
    buffer_size_flag{YType::uint32, "buffer-size-flag"},
    pfc_pause_set{YType::uint32, "pfc-pause-set"}
    	,
    buffer_size(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize>())
	,pause_threshold(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold>())
	,resume_threshold(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold>())
{
    buffer_size->parent = this;
    pause_threshold->parent = this;
    resume_threshold->parent = this;

    yang_name = "pfc"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::~Pfc()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::has_data() const
{
    return buffer_size_flag.is_set
	|| pfc_pause_set.is_set
	|| (buffer_size !=  nullptr && buffer_size->has_data())
	|| (pause_threshold !=  nullptr && pause_threshold->has_data())
	|| (resume_threshold !=  nullptr && resume_threshold->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(buffer_size_flag.yfilter)
	|| ydk::is_set(pfc_pause_set.yfilter)
	|| (buffer_size !=  nullptr && buffer_size->has_operation())
	|| (pause_threshold !=  nullptr && pause_threshold->has_operation())
	|| (resume_threshold !=  nullptr && resume_threshold->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer_size_flag.is_set || is_set(buffer_size_flag.yfilter)) leaf_name_data.push_back(buffer_size_flag.get_name_leafdata());
    if (pfc_pause_set.is_set || is_set(pfc_pause_set.yfilter)) leaf_name_data.push_back(pfc_pause_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "buffer-size")
    {
        if(buffer_size == nullptr)
        {
            buffer_size = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize>();
        }
        return buffer_size;
    }

    if(child_yang_name == "pause-threshold")
    {
        if(pause_threshold == nullptr)
        {
            pause_threshold = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold>();
        }
        return pause_threshold;
    }

    if(child_yang_name == "resume-threshold")
    {
        if(resume_threshold == nullptr)
        {
            resume_threshold = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold>();
        }
        return resume_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(buffer_size != nullptr)
    {
        children["buffer-size"] = buffer_size;
    }

    if(pause_threshold != nullptr)
    {
        children["pause-threshold"] = pause_threshold;
    }

    if(resume_threshold != nullptr)
    {
        children["resume-threshold"] = resume_threshold;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer-size-flag")
    {
        buffer_size_flag = value;
        buffer_size_flag.value_namespace = name_space;
        buffer_size_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfc-pause-set")
    {
        pfc_pause_set = value;
        pfc_pause_set.value_namespace = name_space;
        pfc_pause_set.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer-size-flag")
    {
        buffer_size_flag.yfilter = yfilter;
    }
    if(value_path == "pfc-pause-set")
    {
        pfc_pause_set.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "buffer-size" || name == "pause-threshold" || name == "resume-threshold" || name == "buffer-size-flag" || name == "pfc-pause-set")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::BufferSize()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "buffer-size"; yang_parent_name = "pfc"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::~BufferSize()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::PauseThreshold()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "pause-threshold"; yang_parent_name = "pfc"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::~PauseThreshold()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::ResumeThreshold()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "resume-threshold"; yang_parent_name = "pfc"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::~ResumeThreshold()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resume-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Police()
    :
    flags{YType::uint32, "flags"},
    police_flags{YType::uint32, "police-flags"},
    sbuck_name{YType::str, "sbuck-name"},
    sbuck_type{YType::enumeration, "sbuck-type"}
    	,
    burst(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Burst>())
	,cdvt(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Cdvt>())
	,confclass_encode(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode>())
	,confclass_p(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassP>())
	,conform_actns(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns>())
	,excdclass_encode(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassEncode>())
	,excdclass_p(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP>())
	,exceed_actns(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns>())
	,peak_burst(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::PeakBurst>())
	,peak_rate(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::PeakRate>())
	,rate(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Rate>())
	,violate_actns(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns>())
{
    burst->parent = this;
    cdvt->parent = this;
    confclass_encode->parent = this;
    confclass_p->parent = this;
    conform_actns->parent = this;
    excdclass_encode->parent = this;
    excdclass_p->parent = this;
    exceed_actns->parent = this;
    peak_burst->parent = this;
    peak_rate->parent = this;
    rate->parent = this;
    violate_actns->parent = this;

    yang_name = "police"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::~Police()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::has_data() const
{
    return flags.is_set
	|| police_flags.is_set
	|| sbuck_name.is_set
	|| sbuck_type.is_set
	|| (burst !=  nullptr && burst->has_data())
	|| (cdvt !=  nullptr && cdvt->has_data())
	|| (confclass_encode !=  nullptr && confclass_encode->has_data())
	|| (confclass_p !=  nullptr && confclass_p->has_data())
	|| (conform_actns !=  nullptr && conform_actns->has_data())
	|| (excdclass_encode !=  nullptr && excdclass_encode->has_data())
	|| (excdclass_p !=  nullptr && excdclass_p->has_data())
	|| (exceed_actns !=  nullptr && exceed_actns->has_data())
	|| (peak_burst !=  nullptr && peak_burst->has_data())
	|| (peak_rate !=  nullptr && peak_rate->has_data())
	|| (rate !=  nullptr && rate->has_data())
	|| (violate_actns !=  nullptr && violate_actns->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(police_flags.yfilter)
	|| ydk::is_set(sbuck_name.yfilter)
	|| ydk::is_set(sbuck_type.yfilter)
	|| (burst !=  nullptr && burst->has_operation())
	|| (cdvt !=  nullptr && cdvt->has_operation())
	|| (confclass_encode !=  nullptr && confclass_encode->has_operation())
	|| (confclass_p !=  nullptr && confclass_p->has_operation())
	|| (conform_actns !=  nullptr && conform_actns->has_operation())
	|| (excdclass_encode !=  nullptr && excdclass_encode->has_operation())
	|| (excdclass_p !=  nullptr && excdclass_p->has_operation())
	|| (exceed_actns !=  nullptr && exceed_actns->has_operation())
	|| (peak_burst !=  nullptr && peak_burst->has_operation())
	|| (peak_rate !=  nullptr && peak_rate->has_operation())
	|| (rate !=  nullptr && rate->has_operation())
	|| (violate_actns !=  nullptr && violate_actns->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (police_flags.is_set || is_set(police_flags.yfilter)) leaf_name_data.push_back(police_flags.get_name_leafdata());
    if (sbuck_name.is_set || is_set(sbuck_name.yfilter)) leaf_name_data.push_back(sbuck_name.get_name_leafdata());
    if (sbuck_type.is_set || is_set(sbuck_type.yfilter)) leaf_name_data.push_back(sbuck_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "burst")
    {
        if(burst == nullptr)
        {
            burst = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Burst>();
        }
        return burst;
    }

    if(child_yang_name == "cdvt")
    {
        if(cdvt == nullptr)
        {
            cdvt = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Cdvt>();
        }
        return cdvt;
    }

    if(child_yang_name == "confclass-encode")
    {
        if(confclass_encode == nullptr)
        {
            confclass_encode = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode>();
        }
        return confclass_encode;
    }

    if(child_yang_name == "confclass-p")
    {
        if(confclass_p == nullptr)
        {
            confclass_p = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassP>();
        }
        return confclass_p;
    }

    if(child_yang_name == "conform-actns")
    {
        if(conform_actns == nullptr)
        {
            conform_actns = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns>();
        }
        return conform_actns;
    }

    if(child_yang_name == "excdclass-encode")
    {
        if(excdclass_encode == nullptr)
        {
            excdclass_encode = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassEncode>();
        }
        return excdclass_encode;
    }

    if(child_yang_name == "excdclass-p")
    {
        if(excdclass_p == nullptr)
        {
            excdclass_p = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP>();
        }
        return excdclass_p;
    }

    if(child_yang_name == "exceed-actns")
    {
        if(exceed_actns == nullptr)
        {
            exceed_actns = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns>();
        }
        return exceed_actns;
    }

    if(child_yang_name == "peak-burst")
    {
        if(peak_burst == nullptr)
        {
            peak_burst = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::PeakBurst>();
        }
        return peak_burst;
    }

    if(child_yang_name == "peak-rate")
    {
        if(peak_rate == nullptr)
        {
            peak_rate = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::PeakRate>();
        }
        return peak_rate;
    }

    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "violate-actns")
    {
        if(violate_actns == nullptr)
        {
            violate_actns = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns>();
        }
        return violate_actns;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(burst != nullptr)
    {
        children["burst"] = burst;
    }

    if(cdvt != nullptr)
    {
        children["cdvt"] = cdvt;
    }

    if(confclass_encode != nullptr)
    {
        children["confclass-encode"] = confclass_encode;
    }

    if(confclass_p != nullptr)
    {
        children["confclass-p"] = confclass_p;
    }

    if(conform_actns != nullptr)
    {
        children["conform-actns"] = conform_actns;
    }

    if(excdclass_encode != nullptr)
    {
        children["excdclass-encode"] = excdclass_encode;
    }

    if(excdclass_p != nullptr)
    {
        children["excdclass-p"] = excdclass_p;
    }

    if(exceed_actns != nullptr)
    {
        children["exceed-actns"] = exceed_actns;
    }

    if(peak_burst != nullptr)
    {
        children["peak-burst"] = peak_burst;
    }

    if(peak_rate != nullptr)
    {
        children["peak-rate"] = peak_rate;
    }

    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    if(violate_actns != nullptr)
    {
        children["violate-actns"] = violate_actns;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "police-flags")
    {
        police_flags = value;
        police_flags.value_namespace = name_space;
        police_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbuck-name")
    {
        sbuck_name = value;
        sbuck_name.value_namespace = name_space;
        sbuck_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbuck-type")
    {
        sbuck_type = value;
        sbuck_type.value_namespace = name_space;
        sbuck_type.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "police-flags")
    {
        police_flags.yfilter = yfilter;
    }
    if(value_path == "sbuck-name")
    {
        sbuck_name.yfilter = yfilter;
    }
    if(value_path == "sbuck-type")
    {
        sbuck_type.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "burst" || name == "cdvt" || name == "confclass-encode" || name == "confclass-p" || name == "conform-actns" || name == "excdclass-encode" || name == "excdclass-p" || name == "exceed-actns" || name == "peak-burst" || name == "peak-rate" || name == "rate" || name == "violate-actns" || name == "flags" || name == "police-flags" || name == "sbuck-name" || name == "sbuck-type")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Burst::Burst()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "burst"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Burst::~Burst()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Burst::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Burst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Burst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Burst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Burst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Burst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Burst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Burst::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Burst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Cdvt::Cdvt()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "cdvt"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Cdvt::~Cdvt()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Cdvt::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Cdvt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Cdvt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdvt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Cdvt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Cdvt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Cdvt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Cdvt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Cdvt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Cdvt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::ConfclassEncode()
    :
    class_name{YType::str, "class-name"},
    enc{YType::enumeration, "enc"},
    hd{YType::uint64, "hd"},
    idx{YType::uint8, "idx"}
    	,
    inline_cmap(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap>())
{
    inline_cmap->parent = this;

    yang_name = "confclass-encode"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::~ConfclassEncode()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::has_data() const
{
    return class_name.is_set
	|| enc.is_set
	|| hd.is_set
	|| idx.is_set
	|| (inline_cmap !=  nullptr && inline_cmap->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(enc.yfilter)
	|| ydk::is_set(hd.yfilter)
	|| ydk::is_set(idx.yfilter)
	|| (inline_cmap !=  nullptr && inline_cmap->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confclass-encode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (enc.is_set || is_set(enc.yfilter)) leaf_name_data.push_back(enc.get_name_leafdata());
    if (hd.is_set || is_set(hd.yfilter)) leaf_name_data.push_back(hd.get_name_leafdata());
    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inline-cmap")
    {
        if(inline_cmap == nullptr)
        {
            inline_cmap = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap>();
        }
        return inline_cmap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inline_cmap != nullptr)
    {
        children["inline-cmap"] = inline_cmap;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enc")
    {
        enc = value;
        enc.value_namespace = name_space;
        enc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hd")
    {
        hd = value;
        hd.value_namespace = name_space;
        hd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "enc")
    {
        enc.yfilter = yfilter;
    }
    if(value_path == "hd")
    {
        hd.yfilter = yfilter;
    }
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inline-cmap" || name == "class-name" || name == "enc" || name == "hd" || name == "idx")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::InlineCmap()
    :
    flags{YType::uint32, "flags"},
    match_count{YType::uint32, "match-count"},
    mode{YType::enumeration, "mode"}
    	,
    match_infop(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop>())
{
    match_infop->parent = this;

    yang_name = "inline-cmap"; yang_parent_name = "confclass-encode"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::~InlineCmap()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::has_data() const
{
    return flags.is_set
	|| match_count.is_set
	|| mode.is_set
	|| (match_infop !=  nullptr && match_infop->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(match_count.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (match_infop !=  nullptr && match_infop->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inline-cmap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (match_count.is_set || is_set(match_count.yfilter)) leaf_name_data.push_back(match_count.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match-infop")
    {
        if(match_infop == nullptr)
        {
            match_infop = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop>();
        }
        return match_infop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match_infop != nullptr)
    {
        children["match-infop"] = match_infop;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-count")
    {
        match_count = value;
        match_count.value_namespace = name_space;
        match_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "match-count")
    {
        match_count.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-infop" || name == "flags" || name == "match-count" || name == "mode")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::MatchInfop()
{

    yang_name = "match-infop"; yang_parent_name = "inline-cmap"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::~MatchInfop()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::has_data() const
{
    for (std::size_t index=0; index<class_match_info_st.size(); index++)
    {
        if(class_match_info_st[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::has_operation() const
{
    for (std::size_t index=0; index<class_match_info_st.size(); index++)
    {
        if(class_match_info_st[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-infop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-match-info-st")
    {
        for(auto const & c : class_match_info_st)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt>();
        c->parent = this;
        class_match_info_st.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_match_info_st)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-match-info-st")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::ClassMatchInfoSt()
    :
    flags{YType::uint32, "flags"}
    	,
    match_data(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData>())
{
    match_data->parent = this;

    yang_name = "class-match-info-st"; yang_parent_name = "match-infop"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::~ClassMatchInfoSt()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::has_data() const
{
    return flags.is_set
	|| (match_data !=  nullptr && match_data->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (match_data !=  nullptr && match_data->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-match-info-st";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match-data")
    {
        if(match_data == nullptr)
        {
            match_data = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData>();
        }
        return match_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match_data != nullptr)
    {
        children["match-data"] = match_data;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-data" || name == "flags")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MatchData()
    :
    authen_status{YType::enumeration, "authen-status"},
    fragment_type{YType::uint8, "fragment-type"},
    mlp_negotiated{YType::enumeration, "mlp-negotiated"},
    mpls_top_eos{YType::uint8, "mpls-top-eos"},
    type{YType::enumeration, "type"}
    	,
    access_interface(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface>())
	,atm_clp(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp>())
	,auth_domain(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain>())
	,auth_domain_regex(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex>())
	,auth_username(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername>())
	,auth_username_regex(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex>())
	,avail_id(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId>())
	,circuit_id(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId>())
	,circuit_id_regex(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex>())
	,cos(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos>())
	,cos_inr(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr>())
	,dei(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei>())
	,dei_inr(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr>())
	,dhcp_client_id(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId>())
	,dhcp_client_id_regex(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex>())
	,discard_class(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass>())
	,dnis(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis>())
	,dnis_regex(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex>())
	,domain(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain>())
	,domain_regex(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex>())
	,dscp(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp>())
	,dst_addr_ipv4(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4>())
	,dst_addr_ipv6(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6>())
	,dst_mac(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac>())
	,dst_port(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort>())
	,ether_service_acl(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl>())
	,ethertype(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype>())
	,flow_key_data(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData>())
	,flow_tag(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag>())
	,fr_de(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe>())
	,fr_dlci(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci>())
	,icmp_v4(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4>())
	,icmp_v6(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6>())
	,icmpv4_code(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code>())
	,icmpv4_type(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type>())
	,icmpv6_code(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code>())
	,icmpv6_type(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type>())
	,input_interface(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface>())
	,input_intfhdl(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl>())
	,ipv4_acl(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl>())
	,ipv4_dscp(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp>())
	,ipv4_packet_len(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen>())
	,ipv4_prec(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec>())
	,ipv6_acl(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl>())
	,ipv6_dscp(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp>())
	,ipv6_packet_len(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen>())
	,ipv6_prec(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec>())
	,media_type(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MediaType>())
	,mpls_disp_ipv4_acl(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl>())
	,mpls_disp_ipv6_acl(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl>())
	,mpls_exp(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp>())
	,mpls_exp_imp(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp>())
	,mpls_top_label(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel>())
	,nas_port(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::NasPort>())
	,packet_len(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen>())
	,prec(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Prec>())
	,proto(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto>())
	,qos_group(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup>())
	,remote_id(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId>())
	,remote_id_regex(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex>())
	,service_name(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName>())
	,service_name_regex(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex>())
	,src_addr_ipv4(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4>())
	,src_addr_ipv6(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6>())
	,src_addr_mac(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac>())
	,src_mac(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac>())
	,src_port(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort>())
	,subs_protocol(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol>())
	,tcp_flag(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag>())
	,timer(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Timer>())
	,timer_regexp(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp>())
	,traffic_class(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass>())
	,tunnel_name(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName>())
	,tunnel_name_regex(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex>())
	,unauth_domain(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain>())
	,unauth_domain_regex(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex>())
	,unauth_username(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername>())
	,unauth_username_regex(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex>())
	,user_name(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UserName>())
	,user_name_regex(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex>())
	,vendor_id(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VendorId>())
	,vendor_id_regex(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex>())
	,vlan(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Vlan>())
	,vlan_inr(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr>())
{
    access_interface->parent = this;
    atm_clp->parent = this;
    auth_domain->parent = this;
    auth_domain_regex->parent = this;
    auth_username->parent = this;
    auth_username_regex->parent = this;
    avail_id->parent = this;
    circuit_id->parent = this;
    circuit_id_regex->parent = this;
    cos->parent = this;
    cos_inr->parent = this;
    dei->parent = this;
    dei_inr->parent = this;
    dhcp_client_id->parent = this;
    dhcp_client_id_regex->parent = this;
    discard_class->parent = this;
    dnis->parent = this;
    dnis_regex->parent = this;
    domain->parent = this;
    domain_regex->parent = this;
    dscp->parent = this;
    dst_addr_ipv4->parent = this;
    dst_addr_ipv6->parent = this;
    dst_mac->parent = this;
    dst_port->parent = this;
    ether_service_acl->parent = this;
    ethertype->parent = this;
    flow_key_data->parent = this;
    flow_tag->parent = this;
    fr_de->parent = this;
    fr_dlci->parent = this;
    icmp_v4->parent = this;
    icmp_v6->parent = this;
    icmpv4_code->parent = this;
    icmpv4_type->parent = this;
    icmpv6_code->parent = this;
    icmpv6_type->parent = this;
    input_interface->parent = this;
    input_intfhdl->parent = this;
    ipv4_acl->parent = this;
    ipv4_dscp->parent = this;
    ipv4_packet_len->parent = this;
    ipv4_prec->parent = this;
    ipv6_acl->parent = this;
    ipv6_dscp->parent = this;
    ipv6_packet_len->parent = this;
    ipv6_prec->parent = this;
    media_type->parent = this;
    mpls_disp_ipv4_acl->parent = this;
    mpls_disp_ipv6_acl->parent = this;
    mpls_exp->parent = this;
    mpls_exp_imp->parent = this;
    mpls_top_label->parent = this;
    nas_port->parent = this;
    packet_len->parent = this;
    prec->parent = this;
    proto->parent = this;
    qos_group->parent = this;
    remote_id->parent = this;
    remote_id_regex->parent = this;
    service_name->parent = this;
    service_name_regex->parent = this;
    src_addr_ipv4->parent = this;
    src_addr_ipv6->parent = this;
    src_addr_mac->parent = this;
    src_mac->parent = this;
    src_port->parent = this;
    subs_protocol->parent = this;
    tcp_flag->parent = this;
    timer->parent = this;
    timer_regexp->parent = this;
    traffic_class->parent = this;
    tunnel_name->parent = this;
    tunnel_name_regex->parent = this;
    unauth_domain->parent = this;
    unauth_domain_regex->parent = this;
    unauth_username->parent = this;
    unauth_username_regex->parent = this;
    user_name->parent = this;
    user_name_regex->parent = this;
    vendor_id->parent = this;
    vendor_id_regex->parent = this;
    vlan->parent = this;
    vlan_inr->parent = this;

    yang_name = "match-data"; yang_parent_name = "class-match-info-st"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::~MatchData()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::has_data() const
{
    return authen_status.is_set
	|| fragment_type.is_set
	|| mlp_negotiated.is_set
	|| mpls_top_eos.is_set
	|| type.is_set
	|| (access_interface !=  nullptr && access_interface->has_data())
	|| (atm_clp !=  nullptr && atm_clp->has_data())
	|| (auth_domain !=  nullptr && auth_domain->has_data())
	|| (auth_domain_regex !=  nullptr && auth_domain_regex->has_data())
	|| (auth_username !=  nullptr && auth_username->has_data())
	|| (auth_username_regex !=  nullptr && auth_username_regex->has_data())
	|| (avail_id !=  nullptr && avail_id->has_data())
	|| (circuit_id !=  nullptr && circuit_id->has_data())
	|| (circuit_id_regex !=  nullptr && circuit_id_regex->has_data())
	|| (cos !=  nullptr && cos->has_data())
	|| (cos_inr !=  nullptr && cos_inr->has_data())
	|| (dei !=  nullptr && dei->has_data())
	|| (dei_inr !=  nullptr && dei_inr->has_data())
	|| (dhcp_client_id !=  nullptr && dhcp_client_id->has_data())
	|| (dhcp_client_id_regex !=  nullptr && dhcp_client_id_regex->has_data())
	|| (discard_class !=  nullptr && discard_class->has_data())
	|| (dnis !=  nullptr && dnis->has_data())
	|| (dnis_regex !=  nullptr && dnis_regex->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (domain_regex !=  nullptr && domain_regex->has_data())
	|| (dscp !=  nullptr && dscp->has_data())
	|| (dst_addr_ipv4 !=  nullptr && dst_addr_ipv4->has_data())
	|| (dst_addr_ipv6 !=  nullptr && dst_addr_ipv6->has_data())
	|| (dst_mac !=  nullptr && dst_mac->has_data())
	|| (dst_port !=  nullptr && dst_port->has_data())
	|| (ether_service_acl !=  nullptr && ether_service_acl->has_data())
	|| (ethertype !=  nullptr && ethertype->has_data())
	|| (flow_key_data !=  nullptr && flow_key_data->has_data())
	|| (flow_tag !=  nullptr && flow_tag->has_data())
	|| (fr_de !=  nullptr && fr_de->has_data())
	|| (fr_dlci !=  nullptr && fr_dlci->has_data())
	|| (icmp_v4 !=  nullptr && icmp_v4->has_data())
	|| (icmp_v6 !=  nullptr && icmp_v6->has_data())
	|| (icmpv4_code !=  nullptr && icmpv4_code->has_data())
	|| (icmpv4_type !=  nullptr && icmpv4_type->has_data())
	|| (icmpv6_code !=  nullptr && icmpv6_code->has_data())
	|| (icmpv6_type !=  nullptr && icmpv6_type->has_data())
	|| (input_interface !=  nullptr && input_interface->has_data())
	|| (input_intfhdl !=  nullptr && input_intfhdl->has_data())
	|| (ipv4_acl !=  nullptr && ipv4_acl->has_data())
	|| (ipv4_dscp !=  nullptr && ipv4_dscp->has_data())
	|| (ipv4_packet_len !=  nullptr && ipv4_packet_len->has_data())
	|| (ipv4_prec !=  nullptr && ipv4_prec->has_data())
	|| (ipv6_acl !=  nullptr && ipv6_acl->has_data())
	|| (ipv6_dscp !=  nullptr && ipv6_dscp->has_data())
	|| (ipv6_packet_len !=  nullptr && ipv6_packet_len->has_data())
	|| (ipv6_prec !=  nullptr && ipv6_prec->has_data())
	|| (media_type !=  nullptr && media_type->has_data())
	|| (mpls_disp_ipv4_acl !=  nullptr && mpls_disp_ipv4_acl->has_data())
	|| (mpls_disp_ipv6_acl !=  nullptr && mpls_disp_ipv6_acl->has_data())
	|| (mpls_exp !=  nullptr && mpls_exp->has_data())
	|| (mpls_exp_imp !=  nullptr && mpls_exp_imp->has_data())
	|| (mpls_top_label !=  nullptr && mpls_top_label->has_data())
	|| (nas_port !=  nullptr && nas_port->has_data())
	|| (packet_len !=  nullptr && packet_len->has_data())
	|| (prec !=  nullptr && prec->has_data())
	|| (proto !=  nullptr && proto->has_data())
	|| (qos_group !=  nullptr && qos_group->has_data())
	|| (remote_id !=  nullptr && remote_id->has_data())
	|| (remote_id_regex !=  nullptr && remote_id_regex->has_data())
	|| (service_name !=  nullptr && service_name->has_data())
	|| (service_name_regex !=  nullptr && service_name_regex->has_data())
	|| (src_addr_ipv4 !=  nullptr && src_addr_ipv4->has_data())
	|| (src_addr_ipv6 !=  nullptr && src_addr_ipv6->has_data())
	|| (src_addr_mac !=  nullptr && src_addr_mac->has_data())
	|| (src_mac !=  nullptr && src_mac->has_data())
	|| (src_port !=  nullptr && src_port->has_data())
	|| (subs_protocol !=  nullptr && subs_protocol->has_data())
	|| (tcp_flag !=  nullptr && tcp_flag->has_data())
	|| (timer !=  nullptr && timer->has_data())
	|| (timer_regexp !=  nullptr && timer_regexp->has_data())
	|| (traffic_class !=  nullptr && traffic_class->has_data())
	|| (tunnel_name !=  nullptr && tunnel_name->has_data())
	|| (tunnel_name_regex !=  nullptr && tunnel_name_regex->has_data())
	|| (unauth_domain !=  nullptr && unauth_domain->has_data())
	|| (unauth_domain_regex !=  nullptr && unauth_domain_regex->has_data())
	|| (unauth_username !=  nullptr && unauth_username->has_data())
	|| (unauth_username_regex !=  nullptr && unauth_username_regex->has_data())
	|| (user_name !=  nullptr && user_name->has_data())
	|| (user_name_regex !=  nullptr && user_name_regex->has_data())
	|| (vendor_id !=  nullptr && vendor_id->has_data())
	|| (vendor_id_regex !=  nullptr && vendor_id_regex->has_data())
	|| (vlan !=  nullptr && vlan->has_data())
	|| (vlan_inr !=  nullptr && vlan_inr->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authen_status.yfilter)
	|| ydk::is_set(fragment_type.yfilter)
	|| ydk::is_set(mlp_negotiated.yfilter)
	|| ydk::is_set(mpls_top_eos.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (access_interface !=  nullptr && access_interface->has_operation())
	|| (atm_clp !=  nullptr && atm_clp->has_operation())
	|| (auth_domain !=  nullptr && auth_domain->has_operation())
	|| (auth_domain_regex !=  nullptr && auth_domain_regex->has_operation())
	|| (auth_username !=  nullptr && auth_username->has_operation())
	|| (auth_username_regex !=  nullptr && auth_username_regex->has_operation())
	|| (avail_id !=  nullptr && avail_id->has_operation())
	|| (circuit_id !=  nullptr && circuit_id->has_operation())
	|| (circuit_id_regex !=  nullptr && circuit_id_regex->has_operation())
	|| (cos !=  nullptr && cos->has_operation())
	|| (cos_inr !=  nullptr && cos_inr->has_operation())
	|| (dei !=  nullptr && dei->has_operation())
	|| (dei_inr !=  nullptr && dei_inr->has_operation())
	|| (dhcp_client_id !=  nullptr && dhcp_client_id->has_operation())
	|| (dhcp_client_id_regex !=  nullptr && dhcp_client_id_regex->has_operation())
	|| (discard_class !=  nullptr && discard_class->has_operation())
	|| (dnis !=  nullptr && dnis->has_operation())
	|| (dnis_regex !=  nullptr && dnis_regex->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (domain_regex !=  nullptr && domain_regex->has_operation())
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (dst_addr_ipv4 !=  nullptr && dst_addr_ipv4->has_operation())
	|| (dst_addr_ipv6 !=  nullptr && dst_addr_ipv6->has_operation())
	|| (dst_mac !=  nullptr && dst_mac->has_operation())
	|| (dst_port !=  nullptr && dst_port->has_operation())
	|| (ether_service_acl !=  nullptr && ether_service_acl->has_operation())
	|| (ethertype !=  nullptr && ethertype->has_operation())
	|| (flow_key_data !=  nullptr && flow_key_data->has_operation())
	|| (flow_tag !=  nullptr && flow_tag->has_operation())
	|| (fr_de !=  nullptr && fr_de->has_operation())
	|| (fr_dlci !=  nullptr && fr_dlci->has_operation())
	|| (icmp_v4 !=  nullptr && icmp_v4->has_operation())
	|| (icmp_v6 !=  nullptr && icmp_v6->has_operation())
	|| (icmpv4_code !=  nullptr && icmpv4_code->has_operation())
	|| (icmpv4_type !=  nullptr && icmpv4_type->has_operation())
	|| (icmpv6_code !=  nullptr && icmpv6_code->has_operation())
	|| (icmpv6_type !=  nullptr && icmpv6_type->has_operation())
	|| (input_interface !=  nullptr && input_interface->has_operation())
	|| (input_intfhdl !=  nullptr && input_intfhdl->has_operation())
	|| (ipv4_acl !=  nullptr && ipv4_acl->has_operation())
	|| (ipv4_dscp !=  nullptr && ipv4_dscp->has_operation())
	|| (ipv4_packet_len !=  nullptr && ipv4_packet_len->has_operation())
	|| (ipv4_prec !=  nullptr && ipv4_prec->has_operation())
	|| (ipv6_acl !=  nullptr && ipv6_acl->has_operation())
	|| (ipv6_dscp !=  nullptr && ipv6_dscp->has_operation())
	|| (ipv6_packet_len !=  nullptr && ipv6_packet_len->has_operation())
	|| (ipv6_prec !=  nullptr && ipv6_prec->has_operation())
	|| (media_type !=  nullptr && media_type->has_operation())
	|| (mpls_disp_ipv4_acl !=  nullptr && mpls_disp_ipv4_acl->has_operation())
	|| (mpls_disp_ipv6_acl !=  nullptr && mpls_disp_ipv6_acl->has_operation())
	|| (mpls_exp !=  nullptr && mpls_exp->has_operation())
	|| (mpls_exp_imp !=  nullptr && mpls_exp_imp->has_operation())
	|| (mpls_top_label !=  nullptr && mpls_top_label->has_operation())
	|| (nas_port !=  nullptr && nas_port->has_operation())
	|| (packet_len !=  nullptr && packet_len->has_operation())
	|| (prec !=  nullptr && prec->has_operation())
	|| (proto !=  nullptr && proto->has_operation())
	|| (qos_group !=  nullptr && qos_group->has_operation())
	|| (remote_id !=  nullptr && remote_id->has_operation())
	|| (remote_id_regex !=  nullptr && remote_id_regex->has_operation())
	|| (service_name !=  nullptr && service_name->has_operation())
	|| (service_name_regex !=  nullptr && service_name_regex->has_operation())
	|| (src_addr_ipv4 !=  nullptr && src_addr_ipv4->has_operation())
	|| (src_addr_ipv6 !=  nullptr && src_addr_ipv6->has_operation())
	|| (src_addr_mac !=  nullptr && src_addr_mac->has_operation())
	|| (src_mac !=  nullptr && src_mac->has_operation())
	|| (src_port !=  nullptr && src_port->has_operation())
	|| (subs_protocol !=  nullptr && subs_protocol->has_operation())
	|| (tcp_flag !=  nullptr && tcp_flag->has_operation())
	|| (timer !=  nullptr && timer->has_operation())
	|| (timer_regexp !=  nullptr && timer_regexp->has_operation())
	|| (traffic_class !=  nullptr && traffic_class->has_operation())
	|| (tunnel_name !=  nullptr && tunnel_name->has_operation())
	|| (tunnel_name_regex !=  nullptr && tunnel_name_regex->has_operation())
	|| (unauth_domain !=  nullptr && unauth_domain->has_operation())
	|| (unauth_domain_regex !=  nullptr && unauth_domain_regex->has_operation())
	|| (unauth_username !=  nullptr && unauth_username->has_operation())
	|| (unauth_username_regex !=  nullptr && unauth_username_regex->has_operation())
	|| (user_name !=  nullptr && user_name->has_operation())
	|| (user_name_regex !=  nullptr && user_name_regex->has_operation())
	|| (vendor_id !=  nullptr && vendor_id->has_operation())
	|| (vendor_id_regex !=  nullptr && vendor_id_regex->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (vlan_inr !=  nullptr && vlan_inr->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_status.is_set || is_set(authen_status.yfilter)) leaf_name_data.push_back(authen_status.get_name_leafdata());
    if (fragment_type.is_set || is_set(fragment_type.yfilter)) leaf_name_data.push_back(fragment_type.get_name_leafdata());
    if (mlp_negotiated.is_set || is_set(mlp_negotiated.yfilter)) leaf_name_data.push_back(mlp_negotiated.get_name_leafdata());
    if (mpls_top_eos.is_set || is_set(mpls_top_eos.yfilter)) leaf_name_data.push_back(mpls_top_eos.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interface")
    {
        if(access_interface == nullptr)
        {
            access_interface = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface>();
        }
        return access_interface;
    }

    if(child_yang_name == "atm-clp")
    {
        if(atm_clp == nullptr)
        {
            atm_clp = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp>();
        }
        return atm_clp;
    }

    if(child_yang_name == "auth-domain")
    {
        if(auth_domain == nullptr)
        {
            auth_domain = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain>();
        }
        return auth_domain;
    }

    if(child_yang_name == "auth-domain-regex")
    {
        if(auth_domain_regex == nullptr)
        {
            auth_domain_regex = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex>();
        }
        return auth_domain_regex;
    }

    if(child_yang_name == "auth-username")
    {
        if(auth_username == nullptr)
        {
            auth_username = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername>();
        }
        return auth_username;
    }

    if(child_yang_name == "auth-username-regex")
    {
        if(auth_username_regex == nullptr)
        {
            auth_username_regex = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex>();
        }
        return auth_username_regex;
    }

    if(child_yang_name == "avail-id")
    {
        if(avail_id == nullptr)
        {
            avail_id = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId>();
        }
        return avail_id;
    }

    if(child_yang_name == "circuit-id")
    {
        if(circuit_id == nullptr)
        {
            circuit_id = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId>();
        }
        return circuit_id;
    }

    if(child_yang_name == "circuit-id-regex")
    {
        if(circuit_id_regex == nullptr)
        {
            circuit_id_regex = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex>();
        }
        return circuit_id_regex;
    }

    if(child_yang_name == "cos")
    {
        if(cos == nullptr)
        {
            cos = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos>();
        }
        return cos;
    }

    if(child_yang_name == "cos-inr")
    {
        if(cos_inr == nullptr)
        {
            cos_inr = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr>();
        }
        return cos_inr;
    }

    if(child_yang_name == "dei")
    {
        if(dei == nullptr)
        {
            dei = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei>();
        }
        return dei;
    }

    if(child_yang_name == "dei-inr")
    {
        if(dei_inr == nullptr)
        {
            dei_inr = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr>();
        }
        return dei_inr;
    }

    if(child_yang_name == "dhcp-client-id")
    {
        if(dhcp_client_id == nullptr)
        {
            dhcp_client_id = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId>();
        }
        return dhcp_client_id;
    }

    if(child_yang_name == "dhcp-client-id-regex")
    {
        if(dhcp_client_id_regex == nullptr)
        {
            dhcp_client_id_regex = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex>();
        }
        return dhcp_client_id_regex;
    }

    if(child_yang_name == "discard-class")
    {
        if(discard_class == nullptr)
        {
            discard_class = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass>();
        }
        return discard_class;
    }

    if(child_yang_name == "dnis")
    {
        if(dnis == nullptr)
        {
            dnis = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis>();
        }
        return dnis;
    }

    if(child_yang_name == "dnis-regex")
    {
        if(dnis_regex == nullptr)
        {
            dnis_regex = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex>();
        }
        return dnis_regex;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "domain-regex")
    {
        if(domain_regex == nullptr)
        {
            domain_regex = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex>();
        }
        return domain_regex;
    }

    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "dst-addr-ipv4")
    {
        if(dst_addr_ipv4 == nullptr)
        {
            dst_addr_ipv4 = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4>();
        }
        return dst_addr_ipv4;
    }

    if(child_yang_name == "dst-addr-ipv6")
    {
        if(dst_addr_ipv6 == nullptr)
        {
            dst_addr_ipv6 = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6>();
        }
        return dst_addr_ipv6;
    }

    if(child_yang_name == "dst-mac")
    {
        if(dst_mac == nullptr)
        {
            dst_mac = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac>();
        }
        return dst_mac;
    }

    if(child_yang_name == "dst-port")
    {
        if(dst_port == nullptr)
        {
            dst_port = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort>();
        }
        return dst_port;
    }

    if(child_yang_name == "ether-service-acl")
    {
        if(ether_service_acl == nullptr)
        {
            ether_service_acl = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl>();
        }
        return ether_service_acl;
    }

    if(child_yang_name == "ethertype")
    {
        if(ethertype == nullptr)
        {
            ethertype = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype>();
        }
        return ethertype;
    }

    if(child_yang_name == "flow-key-data")
    {
        if(flow_key_data == nullptr)
        {
            flow_key_data = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData>();
        }
        return flow_key_data;
    }

    if(child_yang_name == "flow-tag")
    {
        if(flow_tag == nullptr)
        {
            flow_tag = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag>();
        }
        return flow_tag;
    }

    if(child_yang_name == "fr-de")
    {
        if(fr_de == nullptr)
        {
            fr_de = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe>();
        }
        return fr_de;
    }

    if(child_yang_name == "fr-dlci")
    {
        if(fr_dlci == nullptr)
        {
            fr_dlci = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci>();
        }
        return fr_dlci;
    }

    if(child_yang_name == "icmp-v4")
    {
        if(icmp_v4 == nullptr)
        {
            icmp_v4 = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4>();
        }
        return icmp_v4;
    }

    if(child_yang_name == "icmp-v6")
    {
        if(icmp_v6 == nullptr)
        {
            icmp_v6 = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6>();
        }
        return icmp_v6;
    }

    if(child_yang_name == "icmpv4-code")
    {
        if(icmpv4_code == nullptr)
        {
            icmpv4_code = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code>();
        }
        return icmpv4_code;
    }

    if(child_yang_name == "icmpv4-type")
    {
        if(icmpv4_type == nullptr)
        {
            icmpv4_type = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type>();
        }
        return icmpv4_type;
    }

    if(child_yang_name == "icmpv6-code")
    {
        if(icmpv6_code == nullptr)
        {
            icmpv6_code = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code>();
        }
        return icmpv6_code;
    }

    if(child_yang_name == "icmpv6-type")
    {
        if(icmpv6_type == nullptr)
        {
            icmpv6_type = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type>();
        }
        return icmpv6_type;
    }

    if(child_yang_name == "input-interface")
    {
        if(input_interface == nullptr)
        {
            input_interface = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface>();
        }
        return input_interface;
    }

    if(child_yang_name == "input-intfhdl")
    {
        if(input_intfhdl == nullptr)
        {
            input_intfhdl = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl>();
        }
        return input_intfhdl;
    }

    if(child_yang_name == "ipv4-acl")
    {
        if(ipv4_acl == nullptr)
        {
            ipv4_acl = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl>();
        }
        return ipv4_acl;
    }

    if(child_yang_name == "ipv4-dscp")
    {
        if(ipv4_dscp == nullptr)
        {
            ipv4_dscp = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp>();
        }
        return ipv4_dscp;
    }

    if(child_yang_name == "ipv4-packet-len")
    {
        if(ipv4_packet_len == nullptr)
        {
            ipv4_packet_len = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen>();
        }
        return ipv4_packet_len;
    }

    if(child_yang_name == "ipv4-prec")
    {
        if(ipv4_prec == nullptr)
        {
            ipv4_prec = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec>();
        }
        return ipv4_prec;
    }

    if(child_yang_name == "ipv6-acl")
    {
        if(ipv6_acl == nullptr)
        {
            ipv6_acl = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl>();
        }
        return ipv6_acl;
    }

    if(child_yang_name == "ipv6-dscp")
    {
        if(ipv6_dscp == nullptr)
        {
            ipv6_dscp = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp>();
        }
        return ipv6_dscp;
    }

    if(child_yang_name == "ipv6-packet-len")
    {
        if(ipv6_packet_len == nullptr)
        {
            ipv6_packet_len = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen>();
        }
        return ipv6_packet_len;
    }

    if(child_yang_name == "ipv6-prec")
    {
        if(ipv6_prec == nullptr)
        {
            ipv6_prec = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec>();
        }
        return ipv6_prec;
    }

    if(child_yang_name == "media-type")
    {
        if(media_type == nullptr)
        {
            media_type = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MediaType>();
        }
        return media_type;
    }

    if(child_yang_name == "mpls-disp-ipv4-acl")
    {
        if(mpls_disp_ipv4_acl == nullptr)
        {
            mpls_disp_ipv4_acl = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl>();
        }
        return mpls_disp_ipv4_acl;
    }

    if(child_yang_name == "mpls-disp-ipv6-acl")
    {
        if(mpls_disp_ipv6_acl == nullptr)
        {
            mpls_disp_ipv6_acl = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl>();
        }
        return mpls_disp_ipv6_acl;
    }

    if(child_yang_name == "mpls-exp")
    {
        if(mpls_exp == nullptr)
        {
            mpls_exp = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp>();
        }
        return mpls_exp;
    }

    if(child_yang_name == "mpls-exp-imp")
    {
        if(mpls_exp_imp == nullptr)
        {
            mpls_exp_imp = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp>();
        }
        return mpls_exp_imp;
    }

    if(child_yang_name == "mpls-top-label")
    {
        if(mpls_top_label == nullptr)
        {
            mpls_top_label = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel>();
        }
        return mpls_top_label;
    }

    if(child_yang_name == "nas-port")
    {
        if(nas_port == nullptr)
        {
            nas_port = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::NasPort>();
        }
        return nas_port;
    }

    if(child_yang_name == "packet-len")
    {
        if(packet_len == nullptr)
        {
            packet_len = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen>();
        }
        return packet_len;
    }

    if(child_yang_name == "prec")
    {
        if(prec == nullptr)
        {
            prec = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Prec>();
        }
        return prec;
    }

    if(child_yang_name == "proto")
    {
        if(proto == nullptr)
        {
            proto = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto>();
        }
        return proto;
    }

    if(child_yang_name == "qos-group")
    {
        if(qos_group == nullptr)
        {
            qos_group = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup>();
        }
        return qos_group;
    }

    if(child_yang_name == "remote-id")
    {
        if(remote_id == nullptr)
        {
            remote_id = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId>();
        }
        return remote_id;
    }

    if(child_yang_name == "remote-id-regex")
    {
        if(remote_id_regex == nullptr)
        {
            remote_id_regex = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex>();
        }
        return remote_id_regex;
    }

    if(child_yang_name == "service-name")
    {
        if(service_name == nullptr)
        {
            service_name = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName>();
        }
        return service_name;
    }

    if(child_yang_name == "service-name-regex")
    {
        if(service_name_regex == nullptr)
        {
            service_name_regex = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex>();
        }
        return service_name_regex;
    }

    if(child_yang_name == "src-addr-ipv4")
    {
        if(src_addr_ipv4 == nullptr)
        {
            src_addr_ipv4 = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4>();
        }
        return src_addr_ipv4;
    }

    if(child_yang_name == "src-addr-ipv6")
    {
        if(src_addr_ipv6 == nullptr)
        {
            src_addr_ipv6 = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6>();
        }
        return src_addr_ipv6;
    }

    if(child_yang_name == "src-addr-mac")
    {
        if(src_addr_mac == nullptr)
        {
            src_addr_mac = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac>();
        }
        return src_addr_mac;
    }

    if(child_yang_name == "src-mac")
    {
        if(src_mac == nullptr)
        {
            src_mac = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac>();
        }
        return src_mac;
    }

    if(child_yang_name == "src-port")
    {
        if(src_port == nullptr)
        {
            src_port = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort>();
        }
        return src_port;
    }

    if(child_yang_name == "subs-protocol")
    {
        if(subs_protocol == nullptr)
        {
            subs_protocol = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol>();
        }
        return subs_protocol;
    }

    if(child_yang_name == "tcp-flag")
    {
        if(tcp_flag == nullptr)
        {
            tcp_flag = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag>();
        }
        return tcp_flag;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Timer>();
        }
        return timer;
    }

    if(child_yang_name == "timer-regexp")
    {
        if(timer_regexp == nullptr)
        {
            timer_regexp = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp>();
        }
        return timer_regexp;
    }

    if(child_yang_name == "traffic-class")
    {
        if(traffic_class == nullptr)
        {
            traffic_class = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass>();
        }
        return traffic_class;
    }

    if(child_yang_name == "tunnel-name")
    {
        if(tunnel_name == nullptr)
        {
            tunnel_name = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName>();
        }
        return tunnel_name;
    }

    if(child_yang_name == "tunnel-name-regex")
    {
        if(tunnel_name_regex == nullptr)
        {
            tunnel_name_regex = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex>();
        }
        return tunnel_name_regex;
    }

    if(child_yang_name == "unauth-domain")
    {
        if(unauth_domain == nullptr)
        {
            unauth_domain = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain>();
        }
        return unauth_domain;
    }

    if(child_yang_name == "unauth-domain-regex")
    {
        if(unauth_domain_regex == nullptr)
        {
            unauth_domain_regex = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex>();
        }
        return unauth_domain_regex;
    }

    if(child_yang_name == "unauth-username")
    {
        if(unauth_username == nullptr)
        {
            unauth_username = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername>();
        }
        return unauth_username;
    }

    if(child_yang_name == "unauth-username-regex")
    {
        if(unauth_username_regex == nullptr)
        {
            unauth_username_regex = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex>();
        }
        return unauth_username_regex;
    }

    if(child_yang_name == "user-name")
    {
        if(user_name == nullptr)
        {
            user_name = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UserName>();
        }
        return user_name;
    }

    if(child_yang_name == "user-name-regex")
    {
        if(user_name_regex == nullptr)
        {
            user_name_regex = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex>();
        }
        return user_name_regex;
    }

    if(child_yang_name == "vendor-id")
    {
        if(vendor_id == nullptr)
        {
            vendor_id = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VendorId>();
        }
        return vendor_id;
    }

    if(child_yang_name == "vendor-id-regex")
    {
        if(vendor_id_regex == nullptr)
        {
            vendor_id_regex = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex>();
        }
        return vendor_id_regex;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "vlan-inr")
    {
        if(vlan_inr == nullptr)
        {
            vlan_inr = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr>();
        }
        return vlan_inr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_interface != nullptr)
    {
        children["access-interface"] = access_interface;
    }

    if(atm_clp != nullptr)
    {
        children["atm-clp"] = atm_clp;
    }

    if(auth_domain != nullptr)
    {
        children["auth-domain"] = auth_domain;
    }

    if(auth_domain_regex != nullptr)
    {
        children["auth-domain-regex"] = auth_domain_regex;
    }

    if(auth_username != nullptr)
    {
        children["auth-username"] = auth_username;
    }

    if(auth_username_regex != nullptr)
    {
        children["auth-username-regex"] = auth_username_regex;
    }

    if(avail_id != nullptr)
    {
        children["avail-id"] = avail_id;
    }

    if(circuit_id != nullptr)
    {
        children["circuit-id"] = circuit_id;
    }

    if(circuit_id_regex != nullptr)
    {
        children["circuit-id-regex"] = circuit_id_regex;
    }

    if(cos != nullptr)
    {
        children["cos"] = cos;
    }

    if(cos_inr != nullptr)
    {
        children["cos-inr"] = cos_inr;
    }

    if(dei != nullptr)
    {
        children["dei"] = dei;
    }

    if(dei_inr != nullptr)
    {
        children["dei-inr"] = dei_inr;
    }

    if(dhcp_client_id != nullptr)
    {
        children["dhcp-client-id"] = dhcp_client_id;
    }

    if(dhcp_client_id_regex != nullptr)
    {
        children["dhcp-client-id-regex"] = dhcp_client_id_regex;
    }

    if(discard_class != nullptr)
    {
        children["discard-class"] = discard_class;
    }

    if(dnis != nullptr)
    {
        children["dnis"] = dnis;
    }

    if(dnis_regex != nullptr)
    {
        children["dnis-regex"] = dnis_regex;
    }

    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    if(domain_regex != nullptr)
    {
        children["domain-regex"] = domain_regex;
    }

    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    if(dst_addr_ipv4 != nullptr)
    {
        children["dst-addr-ipv4"] = dst_addr_ipv4;
    }

    if(dst_addr_ipv6 != nullptr)
    {
        children["dst-addr-ipv6"] = dst_addr_ipv6;
    }

    if(dst_mac != nullptr)
    {
        children["dst-mac"] = dst_mac;
    }

    if(dst_port != nullptr)
    {
        children["dst-port"] = dst_port;
    }

    if(ether_service_acl != nullptr)
    {
        children["ether-service-acl"] = ether_service_acl;
    }

    if(ethertype != nullptr)
    {
        children["ethertype"] = ethertype;
    }

    if(flow_key_data != nullptr)
    {
        children["flow-key-data"] = flow_key_data;
    }

    if(flow_tag != nullptr)
    {
        children["flow-tag"] = flow_tag;
    }

    if(fr_de != nullptr)
    {
        children["fr-de"] = fr_de;
    }

    if(fr_dlci != nullptr)
    {
        children["fr-dlci"] = fr_dlci;
    }

    if(icmp_v4 != nullptr)
    {
        children["icmp-v4"] = icmp_v4;
    }

    if(icmp_v6 != nullptr)
    {
        children["icmp-v6"] = icmp_v6;
    }

    if(icmpv4_code != nullptr)
    {
        children["icmpv4-code"] = icmpv4_code;
    }

    if(icmpv4_type != nullptr)
    {
        children["icmpv4-type"] = icmpv4_type;
    }

    if(icmpv6_code != nullptr)
    {
        children["icmpv6-code"] = icmpv6_code;
    }

    if(icmpv6_type != nullptr)
    {
        children["icmpv6-type"] = icmpv6_type;
    }

    if(input_interface != nullptr)
    {
        children["input-interface"] = input_interface;
    }

    if(input_intfhdl != nullptr)
    {
        children["input-intfhdl"] = input_intfhdl;
    }

    if(ipv4_acl != nullptr)
    {
        children["ipv4-acl"] = ipv4_acl;
    }

    if(ipv4_dscp != nullptr)
    {
        children["ipv4-dscp"] = ipv4_dscp;
    }

    if(ipv4_packet_len != nullptr)
    {
        children["ipv4-packet-len"] = ipv4_packet_len;
    }

    if(ipv4_prec != nullptr)
    {
        children["ipv4-prec"] = ipv4_prec;
    }

    if(ipv6_acl != nullptr)
    {
        children["ipv6-acl"] = ipv6_acl;
    }

    if(ipv6_dscp != nullptr)
    {
        children["ipv6-dscp"] = ipv6_dscp;
    }

    if(ipv6_packet_len != nullptr)
    {
        children["ipv6-packet-len"] = ipv6_packet_len;
    }

    if(ipv6_prec != nullptr)
    {
        children["ipv6-prec"] = ipv6_prec;
    }

    if(media_type != nullptr)
    {
        children["media-type"] = media_type;
    }

    if(mpls_disp_ipv4_acl != nullptr)
    {
        children["mpls-disp-ipv4-acl"] = mpls_disp_ipv4_acl;
    }

    if(mpls_disp_ipv6_acl != nullptr)
    {
        children["mpls-disp-ipv6-acl"] = mpls_disp_ipv6_acl;
    }

    if(mpls_exp != nullptr)
    {
        children["mpls-exp"] = mpls_exp;
    }

    if(mpls_exp_imp != nullptr)
    {
        children["mpls-exp-imp"] = mpls_exp_imp;
    }

    if(mpls_top_label != nullptr)
    {
        children["mpls-top-label"] = mpls_top_label;
    }

    if(nas_port != nullptr)
    {
        children["nas-port"] = nas_port;
    }

    if(packet_len != nullptr)
    {
        children["packet-len"] = packet_len;
    }

    if(prec != nullptr)
    {
        children["prec"] = prec;
    }

    if(proto != nullptr)
    {
        children["proto"] = proto;
    }

    if(qos_group != nullptr)
    {
        children["qos-group"] = qos_group;
    }

    if(remote_id != nullptr)
    {
        children["remote-id"] = remote_id;
    }

    if(remote_id_regex != nullptr)
    {
        children["remote-id-regex"] = remote_id_regex;
    }

    if(service_name != nullptr)
    {
        children["service-name"] = service_name;
    }

    if(service_name_regex != nullptr)
    {
        children["service-name-regex"] = service_name_regex;
    }

    if(src_addr_ipv4 != nullptr)
    {
        children["src-addr-ipv4"] = src_addr_ipv4;
    }

    if(src_addr_ipv6 != nullptr)
    {
        children["src-addr-ipv6"] = src_addr_ipv6;
    }

    if(src_addr_mac != nullptr)
    {
        children["src-addr-mac"] = src_addr_mac;
    }

    if(src_mac != nullptr)
    {
        children["src-mac"] = src_mac;
    }

    if(src_port != nullptr)
    {
        children["src-port"] = src_port;
    }

    if(subs_protocol != nullptr)
    {
        children["subs-protocol"] = subs_protocol;
    }

    if(tcp_flag != nullptr)
    {
        children["tcp-flag"] = tcp_flag;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    if(timer_regexp != nullptr)
    {
        children["timer-regexp"] = timer_regexp;
    }

    if(traffic_class != nullptr)
    {
        children["traffic-class"] = traffic_class;
    }

    if(tunnel_name != nullptr)
    {
        children["tunnel-name"] = tunnel_name;
    }

    if(tunnel_name_regex != nullptr)
    {
        children["tunnel-name-regex"] = tunnel_name_regex;
    }

    if(unauth_domain != nullptr)
    {
        children["unauth-domain"] = unauth_domain;
    }

    if(unauth_domain_regex != nullptr)
    {
        children["unauth-domain-regex"] = unauth_domain_regex;
    }

    if(unauth_username != nullptr)
    {
        children["unauth-username"] = unauth_username;
    }

    if(unauth_username_regex != nullptr)
    {
        children["unauth-username-regex"] = unauth_username_regex;
    }

    if(user_name != nullptr)
    {
        children["user-name"] = user_name;
    }

    if(user_name_regex != nullptr)
    {
        children["user-name-regex"] = user_name_regex;
    }

    if(vendor_id != nullptr)
    {
        children["vendor-id"] = vendor_id;
    }

    if(vendor_id_regex != nullptr)
    {
        children["vendor-id-regex"] = vendor_id_regex;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    if(vlan_inr != nullptr)
    {
        children["vlan-inr"] = vlan_inr;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authen-status")
    {
        authen_status = value;
        authen_status.value_namespace = name_space;
        authen_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-type")
    {
        fragment_type = value;
        fragment_type.value_namespace = name_space;
        fragment_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlp-negotiated")
    {
        mlp_negotiated = value;
        mlp_negotiated.value_namespace = name_space;
        mlp_negotiated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-top-eos")
    {
        mpls_top_eos = value;
        mpls_top_eos.value_namespace = name_space;
        mpls_top_eos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authen-status")
    {
        authen_status.yfilter = yfilter;
    }
    if(value_path == "fragment-type")
    {
        fragment_type.yfilter = yfilter;
    }
    if(value_path == "mlp-negotiated")
    {
        mlp_negotiated.yfilter = yfilter;
    }
    if(value_path == "mpls-top-eos")
    {
        mpls_top_eos.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interface" || name == "atm-clp" || name == "auth-domain" || name == "auth-domain-regex" || name == "auth-username" || name == "auth-username-regex" || name == "avail-id" || name == "circuit-id" || name == "circuit-id-regex" || name == "cos" || name == "cos-inr" || name == "dei" || name == "dei-inr" || name == "dhcp-client-id" || name == "dhcp-client-id-regex" || name == "discard-class" || name == "dnis" || name == "dnis-regex" || name == "domain" || name == "domain-regex" || name == "dscp" || name == "dst-addr-ipv4" || name == "dst-addr-ipv6" || name == "dst-mac" || name == "dst-port" || name == "ether-service-acl" || name == "ethertype" || name == "flow-key-data" || name == "flow-tag" || name == "fr-de" || name == "fr-dlci" || name == "icmp-v4" || name == "icmp-v6" || name == "icmpv4-code" || name == "icmpv4-type" || name == "icmpv6-code" || name == "icmpv6-type" || name == "input-interface" || name == "input-intfhdl" || name == "ipv4-acl" || name == "ipv4-dscp" || name == "ipv4-packet-len" || name == "ipv4-prec" || name == "ipv6-acl" || name == "ipv6-dscp" || name == "ipv6-packet-len" || name == "ipv6-prec" || name == "media-type" || name == "mpls-disp-ipv4-acl" || name == "mpls-disp-ipv6-acl" || name == "mpls-exp" || name == "mpls-exp-imp" || name == "mpls-top-label" || name == "nas-port" || name == "packet-len" || name == "prec" || name == "proto" || name == "qos-group" || name == "remote-id" || name == "remote-id-regex" || name == "service-name" || name == "service-name-regex" || name == "src-addr-ipv4" || name == "src-addr-ipv6" || name == "src-addr-mac" || name == "src-mac" || name == "src-port" || name == "subs-protocol" || name == "tcp-flag" || name == "timer" || name == "timer-regexp" || name == "traffic-class" || name == "tunnel-name" || name == "tunnel-name-regex" || name == "unauth-domain" || name == "unauth-domain-regex" || name == "unauth-username" || name == "unauth-username-regex" || name == "user-name" || name == "user-name-regex" || name == "vendor-id" || name == "vendor-id-regex" || name == "vlan" || name == "vlan-inr" || name == "authen-status" || name == "fragment-type" || name == "mlp-negotiated" || name == "mpls-top-eos" || name == "type")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::AccessInterface()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "access-interface"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::~AccessInterface()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::AtmClp()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "atm-clp"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::~AtmClp()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm-clp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::AuthDomain()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "auth-domain"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::~AuthDomain()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::AuthDomainRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "auth-domain-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::~AuthDomainRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-domain-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::AuthUsername()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "auth-username"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::~AuthUsername()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-username";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::AuthUsernameRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "auth-username-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::~AuthUsernameRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-username-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::AvailId()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "avail-id"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::~AvailId()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avail-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::CircuitId()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "circuit-id"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::~CircuitId()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::CircuitIdRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "circuit-id-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::~CircuitIdRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos::Cos()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "cos"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos::~Cos()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::CosInr()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "cos-inr"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::~CosInr()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-inr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei::Dei()
    :
    bit_value{YType::uint32, "bit-value"}
{

    yang_name = "dei"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei::~Dei()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei::has_data() const
{
    return bit_value.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_value.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dei";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_value.is_set || is_set(bit_value.yfilter)) leaf_name_data.push_back(bit_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-value")
    {
        bit_value = value;
        bit_value.value_namespace = name_space;
        bit_value.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-value")
    {
        bit_value.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::DeiInr()
    :
    bit_value{YType::uint32, "bit-value"}
{

    yang_name = "dei-inr"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::~DeiInr()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::has_data() const
{
    return bit_value.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_value.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dei-inr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_value.is_set || is_set(bit_value.yfilter)) leaf_name_data.push_back(bit_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-value")
    {
        bit_value = value;
        bit_value.value_namespace = name_space;
        bit_value.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-value")
    {
        bit_value.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::DhcpClientId()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "dhcp-client-id"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::~DhcpClientId()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-client-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::DhcpClientIdRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "dhcp-client-id-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::~DhcpClientIdRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-client-id-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::DiscardClass()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "discard-class"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::~DiscardClass()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::Dnis()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "dnis"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::~Dnis()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::DnisRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "dnis-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::~DnisRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnis-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::Domain()
{

    yang_name = "domain"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::~Domain()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::has_data() const
{
    for (std::size_t index=0; index<domain_array.size(); index++)
    {
        if(domain_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::has_operation() const
{
    for (std::size_t index=0; index<domain_array.size(); index++)
    {
        if(domain_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain-array")
    {
        for(auto const & c : domain_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray>();
        c->parent = this;
        domain_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : domain_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::DomainArray()
    :
    domain_name{YType::str, "domain-name"},
    format_name{YType::str, "format-name"}
{

    yang_name = "domain-array"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::~DomainArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::has_data() const
{
    return domain_name.is_set
	|| format_name.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(format_name.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (format_name.is_set || is_set(format_name.yfilter)) leaf_name_data.push_back(format_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format-name")
    {
        format_name = value;
        format_name.value_namespace = name_space;
        format_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "format-name")
    {
        format_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-name" || name == "format-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainRegex()
{

    yang_name = "domain-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::~DomainRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::has_data() const
{
    for (std::size_t index=0; index<domain_array.size(); index++)
    {
        if(domain_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::has_operation() const
{
    for (std::size_t index=0; index<domain_array.size(); index++)
    {
        if(domain_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain-array")
    {
        for(auto const & c : domain_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray>();
        c->parent = this;
        domain_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : domain_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::DomainArray()
    :
    domain_name{YType::str, "domain-name"},
    format_name{YType::str, "format-name"}
{

    yang_name = "domain-array"; yang_parent_name = "domain-regex"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::~DomainArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::has_data() const
{
    return domain_name.is_set
	|| format_name.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(format_name.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (format_name.is_set || is_set(format_name.yfilter)) leaf_name_data.push_back(format_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format-name")
    {
        format_name = value;
        format_name.value_namespace = name_space;
        format_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "format-name")
    {
        format_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-name" || name == "format-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Dscp()
{

    yang_name = "dscp"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::~Dscp()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray>();
        c->parent = this;
        uint8_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint8_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::Uint8RngArray()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "dscp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::DstAddrIpv4()
{

    yang_name = "dst-addr-ipv4"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::~DstAddrIpv4()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::has_data() const
{
    for (std::size_t index=0; index<ipv4_addr_array.size(); index++)
    {
        if(ipv4_addr_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::has_operation() const
{
    for (std::size_t index=0; index<ipv4_addr_array.size(); index++)
    {
        if(ipv4_addr_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-addr-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-addr-array")
    {
        for(auto const & c : ipv4_addr_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray>();
        c->parent = this;
        ipv4_addr_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_addr_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::Ipv4AddrArray()
    :
    mask{YType::str, "mask"},
    prefix{YType::str, "prefix"}
{

    yang_name = "ipv4-addr-array"; yang_parent_name = "dst-addr-ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::~Ipv4AddrArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::has_data() const
{
    return mask.is_set
	|| prefix.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addr-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "prefix")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::DstAddrIpv6()
{

    yang_name = "dst-addr-ipv6"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::~DstAddrIpv6()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::has_data() const
{
    for (std::size_t index=0; index<ipv6_addr_array.size(); index++)
    {
        if(ipv6_addr_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::has_operation() const
{
    for (std::size_t index=0; index<ipv6_addr_array.size(); index++)
    {
        if(ipv6_addr_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-addr-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-addr-array")
    {
        for(auto const & c : ipv6_addr_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray>();
        c->parent = this;
        ipv6_addr_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_addr_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-addr-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::Ipv6AddrArray()
    :
    mask{YType::uint32, "mask"},
    prefix{YType::str, "prefix"}
{

    yang_name = "ipv6-addr-array"; yang_parent_name = "dst-addr-ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::~Ipv6AddrArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::has_data() const
{
    return mask.is_set
	|| prefix.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addr-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "prefix")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::DstMac()
    :
    mac_addr{YType::uint16, "mac-addr"},
    mask{YType::uint16, "mask"}
{

    yang_name = "dst-mac"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::~DstMac()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::has_data() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::has_operation() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac_addr.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_addr_name_datas = mac_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_addr_name_datas.begin(), mac_addr_name_datas.end());
    auto mask_name_datas = mask.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mask_name_datas.begin(), mask_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-addr")
    {
        mac_addr.append(value);
    }
    if(value_path == "mask")
    {
        mask.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-addr")
    {
        mac_addr.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-addr" || name == "mask")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::DstPort()
{

    yang_name = "dst-port"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::~DstPort()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray>();
        c->parent = this;
        uint16_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint16_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::Uint16RngArray()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "dst-port"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::EtherServiceAcl()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "ether-service-acl"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::~EtherServiceAcl()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-service-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Ethertype()
{

    yang_name = "ethertype"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::~Ethertype()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethertype";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray>();
        c->parent = this;
        uint16_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint16_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::Uint16RngArray()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "ethertype"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeyData()
    :
    idle_timeout{YType::uint16, "idle-timeout"},
    max_count{YType::uint16, "max-count"}
    	,
    flow_keys(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys>())
{
    flow_keys->parent = this;

    yang_name = "flow-key-data"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::~FlowKeyData()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::has_data() const
{
    return idle_timeout.is_set
	|| max_count.is_set
	|| (flow_keys !=  nullptr && flow_keys->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle_timeout.yfilter)
	|| ydk::is_set(max_count.yfilter)
	|| (flow_keys !=  nullptr && flow_keys->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-key-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_timeout.is_set || is_set(idle_timeout.yfilter)) leaf_name_data.push_back(idle_timeout.get_name_leafdata());
    if (max_count.is_set || is_set(max_count.yfilter)) leaf_name_data.push_back(max_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-keys")
    {
        if(flow_keys == nullptr)
        {
            flow_keys = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys>();
        }
        return flow_keys;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_keys != nullptr)
    {
        children["flow-keys"] = flow_keys;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idle-timeout")
    {
        idle_timeout = value;
        idle_timeout.value_namespace = name_space;
        idle_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-count")
    {
        max_count = value;
        max_count.value_namespace = name_space;
        max_count.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idle-timeout")
    {
        idle_timeout.yfilter = yfilter;
    }
    if(value_path == "max-count")
    {
        max_count.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-keys" || name == "idle-timeout" || name == "max-count")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::FlowKeys()
    :
    keys{YType::str, "keys"},
    num{YType::uint8, "num"}
{

    yang_name = "flow-keys"; yang_parent_name = "flow-key-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::~FlowKeys()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::has_data() const
{
    return keys.is_set
	|| num.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keys.yfilter)
	|| ydk::is_set(num.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-keys";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keys.is_set || is_set(keys.yfilter)) leaf_name_data.push_back(keys.get_name_leafdata());
    if (num.is_set || is_set(num.yfilter)) leaf_name_data.push_back(num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keys")
    {
        keys = value;
        keys.value_namespace = name_space;
        keys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num")
    {
        num = value;
        num.value_namespace = name_space;
        num.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keys")
    {
        keys.yfilter = yfilter;
    }
    if(value_path == "num")
    {
        num.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keys" || name == "num")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::FlowTag()
{

    yang_name = "flow-tag"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::~FlowTag()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray>();
        c->parent = this;
        uint8_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint8_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::Uint8RngArray()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "flow-tag"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::FrDe()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "fr-de"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::~FrDe()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr-de";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::FrDlci()
{

    yang_name = "fr-dlci"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::~FrDlci()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr-dlci";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray>();
        c->parent = this;
        uint16_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint16_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::Uint16RngArray()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "fr-dlci"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::IcmpV4()
    :
    code{YType::uint8, "code"},
    type{YType::uint8, "type"}
{

    yang_name = "icmp-v4"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::~IcmpV4()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::has_data() const
{
    return code.is_set
	|| type.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "type")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::IcmpV6()
    :
    code{YType::uint8, "code"},
    type{YType::uint8, "type"}
{

    yang_name = "icmp-v6"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::~IcmpV6()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::has_data() const
{
    return code.is_set
	|| type.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "type")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Icmpv4Code()
{

    yang_name = "icmpv4-code"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::~Icmpv4Code()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv4-code";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray>();
        c->parent = this;
        uint8_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint8_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::Uint8RngArray()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv4-code"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Icmpv4Type()
{

    yang_name = "icmpv4-type"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::~Icmpv4Type()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv4-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray>();
        c->parent = this;
        uint8_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint8_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::Uint8RngArray()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv4-type"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Icmpv6Code()
{

    yang_name = "icmpv6-code"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::~Icmpv6Code()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv6-code";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray>();
        c->parent = this;
        uint8_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint8_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::Uint8RngArray()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv6-code"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Icmpv6Type()
{

    yang_name = "icmpv6-type"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::~Icmpv6Type()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv6-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray>();
        c->parent = this;
        uint8_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint8_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::Uint8RngArray()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv6-type"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::InputInterface()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "input-interface"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::~InputInterface()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::InputIntfhdl()
    :
    uint64_array{YType::uint64, "uint64_array"}
{

    yang_name = "input-intfhdl"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::~InputIntfhdl()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::has_data() const
{
    for (auto const & leaf : uint64_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::has_operation() const
{
    for (auto const & leaf : uint64_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint64_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-intfhdl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint64_array_name_datas = uint64_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint64_array_name_datas.begin(), uint64_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint64_array")
    {
        uint64_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint64_array")
    {
        uint64_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint64_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::Ipv4Acl()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "ipv4-acl"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::~Ipv4Acl()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Ipv4Dscp()
{

    yang_name = "ipv4-dscp"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::~Ipv4Dscp()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray>();
        c->parent = this;
        uint8_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint8_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::Uint8RngArray()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "ipv4-dscp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Ipv4PacketLen()
{

    yang_name = "ipv4-packet-len"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::~Ipv4PacketLen()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-packet-len";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray>();
        c->parent = this;
        uint16_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint16_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::Uint16RngArray()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "ipv4-packet-len"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::Ipv4Prec()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "ipv4-prec"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::~Ipv4Prec()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-prec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::Ipv6Acl()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "ipv6-acl"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::~Ipv6Acl()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Ipv6Dscp()
{

    yang_name = "ipv6-dscp"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::~Ipv6Dscp()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray>();
        c->parent = this;
        uint8_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint8_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::Uint8RngArray()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "ipv6-dscp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Ipv6PacketLen()
{

    yang_name = "ipv6-packet-len"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::~Ipv6PacketLen()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-packet-len";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray>();
        c->parent = this;
        uint16_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint16_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::Uint16RngArray()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "ipv6-packet-len"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::Ipv6Prec()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "ipv6-prec"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::~Ipv6Prec()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-prec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::MediaType()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "media-type"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::~MediaType()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}


}
}

