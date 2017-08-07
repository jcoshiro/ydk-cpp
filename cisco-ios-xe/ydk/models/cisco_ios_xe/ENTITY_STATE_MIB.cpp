
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ENTITY_STATE_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace ENTITY_STATE_MIB {

EntityStateMib::EntityStateMib()
    :
    entstatetable(std::make_shared<EntityStateMib::Entstatetable>())
{
    entstatetable->parent = this;

    yang_name = "ENTITY-STATE-MIB"; yang_parent_name = "ENTITY-STATE-MIB";
}

EntityStateMib::~EntityStateMib()
{
}

bool EntityStateMib::has_data() const
{
    return (entstatetable !=  nullptr && entstatetable->has_data());
}

bool EntityStateMib::has_operation() const
{
    return is_set(yfilter)
	|| (entstatetable !=  nullptr && entstatetable->has_operation());
}

std::string EntityStateMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-STATE-MIB:ENTITY-STATE-MIB";

    return path_buffer.str();

}

const EntityPath EntityStateMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> EntityStateMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entStateTable")
    {
        if(entstatetable == nullptr)
        {
            entstatetable = std::make_shared<EntityStateMib::Entstatetable>();
        }
        return entstatetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityStateMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(entstatetable != nullptr)
    {
        children["entStateTable"] = entstatetable;
    }

    return children;
}

void EntityStateMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EntityStateMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> EntityStateMib::clone_ptr() const
{
    return std::make_shared<EntityStateMib>();
}

std::string EntityStateMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string EntityStateMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function EntityStateMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> EntityStateMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool EntityStateMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entStateTable")
        return true;
    return false;
}

EntityStateMib::Entstatetable::Entstatetable()
{
    yang_name = "entStateTable"; yang_parent_name = "ENTITY-STATE-MIB";
}

EntityStateMib::Entstatetable::~Entstatetable()
{
}

bool EntityStateMib::Entstatetable::has_data() const
{
    for (std::size_t index=0; index<entstateentry.size(); index++)
    {
        if(entstateentry[index]->has_data())
            return true;
    }
    return false;
}

bool EntityStateMib::Entstatetable::has_operation() const
{
    for (std::size_t index=0; index<entstateentry.size(); index++)
    {
        if(entstateentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EntityStateMib::Entstatetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entStateTable";

    return path_buffer.str();

}

const EntityPath EntityStateMib::Entstatetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ENTITY-STATE-MIB:ENTITY-STATE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntityStateMib::Entstatetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entStateEntry")
    {
        for(auto const & c : entstateentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EntityStateMib::Entstatetable::Entstateentry>();
        c->parent = this;
        entstateentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityStateMib::Entstatetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : entstateentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EntityStateMib::Entstatetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EntityStateMib::Entstatetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EntityStateMib::Entstatetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entStateEntry")
        return true;
    return false;
}

EntityStateMib::Entstatetable::Entstateentry::Entstateentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    entstateadmin{YType::enumeration, "entStateAdmin"},
    entstatealarm{YType::bits, "entStateAlarm"},
    entstatelastchanged{YType::str, "entStateLastChanged"},
    entstateoper{YType::enumeration, "entStateOper"},
    entstatestandby{YType::enumeration, "entStateStandby"},
    entstateusage{YType::enumeration, "entStateUsage"}
{
    yang_name = "entStateEntry"; yang_parent_name = "entStateTable";
}

EntityStateMib::Entstatetable::Entstateentry::~Entstateentry()
{
}

bool EntityStateMib::Entstatetable::Entstateentry::has_data() const
{
    return entphysicalindex.is_set
	|| entstateadmin.is_set
	|| entstatealarm.is_set
	|| entstatelastchanged.is_set
	|| entstateoper.is_set
	|| entstatestandby.is_set
	|| entstateusage.is_set;
}

bool EntityStateMib::Entstatetable::Entstateentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(entstateadmin.yfilter)
	|| ydk::is_set(entstatealarm.yfilter)
	|| ydk::is_set(entstatelastchanged.yfilter)
	|| ydk::is_set(entstateoper.yfilter)
	|| ydk::is_set(entstatestandby.yfilter)
	|| ydk::is_set(entstateusage.yfilter);
}

std::string EntityStateMib::Entstatetable::Entstateentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entStateEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath EntityStateMib::Entstatetable::Entstateentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ENTITY-STATE-MIB:ENTITY-STATE-MIB/entStateTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (entstateadmin.is_set || is_set(entstateadmin.yfilter)) leaf_name_data.push_back(entstateadmin.get_name_leafdata());
    if (entstatealarm.is_set || is_set(entstatealarm.yfilter)) leaf_name_data.push_back(entstatealarm.get_name_leafdata());
    if (entstatelastchanged.is_set || is_set(entstatelastchanged.yfilter)) leaf_name_data.push_back(entstatelastchanged.get_name_leafdata());
    if (entstateoper.is_set || is_set(entstateoper.yfilter)) leaf_name_data.push_back(entstateoper.get_name_leafdata());
    if (entstatestandby.is_set || is_set(entstatestandby.yfilter)) leaf_name_data.push_back(entstatestandby.get_name_leafdata());
    if (entstateusage.is_set || is_set(entstateusage.yfilter)) leaf_name_data.push_back(entstateusage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntityStateMib::Entstatetable::Entstateentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityStateMib::Entstatetable::Entstateentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EntityStateMib::Entstatetable::Entstateentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entStateAdmin")
    {
        entstateadmin = value;
        entstateadmin.value_namespace = name_space;
        entstateadmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entStateAlarm")
    {
        entstatealarm[value] = true;
    }
    if(value_path == "entStateLastChanged")
    {
        entstatelastchanged = value;
        entstatelastchanged.value_namespace = name_space;
        entstatelastchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entStateOper")
    {
        entstateoper = value;
        entstateoper.value_namespace = name_space;
        entstateoper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entStateStandby")
    {
        entstatestandby = value;
        entstatestandby.value_namespace = name_space;
        entstatestandby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entStateUsage")
    {
        entstateusage = value;
        entstateusage.value_namespace = name_space;
        entstateusage.value_namespace_prefix = name_space_prefix;
    }
}

void EntityStateMib::Entstatetable::Entstateentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "entStateAdmin")
    {
        entstateadmin.yfilter = yfilter;
    }
    if(value_path == "entStateAlarm")
    {
        entstatealarm.yfilter = yfilter;
    }
    if(value_path == "entStateLastChanged")
    {
        entstatelastchanged.yfilter = yfilter;
    }
    if(value_path == "entStateOper")
    {
        entstateoper.yfilter = yfilter;
    }
    if(value_path == "entStateStandby")
    {
        entstatestandby.yfilter = yfilter;
    }
    if(value_path == "entStateUsage")
    {
        entstateusage.yfilter = yfilter;
    }
}

bool EntityStateMib::Entstatetable::Entstateentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "entStateAdmin" || name == "entStateAlarm" || name == "entStateLastChanged" || name == "entStateOper" || name == "entStateStandby" || name == "entStateUsage")
        return true;
    return false;
}


}
}
