
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IMAGE_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IMAGE_MIB {

CiscoImageMib::CiscoImageMib()
    :
    ciscoimagetable(std::make_shared<CiscoImageMib::Ciscoimagetable>())
{
    ciscoimagetable->parent = this;

    yang_name = "CISCO-IMAGE-MIB"; yang_parent_name = "CISCO-IMAGE-MIB";
}

CiscoImageMib::~CiscoImageMib()
{
}

bool CiscoImageMib::has_data() const
{
    return (ciscoimagetable !=  nullptr && ciscoimagetable->has_data());
}

bool CiscoImageMib::has_operation() const
{
    return is_set(yfilter)
	|| (ciscoimagetable !=  nullptr && ciscoimagetable->has_operation());
}

std::string CiscoImageMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IMAGE-MIB:CISCO-IMAGE-MIB";

    return path_buffer.str();

}

const EntityPath CiscoImageMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoImageMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoImageTable")
    {
        if(ciscoimagetable == nullptr)
        {
            ciscoimagetable = std::make_shared<CiscoImageMib::Ciscoimagetable>();
        }
        return ciscoimagetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoImageMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ciscoimagetable != nullptr)
    {
        children["ciscoImageTable"] = ciscoimagetable;
    }

    return children;
}

void CiscoImageMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoImageMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoImageMib::clone_ptr() const
{
    return std::make_shared<CiscoImageMib>();
}

std::string CiscoImageMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoImageMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoImageMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoImageMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoImageMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoImageTable")
        return true;
    return false;
}

CiscoImageMib::Ciscoimagetable::Ciscoimagetable()
{
    yang_name = "ciscoImageTable"; yang_parent_name = "CISCO-IMAGE-MIB";
}

CiscoImageMib::Ciscoimagetable::~Ciscoimagetable()
{
}

bool CiscoImageMib::Ciscoimagetable::has_data() const
{
    for (std::size_t index=0; index<ciscoimageentry.size(); index++)
    {
        if(ciscoimageentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoImageMib::Ciscoimagetable::has_operation() const
{
    for (std::size_t index=0; index<ciscoimageentry.size(); index++)
    {
        if(ciscoimageentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoImageMib::Ciscoimagetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoImageTable";

    return path_buffer.str();

}

const EntityPath CiscoImageMib::Ciscoimagetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IMAGE-MIB:CISCO-IMAGE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoImageMib::Ciscoimagetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoImageEntry")
    {
        for(auto const & c : ciscoimageentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoImageMib::Ciscoimagetable::Ciscoimageentry>();
        c->parent = this;
        ciscoimageentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoImageMib::Ciscoimagetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoimageentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoImageMib::Ciscoimagetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoImageMib::Ciscoimagetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoImageMib::Ciscoimagetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoImageEntry")
        return true;
    return false;
}

CiscoImageMib::Ciscoimagetable::Ciscoimageentry::Ciscoimageentry()
    :
    ciscoimageindex{YType::int32, "ciscoImageIndex"},
    ciscoimagestring{YType::str, "ciscoImageString"}
{
    yang_name = "ciscoImageEntry"; yang_parent_name = "ciscoImageTable";
}

CiscoImageMib::Ciscoimagetable::Ciscoimageentry::~Ciscoimageentry()
{
}

bool CiscoImageMib::Ciscoimagetable::Ciscoimageentry::has_data() const
{
    return ciscoimageindex.is_set
	|| ciscoimagestring.is_set;
}

bool CiscoImageMib::Ciscoimagetable::Ciscoimageentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoimageindex.yfilter)
	|| ydk::is_set(ciscoimagestring.yfilter);
}

std::string CiscoImageMib::Ciscoimagetable::Ciscoimageentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoImageEntry" <<"[ciscoImageIndex='" <<ciscoimageindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoImageMib::Ciscoimagetable::Ciscoimageentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IMAGE-MIB:CISCO-IMAGE-MIB/ciscoImageTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoimageindex.is_set || is_set(ciscoimageindex.yfilter)) leaf_name_data.push_back(ciscoimageindex.get_name_leafdata());
    if (ciscoimagestring.is_set || is_set(ciscoimagestring.yfilter)) leaf_name_data.push_back(ciscoimagestring.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoImageMib::Ciscoimagetable::Ciscoimageentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoImageMib::Ciscoimagetable::Ciscoimageentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoImageMib::Ciscoimagetable::Ciscoimageentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoImageIndex")
    {
        ciscoimageindex = value;
        ciscoimageindex.value_namespace = name_space;
        ciscoimageindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoImageString")
    {
        ciscoimagestring = value;
        ciscoimagestring.value_namespace = name_space;
        ciscoimagestring.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoImageMib::Ciscoimagetable::Ciscoimageentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoImageIndex")
    {
        ciscoimageindex.yfilter = yfilter;
    }
    if(value_path == "ciscoImageString")
    {
        ciscoimagestring.yfilter = yfilter;
    }
}

bool CiscoImageMib::Ciscoimagetable::Ciscoimageentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoImageIndex" || name == "ciscoImageString")
        return true;
    return false;
}


}
}
