
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IF_EXTENSION_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IF_EXTENSION_MIB {

CiscoIfExtensionMib::CiscoIfExtensionMib()
    :
    cieifdot1dbasemappingtable(std::make_shared<CiscoIfExtensionMib::Cieifdot1Dbasemappingtable>())
	,cieifdot1qcustomethertypetable(std::make_shared<CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable>())
	,cieifindexpersistencetable(std::make_shared<CiscoIfExtensionMib::Cieifindexpersistencetable>())
	,cieifinterfacetable(std::make_shared<CiscoIfExtensionMib::Cieifinterfacetable>())
	,cieifnamemappingtable(std::make_shared<CiscoIfExtensionMib::Cieifnamemappingtable>())
	,cieifpacketstatstable(std::make_shared<CiscoIfExtensionMib::Cieifpacketstatstable>())
	,cieifstatuslisttable(std::make_shared<CiscoIfExtensionMib::Cieifstatuslisttable>())
	,cieifutiltable(std::make_shared<CiscoIfExtensionMib::Cieifutiltable>())
	,cieifvlstatstable(std::make_shared<CiscoIfExtensionMib::Cieifvlstatstable>())
	,ciscoifextsystemconfig(std::make_shared<CiscoIfExtensionMib::Ciscoifextsystemconfig>())
{
    cieifdot1dbasemappingtable->parent = this;

    cieifdot1qcustomethertypetable->parent = this;

    cieifindexpersistencetable->parent = this;

    cieifinterfacetable->parent = this;

    cieifnamemappingtable->parent = this;

    cieifpacketstatstable->parent = this;

    cieifstatuslisttable->parent = this;

    cieifutiltable->parent = this;

    cieifvlstatstable->parent = this;

    ciscoifextsystemconfig->parent = this;

    yang_name = "CISCO-IF-EXTENSION-MIB"; yang_parent_name = "CISCO-IF-EXTENSION-MIB";
}

CiscoIfExtensionMib::~CiscoIfExtensionMib()
{
}

bool CiscoIfExtensionMib::has_data() const
{
    return (cieifdot1dbasemappingtable !=  nullptr && cieifdot1dbasemappingtable->has_data())
	|| (cieifdot1qcustomethertypetable !=  nullptr && cieifdot1qcustomethertypetable->has_data())
	|| (cieifindexpersistencetable !=  nullptr && cieifindexpersistencetable->has_data())
	|| (cieifinterfacetable !=  nullptr && cieifinterfacetable->has_data())
	|| (cieifnamemappingtable !=  nullptr && cieifnamemappingtable->has_data())
	|| (cieifpacketstatstable !=  nullptr && cieifpacketstatstable->has_data())
	|| (cieifstatuslisttable !=  nullptr && cieifstatuslisttable->has_data())
	|| (cieifutiltable !=  nullptr && cieifutiltable->has_data())
	|| (cieifvlstatstable !=  nullptr && cieifvlstatstable->has_data())
	|| (ciscoifextsystemconfig !=  nullptr && ciscoifextsystemconfig->has_data());
}

bool CiscoIfExtensionMib::has_operation() const
{
    return is_set(yfilter)
	|| (cieifdot1dbasemappingtable !=  nullptr && cieifdot1dbasemappingtable->has_operation())
	|| (cieifdot1qcustomethertypetable !=  nullptr && cieifdot1qcustomethertypetable->has_operation())
	|| (cieifindexpersistencetable !=  nullptr && cieifindexpersistencetable->has_operation())
	|| (cieifinterfacetable !=  nullptr && cieifinterfacetable->has_operation())
	|| (cieifnamemappingtable !=  nullptr && cieifnamemappingtable->has_operation())
	|| (cieifpacketstatstable !=  nullptr && cieifpacketstatstable->has_operation())
	|| (cieifstatuslisttable !=  nullptr && cieifstatuslisttable->has_operation())
	|| (cieifutiltable !=  nullptr && cieifutiltable->has_operation())
	|| (cieifvlstatstable !=  nullptr && cieifvlstatstable->has_operation())
	|| (ciscoifextsystemconfig !=  nullptr && ciscoifextsystemconfig->has_operation());
}

std::string CiscoIfExtensionMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoIfExtensionMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfDot1dBaseMappingTable")
    {
        if(cieifdot1dbasemappingtable == nullptr)
        {
            cieifdot1dbasemappingtable = std::make_shared<CiscoIfExtensionMib::Cieifdot1Dbasemappingtable>();
        }
        return cieifdot1dbasemappingtable;
    }

    if(child_yang_name == "cieIfDot1qCustomEtherTypeTable")
    {
        if(cieifdot1qcustomethertypetable == nullptr)
        {
            cieifdot1qcustomethertypetable = std::make_shared<CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable>();
        }
        return cieifdot1qcustomethertypetable;
    }

    if(child_yang_name == "cieIfIndexPersistenceTable")
    {
        if(cieifindexpersistencetable == nullptr)
        {
            cieifindexpersistencetable = std::make_shared<CiscoIfExtensionMib::Cieifindexpersistencetable>();
        }
        return cieifindexpersistencetable;
    }

    if(child_yang_name == "cieIfInterfaceTable")
    {
        if(cieifinterfacetable == nullptr)
        {
            cieifinterfacetable = std::make_shared<CiscoIfExtensionMib::Cieifinterfacetable>();
        }
        return cieifinterfacetable;
    }

    if(child_yang_name == "cieIfNameMappingTable")
    {
        if(cieifnamemappingtable == nullptr)
        {
            cieifnamemappingtable = std::make_shared<CiscoIfExtensionMib::Cieifnamemappingtable>();
        }
        return cieifnamemappingtable;
    }

    if(child_yang_name == "cieIfPacketStatsTable")
    {
        if(cieifpacketstatstable == nullptr)
        {
            cieifpacketstatstable = std::make_shared<CiscoIfExtensionMib::Cieifpacketstatstable>();
        }
        return cieifpacketstatstable;
    }

    if(child_yang_name == "cieIfStatusListTable")
    {
        if(cieifstatuslisttable == nullptr)
        {
            cieifstatuslisttable = std::make_shared<CiscoIfExtensionMib::Cieifstatuslisttable>();
        }
        return cieifstatuslisttable;
    }

    if(child_yang_name == "cieIfUtilTable")
    {
        if(cieifutiltable == nullptr)
        {
            cieifutiltable = std::make_shared<CiscoIfExtensionMib::Cieifutiltable>();
        }
        return cieifutiltable;
    }

    if(child_yang_name == "cieIfVlStatsTable")
    {
        if(cieifvlstatstable == nullptr)
        {
            cieifvlstatstable = std::make_shared<CiscoIfExtensionMib::Cieifvlstatstable>();
        }
        return cieifvlstatstable;
    }

    if(child_yang_name == "ciscoIfExtSystemConfig")
    {
        if(ciscoifextsystemconfig == nullptr)
        {
            ciscoifextsystemconfig = std::make_shared<CiscoIfExtensionMib::Ciscoifextsystemconfig>();
        }
        return ciscoifextsystemconfig;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cieifdot1dbasemappingtable != nullptr)
    {
        children["cieIfDot1dBaseMappingTable"] = cieifdot1dbasemappingtable;
    }

    if(cieifdot1qcustomethertypetable != nullptr)
    {
        children["cieIfDot1qCustomEtherTypeTable"] = cieifdot1qcustomethertypetable;
    }

    if(cieifindexpersistencetable != nullptr)
    {
        children["cieIfIndexPersistenceTable"] = cieifindexpersistencetable;
    }

    if(cieifinterfacetable != nullptr)
    {
        children["cieIfInterfaceTable"] = cieifinterfacetable;
    }

    if(cieifnamemappingtable != nullptr)
    {
        children["cieIfNameMappingTable"] = cieifnamemappingtable;
    }

    if(cieifpacketstatstable != nullptr)
    {
        children["cieIfPacketStatsTable"] = cieifpacketstatstable;
    }

    if(cieifstatuslisttable != nullptr)
    {
        children["cieIfStatusListTable"] = cieifstatuslisttable;
    }

    if(cieifutiltable != nullptr)
    {
        children["cieIfUtilTable"] = cieifutiltable;
    }

    if(cieifvlstatstable != nullptr)
    {
        children["cieIfVlStatsTable"] = cieifvlstatstable;
    }

    if(ciscoifextsystemconfig != nullptr)
    {
        children["ciscoIfExtSystemConfig"] = ciscoifextsystemconfig;
    }

    return children;
}

void CiscoIfExtensionMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIfExtensionMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoIfExtensionMib::clone_ptr() const
{
    return std::make_shared<CiscoIfExtensionMib>();
}

std::string CiscoIfExtensionMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIfExtensionMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIfExtensionMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoIfExtensionMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoIfExtensionMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cieIfDot1dBaseMappingTable" || name == "cieIfDot1qCustomEtherTypeTable" || name == "cieIfIndexPersistenceTable" || name == "cieIfInterfaceTable" || name == "cieIfNameMappingTable" || name == "cieIfPacketStatsTable" || name == "cieIfStatusListTable" || name == "cieIfUtilTable" || name == "cieIfVlStatsTable" || name == "ciscoIfExtSystemConfig")
        return true;
    return false;
}

CiscoIfExtensionMib::Ciscoifextsystemconfig::Ciscoifextsystemconfig()
    :
    ciedelayedlinkupdownnotifdelay{YType::uint32, "cieDelayedLinkUpDownNotifDelay"},
    ciedelayedlinkupdownnotifenable{YType::boolean, "cieDelayedLinkUpDownNotifEnable"},
    cieifindexglobalpersistence{YType::enumeration, "cieIfIndexGlobalPersistence"},
    cieifindexpersistence{YType::boolean, "cieIfIndexPersistence"},
    cielinkupdownconfig{YType::bits, "cieLinkUpDownConfig"},
    cielinkupdownenable{YType::bits, "cieLinkUpDownEnable"},
    ciestandardlinkupdownvarbinds{YType::enumeration, "cieStandardLinkUpDownVarbinds"},
    ciesystemmtu{YType::int32, "cieSystemMtu"}
{
    yang_name = "ciscoIfExtSystemConfig"; yang_parent_name = "CISCO-IF-EXTENSION-MIB";
}

CiscoIfExtensionMib::Ciscoifextsystemconfig::~Ciscoifextsystemconfig()
{
}

bool CiscoIfExtensionMib::Ciscoifextsystemconfig::has_data() const
{
    return ciedelayedlinkupdownnotifdelay.is_set
	|| ciedelayedlinkupdownnotifenable.is_set
	|| cieifindexglobalpersistence.is_set
	|| cieifindexpersistence.is_set
	|| cielinkupdownconfig.is_set
	|| cielinkupdownenable.is_set
	|| ciestandardlinkupdownvarbinds.is_set
	|| ciesystemmtu.is_set;
}

bool CiscoIfExtensionMib::Ciscoifextsystemconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciedelayedlinkupdownnotifdelay.yfilter)
	|| ydk::is_set(ciedelayedlinkupdownnotifenable.yfilter)
	|| ydk::is_set(cieifindexglobalpersistence.yfilter)
	|| ydk::is_set(cieifindexpersistence.yfilter)
	|| ydk::is_set(cielinkupdownconfig.yfilter)
	|| ydk::is_set(cielinkupdownenable.yfilter)
	|| ydk::is_set(ciestandardlinkupdownvarbinds.yfilter)
	|| ydk::is_set(ciesystemmtu.yfilter);
}

std::string CiscoIfExtensionMib::Ciscoifextsystemconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoIfExtSystemConfig";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Ciscoifextsystemconfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciedelayedlinkupdownnotifdelay.is_set || is_set(ciedelayedlinkupdownnotifdelay.yfilter)) leaf_name_data.push_back(ciedelayedlinkupdownnotifdelay.get_name_leafdata());
    if (ciedelayedlinkupdownnotifenable.is_set || is_set(ciedelayedlinkupdownnotifenable.yfilter)) leaf_name_data.push_back(ciedelayedlinkupdownnotifenable.get_name_leafdata());
    if (cieifindexglobalpersistence.is_set || is_set(cieifindexglobalpersistence.yfilter)) leaf_name_data.push_back(cieifindexglobalpersistence.get_name_leafdata());
    if (cieifindexpersistence.is_set || is_set(cieifindexpersistence.yfilter)) leaf_name_data.push_back(cieifindexpersistence.get_name_leafdata());
    if (cielinkupdownconfig.is_set || is_set(cielinkupdownconfig.yfilter)) leaf_name_data.push_back(cielinkupdownconfig.get_name_leafdata());
    if (cielinkupdownenable.is_set || is_set(cielinkupdownenable.yfilter)) leaf_name_data.push_back(cielinkupdownenable.get_name_leafdata());
    if (ciestandardlinkupdownvarbinds.is_set || is_set(ciestandardlinkupdownvarbinds.yfilter)) leaf_name_data.push_back(ciestandardlinkupdownvarbinds.get_name_leafdata());
    if (ciesystemmtu.is_set || is_set(ciesystemmtu.yfilter)) leaf_name_data.push_back(ciesystemmtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Ciscoifextsystemconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Ciscoifextsystemconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIfExtensionMib::Ciscoifextsystemconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cieDelayedLinkUpDownNotifDelay")
    {
        ciedelayedlinkupdownnotifdelay = value;
        ciedelayedlinkupdownnotifdelay.value_namespace = name_space;
        ciedelayedlinkupdownnotifdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieDelayedLinkUpDownNotifEnable")
    {
        ciedelayedlinkupdownnotifenable = value;
        ciedelayedlinkupdownnotifenable.value_namespace = name_space;
        ciedelayedlinkupdownnotifenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfIndexGlobalPersistence")
    {
        cieifindexglobalpersistence = value;
        cieifindexglobalpersistence.value_namespace = name_space;
        cieifindexglobalpersistence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfIndexPersistence")
    {
        cieifindexpersistence = value;
        cieifindexpersistence.value_namespace = name_space;
        cieifindexpersistence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieLinkUpDownConfig")
    {
        cielinkupdownconfig[value] = true;
    }
    if(value_path == "cieLinkUpDownEnable")
    {
        cielinkupdownenable[value] = true;
    }
    if(value_path == "cieStandardLinkUpDownVarbinds")
    {
        ciestandardlinkupdownvarbinds = value;
        ciestandardlinkupdownvarbinds.value_namespace = name_space;
        ciestandardlinkupdownvarbinds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieSystemMtu")
    {
        ciesystemmtu = value;
        ciesystemmtu.value_namespace = name_space;
        ciesystemmtu.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIfExtensionMib::Ciscoifextsystemconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cieDelayedLinkUpDownNotifDelay")
    {
        ciedelayedlinkupdownnotifdelay.yfilter = yfilter;
    }
    if(value_path == "cieDelayedLinkUpDownNotifEnable")
    {
        ciedelayedlinkupdownnotifenable.yfilter = yfilter;
    }
    if(value_path == "cieIfIndexGlobalPersistence")
    {
        cieifindexglobalpersistence.yfilter = yfilter;
    }
    if(value_path == "cieIfIndexPersistence")
    {
        cieifindexpersistence.yfilter = yfilter;
    }
    if(value_path == "cieLinkUpDownConfig")
    {
        cielinkupdownconfig.yfilter = yfilter;
    }
    if(value_path == "cieLinkUpDownEnable")
    {
        cielinkupdownenable.yfilter = yfilter;
    }
    if(value_path == "cieStandardLinkUpDownVarbinds")
    {
        ciestandardlinkupdownvarbinds.yfilter = yfilter;
    }
    if(value_path == "cieSystemMtu")
    {
        ciesystemmtu.yfilter = yfilter;
    }
}

bool CiscoIfExtensionMib::Ciscoifextsystemconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cieDelayedLinkUpDownNotifDelay" || name == "cieDelayedLinkUpDownNotifEnable" || name == "cieIfIndexGlobalPersistence" || name == "cieIfIndexPersistence" || name == "cieLinkUpDownConfig" || name == "cieLinkUpDownEnable" || name == "cieStandardLinkUpDownVarbinds" || name == "cieSystemMtu")
        return true;
    return false;
}

CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatstable()
{
    yang_name = "cieIfPacketStatsTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB";
}

CiscoIfExtensionMib::Cieifpacketstatstable::~Cieifpacketstatstable()
{
}

bool CiscoIfExtensionMib::Cieifpacketstatstable::has_data() const
{
    for (std::size_t index=0; index<cieifpacketstatsentry.size(); index++)
    {
        if(cieifpacketstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIfExtensionMib::Cieifpacketstatstable::has_operation() const
{
    for (std::size_t index=0; index<cieifpacketstatsentry.size(); index++)
    {
        if(cieifpacketstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIfExtensionMib::Cieifpacketstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfPacketStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifpacketstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifpacketstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfPacketStatsEntry")
    {
        for(auto const & c : cieifpacketstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry>();
        c->parent = this;
        cieifpacketstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifpacketstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cieifpacketstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIfExtensionMib::Cieifpacketstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIfExtensionMib::Cieifpacketstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIfExtensionMib::Cieifpacketstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cieIfPacketStatsEntry")
        return true;
    return false;
}

CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry::Cieifpacketstatsentry()
    :
    ifindex{YType::str, "ifIndex"},
    cieifinaborterrs{YType::uint32, "cieIfInAbortErrs"},
    cieifinframingerrs{YType::uint32, "cieIfInFramingErrs"},
    cieifingiantserrs{YType::uint32, "cieIfInGiantsErrs"},
    cieifinignored{YType::uint32, "cieIfInIgnored"},
    cieifinoverrunerrs{YType::uint32, "cieIfInOverrunErrs"},
    cieifinputqueuedrops{YType::uint32, "cieIfInputQueueDrops"},
    cieifinruntserrs{YType::uint32, "cieIfInRuntsErrs"},
    cieiflastintime{YType::uint32, "cieIfLastInTime"},
    cieiflastouthangtime{YType::uint32, "cieIfLastOutHangTime"},
    cieiflastouttime{YType::uint32, "cieIfLastOutTime"},
    cieifoutputqueuedrops{YType::uint32, "cieIfOutputQueueDrops"},
    cieifpacketdiscontinuitytime{YType::uint32, "cieIfPacketDiscontinuityTime"}
{
    yang_name = "cieIfPacketStatsEntry"; yang_parent_name = "cieIfPacketStatsTable";
}

CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry::~Cieifpacketstatsentry()
{
}

bool CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry::has_data() const
{
    return ifindex.is_set
	|| cieifinaborterrs.is_set
	|| cieifinframingerrs.is_set
	|| cieifingiantserrs.is_set
	|| cieifinignored.is_set
	|| cieifinoverrunerrs.is_set
	|| cieifinputqueuedrops.is_set
	|| cieifinruntserrs.is_set
	|| cieiflastintime.is_set
	|| cieiflastouthangtime.is_set
	|| cieiflastouttime.is_set
	|| cieifoutputqueuedrops.is_set
	|| cieifpacketdiscontinuitytime.is_set;
}

bool CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cieifinaborterrs.yfilter)
	|| ydk::is_set(cieifinframingerrs.yfilter)
	|| ydk::is_set(cieifingiantserrs.yfilter)
	|| ydk::is_set(cieifinignored.yfilter)
	|| ydk::is_set(cieifinoverrunerrs.yfilter)
	|| ydk::is_set(cieifinputqueuedrops.yfilter)
	|| ydk::is_set(cieifinruntserrs.yfilter)
	|| ydk::is_set(cieiflastintime.yfilter)
	|| ydk::is_set(cieiflastouthangtime.yfilter)
	|| ydk::is_set(cieiflastouttime.yfilter)
	|| ydk::is_set(cieifoutputqueuedrops.yfilter)
	|| ydk::is_set(cieifpacketdiscontinuitytime.yfilter);
}

std::string CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfPacketStatsEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfPacketStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cieifinaborterrs.is_set || is_set(cieifinaborterrs.yfilter)) leaf_name_data.push_back(cieifinaborterrs.get_name_leafdata());
    if (cieifinframingerrs.is_set || is_set(cieifinframingerrs.yfilter)) leaf_name_data.push_back(cieifinframingerrs.get_name_leafdata());
    if (cieifingiantserrs.is_set || is_set(cieifingiantserrs.yfilter)) leaf_name_data.push_back(cieifingiantserrs.get_name_leafdata());
    if (cieifinignored.is_set || is_set(cieifinignored.yfilter)) leaf_name_data.push_back(cieifinignored.get_name_leafdata());
    if (cieifinoverrunerrs.is_set || is_set(cieifinoverrunerrs.yfilter)) leaf_name_data.push_back(cieifinoverrunerrs.get_name_leafdata());
    if (cieifinputqueuedrops.is_set || is_set(cieifinputqueuedrops.yfilter)) leaf_name_data.push_back(cieifinputqueuedrops.get_name_leafdata());
    if (cieifinruntserrs.is_set || is_set(cieifinruntserrs.yfilter)) leaf_name_data.push_back(cieifinruntserrs.get_name_leafdata());
    if (cieiflastintime.is_set || is_set(cieiflastintime.yfilter)) leaf_name_data.push_back(cieiflastintime.get_name_leafdata());
    if (cieiflastouthangtime.is_set || is_set(cieiflastouthangtime.yfilter)) leaf_name_data.push_back(cieiflastouthangtime.get_name_leafdata());
    if (cieiflastouttime.is_set || is_set(cieiflastouttime.yfilter)) leaf_name_data.push_back(cieiflastouttime.get_name_leafdata());
    if (cieifoutputqueuedrops.is_set || is_set(cieifoutputqueuedrops.yfilter)) leaf_name_data.push_back(cieifoutputqueuedrops.get_name_leafdata());
    if (cieifpacketdiscontinuitytime.is_set || is_set(cieifpacketdiscontinuitytime.yfilter)) leaf_name_data.push_back(cieifpacketdiscontinuitytime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfInAbortErrs")
    {
        cieifinaborterrs = value;
        cieifinaborterrs.value_namespace = name_space;
        cieifinaborterrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfInFramingErrs")
    {
        cieifinframingerrs = value;
        cieifinframingerrs.value_namespace = name_space;
        cieifinframingerrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfInGiantsErrs")
    {
        cieifingiantserrs = value;
        cieifingiantserrs.value_namespace = name_space;
        cieifingiantserrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfInIgnored")
    {
        cieifinignored = value;
        cieifinignored.value_namespace = name_space;
        cieifinignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfInOverrunErrs")
    {
        cieifinoverrunerrs = value;
        cieifinoverrunerrs.value_namespace = name_space;
        cieifinoverrunerrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfInputQueueDrops")
    {
        cieifinputqueuedrops = value;
        cieifinputqueuedrops.value_namespace = name_space;
        cieifinputqueuedrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfInRuntsErrs")
    {
        cieifinruntserrs = value;
        cieifinruntserrs.value_namespace = name_space;
        cieifinruntserrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfLastInTime")
    {
        cieiflastintime = value;
        cieiflastintime.value_namespace = name_space;
        cieiflastintime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfLastOutHangTime")
    {
        cieiflastouthangtime = value;
        cieiflastouthangtime.value_namespace = name_space;
        cieiflastouthangtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfLastOutTime")
    {
        cieiflastouttime = value;
        cieiflastouttime.value_namespace = name_space;
        cieiflastouttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfOutputQueueDrops")
    {
        cieifoutputqueuedrops = value;
        cieifoutputqueuedrops.value_namespace = name_space;
        cieifoutputqueuedrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfPacketDiscontinuityTime")
    {
        cieifpacketdiscontinuitytime = value;
        cieifpacketdiscontinuitytime.value_namespace = name_space;
        cieifpacketdiscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cieIfInAbortErrs")
    {
        cieifinaborterrs.yfilter = yfilter;
    }
    if(value_path == "cieIfInFramingErrs")
    {
        cieifinframingerrs.yfilter = yfilter;
    }
    if(value_path == "cieIfInGiantsErrs")
    {
        cieifingiantserrs.yfilter = yfilter;
    }
    if(value_path == "cieIfInIgnored")
    {
        cieifinignored.yfilter = yfilter;
    }
    if(value_path == "cieIfInOverrunErrs")
    {
        cieifinoverrunerrs.yfilter = yfilter;
    }
    if(value_path == "cieIfInputQueueDrops")
    {
        cieifinputqueuedrops.yfilter = yfilter;
    }
    if(value_path == "cieIfInRuntsErrs")
    {
        cieifinruntserrs.yfilter = yfilter;
    }
    if(value_path == "cieIfLastInTime")
    {
        cieiflastintime.yfilter = yfilter;
    }
    if(value_path == "cieIfLastOutHangTime")
    {
        cieiflastouthangtime.yfilter = yfilter;
    }
    if(value_path == "cieIfLastOutTime")
    {
        cieiflastouttime.yfilter = yfilter;
    }
    if(value_path == "cieIfOutputQueueDrops")
    {
        cieifoutputqueuedrops.yfilter = yfilter;
    }
    if(value_path == "cieIfPacketDiscontinuityTime")
    {
        cieifpacketdiscontinuitytime.yfilter = yfilter;
    }
}

bool CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cieIfInAbortErrs" || name == "cieIfInFramingErrs" || name == "cieIfInGiantsErrs" || name == "cieIfInIgnored" || name == "cieIfInOverrunErrs" || name == "cieIfInputQueueDrops" || name == "cieIfInRuntsErrs" || name == "cieIfLastInTime" || name == "cieIfLastOutHangTime" || name == "cieIfLastOutTime" || name == "cieIfOutputQueueDrops" || name == "cieIfPacketDiscontinuityTime")
        return true;
    return false;
}

CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfacetable()
{
    yang_name = "cieIfInterfaceTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB";
}

CiscoIfExtensionMib::Cieifinterfacetable::~Cieifinterfacetable()
{
}

bool CiscoIfExtensionMib::Cieifinterfacetable::has_data() const
{
    for (std::size_t index=0; index<cieifinterfaceentry.size(); index++)
    {
        if(cieifinterfaceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIfExtensionMib::Cieifinterfacetable::has_operation() const
{
    for (std::size_t index=0; index<cieifinterfaceentry.size(); index++)
    {
        if(cieifinterfaceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIfExtensionMib::Cieifinterfacetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfInterfaceTable";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifinterfacetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifinterfacetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfInterfaceEntry")
    {
        for(auto const & c : cieifinterfaceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry>();
        c->parent = this;
        cieifinterfaceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifinterfacetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cieifinterfaceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIfExtensionMib::Cieifinterfacetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIfExtensionMib::Cieifinterfacetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIfExtensionMib::Cieifinterfacetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cieIfInterfaceEntry")
        return true;
    return false;
}

CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::Cieifinterfaceentry()
    :
    ifindex{YType::str, "ifIndex"},
    cieifcarriertransitioncount{YType::uint32, "cieIfCarrierTransitionCount"},
    cieifcontextname{YType::str, "cieIfContextName"},
    cieifdhcpmode{YType::boolean, "cieIfDhcpMode"},
    cieiffillpatternconfig{YType::enumeration, "cieIfFillPatternConfig"},
    cieifhighspeedreceive{YType::uint32, "cieIfHighSpeedReceive"},
    cieifignorebiterrorsconfig{YType::boolean, "cieIfIgnoreBitErrorsConfig"},
    cieifignoreinterruptthresholdconfig{YType::boolean, "cieIfIgnoreInterruptThresholdConfig"},
    cieifinterfacediscontinuitytime{YType::uint32, "cieIfInterfaceDiscontinuityTime"},
    cieifkeepaliveenabled{YType::boolean, "cieIfKeepAliveEnabled"},
    cieifmtu{YType::int32, "cieIfMtu"},
    cieifoperstatuscause{YType::enumeration, "cieIfOperStatusCause"},
    cieifoperstatuscausedescr{YType::str, "cieIfOperStatusCauseDescr"},
    cieifowner{YType::str, "cieIfOwner"},
    cieifresetcount{YType::uint32, "cieIfResetCount"},
    cieifsharedconfig{YType::enumeration, "cieIfSharedConfig"},
    cieifspeedgroupconfig{YType::enumeration, "cieIfSpeedGroupConfig"},
    cieifspeedreceive{YType::uint32, "cieIfSpeedReceive"},
    cieifstatechangereason{YType::str, "cieIfStateChangeReason"},
    cieiftransceiverfrequencyconfig{YType::enumeration, "cieIfTransceiverFrequencyConfig"}
{
    yang_name = "cieIfInterfaceEntry"; yang_parent_name = "cieIfInterfaceTable";
}

CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::~Cieifinterfaceentry()
{
}

bool CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::has_data() const
{
    return ifindex.is_set
	|| cieifcarriertransitioncount.is_set
	|| cieifcontextname.is_set
	|| cieifdhcpmode.is_set
	|| cieiffillpatternconfig.is_set
	|| cieifhighspeedreceive.is_set
	|| cieifignorebiterrorsconfig.is_set
	|| cieifignoreinterruptthresholdconfig.is_set
	|| cieifinterfacediscontinuitytime.is_set
	|| cieifkeepaliveenabled.is_set
	|| cieifmtu.is_set
	|| cieifoperstatuscause.is_set
	|| cieifoperstatuscausedescr.is_set
	|| cieifowner.is_set
	|| cieifresetcount.is_set
	|| cieifsharedconfig.is_set
	|| cieifspeedgroupconfig.is_set
	|| cieifspeedreceive.is_set
	|| cieifstatechangereason.is_set
	|| cieiftransceiverfrequencyconfig.is_set;
}

bool CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cieifcarriertransitioncount.yfilter)
	|| ydk::is_set(cieifcontextname.yfilter)
	|| ydk::is_set(cieifdhcpmode.yfilter)
	|| ydk::is_set(cieiffillpatternconfig.yfilter)
	|| ydk::is_set(cieifhighspeedreceive.yfilter)
	|| ydk::is_set(cieifignorebiterrorsconfig.yfilter)
	|| ydk::is_set(cieifignoreinterruptthresholdconfig.yfilter)
	|| ydk::is_set(cieifinterfacediscontinuitytime.yfilter)
	|| ydk::is_set(cieifkeepaliveenabled.yfilter)
	|| ydk::is_set(cieifmtu.yfilter)
	|| ydk::is_set(cieifoperstatuscause.yfilter)
	|| ydk::is_set(cieifoperstatuscausedescr.yfilter)
	|| ydk::is_set(cieifowner.yfilter)
	|| ydk::is_set(cieifresetcount.yfilter)
	|| ydk::is_set(cieifsharedconfig.yfilter)
	|| ydk::is_set(cieifspeedgroupconfig.yfilter)
	|| ydk::is_set(cieifspeedreceive.yfilter)
	|| ydk::is_set(cieifstatechangereason.yfilter)
	|| ydk::is_set(cieiftransceiverfrequencyconfig.yfilter);
}

std::string CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfInterfaceEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfInterfaceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cieifcarriertransitioncount.is_set || is_set(cieifcarriertransitioncount.yfilter)) leaf_name_data.push_back(cieifcarriertransitioncount.get_name_leafdata());
    if (cieifcontextname.is_set || is_set(cieifcontextname.yfilter)) leaf_name_data.push_back(cieifcontextname.get_name_leafdata());
    if (cieifdhcpmode.is_set || is_set(cieifdhcpmode.yfilter)) leaf_name_data.push_back(cieifdhcpmode.get_name_leafdata());
    if (cieiffillpatternconfig.is_set || is_set(cieiffillpatternconfig.yfilter)) leaf_name_data.push_back(cieiffillpatternconfig.get_name_leafdata());
    if (cieifhighspeedreceive.is_set || is_set(cieifhighspeedreceive.yfilter)) leaf_name_data.push_back(cieifhighspeedreceive.get_name_leafdata());
    if (cieifignorebiterrorsconfig.is_set || is_set(cieifignorebiterrorsconfig.yfilter)) leaf_name_data.push_back(cieifignorebiterrorsconfig.get_name_leafdata());
    if (cieifignoreinterruptthresholdconfig.is_set || is_set(cieifignoreinterruptthresholdconfig.yfilter)) leaf_name_data.push_back(cieifignoreinterruptthresholdconfig.get_name_leafdata());
    if (cieifinterfacediscontinuitytime.is_set || is_set(cieifinterfacediscontinuitytime.yfilter)) leaf_name_data.push_back(cieifinterfacediscontinuitytime.get_name_leafdata());
    if (cieifkeepaliveenabled.is_set || is_set(cieifkeepaliveenabled.yfilter)) leaf_name_data.push_back(cieifkeepaliveenabled.get_name_leafdata());
    if (cieifmtu.is_set || is_set(cieifmtu.yfilter)) leaf_name_data.push_back(cieifmtu.get_name_leafdata());
    if (cieifoperstatuscause.is_set || is_set(cieifoperstatuscause.yfilter)) leaf_name_data.push_back(cieifoperstatuscause.get_name_leafdata());
    if (cieifoperstatuscausedescr.is_set || is_set(cieifoperstatuscausedescr.yfilter)) leaf_name_data.push_back(cieifoperstatuscausedescr.get_name_leafdata());
    if (cieifowner.is_set || is_set(cieifowner.yfilter)) leaf_name_data.push_back(cieifowner.get_name_leafdata());
    if (cieifresetcount.is_set || is_set(cieifresetcount.yfilter)) leaf_name_data.push_back(cieifresetcount.get_name_leafdata());
    if (cieifsharedconfig.is_set || is_set(cieifsharedconfig.yfilter)) leaf_name_data.push_back(cieifsharedconfig.get_name_leafdata());
    if (cieifspeedgroupconfig.is_set || is_set(cieifspeedgroupconfig.yfilter)) leaf_name_data.push_back(cieifspeedgroupconfig.get_name_leafdata());
    if (cieifspeedreceive.is_set || is_set(cieifspeedreceive.yfilter)) leaf_name_data.push_back(cieifspeedreceive.get_name_leafdata());
    if (cieifstatechangereason.is_set || is_set(cieifstatechangereason.yfilter)) leaf_name_data.push_back(cieifstatechangereason.get_name_leafdata());
    if (cieiftransceiverfrequencyconfig.is_set || is_set(cieiftransceiverfrequencyconfig.yfilter)) leaf_name_data.push_back(cieiftransceiverfrequencyconfig.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfCarrierTransitionCount")
    {
        cieifcarriertransitioncount = value;
        cieifcarriertransitioncount.value_namespace = name_space;
        cieifcarriertransitioncount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfContextName")
    {
        cieifcontextname = value;
        cieifcontextname.value_namespace = name_space;
        cieifcontextname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfDhcpMode")
    {
        cieifdhcpmode = value;
        cieifdhcpmode.value_namespace = name_space;
        cieifdhcpmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfFillPatternConfig")
    {
        cieiffillpatternconfig = value;
        cieiffillpatternconfig.value_namespace = name_space;
        cieiffillpatternconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfHighSpeedReceive")
    {
        cieifhighspeedreceive = value;
        cieifhighspeedreceive.value_namespace = name_space;
        cieifhighspeedreceive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfIgnoreBitErrorsConfig")
    {
        cieifignorebiterrorsconfig = value;
        cieifignorebiterrorsconfig.value_namespace = name_space;
        cieifignorebiterrorsconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfIgnoreInterruptThresholdConfig")
    {
        cieifignoreinterruptthresholdconfig = value;
        cieifignoreinterruptthresholdconfig.value_namespace = name_space;
        cieifignoreinterruptthresholdconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfInterfaceDiscontinuityTime")
    {
        cieifinterfacediscontinuitytime = value;
        cieifinterfacediscontinuitytime.value_namespace = name_space;
        cieifinterfacediscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfKeepAliveEnabled")
    {
        cieifkeepaliveenabled = value;
        cieifkeepaliveenabled.value_namespace = name_space;
        cieifkeepaliveenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfMtu")
    {
        cieifmtu = value;
        cieifmtu.value_namespace = name_space;
        cieifmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfOperStatusCause")
    {
        cieifoperstatuscause = value;
        cieifoperstatuscause.value_namespace = name_space;
        cieifoperstatuscause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfOperStatusCauseDescr")
    {
        cieifoperstatuscausedescr = value;
        cieifoperstatuscausedescr.value_namespace = name_space;
        cieifoperstatuscausedescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfOwner")
    {
        cieifowner = value;
        cieifowner.value_namespace = name_space;
        cieifowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfResetCount")
    {
        cieifresetcount = value;
        cieifresetcount.value_namespace = name_space;
        cieifresetcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfSharedConfig")
    {
        cieifsharedconfig = value;
        cieifsharedconfig.value_namespace = name_space;
        cieifsharedconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfSpeedGroupConfig")
    {
        cieifspeedgroupconfig = value;
        cieifspeedgroupconfig.value_namespace = name_space;
        cieifspeedgroupconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfSpeedReceive")
    {
        cieifspeedreceive = value;
        cieifspeedreceive.value_namespace = name_space;
        cieifspeedreceive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfStateChangeReason")
    {
        cieifstatechangereason = value;
        cieifstatechangereason.value_namespace = name_space;
        cieifstatechangereason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfTransceiverFrequencyConfig")
    {
        cieiftransceiverfrequencyconfig = value;
        cieiftransceiverfrequencyconfig.value_namespace = name_space;
        cieiftransceiverfrequencyconfig.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cieIfCarrierTransitionCount")
    {
        cieifcarriertransitioncount.yfilter = yfilter;
    }
    if(value_path == "cieIfContextName")
    {
        cieifcontextname.yfilter = yfilter;
    }
    if(value_path == "cieIfDhcpMode")
    {
        cieifdhcpmode.yfilter = yfilter;
    }
    if(value_path == "cieIfFillPatternConfig")
    {
        cieiffillpatternconfig.yfilter = yfilter;
    }
    if(value_path == "cieIfHighSpeedReceive")
    {
        cieifhighspeedreceive.yfilter = yfilter;
    }
    if(value_path == "cieIfIgnoreBitErrorsConfig")
    {
        cieifignorebiterrorsconfig.yfilter = yfilter;
    }
    if(value_path == "cieIfIgnoreInterruptThresholdConfig")
    {
        cieifignoreinterruptthresholdconfig.yfilter = yfilter;
    }
    if(value_path == "cieIfInterfaceDiscontinuityTime")
    {
        cieifinterfacediscontinuitytime.yfilter = yfilter;
    }
    if(value_path == "cieIfKeepAliveEnabled")
    {
        cieifkeepaliveenabled.yfilter = yfilter;
    }
    if(value_path == "cieIfMtu")
    {
        cieifmtu.yfilter = yfilter;
    }
    if(value_path == "cieIfOperStatusCause")
    {
        cieifoperstatuscause.yfilter = yfilter;
    }
    if(value_path == "cieIfOperStatusCauseDescr")
    {
        cieifoperstatuscausedescr.yfilter = yfilter;
    }
    if(value_path == "cieIfOwner")
    {
        cieifowner.yfilter = yfilter;
    }
    if(value_path == "cieIfResetCount")
    {
        cieifresetcount.yfilter = yfilter;
    }
    if(value_path == "cieIfSharedConfig")
    {
        cieifsharedconfig.yfilter = yfilter;
    }
    if(value_path == "cieIfSpeedGroupConfig")
    {
        cieifspeedgroupconfig.yfilter = yfilter;
    }
    if(value_path == "cieIfSpeedReceive")
    {
        cieifspeedreceive.yfilter = yfilter;
    }
    if(value_path == "cieIfStateChangeReason")
    {
        cieifstatechangereason.yfilter = yfilter;
    }
    if(value_path == "cieIfTransceiverFrequencyConfig")
    {
        cieiftransceiverfrequencyconfig.yfilter = yfilter;
    }
}

bool CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cieIfCarrierTransitionCount" || name == "cieIfContextName" || name == "cieIfDhcpMode" || name == "cieIfFillPatternConfig" || name == "cieIfHighSpeedReceive" || name == "cieIfIgnoreBitErrorsConfig" || name == "cieIfIgnoreInterruptThresholdConfig" || name == "cieIfInterfaceDiscontinuityTime" || name == "cieIfKeepAliveEnabled" || name == "cieIfMtu" || name == "cieIfOperStatusCause" || name == "cieIfOperStatusCauseDescr" || name == "cieIfOwner" || name == "cieIfResetCount" || name == "cieIfSharedConfig" || name == "cieIfSpeedGroupConfig" || name == "cieIfSpeedReceive" || name == "cieIfStateChangeReason" || name == "cieIfTransceiverFrequencyConfig")
        return true;
    return false;
}

CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslisttable()
{
    yang_name = "cieIfStatusListTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB";
}

CiscoIfExtensionMib::Cieifstatuslisttable::~Cieifstatuslisttable()
{
}

bool CiscoIfExtensionMib::Cieifstatuslisttable::has_data() const
{
    for (std::size_t index=0; index<cieifstatuslistentry.size(); index++)
    {
        if(cieifstatuslistentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIfExtensionMib::Cieifstatuslisttable::has_operation() const
{
    for (std::size_t index=0; index<cieifstatuslistentry.size(); index++)
    {
        if(cieifstatuslistentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIfExtensionMib::Cieifstatuslisttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfStatusListTable";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifstatuslisttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifstatuslisttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfStatusListEntry")
    {
        for(auto const & c : cieifstatuslistentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry>();
        c->parent = this;
        cieifstatuslistentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifstatuslisttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cieifstatuslistentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIfExtensionMib::Cieifstatuslisttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIfExtensionMib::Cieifstatuslisttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIfExtensionMib::Cieifstatuslisttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cieIfStatusListEntry")
        return true;
    return false;
}

CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry::Cieifstatuslistentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cieifstatuslistindex{YType::uint32, "cieIfStatusListIndex"},
    cieinterfaceownershipbitmap{YType::str, "cieInterfaceOwnershipBitmap"},
    cieinterfacesindex{YType::str, "cieInterfacesIndex"},
    cieinterfacesopercause{YType::str, "cieInterfacesOperCause"},
    cieinterfacesopermode{YType::str, "cieInterfacesOperMode"}
{
    yang_name = "cieIfStatusListEntry"; yang_parent_name = "cieIfStatusListTable";
}

CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry::~Cieifstatuslistentry()
{
}

bool CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry::has_data() const
{
    return entphysicalindex.is_set
	|| cieifstatuslistindex.is_set
	|| cieinterfaceownershipbitmap.is_set
	|| cieinterfacesindex.is_set
	|| cieinterfacesopercause.is_set
	|| cieinterfacesopermode.is_set;
}

bool CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cieifstatuslistindex.yfilter)
	|| ydk::is_set(cieinterfaceownershipbitmap.yfilter)
	|| ydk::is_set(cieinterfacesindex.yfilter)
	|| ydk::is_set(cieinterfacesopercause.yfilter)
	|| ydk::is_set(cieinterfacesopermode.yfilter);
}

std::string CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfStatusListEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[cieIfStatusListIndex='" <<cieifstatuslistindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfStatusListTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cieifstatuslistindex.is_set || is_set(cieifstatuslistindex.yfilter)) leaf_name_data.push_back(cieifstatuslistindex.get_name_leafdata());
    if (cieinterfaceownershipbitmap.is_set || is_set(cieinterfaceownershipbitmap.yfilter)) leaf_name_data.push_back(cieinterfaceownershipbitmap.get_name_leafdata());
    if (cieinterfacesindex.is_set || is_set(cieinterfacesindex.yfilter)) leaf_name_data.push_back(cieinterfacesindex.get_name_leafdata());
    if (cieinterfacesopercause.is_set || is_set(cieinterfacesopercause.yfilter)) leaf_name_data.push_back(cieinterfacesopercause.get_name_leafdata());
    if (cieinterfacesopermode.is_set || is_set(cieinterfacesopermode.yfilter)) leaf_name_data.push_back(cieinterfacesopermode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfStatusListIndex")
    {
        cieifstatuslistindex = value;
        cieifstatuslistindex.value_namespace = name_space;
        cieifstatuslistindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieInterfaceOwnershipBitmap")
    {
        cieinterfaceownershipbitmap = value;
        cieinterfaceownershipbitmap.value_namespace = name_space;
        cieinterfaceownershipbitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieInterfacesIndex")
    {
        cieinterfacesindex = value;
        cieinterfacesindex.value_namespace = name_space;
        cieinterfacesindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieInterfacesOperCause")
    {
        cieinterfacesopercause = value;
        cieinterfacesopercause.value_namespace = name_space;
        cieinterfacesopercause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieInterfacesOperMode")
    {
        cieinterfacesopermode = value;
        cieinterfacesopermode.value_namespace = name_space;
        cieinterfacesopermode.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cieIfStatusListIndex")
    {
        cieifstatuslistindex.yfilter = yfilter;
    }
    if(value_path == "cieInterfaceOwnershipBitmap")
    {
        cieinterfaceownershipbitmap.yfilter = yfilter;
    }
    if(value_path == "cieInterfacesIndex")
    {
        cieinterfacesindex.yfilter = yfilter;
    }
    if(value_path == "cieInterfacesOperCause")
    {
        cieinterfacesopercause.yfilter = yfilter;
    }
    if(value_path == "cieInterfacesOperMode")
    {
        cieinterfacesopermode.yfilter = yfilter;
    }
}

bool CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cieIfStatusListIndex" || name == "cieInterfaceOwnershipBitmap" || name == "cieInterfacesIndex" || name == "cieInterfacesOperCause" || name == "cieInterfacesOperMode")
        return true;
    return false;
}

CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatstable()
{
    yang_name = "cieIfVlStatsTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB";
}

CiscoIfExtensionMib::Cieifvlstatstable::~Cieifvlstatstable()
{
}

bool CiscoIfExtensionMib::Cieifvlstatstable::has_data() const
{
    for (std::size_t index=0; index<cieifvlstatsentry.size(); index++)
    {
        if(cieifvlstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIfExtensionMib::Cieifvlstatstable::has_operation() const
{
    for (std::size_t index=0; index<cieifvlstatsentry.size(); index++)
    {
        if(cieifvlstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIfExtensionMib::Cieifvlstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfVlStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifvlstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifvlstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfVlStatsEntry")
    {
        for(auto const & c : cieifvlstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry>();
        c->parent = this;
        cieifvlstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifvlstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cieifvlstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIfExtensionMib::Cieifvlstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIfExtensionMib::Cieifvlstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIfExtensionMib::Cieifvlstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cieIfVlStatsEntry")
        return true;
    return false;
}

CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry::Cieifvlstatsentry()
    :
    ifindex{YType::str, "ifIndex"},
    cieifdropvlinoctets{YType::uint64, "cieIfDropVlInOctets"},
    cieifdropvlinpkts{YType::uint64, "cieIfDropVlInPkts"},
    cieifdropvloutoctets{YType::uint64, "cieIfDropVlOutOctets"},
    cieifdropvloutpkts{YType::uint64, "cieIfDropVlOutPkts"},
    cieifnodropvlinoctets{YType::uint64, "cieIfNoDropVlInOctets"},
    cieifnodropvlinpkts{YType::uint64, "cieIfNoDropVlInPkts"},
    cieifnodropvloutoctets{YType::uint64, "cieIfNoDropVlOutOctets"},
    cieifnodropvloutpkts{YType::uint64, "cieIfNoDropVlOutPkts"}
{
    yang_name = "cieIfVlStatsEntry"; yang_parent_name = "cieIfVlStatsTable";
}

CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry::~Cieifvlstatsentry()
{
}

bool CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry::has_data() const
{
    return ifindex.is_set
	|| cieifdropvlinoctets.is_set
	|| cieifdropvlinpkts.is_set
	|| cieifdropvloutoctets.is_set
	|| cieifdropvloutpkts.is_set
	|| cieifnodropvlinoctets.is_set
	|| cieifnodropvlinpkts.is_set
	|| cieifnodropvloutoctets.is_set
	|| cieifnodropvloutpkts.is_set;
}

bool CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cieifdropvlinoctets.yfilter)
	|| ydk::is_set(cieifdropvlinpkts.yfilter)
	|| ydk::is_set(cieifdropvloutoctets.yfilter)
	|| ydk::is_set(cieifdropvloutpkts.yfilter)
	|| ydk::is_set(cieifnodropvlinoctets.yfilter)
	|| ydk::is_set(cieifnodropvlinpkts.yfilter)
	|| ydk::is_set(cieifnodropvloutoctets.yfilter)
	|| ydk::is_set(cieifnodropvloutpkts.yfilter);
}

std::string CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfVlStatsEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfVlStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cieifdropvlinoctets.is_set || is_set(cieifdropvlinoctets.yfilter)) leaf_name_data.push_back(cieifdropvlinoctets.get_name_leafdata());
    if (cieifdropvlinpkts.is_set || is_set(cieifdropvlinpkts.yfilter)) leaf_name_data.push_back(cieifdropvlinpkts.get_name_leafdata());
    if (cieifdropvloutoctets.is_set || is_set(cieifdropvloutoctets.yfilter)) leaf_name_data.push_back(cieifdropvloutoctets.get_name_leafdata());
    if (cieifdropvloutpkts.is_set || is_set(cieifdropvloutpkts.yfilter)) leaf_name_data.push_back(cieifdropvloutpkts.get_name_leafdata());
    if (cieifnodropvlinoctets.is_set || is_set(cieifnodropvlinoctets.yfilter)) leaf_name_data.push_back(cieifnodropvlinoctets.get_name_leafdata());
    if (cieifnodropvlinpkts.is_set || is_set(cieifnodropvlinpkts.yfilter)) leaf_name_data.push_back(cieifnodropvlinpkts.get_name_leafdata());
    if (cieifnodropvloutoctets.is_set || is_set(cieifnodropvloutoctets.yfilter)) leaf_name_data.push_back(cieifnodropvloutoctets.get_name_leafdata());
    if (cieifnodropvloutpkts.is_set || is_set(cieifnodropvloutpkts.yfilter)) leaf_name_data.push_back(cieifnodropvloutpkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfDropVlInOctets")
    {
        cieifdropvlinoctets = value;
        cieifdropvlinoctets.value_namespace = name_space;
        cieifdropvlinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfDropVlInPkts")
    {
        cieifdropvlinpkts = value;
        cieifdropvlinpkts.value_namespace = name_space;
        cieifdropvlinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfDropVlOutOctets")
    {
        cieifdropvloutoctets = value;
        cieifdropvloutoctets.value_namespace = name_space;
        cieifdropvloutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfDropVlOutPkts")
    {
        cieifdropvloutpkts = value;
        cieifdropvloutpkts.value_namespace = name_space;
        cieifdropvloutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfNoDropVlInOctets")
    {
        cieifnodropvlinoctets = value;
        cieifnodropvlinoctets.value_namespace = name_space;
        cieifnodropvlinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfNoDropVlInPkts")
    {
        cieifnodropvlinpkts = value;
        cieifnodropvlinpkts.value_namespace = name_space;
        cieifnodropvlinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfNoDropVlOutOctets")
    {
        cieifnodropvloutoctets = value;
        cieifnodropvloutoctets.value_namespace = name_space;
        cieifnodropvloutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfNoDropVlOutPkts")
    {
        cieifnodropvloutpkts = value;
        cieifnodropvloutpkts.value_namespace = name_space;
        cieifnodropvloutpkts.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cieIfDropVlInOctets")
    {
        cieifdropvlinoctets.yfilter = yfilter;
    }
    if(value_path == "cieIfDropVlInPkts")
    {
        cieifdropvlinpkts.yfilter = yfilter;
    }
    if(value_path == "cieIfDropVlOutOctets")
    {
        cieifdropvloutoctets.yfilter = yfilter;
    }
    if(value_path == "cieIfDropVlOutPkts")
    {
        cieifdropvloutpkts.yfilter = yfilter;
    }
    if(value_path == "cieIfNoDropVlInOctets")
    {
        cieifnodropvlinoctets.yfilter = yfilter;
    }
    if(value_path == "cieIfNoDropVlInPkts")
    {
        cieifnodropvlinpkts.yfilter = yfilter;
    }
    if(value_path == "cieIfNoDropVlOutOctets")
    {
        cieifnodropvloutoctets.yfilter = yfilter;
    }
    if(value_path == "cieIfNoDropVlOutPkts")
    {
        cieifnodropvloutpkts.yfilter = yfilter;
    }
}

bool CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cieIfDropVlInOctets" || name == "cieIfDropVlInPkts" || name == "cieIfDropVlOutOctets" || name == "cieIfDropVlOutPkts" || name == "cieIfNoDropVlInOctets" || name == "cieIfNoDropVlInPkts" || name == "cieIfNoDropVlOutOctets" || name == "cieIfNoDropVlOutPkts")
        return true;
    return false;
}

CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistencetable()
{
    yang_name = "cieIfIndexPersistenceTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB";
}

CiscoIfExtensionMib::Cieifindexpersistencetable::~Cieifindexpersistencetable()
{
}

bool CiscoIfExtensionMib::Cieifindexpersistencetable::has_data() const
{
    for (std::size_t index=0; index<cieifindexpersistenceentry.size(); index++)
    {
        if(cieifindexpersistenceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIfExtensionMib::Cieifindexpersistencetable::has_operation() const
{
    for (std::size_t index=0; index<cieifindexpersistenceentry.size(); index++)
    {
        if(cieifindexpersistenceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIfExtensionMib::Cieifindexpersistencetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfIndexPersistenceTable";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifindexpersistencetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifindexpersistencetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfIndexPersistenceEntry")
    {
        for(auto const & c : cieifindexpersistenceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry>();
        c->parent = this;
        cieifindexpersistenceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifindexpersistencetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cieifindexpersistenceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIfExtensionMib::Cieifindexpersistencetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIfExtensionMib::Cieifindexpersistencetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIfExtensionMib::Cieifindexpersistencetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cieIfIndexPersistenceEntry")
        return true;
    return false;
}

CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry::Cieifindexpersistenceentry()
    :
    ifindex{YType::str, "ifIndex"},
    cieifindexpersistencecontrol{YType::enumeration, "cieIfIndexPersistenceControl"},
    cieifindexpersistenceenabled{YType::boolean, "cieIfIndexPersistenceEnabled"}
{
    yang_name = "cieIfIndexPersistenceEntry"; yang_parent_name = "cieIfIndexPersistenceTable";
}

CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry::~Cieifindexpersistenceentry()
{
}

bool CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry::has_data() const
{
    return ifindex.is_set
	|| cieifindexpersistencecontrol.is_set
	|| cieifindexpersistenceenabled.is_set;
}

bool CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cieifindexpersistencecontrol.yfilter)
	|| ydk::is_set(cieifindexpersistenceenabled.yfilter);
}

std::string CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfIndexPersistenceEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfIndexPersistenceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cieifindexpersistencecontrol.is_set || is_set(cieifindexpersistencecontrol.yfilter)) leaf_name_data.push_back(cieifindexpersistencecontrol.get_name_leafdata());
    if (cieifindexpersistenceenabled.is_set || is_set(cieifindexpersistenceenabled.yfilter)) leaf_name_data.push_back(cieifindexpersistenceenabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfIndexPersistenceControl")
    {
        cieifindexpersistencecontrol = value;
        cieifindexpersistencecontrol.value_namespace = name_space;
        cieifindexpersistencecontrol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfIndexPersistenceEnabled")
    {
        cieifindexpersistenceenabled = value;
        cieifindexpersistenceenabled.value_namespace = name_space;
        cieifindexpersistenceenabled.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cieIfIndexPersistenceControl")
    {
        cieifindexpersistencecontrol.yfilter = yfilter;
    }
    if(value_path == "cieIfIndexPersistenceEnabled")
    {
        cieifindexpersistenceenabled.yfilter = yfilter;
    }
}

bool CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cieIfIndexPersistenceControl" || name == "cieIfIndexPersistenceEnabled")
        return true;
    return false;
}

CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypetable()
{
    yang_name = "cieIfDot1qCustomEtherTypeTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB";
}

CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::~Cieifdot1Qcustomethertypetable()
{
}

bool CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::has_data() const
{
    for (std::size_t index=0; index<cieifdot1qcustomethertypeentry.size(); index++)
    {
        if(cieifdot1qcustomethertypeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::has_operation() const
{
    for (std::size_t index=0; index<cieifdot1qcustomethertypeentry.size(); index++)
    {
        if(cieifdot1qcustomethertypeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfDot1qCustomEtherTypeTable";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfDot1qCustomEtherTypeEntry")
    {
        for(auto const & c : cieifdot1qcustomethertypeentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry>();
        c->parent = this;
        cieifdot1qcustomethertypeentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cieifdot1qcustomethertypeentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cieIfDot1qCustomEtherTypeEntry")
        return true;
    return false;
}

CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry::Cieifdot1Qcustomethertypeentry()
    :
    ifindex{YType::str, "ifIndex"},
    cieifdot1qcustomadminethertype{YType::int32, "cieIfDot1qCustomAdminEtherType"},
    cieifdot1qcustomoperethertype{YType::int32, "cieIfDot1qCustomOperEtherType"}
{
    yang_name = "cieIfDot1qCustomEtherTypeEntry"; yang_parent_name = "cieIfDot1qCustomEtherTypeTable";
}

CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry::~Cieifdot1Qcustomethertypeentry()
{
}

bool CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry::has_data() const
{
    return ifindex.is_set
	|| cieifdot1qcustomadminethertype.is_set
	|| cieifdot1qcustomoperethertype.is_set;
}

bool CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cieifdot1qcustomadminethertype.yfilter)
	|| ydk::is_set(cieifdot1qcustomoperethertype.yfilter);
}

std::string CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfDot1qCustomEtherTypeEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfDot1qCustomEtherTypeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cieifdot1qcustomadminethertype.is_set || is_set(cieifdot1qcustomadminethertype.yfilter)) leaf_name_data.push_back(cieifdot1qcustomadminethertype.get_name_leafdata());
    if (cieifdot1qcustomoperethertype.is_set || is_set(cieifdot1qcustomoperethertype.yfilter)) leaf_name_data.push_back(cieifdot1qcustomoperethertype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfDot1qCustomAdminEtherType")
    {
        cieifdot1qcustomadminethertype = value;
        cieifdot1qcustomadminethertype.value_namespace = name_space;
        cieifdot1qcustomadminethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfDot1qCustomOperEtherType")
    {
        cieifdot1qcustomoperethertype = value;
        cieifdot1qcustomoperethertype.value_namespace = name_space;
        cieifdot1qcustomoperethertype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cieIfDot1qCustomAdminEtherType")
    {
        cieifdot1qcustomadminethertype.yfilter = yfilter;
    }
    if(value_path == "cieIfDot1qCustomOperEtherType")
    {
        cieifdot1qcustomoperethertype.yfilter = yfilter;
    }
}

bool CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cieIfDot1qCustomAdminEtherType" || name == "cieIfDot1qCustomOperEtherType")
        return true;
    return false;
}

CiscoIfExtensionMib::Cieifutiltable::Cieifutiltable()
{
    yang_name = "cieIfUtilTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB";
}

CiscoIfExtensionMib::Cieifutiltable::~Cieifutiltable()
{
}

bool CiscoIfExtensionMib::Cieifutiltable::has_data() const
{
    for (std::size_t index=0; index<cieifutilentry.size(); index++)
    {
        if(cieifutilentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIfExtensionMib::Cieifutiltable::has_operation() const
{
    for (std::size_t index=0; index<cieifutilentry.size(); index++)
    {
        if(cieifutilentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIfExtensionMib::Cieifutiltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfUtilTable";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifutiltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifutiltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfUtilEntry")
    {
        for(auto const & c : cieifutilentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry>();
        c->parent = this;
        cieifutilentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifutiltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cieifutilentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIfExtensionMib::Cieifutiltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIfExtensionMib::Cieifutiltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIfExtensionMib::Cieifutiltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cieIfUtilEntry")
        return true;
    return false;
}

CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry::Cieifutilentry()
    :
    ifindex{YType::str, "ifIndex"},
    cieifinoctetrate{YType::uint64, "cieIfInOctetRate"},
    cieifinpktrate{YType::uint64, "cieIfInPktRate"},
    cieifinterval{YType::uint32, "cieIfInterval"},
    cieifoutoctetrate{YType::uint64, "cieIfOutOctetRate"},
    cieifoutpktrate{YType::uint64, "cieIfOutPktRate"}
{
    yang_name = "cieIfUtilEntry"; yang_parent_name = "cieIfUtilTable";
}

CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry::~Cieifutilentry()
{
}

bool CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry::has_data() const
{
    return ifindex.is_set
	|| cieifinoctetrate.is_set
	|| cieifinpktrate.is_set
	|| cieifinterval.is_set
	|| cieifoutoctetrate.is_set
	|| cieifoutpktrate.is_set;
}

bool CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cieifinoctetrate.yfilter)
	|| ydk::is_set(cieifinpktrate.yfilter)
	|| ydk::is_set(cieifinterval.yfilter)
	|| ydk::is_set(cieifoutoctetrate.yfilter)
	|| ydk::is_set(cieifoutpktrate.yfilter);
}

std::string CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfUtilEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfUtilTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cieifinoctetrate.is_set || is_set(cieifinoctetrate.yfilter)) leaf_name_data.push_back(cieifinoctetrate.get_name_leafdata());
    if (cieifinpktrate.is_set || is_set(cieifinpktrate.yfilter)) leaf_name_data.push_back(cieifinpktrate.get_name_leafdata());
    if (cieifinterval.is_set || is_set(cieifinterval.yfilter)) leaf_name_data.push_back(cieifinterval.get_name_leafdata());
    if (cieifoutoctetrate.is_set || is_set(cieifoutoctetrate.yfilter)) leaf_name_data.push_back(cieifoutoctetrate.get_name_leafdata());
    if (cieifoutpktrate.is_set || is_set(cieifoutpktrate.yfilter)) leaf_name_data.push_back(cieifoutpktrate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfInOctetRate")
    {
        cieifinoctetrate = value;
        cieifinoctetrate.value_namespace = name_space;
        cieifinoctetrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfInPktRate")
    {
        cieifinpktrate = value;
        cieifinpktrate.value_namespace = name_space;
        cieifinpktrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfInterval")
    {
        cieifinterval = value;
        cieifinterval.value_namespace = name_space;
        cieifinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfOutOctetRate")
    {
        cieifoutoctetrate = value;
        cieifoutoctetrate.value_namespace = name_space;
        cieifoutoctetrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfOutPktRate")
    {
        cieifoutpktrate = value;
        cieifoutpktrate.value_namespace = name_space;
        cieifoutpktrate.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cieIfInOctetRate")
    {
        cieifinoctetrate.yfilter = yfilter;
    }
    if(value_path == "cieIfInPktRate")
    {
        cieifinpktrate.yfilter = yfilter;
    }
    if(value_path == "cieIfInterval")
    {
        cieifinterval.yfilter = yfilter;
    }
    if(value_path == "cieIfOutOctetRate")
    {
        cieifoutoctetrate.yfilter = yfilter;
    }
    if(value_path == "cieIfOutPktRate")
    {
        cieifoutpktrate.yfilter = yfilter;
    }
}

bool CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cieIfInOctetRate" || name == "cieIfInPktRate" || name == "cieIfInterval" || name == "cieIfOutOctetRate" || name == "cieIfOutPktRate")
        return true;
    return false;
}

CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingtable()
{
    yang_name = "cieIfDot1dBaseMappingTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB";
}

CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::~Cieifdot1Dbasemappingtable()
{
}

bool CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::has_data() const
{
    for (std::size_t index=0; index<cieifdot1dbasemappingentry.size(); index++)
    {
        if(cieifdot1dbasemappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::has_operation() const
{
    for (std::size_t index=0; index<cieifdot1dbasemappingentry.size(); index++)
    {
        if(cieifdot1dbasemappingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfDot1dBaseMappingTable";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfDot1dBaseMappingEntry")
    {
        for(auto const & c : cieifdot1dbasemappingentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry>();
        c->parent = this;
        cieifdot1dbasemappingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cieifdot1dbasemappingentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cieIfDot1dBaseMappingEntry")
        return true;
    return false;
}

CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry::Cieifdot1Dbasemappingentry()
    :
    ifindex{YType::str, "ifIndex"},
    cieifdot1dbasemappingport{YType::int32, "cieIfDot1dBaseMappingPort"}
{
    yang_name = "cieIfDot1dBaseMappingEntry"; yang_parent_name = "cieIfDot1dBaseMappingTable";
}

CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry::~Cieifdot1Dbasemappingentry()
{
}

bool CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry::has_data() const
{
    return ifindex.is_set
	|| cieifdot1dbasemappingport.is_set;
}

bool CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cieifdot1dbasemappingport.yfilter);
}

std::string CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfDot1dBaseMappingEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfDot1dBaseMappingTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cieifdot1dbasemappingport.is_set || is_set(cieifdot1dbasemappingport.yfilter)) leaf_name_data.push_back(cieifdot1dbasemappingport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfDot1dBaseMappingPort")
    {
        cieifdot1dbasemappingport = value;
        cieifdot1dbasemappingport.value_namespace = name_space;
        cieifdot1dbasemappingport.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cieIfDot1dBaseMappingPort")
    {
        cieifdot1dbasemappingport.yfilter = yfilter;
    }
}

bool CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cieIfDot1dBaseMappingPort")
        return true;
    return false;
}

CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingtable()
{
    yang_name = "cieIfNameMappingTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB";
}

CiscoIfExtensionMib::Cieifnamemappingtable::~Cieifnamemappingtable()
{
}

bool CiscoIfExtensionMib::Cieifnamemappingtable::has_data() const
{
    for (std::size_t index=0; index<cieifnamemappingentry.size(); index++)
    {
        if(cieifnamemappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIfExtensionMib::Cieifnamemappingtable::has_operation() const
{
    for (std::size_t index=0; index<cieifnamemappingentry.size(); index++)
    {
        if(cieifnamemappingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIfExtensionMib::Cieifnamemappingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfNameMappingTable";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifnamemappingtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifnamemappingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfNameMappingEntry")
    {
        for(auto const & c : cieifnamemappingentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry>();
        c->parent = this;
        cieifnamemappingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifnamemappingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cieifnamemappingentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIfExtensionMib::Cieifnamemappingtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIfExtensionMib::Cieifnamemappingtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIfExtensionMib::Cieifnamemappingtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cieIfNameMappingEntry")
        return true;
    return false;
}

CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry::Cieifnamemappingentry()
    :
    cieifname{YType::str, "cieIfName"},
    cieifindex{YType::int32, "cieIfIndex"}
{
    yang_name = "cieIfNameMappingEntry"; yang_parent_name = "cieIfNameMappingTable";
}

CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry::~Cieifnamemappingentry()
{
}

bool CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry::has_data() const
{
    return cieifname.is_set
	|| cieifindex.is_set;
}

bool CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cieifname.yfilter)
	|| ydk::is_set(cieifindex.yfilter);
}

std::string CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfNameMappingEntry" <<"[cieIfName='" <<cieifname <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfNameMappingTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cieifname.is_set || is_set(cieifname.yfilter)) leaf_name_data.push_back(cieifname.get_name_leafdata());
    if (cieifindex.is_set || is_set(cieifindex.yfilter)) leaf_name_data.push_back(cieifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cieIfName")
    {
        cieifname = value;
        cieifname.value_namespace = name_space;
        cieifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfIndex")
    {
        cieifindex = value;
        cieifindex.value_namespace = name_space;
        cieifindex.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cieIfName")
    {
        cieifname.yfilter = yfilter;
    }
    if(value_path == "cieIfIndex")
    {
        cieifindex.yfilter = yfilter;
    }
}

bool CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cieIfName" || name == "cieIfIndex")
        return true;
    return false;
}

const Enum::YLeaf Ifindexpersistencestate::disable {1, "disable"};
const Enum::YLeaf Ifindexpersistencestate::enable {2, "enable"};
const Enum::YLeaf Ifindexpersistencestate::global {3, "global"};

const Enum::YLeaf CiscoIfExtensionMib::Ciscoifextsystemconfig::Ciestandardlinkupdownvarbinds::standard {1, "standard"};
const Enum::YLeaf CiscoIfExtensionMib::Ciscoifextsystemconfig::Ciestandardlinkupdownvarbinds::additional {2, "additional"};
const Enum::YLeaf CiscoIfExtensionMib::Ciscoifextsystemconfig::Ciestandardlinkupdownvarbinds::other {3, "other"};

const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::Cieifsharedconfig::notApplicable {1, "notApplicable"};
const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::Cieifsharedconfig::ownerDedicated {2, "ownerDedicated"};
const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::Cieifsharedconfig::ownerShared {3, "ownerShared"};
const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::Cieifsharedconfig::sharedOnly {4, "sharedOnly"};

const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::Cieifspeedgroupconfig::notApplicable {1, "notApplicable"};
const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::Cieifspeedgroupconfig::tenG {2, "tenG"};
const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::Cieifspeedgroupconfig::oneTwoFourEightG {3, "oneTwoFourEightG"};
const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::Cieifspeedgroupconfig::twoFourEightSixteenG {4, "twoFourEightSixteenG"};

const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::Cieiftransceiverfrequencyconfig::notApplicable {1, "notApplicable"};
const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::Cieiftransceiverfrequencyconfig::fibreChannel {2, "fibreChannel"};
const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::Cieiftransceiverfrequencyconfig::ethernet {3, "ethernet"};

const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::Cieiffillpatternconfig::arbff8G {1, "arbff8G"};
const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::Cieiffillpatternconfig::idle8G {2, "idle8G"};


}
}
