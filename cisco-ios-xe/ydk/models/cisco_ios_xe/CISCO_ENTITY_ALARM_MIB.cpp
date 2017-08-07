
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ENTITY_ALARM_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_ENTITY_ALARM_MIB {

CiscoEntityAlarmMib::CiscoEntityAlarmMib()
    :
    cealarmdescrmaptable(std::make_shared<CiscoEntityAlarmMib::Cealarmdescrmaptable>())
	,cealarmdescrtable(std::make_shared<CiscoEntityAlarmMib::Cealarmdescrtable>())
	,cealarmfiltering(std::make_shared<CiscoEntityAlarmMib::Cealarmfiltering>())
	,cealarmfilterprofiletable(std::make_shared<CiscoEntityAlarmMib::Cealarmfilterprofiletable>())
	,cealarmhistory(std::make_shared<CiscoEntityAlarmMib::Cealarmhistory>())
	,cealarmhisttable(std::make_shared<CiscoEntityAlarmMib::Cealarmhisttable>())
	,cealarmmonitoring(std::make_shared<CiscoEntityAlarmMib::Cealarmmonitoring>())
	,cealarmtable(std::make_shared<CiscoEntityAlarmMib::Cealarmtable>())
{
    cealarmdescrmaptable->parent = this;

    cealarmdescrtable->parent = this;

    cealarmfiltering->parent = this;

    cealarmfilterprofiletable->parent = this;

    cealarmhistory->parent = this;

    cealarmhisttable->parent = this;

    cealarmmonitoring->parent = this;

    cealarmtable->parent = this;

    yang_name = "CISCO-ENTITY-ALARM-MIB"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB";
}

CiscoEntityAlarmMib::~CiscoEntityAlarmMib()
{
}

bool CiscoEntityAlarmMib::has_data() const
{
    return (cealarmdescrmaptable !=  nullptr && cealarmdescrmaptable->has_data())
	|| (cealarmdescrtable !=  nullptr && cealarmdescrtable->has_data())
	|| (cealarmfiltering !=  nullptr && cealarmfiltering->has_data())
	|| (cealarmfilterprofiletable !=  nullptr && cealarmfilterprofiletable->has_data())
	|| (cealarmhistory !=  nullptr && cealarmhistory->has_data())
	|| (cealarmhisttable !=  nullptr && cealarmhisttable->has_data())
	|| (cealarmmonitoring !=  nullptr && cealarmmonitoring->has_data())
	|| (cealarmtable !=  nullptr && cealarmtable->has_data());
}

bool CiscoEntityAlarmMib::has_operation() const
{
    return is_set(yfilter)
	|| (cealarmdescrmaptable !=  nullptr && cealarmdescrmaptable->has_operation())
	|| (cealarmdescrtable !=  nullptr && cealarmdescrtable->has_operation())
	|| (cealarmfiltering !=  nullptr && cealarmfiltering->has_operation())
	|| (cealarmfilterprofiletable !=  nullptr && cealarmfilterprofiletable->has_operation())
	|| (cealarmhistory !=  nullptr && cealarmhistory->has_operation())
	|| (cealarmhisttable !=  nullptr && cealarmhisttable->has_operation())
	|| (cealarmmonitoring !=  nullptr && cealarmmonitoring->has_operation())
	|| (cealarmtable !=  nullptr && cealarmtable->has_operation());
}

std::string CiscoEntityAlarmMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoEntityAlarmMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceAlarmDescrMapTable")
    {
        if(cealarmdescrmaptable == nullptr)
        {
            cealarmdescrmaptable = std::make_shared<CiscoEntityAlarmMib::Cealarmdescrmaptable>();
        }
        return cealarmdescrmaptable;
    }

    if(child_yang_name == "ceAlarmDescrTable")
    {
        if(cealarmdescrtable == nullptr)
        {
            cealarmdescrtable = std::make_shared<CiscoEntityAlarmMib::Cealarmdescrtable>();
        }
        return cealarmdescrtable;
    }

    if(child_yang_name == "ceAlarmFiltering")
    {
        if(cealarmfiltering == nullptr)
        {
            cealarmfiltering = std::make_shared<CiscoEntityAlarmMib::Cealarmfiltering>();
        }
        return cealarmfiltering;
    }

    if(child_yang_name == "ceAlarmFilterProfileTable")
    {
        if(cealarmfilterprofiletable == nullptr)
        {
            cealarmfilterprofiletable = std::make_shared<CiscoEntityAlarmMib::Cealarmfilterprofiletable>();
        }
        return cealarmfilterprofiletable;
    }

    if(child_yang_name == "ceAlarmHistory")
    {
        if(cealarmhistory == nullptr)
        {
            cealarmhistory = std::make_shared<CiscoEntityAlarmMib::Cealarmhistory>();
        }
        return cealarmhistory;
    }

    if(child_yang_name == "ceAlarmHistTable")
    {
        if(cealarmhisttable == nullptr)
        {
            cealarmhisttable = std::make_shared<CiscoEntityAlarmMib::Cealarmhisttable>();
        }
        return cealarmhisttable;
    }

    if(child_yang_name == "ceAlarmMonitoring")
    {
        if(cealarmmonitoring == nullptr)
        {
            cealarmmonitoring = std::make_shared<CiscoEntityAlarmMib::Cealarmmonitoring>();
        }
        return cealarmmonitoring;
    }

    if(child_yang_name == "ceAlarmTable")
    {
        if(cealarmtable == nullptr)
        {
            cealarmtable = std::make_shared<CiscoEntityAlarmMib::Cealarmtable>();
        }
        return cealarmtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cealarmdescrmaptable != nullptr)
    {
        children["ceAlarmDescrMapTable"] = cealarmdescrmaptable;
    }

    if(cealarmdescrtable != nullptr)
    {
        children["ceAlarmDescrTable"] = cealarmdescrtable;
    }

    if(cealarmfiltering != nullptr)
    {
        children["ceAlarmFiltering"] = cealarmfiltering;
    }

    if(cealarmfilterprofiletable != nullptr)
    {
        children["ceAlarmFilterProfileTable"] = cealarmfilterprofiletable;
    }

    if(cealarmhistory != nullptr)
    {
        children["ceAlarmHistory"] = cealarmhistory;
    }

    if(cealarmhisttable != nullptr)
    {
        children["ceAlarmHistTable"] = cealarmhisttable;
    }

    if(cealarmmonitoring != nullptr)
    {
        children["ceAlarmMonitoring"] = cealarmmonitoring;
    }

    if(cealarmtable != nullptr)
    {
        children["ceAlarmTable"] = cealarmtable;
    }

    return children;
}

void CiscoEntityAlarmMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityAlarmMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoEntityAlarmMib::clone_ptr() const
{
    return std::make_shared<CiscoEntityAlarmMib>();
}

std::string CiscoEntityAlarmMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoEntityAlarmMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoEntityAlarmMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoEntityAlarmMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoEntityAlarmMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmDescrMapTable" || name == "ceAlarmDescrTable" || name == "ceAlarmFiltering" || name == "ceAlarmFilterProfileTable" || name == "ceAlarmHistory" || name == "ceAlarmHistTable" || name == "ceAlarmMonitoring" || name == "ceAlarmTable")
        return true;
    return false;
}

CiscoEntityAlarmMib::Cealarmmonitoring::Cealarmmonitoring()
    :
    cealarmcriticalcount{YType::uint32, "ceAlarmCriticalCount"},
    cealarmcutoff{YType::boolean, "ceAlarmCutOff"},
    cealarmmajorcount{YType::uint32, "ceAlarmMajorCount"},
    cealarmminorcount{YType::uint32, "ceAlarmMinorCount"}
{
    yang_name = "ceAlarmMonitoring"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB";
}

CiscoEntityAlarmMib::Cealarmmonitoring::~Cealarmmonitoring()
{
}

bool CiscoEntityAlarmMib::Cealarmmonitoring::has_data() const
{
    return cealarmcriticalcount.is_set
	|| cealarmcutoff.is_set
	|| cealarmmajorcount.is_set
	|| cealarmminorcount.is_set;
}

bool CiscoEntityAlarmMib::Cealarmmonitoring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cealarmcriticalcount.yfilter)
	|| ydk::is_set(cealarmcutoff.yfilter)
	|| ydk::is_set(cealarmmajorcount.yfilter)
	|| ydk::is_set(cealarmminorcount.yfilter);
}

std::string CiscoEntityAlarmMib::Cealarmmonitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmMonitoring";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmmonitoring::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmcriticalcount.is_set || is_set(cealarmcriticalcount.yfilter)) leaf_name_data.push_back(cealarmcriticalcount.get_name_leafdata());
    if (cealarmcutoff.is_set || is_set(cealarmcutoff.yfilter)) leaf_name_data.push_back(cealarmcutoff.get_name_leafdata());
    if (cealarmmajorcount.is_set || is_set(cealarmmajorcount.yfilter)) leaf_name_data.push_back(cealarmmajorcount.get_name_leafdata());
    if (cealarmminorcount.is_set || is_set(cealarmminorcount.yfilter)) leaf_name_data.push_back(cealarmminorcount.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmmonitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmmonitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityAlarmMib::Cealarmmonitoring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ceAlarmCriticalCount")
    {
        cealarmcriticalcount = value;
        cealarmcriticalcount.value_namespace = name_space;
        cealarmcriticalcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmCutOff")
    {
        cealarmcutoff = value;
        cealarmcutoff.value_namespace = name_space;
        cealarmcutoff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmMajorCount")
    {
        cealarmmajorcount = value;
        cealarmmajorcount.value_namespace = name_space;
        cealarmmajorcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmMinorCount")
    {
        cealarmminorcount = value;
        cealarmminorcount.value_namespace = name_space;
        cealarmminorcount.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEntityAlarmMib::Cealarmmonitoring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ceAlarmCriticalCount")
    {
        cealarmcriticalcount.yfilter = yfilter;
    }
    if(value_path == "ceAlarmCutOff")
    {
        cealarmcutoff.yfilter = yfilter;
    }
    if(value_path == "ceAlarmMajorCount")
    {
        cealarmmajorcount.yfilter = yfilter;
    }
    if(value_path == "ceAlarmMinorCount")
    {
        cealarmminorcount.yfilter = yfilter;
    }
}

bool CiscoEntityAlarmMib::Cealarmmonitoring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmCriticalCount" || name == "ceAlarmCutOff" || name == "ceAlarmMajorCount" || name == "ceAlarmMinorCount")
        return true;
    return false;
}

CiscoEntityAlarmMib::Cealarmhistory::Cealarmhistory()
    :
    cealarmhistlastindex{YType::uint32, "ceAlarmHistLastIndex"},
    cealarmhisttablesize{YType::int32, "ceAlarmHistTableSize"}
{
    yang_name = "ceAlarmHistory"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB";
}

CiscoEntityAlarmMib::Cealarmhistory::~Cealarmhistory()
{
}

bool CiscoEntityAlarmMib::Cealarmhistory::has_data() const
{
    return cealarmhistlastindex.is_set
	|| cealarmhisttablesize.is_set;
}

bool CiscoEntityAlarmMib::Cealarmhistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cealarmhistlastindex.yfilter)
	|| ydk::is_set(cealarmhisttablesize.yfilter);
}

std::string CiscoEntityAlarmMib::Cealarmhistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmHistory";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmhistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmhistlastindex.is_set || is_set(cealarmhistlastindex.yfilter)) leaf_name_data.push_back(cealarmhistlastindex.get_name_leafdata());
    if (cealarmhisttablesize.is_set || is_set(cealarmhisttablesize.yfilter)) leaf_name_data.push_back(cealarmhisttablesize.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmhistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmhistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityAlarmMib::Cealarmhistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ceAlarmHistLastIndex")
    {
        cealarmhistlastindex = value;
        cealarmhistlastindex.value_namespace = name_space;
        cealarmhistlastindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmHistTableSize")
    {
        cealarmhisttablesize = value;
        cealarmhisttablesize.value_namespace = name_space;
        cealarmhisttablesize.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEntityAlarmMib::Cealarmhistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ceAlarmHistLastIndex")
    {
        cealarmhistlastindex.yfilter = yfilter;
    }
    if(value_path == "ceAlarmHistTableSize")
    {
        cealarmhisttablesize.yfilter = yfilter;
    }
}

bool CiscoEntityAlarmMib::Cealarmhistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmHistLastIndex" || name == "ceAlarmHistTableSize")
        return true;
    return false;
}

CiscoEntityAlarmMib::Cealarmfiltering::Cealarmfiltering()
    :
    cealarmfilterprofileindexnext{YType::uint32, "ceAlarmFilterProfileIndexNext"},
    cealarmnotifiesenable{YType::int32, "ceAlarmNotifiesEnable"},
    cealarmsyslogenable{YType::int32, "ceAlarmSyslogEnable"}
{
    yang_name = "ceAlarmFiltering"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB";
}

CiscoEntityAlarmMib::Cealarmfiltering::~Cealarmfiltering()
{
}

bool CiscoEntityAlarmMib::Cealarmfiltering::has_data() const
{
    return cealarmfilterprofileindexnext.is_set
	|| cealarmnotifiesenable.is_set
	|| cealarmsyslogenable.is_set;
}

bool CiscoEntityAlarmMib::Cealarmfiltering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cealarmfilterprofileindexnext.yfilter)
	|| ydk::is_set(cealarmnotifiesenable.yfilter)
	|| ydk::is_set(cealarmsyslogenable.yfilter);
}

std::string CiscoEntityAlarmMib::Cealarmfiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmFiltering";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmfiltering::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmfilterprofileindexnext.is_set || is_set(cealarmfilterprofileindexnext.yfilter)) leaf_name_data.push_back(cealarmfilterprofileindexnext.get_name_leafdata());
    if (cealarmnotifiesenable.is_set || is_set(cealarmnotifiesenable.yfilter)) leaf_name_data.push_back(cealarmnotifiesenable.get_name_leafdata());
    if (cealarmsyslogenable.is_set || is_set(cealarmsyslogenable.yfilter)) leaf_name_data.push_back(cealarmsyslogenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmfiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmfiltering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityAlarmMib::Cealarmfiltering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ceAlarmFilterProfileIndexNext")
    {
        cealarmfilterprofileindexnext = value;
        cealarmfilterprofileindexnext.value_namespace = name_space;
        cealarmfilterprofileindexnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmNotifiesEnable")
    {
        cealarmnotifiesenable = value;
        cealarmnotifiesenable.value_namespace = name_space;
        cealarmnotifiesenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmSyslogEnable")
    {
        cealarmsyslogenable = value;
        cealarmsyslogenable.value_namespace = name_space;
        cealarmsyslogenable.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEntityAlarmMib::Cealarmfiltering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ceAlarmFilterProfileIndexNext")
    {
        cealarmfilterprofileindexnext.yfilter = yfilter;
    }
    if(value_path == "ceAlarmNotifiesEnable")
    {
        cealarmnotifiesenable.yfilter = yfilter;
    }
    if(value_path == "ceAlarmSyslogEnable")
    {
        cealarmsyslogenable.yfilter = yfilter;
    }
}

bool CiscoEntityAlarmMib::Cealarmfiltering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmFilterProfileIndexNext" || name == "ceAlarmNotifiesEnable" || name == "ceAlarmSyslogEnable")
        return true;
    return false;
}

CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmaptable()
{
    yang_name = "ceAlarmDescrMapTable"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB";
}

CiscoEntityAlarmMib::Cealarmdescrmaptable::~Cealarmdescrmaptable()
{
}

bool CiscoEntityAlarmMib::Cealarmdescrmaptable::has_data() const
{
    for (std::size_t index=0; index<cealarmdescrmapentry.size(); index++)
    {
        if(cealarmdescrmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityAlarmMib::Cealarmdescrmaptable::has_operation() const
{
    for (std::size_t index=0; index<cealarmdescrmapentry.size(); index++)
    {
        if(cealarmdescrmapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEntityAlarmMib::Cealarmdescrmaptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmDescrMapTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmdescrmaptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmdescrmaptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceAlarmDescrMapEntry")
    {
        for(auto const & c : cealarmdescrmapentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry>();
        c->parent = this;
        cealarmdescrmapentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmdescrmaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cealarmdescrmapentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityAlarmMib::Cealarmdescrmaptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityAlarmMib::Cealarmdescrmaptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntityAlarmMib::Cealarmdescrmaptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmDescrMapEntry")
        return true;
    return false;
}

CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry::Cealarmdescrmapentry()
    :
    cealarmdescrindex{YType::uint32, "ceAlarmDescrIndex"},
    cealarmdescrvendortype{YType::str, "ceAlarmDescrVendorType"}
{
    yang_name = "ceAlarmDescrMapEntry"; yang_parent_name = "ceAlarmDescrMapTable";
}

CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry::~Cealarmdescrmapentry()
{
}

bool CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry::has_data() const
{
    return cealarmdescrindex.is_set
	|| cealarmdescrvendortype.is_set;
}

bool CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cealarmdescrindex.yfilter)
	|| ydk::is_set(cealarmdescrvendortype.yfilter);
}

std::string CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmDescrMapEntry" <<"[ceAlarmDescrIndex='" <<cealarmdescrindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/ceAlarmDescrMapTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmdescrindex.is_set || is_set(cealarmdescrindex.yfilter)) leaf_name_data.push_back(cealarmdescrindex.get_name_leafdata());
    if (cealarmdescrvendortype.is_set || is_set(cealarmdescrvendortype.yfilter)) leaf_name_data.push_back(cealarmdescrvendortype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ceAlarmDescrIndex")
    {
        cealarmdescrindex = value;
        cealarmdescrindex.value_namespace = name_space;
        cealarmdescrindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmDescrVendorType")
    {
        cealarmdescrvendortype = value;
        cealarmdescrvendortype.value_namespace = name_space;
        cealarmdescrvendortype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ceAlarmDescrIndex")
    {
        cealarmdescrindex.yfilter = yfilter;
    }
    if(value_path == "ceAlarmDescrVendorType")
    {
        cealarmdescrvendortype.yfilter = yfilter;
    }
}

bool CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmDescrIndex" || name == "ceAlarmDescrVendorType")
        return true;
    return false;
}

CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrtable()
{
    yang_name = "ceAlarmDescrTable"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB";
}

CiscoEntityAlarmMib::Cealarmdescrtable::~Cealarmdescrtable()
{
}

bool CiscoEntityAlarmMib::Cealarmdescrtable::has_data() const
{
    for (std::size_t index=0; index<cealarmdescrentry.size(); index++)
    {
        if(cealarmdescrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityAlarmMib::Cealarmdescrtable::has_operation() const
{
    for (std::size_t index=0; index<cealarmdescrentry.size(); index++)
    {
        if(cealarmdescrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEntityAlarmMib::Cealarmdescrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmDescrTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmdescrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmdescrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceAlarmDescrEntry")
    {
        for(auto const & c : cealarmdescrentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry>();
        c->parent = this;
        cealarmdescrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmdescrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cealarmdescrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityAlarmMib::Cealarmdescrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityAlarmMib::Cealarmdescrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntityAlarmMib::Cealarmdescrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmDescrEntry")
        return true;
    return false;
}

CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry::Cealarmdescrentry()
    :
    cealarmdescrindex{YType::str, "ceAlarmDescrIndex"},
    cealarmdescralarmtype{YType::int32, "ceAlarmDescrAlarmType"},
    cealarmdescrseverity{YType::int32, "ceAlarmDescrSeverity"},
    cealarmdescrtext{YType::str, "ceAlarmDescrText"}
{
    yang_name = "ceAlarmDescrEntry"; yang_parent_name = "ceAlarmDescrTable";
}

CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry::~Cealarmdescrentry()
{
}

bool CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry::has_data() const
{
    return cealarmdescrindex.is_set
	|| cealarmdescralarmtype.is_set
	|| cealarmdescrseverity.is_set
	|| cealarmdescrtext.is_set;
}

bool CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cealarmdescrindex.yfilter)
	|| ydk::is_set(cealarmdescralarmtype.yfilter)
	|| ydk::is_set(cealarmdescrseverity.yfilter)
	|| ydk::is_set(cealarmdescrtext.yfilter);
}

std::string CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmDescrEntry" <<"[ceAlarmDescrIndex='" <<cealarmdescrindex <<"']" <<"[ceAlarmDescrAlarmType='" <<cealarmdescralarmtype <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/ceAlarmDescrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmdescrindex.is_set || is_set(cealarmdescrindex.yfilter)) leaf_name_data.push_back(cealarmdescrindex.get_name_leafdata());
    if (cealarmdescralarmtype.is_set || is_set(cealarmdescralarmtype.yfilter)) leaf_name_data.push_back(cealarmdescralarmtype.get_name_leafdata());
    if (cealarmdescrseverity.is_set || is_set(cealarmdescrseverity.yfilter)) leaf_name_data.push_back(cealarmdescrseverity.get_name_leafdata());
    if (cealarmdescrtext.is_set || is_set(cealarmdescrtext.yfilter)) leaf_name_data.push_back(cealarmdescrtext.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ceAlarmDescrIndex")
    {
        cealarmdescrindex = value;
        cealarmdescrindex.value_namespace = name_space;
        cealarmdescrindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmDescrAlarmType")
    {
        cealarmdescralarmtype = value;
        cealarmdescralarmtype.value_namespace = name_space;
        cealarmdescralarmtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmDescrSeverity")
    {
        cealarmdescrseverity = value;
        cealarmdescrseverity.value_namespace = name_space;
        cealarmdescrseverity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmDescrText")
    {
        cealarmdescrtext = value;
        cealarmdescrtext.value_namespace = name_space;
        cealarmdescrtext.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ceAlarmDescrIndex")
    {
        cealarmdescrindex.yfilter = yfilter;
    }
    if(value_path == "ceAlarmDescrAlarmType")
    {
        cealarmdescralarmtype.yfilter = yfilter;
    }
    if(value_path == "ceAlarmDescrSeverity")
    {
        cealarmdescrseverity.yfilter = yfilter;
    }
    if(value_path == "ceAlarmDescrText")
    {
        cealarmdescrtext.yfilter = yfilter;
    }
}

bool CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmDescrIndex" || name == "ceAlarmDescrAlarmType" || name == "ceAlarmDescrSeverity" || name == "ceAlarmDescrText")
        return true;
    return false;
}

CiscoEntityAlarmMib::Cealarmtable::Cealarmtable()
{
    yang_name = "ceAlarmTable"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB";
}

CiscoEntityAlarmMib::Cealarmtable::~Cealarmtable()
{
}

bool CiscoEntityAlarmMib::Cealarmtable::has_data() const
{
    for (std::size_t index=0; index<cealarmentry.size(); index++)
    {
        if(cealarmentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityAlarmMib::Cealarmtable::has_operation() const
{
    for (std::size_t index=0; index<cealarmentry.size(); index++)
    {
        if(cealarmentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEntityAlarmMib::Cealarmtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceAlarmEntry")
    {
        for(auto const & c : cealarmentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityAlarmMib::Cealarmtable::Cealarmentry>();
        c->parent = this;
        cealarmentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cealarmentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityAlarmMib::Cealarmtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityAlarmMib::Cealarmtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntityAlarmMib::Cealarmtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmEntry")
        return true;
    return false;
}

CiscoEntityAlarmMib::Cealarmtable::Cealarmentry::Cealarmentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cealarmfilterprofile{YType::uint32, "ceAlarmFilterProfile"},
    cealarmlist{YType::str, "ceAlarmList"},
    cealarmseverity{YType::int32, "ceAlarmSeverity"}
{
    yang_name = "ceAlarmEntry"; yang_parent_name = "ceAlarmTable";
}

CiscoEntityAlarmMib::Cealarmtable::Cealarmentry::~Cealarmentry()
{
}

bool CiscoEntityAlarmMib::Cealarmtable::Cealarmentry::has_data() const
{
    return entphysicalindex.is_set
	|| cealarmfilterprofile.is_set
	|| cealarmlist.is_set
	|| cealarmseverity.is_set;
}

bool CiscoEntityAlarmMib::Cealarmtable::Cealarmentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cealarmfilterprofile.yfilter)
	|| ydk::is_set(cealarmlist.yfilter)
	|| ydk::is_set(cealarmseverity.yfilter);
}

std::string CiscoEntityAlarmMib::Cealarmtable::Cealarmentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmtable::Cealarmentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/ceAlarmTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cealarmfilterprofile.is_set || is_set(cealarmfilterprofile.yfilter)) leaf_name_data.push_back(cealarmfilterprofile.get_name_leafdata());
    if (cealarmlist.is_set || is_set(cealarmlist.yfilter)) leaf_name_data.push_back(cealarmlist.get_name_leafdata());
    if (cealarmseverity.is_set || is_set(cealarmseverity.yfilter)) leaf_name_data.push_back(cealarmseverity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmtable::Cealarmentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmtable::Cealarmentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityAlarmMib::Cealarmtable::Cealarmentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmFilterProfile")
    {
        cealarmfilterprofile = value;
        cealarmfilterprofile.value_namespace = name_space;
        cealarmfilterprofile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmList")
    {
        cealarmlist = value;
        cealarmlist.value_namespace = name_space;
        cealarmlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmSeverity")
    {
        cealarmseverity = value;
        cealarmseverity.value_namespace = name_space;
        cealarmseverity.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEntityAlarmMib::Cealarmtable::Cealarmentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "ceAlarmFilterProfile")
    {
        cealarmfilterprofile.yfilter = yfilter;
    }
    if(value_path == "ceAlarmList")
    {
        cealarmlist.yfilter = yfilter;
    }
    if(value_path == "ceAlarmSeverity")
    {
        cealarmseverity.yfilter = yfilter;
    }
}

bool CiscoEntityAlarmMib::Cealarmtable::Cealarmentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "ceAlarmFilterProfile" || name == "ceAlarmList" || name == "ceAlarmSeverity")
        return true;
    return false;
}

CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhisttable()
{
    yang_name = "ceAlarmHistTable"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB";
}

CiscoEntityAlarmMib::Cealarmhisttable::~Cealarmhisttable()
{
}

bool CiscoEntityAlarmMib::Cealarmhisttable::has_data() const
{
    for (std::size_t index=0; index<cealarmhistentry.size(); index++)
    {
        if(cealarmhistentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityAlarmMib::Cealarmhisttable::has_operation() const
{
    for (std::size_t index=0; index<cealarmhistentry.size(); index++)
    {
        if(cealarmhistentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEntityAlarmMib::Cealarmhisttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmHistTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmhisttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmhisttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceAlarmHistEntry")
    {
        for(auto const & c : cealarmhistentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry>();
        c->parent = this;
        cealarmhistentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmhisttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cealarmhistentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityAlarmMib::Cealarmhisttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityAlarmMib::Cealarmhisttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntityAlarmMib::Cealarmhisttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmHistEntry")
        return true;
    return false;
}

CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::Cealarmhistentry()
    :
    cealarmhistindex{YType::uint32, "ceAlarmHistIndex"},
    cealarmhistalarmtype{YType::int32, "ceAlarmHistAlarmType"},
    cealarmhistentphysicalindex{YType::int32, "ceAlarmHistEntPhysicalIndex"},
    cealarmhistseverity{YType::enumeration, "ceAlarmHistSeverity"},
    cealarmhisttimestamp{YType::uint32, "ceAlarmHistTimeStamp"},
    cealarmhisttype{YType::enumeration, "ceAlarmHistType"}
{
    yang_name = "ceAlarmHistEntry"; yang_parent_name = "ceAlarmHistTable";
}

CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::~Cealarmhistentry()
{
}

bool CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::has_data() const
{
    return cealarmhistindex.is_set
	|| cealarmhistalarmtype.is_set
	|| cealarmhistentphysicalindex.is_set
	|| cealarmhistseverity.is_set
	|| cealarmhisttimestamp.is_set
	|| cealarmhisttype.is_set;
}

bool CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cealarmhistindex.yfilter)
	|| ydk::is_set(cealarmhistalarmtype.yfilter)
	|| ydk::is_set(cealarmhistentphysicalindex.yfilter)
	|| ydk::is_set(cealarmhistseverity.yfilter)
	|| ydk::is_set(cealarmhisttimestamp.yfilter)
	|| ydk::is_set(cealarmhisttype.yfilter);
}

std::string CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmHistEntry" <<"[ceAlarmHistIndex='" <<cealarmhistindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/ceAlarmHistTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmhistindex.is_set || is_set(cealarmhistindex.yfilter)) leaf_name_data.push_back(cealarmhistindex.get_name_leafdata());
    if (cealarmhistalarmtype.is_set || is_set(cealarmhistalarmtype.yfilter)) leaf_name_data.push_back(cealarmhistalarmtype.get_name_leafdata());
    if (cealarmhistentphysicalindex.is_set || is_set(cealarmhistentphysicalindex.yfilter)) leaf_name_data.push_back(cealarmhistentphysicalindex.get_name_leafdata());
    if (cealarmhistseverity.is_set || is_set(cealarmhistseverity.yfilter)) leaf_name_data.push_back(cealarmhistseverity.get_name_leafdata());
    if (cealarmhisttimestamp.is_set || is_set(cealarmhisttimestamp.yfilter)) leaf_name_data.push_back(cealarmhisttimestamp.get_name_leafdata());
    if (cealarmhisttype.is_set || is_set(cealarmhisttype.yfilter)) leaf_name_data.push_back(cealarmhisttype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ceAlarmHistIndex")
    {
        cealarmhistindex = value;
        cealarmhistindex.value_namespace = name_space;
        cealarmhistindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmHistAlarmType")
    {
        cealarmhistalarmtype = value;
        cealarmhistalarmtype.value_namespace = name_space;
        cealarmhistalarmtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmHistEntPhysicalIndex")
    {
        cealarmhistentphysicalindex = value;
        cealarmhistentphysicalindex.value_namespace = name_space;
        cealarmhistentphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmHistSeverity")
    {
        cealarmhistseverity = value;
        cealarmhistseverity.value_namespace = name_space;
        cealarmhistseverity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmHistTimeStamp")
    {
        cealarmhisttimestamp = value;
        cealarmhisttimestamp.value_namespace = name_space;
        cealarmhisttimestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmHistType")
    {
        cealarmhisttype = value;
        cealarmhisttype.value_namespace = name_space;
        cealarmhisttype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ceAlarmHistIndex")
    {
        cealarmhistindex.yfilter = yfilter;
    }
    if(value_path == "ceAlarmHistAlarmType")
    {
        cealarmhistalarmtype.yfilter = yfilter;
    }
    if(value_path == "ceAlarmHistEntPhysicalIndex")
    {
        cealarmhistentphysicalindex.yfilter = yfilter;
    }
    if(value_path == "ceAlarmHistSeverity")
    {
        cealarmhistseverity.yfilter = yfilter;
    }
    if(value_path == "ceAlarmHistTimeStamp")
    {
        cealarmhisttimestamp.yfilter = yfilter;
    }
    if(value_path == "ceAlarmHistType")
    {
        cealarmhisttype.yfilter = yfilter;
    }
}

bool CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmHistIndex" || name == "ceAlarmHistAlarmType" || name == "ceAlarmHistEntPhysicalIndex" || name == "ceAlarmHistSeverity" || name == "ceAlarmHistTimeStamp" || name == "ceAlarmHistType")
        return true;
    return false;
}

CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofiletable()
{
    yang_name = "ceAlarmFilterProfileTable"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB";
}

CiscoEntityAlarmMib::Cealarmfilterprofiletable::~Cealarmfilterprofiletable()
{
}

bool CiscoEntityAlarmMib::Cealarmfilterprofiletable::has_data() const
{
    for (std::size_t index=0; index<cealarmfilterprofileentry.size(); index++)
    {
        if(cealarmfilterprofileentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityAlarmMib::Cealarmfilterprofiletable::has_operation() const
{
    for (std::size_t index=0; index<cealarmfilterprofileentry.size(); index++)
    {
        if(cealarmfilterprofileentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEntityAlarmMib::Cealarmfilterprofiletable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmFilterProfileTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmfilterprofiletable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmfilterprofiletable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceAlarmFilterProfileEntry")
    {
        for(auto const & c : cealarmfilterprofileentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry>();
        c->parent = this;
        cealarmfilterprofileentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmfilterprofiletable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cealarmfilterprofileentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityAlarmMib::Cealarmfilterprofiletable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityAlarmMib::Cealarmfilterprofiletable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntityAlarmMib::Cealarmfilterprofiletable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmFilterProfileEntry")
        return true;
    return false;
}

CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry::Cealarmfilterprofileentry()
    :
    cealarmfilterindex{YType::uint32, "ceAlarmFilterIndex"},
    cealarmfilteralarmsenabled{YType::str, "ceAlarmFilterAlarmsEnabled"},
    cealarmfilteralias{YType::str, "ceAlarmFilterAlias"},
    cealarmfilternotifiesenabled{YType::str, "ceAlarmFilterNotifiesEnabled"},
    cealarmfilterstatus{YType::enumeration, "ceAlarmFilterStatus"},
    cealarmfiltersyslogenabled{YType::str, "ceAlarmFilterSyslogEnabled"}
{
    yang_name = "ceAlarmFilterProfileEntry"; yang_parent_name = "ceAlarmFilterProfileTable";
}

CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry::~Cealarmfilterprofileentry()
{
}

bool CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry::has_data() const
{
    return cealarmfilterindex.is_set
	|| cealarmfilteralarmsenabled.is_set
	|| cealarmfilteralias.is_set
	|| cealarmfilternotifiesenabled.is_set
	|| cealarmfilterstatus.is_set
	|| cealarmfiltersyslogenabled.is_set;
}

bool CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cealarmfilterindex.yfilter)
	|| ydk::is_set(cealarmfilteralarmsenabled.yfilter)
	|| ydk::is_set(cealarmfilteralias.yfilter)
	|| ydk::is_set(cealarmfilternotifiesenabled.yfilter)
	|| ydk::is_set(cealarmfilterstatus.yfilter)
	|| ydk::is_set(cealarmfiltersyslogenabled.yfilter);
}

std::string CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmFilterProfileEntry" <<"[ceAlarmFilterIndex='" <<cealarmfilterindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/ceAlarmFilterProfileTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmfilterindex.is_set || is_set(cealarmfilterindex.yfilter)) leaf_name_data.push_back(cealarmfilterindex.get_name_leafdata());
    if (cealarmfilteralarmsenabled.is_set || is_set(cealarmfilteralarmsenabled.yfilter)) leaf_name_data.push_back(cealarmfilteralarmsenabled.get_name_leafdata());
    if (cealarmfilteralias.is_set || is_set(cealarmfilteralias.yfilter)) leaf_name_data.push_back(cealarmfilteralias.get_name_leafdata());
    if (cealarmfilternotifiesenabled.is_set || is_set(cealarmfilternotifiesenabled.yfilter)) leaf_name_data.push_back(cealarmfilternotifiesenabled.get_name_leafdata());
    if (cealarmfilterstatus.is_set || is_set(cealarmfilterstatus.yfilter)) leaf_name_data.push_back(cealarmfilterstatus.get_name_leafdata());
    if (cealarmfiltersyslogenabled.is_set || is_set(cealarmfiltersyslogenabled.yfilter)) leaf_name_data.push_back(cealarmfiltersyslogenabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ceAlarmFilterIndex")
    {
        cealarmfilterindex = value;
        cealarmfilterindex.value_namespace = name_space;
        cealarmfilterindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmFilterAlarmsEnabled")
    {
        cealarmfilteralarmsenabled = value;
        cealarmfilteralarmsenabled.value_namespace = name_space;
        cealarmfilteralarmsenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmFilterAlias")
    {
        cealarmfilteralias = value;
        cealarmfilteralias.value_namespace = name_space;
        cealarmfilteralias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmFilterNotifiesEnabled")
    {
        cealarmfilternotifiesenabled = value;
        cealarmfilternotifiesenabled.value_namespace = name_space;
        cealarmfilternotifiesenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmFilterStatus")
    {
        cealarmfilterstatus = value;
        cealarmfilterstatus.value_namespace = name_space;
        cealarmfilterstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmFilterSyslogEnabled")
    {
        cealarmfiltersyslogenabled = value;
        cealarmfiltersyslogenabled.value_namespace = name_space;
        cealarmfiltersyslogenabled.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ceAlarmFilterIndex")
    {
        cealarmfilterindex.yfilter = yfilter;
    }
    if(value_path == "ceAlarmFilterAlarmsEnabled")
    {
        cealarmfilteralarmsenabled.yfilter = yfilter;
    }
    if(value_path == "ceAlarmFilterAlias")
    {
        cealarmfilteralias.yfilter = yfilter;
    }
    if(value_path == "ceAlarmFilterNotifiesEnabled")
    {
        cealarmfilternotifiesenabled.yfilter = yfilter;
    }
    if(value_path == "ceAlarmFilterStatus")
    {
        cealarmfilterstatus.yfilter = yfilter;
    }
    if(value_path == "ceAlarmFilterSyslogEnabled")
    {
        cealarmfiltersyslogenabled.yfilter = yfilter;
    }
}

bool CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmFilterIndex" || name == "ceAlarmFilterAlarmsEnabled" || name == "ceAlarmFilterAlias" || name == "ceAlarmFilterNotifiesEnabled" || name == "ceAlarmFilterStatus" || name == "ceAlarmFilterSyslogEnabled")
        return true;
    return false;
}

const Enum::YLeaf Alarmseverity::critical {1, "critical"};
const Enum::YLeaf Alarmseverity::major {2, "major"};
const Enum::YLeaf Alarmseverity::minor {3, "minor"};
const Enum::YLeaf Alarmseverity::info {4, "info"};

const Enum::YLeaf CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::Cealarmhisttype::asserted {1, "asserted"};
const Enum::YLeaf CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::Cealarmhisttype::cleared {2, "cleared"};


}
}
