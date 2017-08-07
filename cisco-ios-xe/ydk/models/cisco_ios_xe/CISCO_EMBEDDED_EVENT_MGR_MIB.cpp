
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_EMBEDDED_EVENT_MGR_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_EMBEDDED_EVENT_MGR_MIB {

CiscoEmbeddedEventMgrMib::CiscoEmbeddedEventMgrMib()
    :
    ceemeventmaptable(std::make_shared<CiscoEmbeddedEventMgrMib::Ceemeventmaptable>())
	,ceemhistory(std::make_shared<CiscoEmbeddedEventMgrMib::Ceemhistory>())
	,ceemhistoryeventtable(std::make_shared<CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable>())
	,ceemregisteredpolicytable(std::make_shared<CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable>())
{
    ceemeventmaptable->parent = this;

    ceemhistory->parent = this;

    ceemhistoryeventtable->parent = this;

    ceemregisteredpolicytable->parent = this;

    yang_name = "CISCO-EMBEDDED-EVENT-MGR-MIB"; yang_parent_name = "CISCO-EMBEDDED-EVENT-MGR-MIB";
}

CiscoEmbeddedEventMgrMib::~CiscoEmbeddedEventMgrMib()
{
}

bool CiscoEmbeddedEventMgrMib::has_data() const
{
    return (ceemeventmaptable !=  nullptr && ceemeventmaptable->has_data())
	|| (ceemhistory !=  nullptr && ceemhistory->has_data())
	|| (ceemhistoryeventtable !=  nullptr && ceemhistoryeventtable->has_data())
	|| (ceemregisteredpolicytable !=  nullptr && ceemregisteredpolicytable->has_data());
}

bool CiscoEmbeddedEventMgrMib::has_operation() const
{
    return is_set(yfilter)
	|| (ceemeventmaptable !=  nullptr && ceemeventmaptable->has_operation())
	|| (ceemhistory !=  nullptr && ceemhistory->has_operation())
	|| (ceemhistoryeventtable !=  nullptr && ceemhistoryeventtable->has_operation())
	|| (ceemregisteredpolicytable !=  nullptr && ceemregisteredpolicytable->has_operation());
}

std::string CiscoEmbeddedEventMgrMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-EMBEDDED-EVENT-MGR-MIB:CISCO-EMBEDDED-EVENT-MGR-MIB";

    return path_buffer.str();

}

const EntityPath CiscoEmbeddedEventMgrMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoEmbeddedEventMgrMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceemEventMapTable")
    {
        if(ceemeventmaptable == nullptr)
        {
            ceemeventmaptable = std::make_shared<CiscoEmbeddedEventMgrMib::Ceemeventmaptable>();
        }
        return ceemeventmaptable;
    }

    if(child_yang_name == "ceemHistory")
    {
        if(ceemhistory == nullptr)
        {
            ceemhistory = std::make_shared<CiscoEmbeddedEventMgrMib::Ceemhistory>();
        }
        return ceemhistory;
    }

    if(child_yang_name == "ceemHistoryEventTable")
    {
        if(ceemhistoryeventtable == nullptr)
        {
            ceemhistoryeventtable = std::make_shared<CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable>();
        }
        return ceemhistoryeventtable;
    }

    if(child_yang_name == "ceemRegisteredPolicyTable")
    {
        if(ceemregisteredpolicytable == nullptr)
        {
            ceemregisteredpolicytable = std::make_shared<CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable>();
        }
        return ceemregisteredpolicytable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEmbeddedEventMgrMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ceemeventmaptable != nullptr)
    {
        children["ceemEventMapTable"] = ceemeventmaptable;
    }

    if(ceemhistory != nullptr)
    {
        children["ceemHistory"] = ceemhistory;
    }

    if(ceemhistoryeventtable != nullptr)
    {
        children["ceemHistoryEventTable"] = ceemhistoryeventtable;
    }

    if(ceemregisteredpolicytable != nullptr)
    {
        children["ceemRegisteredPolicyTable"] = ceemregisteredpolicytable;
    }

    return children;
}

void CiscoEmbeddedEventMgrMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEmbeddedEventMgrMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoEmbeddedEventMgrMib::clone_ptr() const
{
    return std::make_shared<CiscoEmbeddedEventMgrMib>();
}

std::string CiscoEmbeddedEventMgrMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoEmbeddedEventMgrMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoEmbeddedEventMgrMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoEmbeddedEventMgrMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoEmbeddedEventMgrMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceemEventMapTable" || name == "ceemHistory" || name == "ceemHistoryEventTable" || name == "ceemRegisteredPolicyTable")
        return true;
    return false;
}

CiscoEmbeddedEventMgrMib::Ceemhistory::Ceemhistory()
    :
    ceemhistorylastevententry{YType::uint32, "ceemHistoryLastEventEntry"},
    ceemhistorymaxevententries{YType::int32, "ceemHistoryMaxEventEntries"}
{
    yang_name = "ceemHistory"; yang_parent_name = "CISCO-EMBEDDED-EVENT-MGR-MIB";
}

CiscoEmbeddedEventMgrMib::Ceemhistory::~Ceemhistory()
{
}

bool CiscoEmbeddedEventMgrMib::Ceemhistory::has_data() const
{
    return ceemhistorylastevententry.is_set
	|| ceemhistorymaxevententries.is_set;
}

bool CiscoEmbeddedEventMgrMib::Ceemhistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceemhistorylastevententry.yfilter)
	|| ydk::is_set(ceemhistorymaxevententries.yfilter);
}

std::string CiscoEmbeddedEventMgrMib::Ceemhistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceemHistory";

    return path_buffer.str();

}

const EntityPath CiscoEmbeddedEventMgrMib::Ceemhistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-EMBEDDED-EVENT-MGR-MIB:CISCO-EMBEDDED-EVENT-MGR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceemhistorylastevententry.is_set || is_set(ceemhistorylastevententry.yfilter)) leaf_name_data.push_back(ceemhistorylastevententry.get_name_leafdata());
    if (ceemhistorymaxevententries.is_set || is_set(ceemhistorymaxevententries.yfilter)) leaf_name_data.push_back(ceemhistorymaxevententries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEmbeddedEventMgrMib::Ceemhistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEmbeddedEventMgrMib::Ceemhistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEmbeddedEventMgrMib::Ceemhistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ceemHistoryLastEventEntry")
    {
        ceemhistorylastevententry = value;
        ceemhistorylastevententry.value_namespace = name_space;
        ceemhistorylastevententry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryMaxEventEntries")
    {
        ceemhistorymaxevententries = value;
        ceemhistorymaxevententries.value_namespace = name_space;
        ceemhistorymaxevententries.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEmbeddedEventMgrMib::Ceemhistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ceemHistoryLastEventEntry")
    {
        ceemhistorylastevententry.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryMaxEventEntries")
    {
        ceemhistorymaxevententries.yfilter = yfilter;
    }
}

bool CiscoEmbeddedEventMgrMib::Ceemhistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceemHistoryLastEventEntry" || name == "ceemHistoryMaxEventEntries")
        return true;
    return false;
}

CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmaptable()
{
    yang_name = "ceemEventMapTable"; yang_parent_name = "CISCO-EMBEDDED-EVENT-MGR-MIB";
}

CiscoEmbeddedEventMgrMib::Ceemeventmaptable::~Ceemeventmaptable()
{
}

bool CiscoEmbeddedEventMgrMib::Ceemeventmaptable::has_data() const
{
    for (std::size_t index=0; index<ceemeventmapentry.size(); index++)
    {
        if(ceemeventmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEmbeddedEventMgrMib::Ceemeventmaptable::has_operation() const
{
    for (std::size_t index=0; index<ceemeventmapentry.size(); index++)
    {
        if(ceemeventmapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEmbeddedEventMgrMib::Ceemeventmaptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceemEventMapTable";

    return path_buffer.str();

}

const EntityPath CiscoEmbeddedEventMgrMib::Ceemeventmaptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-EMBEDDED-EVENT-MGR-MIB:CISCO-EMBEDDED-EVENT-MGR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEmbeddedEventMgrMib::Ceemeventmaptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceemEventMapEntry")
    {
        for(auto const & c : ceemeventmapentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry>();
        c->parent = this;
        ceemeventmapentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEmbeddedEventMgrMib::Ceemeventmaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceemeventmapentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEmbeddedEventMgrMib::Ceemeventmaptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEmbeddedEventMgrMib::Ceemeventmaptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEmbeddedEventMgrMib::Ceemeventmaptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceemEventMapEntry")
        return true;
    return false;
}

CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry::Ceemeventmapentry()
    :
    ceemeventindex{YType::uint32, "ceemEventIndex"},
    ceemeventdescrtext{YType::str, "ceemEventDescrText"},
    ceemeventname{YType::str, "ceemEventName"}
{
    yang_name = "ceemEventMapEntry"; yang_parent_name = "ceemEventMapTable";
}

CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry::~Ceemeventmapentry()
{
}

bool CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry::has_data() const
{
    return ceemeventindex.is_set
	|| ceemeventdescrtext.is_set
	|| ceemeventname.is_set;
}

bool CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceemeventindex.yfilter)
	|| ydk::is_set(ceemeventdescrtext.yfilter)
	|| ydk::is_set(ceemeventname.yfilter);
}

std::string CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceemEventMapEntry" <<"[ceemEventIndex='" <<ceemeventindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-EMBEDDED-EVENT-MGR-MIB:CISCO-EMBEDDED-EVENT-MGR-MIB/ceemEventMapTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceemeventindex.is_set || is_set(ceemeventindex.yfilter)) leaf_name_data.push_back(ceemeventindex.get_name_leafdata());
    if (ceemeventdescrtext.is_set || is_set(ceemeventdescrtext.yfilter)) leaf_name_data.push_back(ceemeventdescrtext.get_name_leafdata());
    if (ceemeventname.is_set || is_set(ceemeventname.yfilter)) leaf_name_data.push_back(ceemeventname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ceemEventIndex")
    {
        ceemeventindex = value;
        ceemeventindex.value_namespace = name_space;
        ceemeventindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemEventDescrText")
    {
        ceemeventdescrtext = value;
        ceemeventdescrtext.value_namespace = name_space;
        ceemeventdescrtext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemEventName")
    {
        ceemeventname = value;
        ceemeventname.value_namespace = name_space;
        ceemeventname.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ceemEventIndex")
    {
        ceemeventindex.yfilter = yfilter;
    }
    if(value_path == "ceemEventDescrText")
    {
        ceemeventdescrtext.yfilter = yfilter;
    }
    if(value_path == "ceemEventName")
    {
        ceemeventname.yfilter = yfilter;
    }
}

bool CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceemEventIndex" || name == "ceemEventDescrText" || name == "ceemEventName")
        return true;
    return false;
}

CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryeventtable()
{
    yang_name = "ceemHistoryEventTable"; yang_parent_name = "CISCO-EMBEDDED-EVENT-MGR-MIB";
}

CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::~Ceemhistoryeventtable()
{
}

bool CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::has_data() const
{
    for (std::size_t index=0; index<ceemhistoryevententry.size(); index++)
    {
        if(ceemhistoryevententry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::has_operation() const
{
    for (std::size_t index=0; index<ceemhistoryevententry.size(); index++)
    {
        if(ceemhistoryevententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceemHistoryEventTable";

    return path_buffer.str();

}

const EntityPath CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-EMBEDDED-EVENT-MGR-MIB:CISCO-EMBEDDED-EVENT-MGR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceemHistoryEventEntry")
    {
        for(auto const & c : ceemhistoryevententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry>();
        c->parent = this;
        ceemhistoryevententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceemhistoryevententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceemHistoryEventEntry")
        return true;
    return false;
}

CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry::Ceemhistoryevententry()
    :
    ceemhistoryeventindex{YType::uint32, "ceemHistoryEventIndex"},
    ceemhistoryeventtype1{YType::uint32, "ceemHistoryEventType1"},
    ceemhistoryeventtype2{YType::uint32, "ceemHistoryEventType2"},
    ceemhistoryeventtype3{YType::uint32, "ceemHistoryEventType3"},
    ceemhistoryeventtype4{YType::uint32, "ceemHistoryEventType4"},
    ceemhistoryeventtype5{YType::uint32, "ceemHistoryEventType5"},
    ceemhistoryeventtype6{YType::uint32, "ceemHistoryEventType6"},
    ceemhistoryeventtype7{YType::uint32, "ceemHistoryEventType7"},
    ceemhistoryeventtype8{YType::uint32, "ceemHistoryEventType8"},
    ceemhistorynotifytype{YType::enumeration, "ceemHistoryNotifyType"},
    ceemhistorypolicyexitstatus{YType::int32, "ceemHistoryPolicyExitStatus"},
    ceemhistorypolicyintdata1{YType::int32, "ceemHistoryPolicyIntData1"},
    ceemhistorypolicyintdata2{YType::int32, "ceemHistoryPolicyIntData2"},
    ceemhistorypolicyname{YType::str, "ceemHistoryPolicyName"},
    ceemhistorypolicypath{YType::str, "ceemHistoryPolicyPath"},
    ceemhistorypolicystrdata{YType::str, "ceemHistoryPolicyStrData"}
{
    yang_name = "ceemHistoryEventEntry"; yang_parent_name = "ceemHistoryEventTable";
}

CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry::~Ceemhistoryevententry()
{
}

bool CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry::has_data() const
{
    return ceemhistoryeventindex.is_set
	|| ceemhistoryeventtype1.is_set
	|| ceemhistoryeventtype2.is_set
	|| ceemhistoryeventtype3.is_set
	|| ceemhistoryeventtype4.is_set
	|| ceemhistoryeventtype5.is_set
	|| ceemhistoryeventtype6.is_set
	|| ceemhistoryeventtype7.is_set
	|| ceemhistoryeventtype8.is_set
	|| ceemhistorynotifytype.is_set
	|| ceemhistorypolicyexitstatus.is_set
	|| ceemhistorypolicyintdata1.is_set
	|| ceemhistorypolicyintdata2.is_set
	|| ceemhistorypolicyname.is_set
	|| ceemhistorypolicypath.is_set
	|| ceemhistorypolicystrdata.is_set;
}

bool CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceemhistoryeventindex.yfilter)
	|| ydk::is_set(ceemhistoryeventtype1.yfilter)
	|| ydk::is_set(ceemhistoryeventtype2.yfilter)
	|| ydk::is_set(ceemhistoryeventtype3.yfilter)
	|| ydk::is_set(ceemhistoryeventtype4.yfilter)
	|| ydk::is_set(ceemhistoryeventtype5.yfilter)
	|| ydk::is_set(ceemhistoryeventtype6.yfilter)
	|| ydk::is_set(ceemhistoryeventtype7.yfilter)
	|| ydk::is_set(ceemhistoryeventtype8.yfilter)
	|| ydk::is_set(ceemhistorynotifytype.yfilter)
	|| ydk::is_set(ceemhistorypolicyexitstatus.yfilter)
	|| ydk::is_set(ceemhistorypolicyintdata1.yfilter)
	|| ydk::is_set(ceemhistorypolicyintdata2.yfilter)
	|| ydk::is_set(ceemhistorypolicyname.yfilter)
	|| ydk::is_set(ceemhistorypolicypath.yfilter)
	|| ydk::is_set(ceemhistorypolicystrdata.yfilter);
}

std::string CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceemHistoryEventEntry" <<"[ceemHistoryEventIndex='" <<ceemhistoryeventindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-EMBEDDED-EVENT-MGR-MIB:CISCO-EMBEDDED-EVENT-MGR-MIB/ceemHistoryEventTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceemhistoryeventindex.is_set || is_set(ceemhistoryeventindex.yfilter)) leaf_name_data.push_back(ceemhistoryeventindex.get_name_leafdata());
    if (ceemhistoryeventtype1.is_set || is_set(ceemhistoryeventtype1.yfilter)) leaf_name_data.push_back(ceemhistoryeventtype1.get_name_leafdata());
    if (ceemhistoryeventtype2.is_set || is_set(ceemhistoryeventtype2.yfilter)) leaf_name_data.push_back(ceemhistoryeventtype2.get_name_leafdata());
    if (ceemhistoryeventtype3.is_set || is_set(ceemhistoryeventtype3.yfilter)) leaf_name_data.push_back(ceemhistoryeventtype3.get_name_leafdata());
    if (ceemhistoryeventtype4.is_set || is_set(ceemhistoryeventtype4.yfilter)) leaf_name_data.push_back(ceemhistoryeventtype4.get_name_leafdata());
    if (ceemhistoryeventtype5.is_set || is_set(ceemhistoryeventtype5.yfilter)) leaf_name_data.push_back(ceemhistoryeventtype5.get_name_leafdata());
    if (ceemhistoryeventtype6.is_set || is_set(ceemhistoryeventtype6.yfilter)) leaf_name_data.push_back(ceemhistoryeventtype6.get_name_leafdata());
    if (ceemhistoryeventtype7.is_set || is_set(ceemhistoryeventtype7.yfilter)) leaf_name_data.push_back(ceemhistoryeventtype7.get_name_leafdata());
    if (ceemhistoryeventtype8.is_set || is_set(ceemhistoryeventtype8.yfilter)) leaf_name_data.push_back(ceemhistoryeventtype8.get_name_leafdata());
    if (ceemhistorynotifytype.is_set || is_set(ceemhistorynotifytype.yfilter)) leaf_name_data.push_back(ceemhistorynotifytype.get_name_leafdata());
    if (ceemhistorypolicyexitstatus.is_set || is_set(ceemhistorypolicyexitstatus.yfilter)) leaf_name_data.push_back(ceemhistorypolicyexitstatus.get_name_leafdata());
    if (ceemhistorypolicyintdata1.is_set || is_set(ceemhistorypolicyintdata1.yfilter)) leaf_name_data.push_back(ceemhistorypolicyintdata1.get_name_leafdata());
    if (ceemhistorypolicyintdata2.is_set || is_set(ceemhistorypolicyintdata2.yfilter)) leaf_name_data.push_back(ceemhistorypolicyintdata2.get_name_leafdata());
    if (ceemhistorypolicyname.is_set || is_set(ceemhistorypolicyname.yfilter)) leaf_name_data.push_back(ceemhistorypolicyname.get_name_leafdata());
    if (ceemhistorypolicypath.is_set || is_set(ceemhistorypolicypath.yfilter)) leaf_name_data.push_back(ceemhistorypolicypath.get_name_leafdata());
    if (ceemhistorypolicystrdata.is_set || is_set(ceemhistorypolicystrdata.yfilter)) leaf_name_data.push_back(ceemhistorypolicystrdata.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ceemHistoryEventIndex")
    {
        ceemhistoryeventindex = value;
        ceemhistoryeventindex.value_namespace = name_space;
        ceemhistoryeventindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryEventType1")
    {
        ceemhistoryeventtype1 = value;
        ceemhistoryeventtype1.value_namespace = name_space;
        ceemhistoryeventtype1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryEventType2")
    {
        ceemhistoryeventtype2 = value;
        ceemhistoryeventtype2.value_namespace = name_space;
        ceemhistoryeventtype2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryEventType3")
    {
        ceemhistoryeventtype3 = value;
        ceemhistoryeventtype3.value_namespace = name_space;
        ceemhistoryeventtype3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryEventType4")
    {
        ceemhistoryeventtype4 = value;
        ceemhistoryeventtype4.value_namespace = name_space;
        ceemhistoryeventtype4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryEventType5")
    {
        ceemhistoryeventtype5 = value;
        ceemhistoryeventtype5.value_namespace = name_space;
        ceemhistoryeventtype5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryEventType6")
    {
        ceemhistoryeventtype6 = value;
        ceemhistoryeventtype6.value_namespace = name_space;
        ceemhistoryeventtype6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryEventType7")
    {
        ceemhistoryeventtype7 = value;
        ceemhistoryeventtype7.value_namespace = name_space;
        ceemhistoryeventtype7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryEventType8")
    {
        ceemhistoryeventtype8 = value;
        ceemhistoryeventtype8.value_namespace = name_space;
        ceemhistoryeventtype8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryNotifyType")
    {
        ceemhistorynotifytype = value;
        ceemhistorynotifytype.value_namespace = name_space;
        ceemhistorynotifytype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryPolicyExitStatus")
    {
        ceemhistorypolicyexitstatus = value;
        ceemhistorypolicyexitstatus.value_namespace = name_space;
        ceemhistorypolicyexitstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryPolicyIntData1")
    {
        ceemhistorypolicyintdata1 = value;
        ceemhistorypolicyintdata1.value_namespace = name_space;
        ceemhistorypolicyintdata1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryPolicyIntData2")
    {
        ceemhistorypolicyintdata2 = value;
        ceemhistorypolicyintdata2.value_namespace = name_space;
        ceemhistorypolicyintdata2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryPolicyName")
    {
        ceemhistorypolicyname = value;
        ceemhistorypolicyname.value_namespace = name_space;
        ceemhistorypolicyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryPolicyPath")
    {
        ceemhistorypolicypath = value;
        ceemhistorypolicypath.value_namespace = name_space;
        ceemhistorypolicypath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryPolicyStrData")
    {
        ceemhistorypolicystrdata = value;
        ceemhistorypolicystrdata.value_namespace = name_space;
        ceemhistorypolicystrdata.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ceemHistoryEventIndex")
    {
        ceemhistoryeventindex.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryEventType1")
    {
        ceemhistoryeventtype1.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryEventType2")
    {
        ceemhistoryeventtype2.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryEventType3")
    {
        ceemhistoryeventtype3.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryEventType4")
    {
        ceemhistoryeventtype4.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryEventType5")
    {
        ceemhistoryeventtype5.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryEventType6")
    {
        ceemhistoryeventtype6.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryEventType7")
    {
        ceemhistoryeventtype7.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryEventType8")
    {
        ceemhistoryeventtype8.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryNotifyType")
    {
        ceemhistorynotifytype.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryPolicyExitStatus")
    {
        ceemhistorypolicyexitstatus.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryPolicyIntData1")
    {
        ceemhistorypolicyintdata1.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryPolicyIntData2")
    {
        ceemhistorypolicyintdata2.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryPolicyName")
    {
        ceemhistorypolicyname.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryPolicyPath")
    {
        ceemhistorypolicypath.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryPolicyStrData")
    {
        ceemhistorypolicystrdata.yfilter = yfilter;
    }
}

bool CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceemHistoryEventIndex" || name == "ceemHistoryEventType1" || name == "ceemHistoryEventType2" || name == "ceemHistoryEventType3" || name == "ceemHistoryEventType4" || name == "ceemHistoryEventType5" || name == "ceemHistoryEventType6" || name == "ceemHistoryEventType7" || name == "ceemHistoryEventType8" || name == "ceemHistoryNotifyType" || name == "ceemHistoryPolicyExitStatus" || name == "ceemHistoryPolicyIntData1" || name == "ceemHistoryPolicyIntData2" || name == "ceemHistoryPolicyName" || name == "ceemHistoryPolicyPath" || name == "ceemHistoryPolicyStrData")
        return true;
    return false;
}

CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicytable()
{
    yang_name = "ceemRegisteredPolicyTable"; yang_parent_name = "CISCO-EMBEDDED-EVENT-MGR-MIB";
}

CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::~Ceemregisteredpolicytable()
{
}

bool CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::has_data() const
{
    for (std::size_t index=0; index<ceemregisteredpolicyentry.size(); index++)
    {
        if(ceemregisteredpolicyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::has_operation() const
{
    for (std::size_t index=0; index<ceemregisteredpolicyentry.size(); index++)
    {
        if(ceemregisteredpolicyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceemRegisteredPolicyTable";

    return path_buffer.str();

}

const EntityPath CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-EMBEDDED-EVENT-MGR-MIB:CISCO-EMBEDDED-EVENT-MGR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceemRegisteredPolicyEntry")
    {
        for(auto const & c : ceemregisteredpolicyentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry>();
        c->parent = this;
        ceemregisteredpolicyentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceemregisteredpolicyentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceemRegisteredPolicyEntry")
        return true;
    return false;
}

CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::Ceemregisteredpolicyentry()
    :
    ceemregisteredpolicyindex{YType::uint32, "ceemRegisteredPolicyIndex"},
    ceemregisteredpolicyenabledtime{YType::str, "ceemRegisteredPolicyEnabledTime"},
    ceemregisteredpolicyeventtype1{YType::uint32, "ceemRegisteredPolicyEventType1"},
    ceemregisteredpolicyeventtype2{YType::uint32, "ceemRegisteredPolicyEventType2"},
    ceemregisteredpolicyeventtype3{YType::uint32, "ceemRegisteredPolicyEventType3"},
    ceemregisteredpolicyeventtype4{YType::uint32, "ceemRegisteredPolicyEventType4"},
    ceemregisteredpolicyeventtype5{YType::uint32, "ceemRegisteredPolicyEventType5"},
    ceemregisteredpolicyeventtype6{YType::uint32, "ceemRegisteredPolicyEventType6"},
    ceemregisteredpolicyeventtype7{YType::uint32, "ceemRegisteredPolicyEventType7"},
    ceemregisteredpolicyeventtype8{YType::uint32, "ceemRegisteredPolicyEventType8"},
    ceemregisteredpolicyname{YType::str, "ceemRegisteredPolicyName"},
    ceemregisteredpolicynotifflag{YType::boolean, "ceemRegisteredPolicyNotifFlag"},
    ceemregisteredpolicyregtime{YType::str, "ceemRegisteredPolicyRegTime"},
    ceemregisteredpolicyruncount{YType::uint32, "ceemRegisteredPolicyRunCount"},
    ceemregisteredpolicyruntime{YType::str, "ceemRegisteredPolicyRunTime"},
    ceemregisteredpolicystatus{YType::enumeration, "ceemRegisteredPolicyStatus"},
    ceemregisteredpolicytype{YType::enumeration, "ceemRegisteredPolicyType"}
{
    yang_name = "ceemRegisteredPolicyEntry"; yang_parent_name = "ceemRegisteredPolicyTable";
}

CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::~Ceemregisteredpolicyentry()
{
}

bool CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::has_data() const
{
    return ceemregisteredpolicyindex.is_set
	|| ceemregisteredpolicyenabledtime.is_set
	|| ceemregisteredpolicyeventtype1.is_set
	|| ceemregisteredpolicyeventtype2.is_set
	|| ceemregisteredpolicyeventtype3.is_set
	|| ceemregisteredpolicyeventtype4.is_set
	|| ceemregisteredpolicyeventtype5.is_set
	|| ceemregisteredpolicyeventtype6.is_set
	|| ceemregisteredpolicyeventtype7.is_set
	|| ceemregisteredpolicyeventtype8.is_set
	|| ceemregisteredpolicyname.is_set
	|| ceemregisteredpolicynotifflag.is_set
	|| ceemregisteredpolicyregtime.is_set
	|| ceemregisteredpolicyruncount.is_set
	|| ceemregisteredpolicyruntime.is_set
	|| ceemregisteredpolicystatus.is_set
	|| ceemregisteredpolicytype.is_set;
}

bool CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceemregisteredpolicyindex.yfilter)
	|| ydk::is_set(ceemregisteredpolicyenabledtime.yfilter)
	|| ydk::is_set(ceemregisteredpolicyeventtype1.yfilter)
	|| ydk::is_set(ceemregisteredpolicyeventtype2.yfilter)
	|| ydk::is_set(ceemregisteredpolicyeventtype3.yfilter)
	|| ydk::is_set(ceemregisteredpolicyeventtype4.yfilter)
	|| ydk::is_set(ceemregisteredpolicyeventtype5.yfilter)
	|| ydk::is_set(ceemregisteredpolicyeventtype6.yfilter)
	|| ydk::is_set(ceemregisteredpolicyeventtype7.yfilter)
	|| ydk::is_set(ceemregisteredpolicyeventtype8.yfilter)
	|| ydk::is_set(ceemregisteredpolicyname.yfilter)
	|| ydk::is_set(ceemregisteredpolicynotifflag.yfilter)
	|| ydk::is_set(ceemregisteredpolicyregtime.yfilter)
	|| ydk::is_set(ceemregisteredpolicyruncount.yfilter)
	|| ydk::is_set(ceemregisteredpolicyruntime.yfilter)
	|| ydk::is_set(ceemregisteredpolicystatus.yfilter)
	|| ydk::is_set(ceemregisteredpolicytype.yfilter);
}

std::string CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceemRegisteredPolicyEntry" <<"[ceemRegisteredPolicyIndex='" <<ceemregisteredpolicyindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-EMBEDDED-EVENT-MGR-MIB:CISCO-EMBEDDED-EVENT-MGR-MIB/ceemRegisteredPolicyTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceemregisteredpolicyindex.is_set || is_set(ceemregisteredpolicyindex.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyindex.get_name_leafdata());
    if (ceemregisteredpolicyenabledtime.is_set || is_set(ceemregisteredpolicyenabledtime.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyenabledtime.get_name_leafdata());
    if (ceemregisteredpolicyeventtype1.is_set || is_set(ceemregisteredpolicyeventtype1.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyeventtype1.get_name_leafdata());
    if (ceemregisteredpolicyeventtype2.is_set || is_set(ceemregisteredpolicyeventtype2.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyeventtype2.get_name_leafdata());
    if (ceemregisteredpolicyeventtype3.is_set || is_set(ceemregisteredpolicyeventtype3.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyeventtype3.get_name_leafdata());
    if (ceemregisteredpolicyeventtype4.is_set || is_set(ceemregisteredpolicyeventtype4.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyeventtype4.get_name_leafdata());
    if (ceemregisteredpolicyeventtype5.is_set || is_set(ceemregisteredpolicyeventtype5.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyeventtype5.get_name_leafdata());
    if (ceemregisteredpolicyeventtype6.is_set || is_set(ceemregisteredpolicyeventtype6.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyeventtype6.get_name_leafdata());
    if (ceemregisteredpolicyeventtype7.is_set || is_set(ceemregisteredpolicyeventtype7.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyeventtype7.get_name_leafdata());
    if (ceemregisteredpolicyeventtype8.is_set || is_set(ceemregisteredpolicyeventtype8.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyeventtype8.get_name_leafdata());
    if (ceemregisteredpolicyname.is_set || is_set(ceemregisteredpolicyname.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyname.get_name_leafdata());
    if (ceemregisteredpolicynotifflag.is_set || is_set(ceemregisteredpolicynotifflag.yfilter)) leaf_name_data.push_back(ceemregisteredpolicynotifflag.get_name_leafdata());
    if (ceemregisteredpolicyregtime.is_set || is_set(ceemregisteredpolicyregtime.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyregtime.get_name_leafdata());
    if (ceemregisteredpolicyruncount.is_set || is_set(ceemregisteredpolicyruncount.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyruncount.get_name_leafdata());
    if (ceemregisteredpolicyruntime.is_set || is_set(ceemregisteredpolicyruntime.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyruntime.get_name_leafdata());
    if (ceemregisteredpolicystatus.is_set || is_set(ceemregisteredpolicystatus.yfilter)) leaf_name_data.push_back(ceemregisteredpolicystatus.get_name_leafdata());
    if (ceemregisteredpolicytype.is_set || is_set(ceemregisteredpolicytype.yfilter)) leaf_name_data.push_back(ceemregisteredpolicytype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ceemRegisteredPolicyIndex")
    {
        ceemregisteredpolicyindex = value;
        ceemregisteredpolicyindex.value_namespace = name_space;
        ceemregisteredpolicyindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyEnabledTime")
    {
        ceemregisteredpolicyenabledtime = value;
        ceemregisteredpolicyenabledtime.value_namespace = name_space;
        ceemregisteredpolicyenabledtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyEventType1")
    {
        ceemregisteredpolicyeventtype1 = value;
        ceemregisteredpolicyeventtype1.value_namespace = name_space;
        ceemregisteredpolicyeventtype1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyEventType2")
    {
        ceemregisteredpolicyeventtype2 = value;
        ceemregisteredpolicyeventtype2.value_namespace = name_space;
        ceemregisteredpolicyeventtype2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyEventType3")
    {
        ceemregisteredpolicyeventtype3 = value;
        ceemregisteredpolicyeventtype3.value_namespace = name_space;
        ceemregisteredpolicyeventtype3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyEventType4")
    {
        ceemregisteredpolicyeventtype4 = value;
        ceemregisteredpolicyeventtype4.value_namespace = name_space;
        ceemregisteredpolicyeventtype4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyEventType5")
    {
        ceemregisteredpolicyeventtype5 = value;
        ceemregisteredpolicyeventtype5.value_namespace = name_space;
        ceemregisteredpolicyeventtype5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyEventType6")
    {
        ceemregisteredpolicyeventtype6 = value;
        ceemregisteredpolicyeventtype6.value_namespace = name_space;
        ceemregisteredpolicyeventtype6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyEventType7")
    {
        ceemregisteredpolicyeventtype7 = value;
        ceemregisteredpolicyeventtype7.value_namespace = name_space;
        ceemregisteredpolicyeventtype7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyEventType8")
    {
        ceemregisteredpolicyeventtype8 = value;
        ceemregisteredpolicyeventtype8.value_namespace = name_space;
        ceemregisteredpolicyeventtype8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyName")
    {
        ceemregisteredpolicyname = value;
        ceemregisteredpolicyname.value_namespace = name_space;
        ceemregisteredpolicyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyNotifFlag")
    {
        ceemregisteredpolicynotifflag = value;
        ceemregisteredpolicynotifflag.value_namespace = name_space;
        ceemregisteredpolicynotifflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyRegTime")
    {
        ceemregisteredpolicyregtime = value;
        ceemregisteredpolicyregtime.value_namespace = name_space;
        ceemregisteredpolicyregtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyRunCount")
    {
        ceemregisteredpolicyruncount = value;
        ceemregisteredpolicyruncount.value_namespace = name_space;
        ceemregisteredpolicyruncount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyRunTime")
    {
        ceemregisteredpolicyruntime = value;
        ceemregisteredpolicyruntime.value_namespace = name_space;
        ceemregisteredpolicyruntime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyStatus")
    {
        ceemregisteredpolicystatus = value;
        ceemregisteredpolicystatus.value_namespace = name_space;
        ceemregisteredpolicystatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyType")
    {
        ceemregisteredpolicytype = value;
        ceemregisteredpolicytype.value_namespace = name_space;
        ceemregisteredpolicytype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ceemRegisteredPolicyIndex")
    {
        ceemregisteredpolicyindex.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyEnabledTime")
    {
        ceemregisteredpolicyenabledtime.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyEventType1")
    {
        ceemregisteredpolicyeventtype1.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyEventType2")
    {
        ceemregisteredpolicyeventtype2.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyEventType3")
    {
        ceemregisteredpolicyeventtype3.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyEventType4")
    {
        ceemregisteredpolicyeventtype4.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyEventType5")
    {
        ceemregisteredpolicyeventtype5.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyEventType6")
    {
        ceemregisteredpolicyeventtype6.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyEventType7")
    {
        ceemregisteredpolicyeventtype7.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyEventType8")
    {
        ceemregisteredpolicyeventtype8.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyName")
    {
        ceemregisteredpolicyname.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyNotifFlag")
    {
        ceemregisteredpolicynotifflag.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyRegTime")
    {
        ceemregisteredpolicyregtime.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyRunCount")
    {
        ceemregisteredpolicyruncount.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyRunTime")
    {
        ceemregisteredpolicyruntime.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyStatus")
    {
        ceemregisteredpolicystatus.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyType")
    {
        ceemregisteredpolicytype.yfilter = yfilter;
    }
}

bool CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceemRegisteredPolicyIndex" || name == "ceemRegisteredPolicyEnabledTime" || name == "ceemRegisteredPolicyEventType1" || name == "ceemRegisteredPolicyEventType2" || name == "ceemRegisteredPolicyEventType3" || name == "ceemRegisteredPolicyEventType4" || name == "ceemRegisteredPolicyEventType5" || name == "ceemRegisteredPolicyEventType6" || name == "ceemRegisteredPolicyEventType7" || name == "ceemRegisteredPolicyEventType8" || name == "ceemRegisteredPolicyName" || name == "ceemRegisteredPolicyNotifFlag" || name == "ceemRegisteredPolicyRegTime" || name == "ceemRegisteredPolicyRunCount" || name == "ceemRegisteredPolicyRunTime" || name == "ceemRegisteredPolicyStatus" || name == "ceemRegisteredPolicyType")
        return true;
    return false;
}

const Enum::YLeaf Notifysource::server {1, "server"};
const Enum::YLeaf Notifysource::policy {2, "policy"};

const Enum::YLeaf CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::Ceemregisteredpolicystatus::enabled {1, "enabled"};
const Enum::YLeaf CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::Ceemregisteredpolicystatus::disabled {2, "disabled"};

const Enum::YLeaf CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::Ceemregisteredpolicytype::user {1, "user"};
const Enum::YLeaf CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::Ceemregisteredpolicytype::system {2, "system"};


}
}
