
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_QOS_PIB_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_QOS_PIB_MIB {

CiscoQosPibMib::CiscoQosPibMib()
    :
    qosaggregatetable(std::make_shared<CiscoQosPibMib::Qosaggregatetable>())
	,qoscostodscptable(std::make_shared<CiscoQosPibMib::Qoscostodscptable>())
	,qosdeviceattributetable(std::make_shared<CiscoQosPibMib::Qosdeviceattributetable>())
	,qosdevicepibincarnationtable(std::make_shared<CiscoQosPibMib::Qosdevicepibincarnationtable>())
	,qosdiffservmappingtable(std::make_shared<CiscoQosPibMib::Qosdiffservmappingtable>())
	,qosifdroppreferencetable(std::make_shared<CiscoQosPibMib::Qosifdroppreferencetable>())
	,qosifdscpassignmenttable(std::make_shared<CiscoQosPibMib::Qosifdscpassignmenttable>())
	,qosifredtable(std::make_shared<CiscoQosPibMib::Qosifredtable>())
	,qosifschedulingpreferencestable(std::make_shared<CiscoQosPibMib::Qosifschedulingpreferencestable>())
	,qosiftaildroptable(std::make_shared<CiscoQosPibMib::Qosiftaildroptable>())
	,qosifweightstable(std::make_shared<CiscoQosPibMib::Qosifweightstable>())
	,qosinterfacetypetable(std::make_shared<CiscoQosPibMib::Qosinterfacetypetable>())
	,qosipacetable(std::make_shared<CiscoQosPibMib::Qosipacetable>())
	,qosipaclactiontable(std::make_shared<CiscoQosPibMib::Qosipaclactiontable>())
	,qosipacldefinitiontable(std::make_shared<CiscoQosPibMib::Qosipacldefinitiontable>())
	,qosmacclassificationtable(std::make_shared<CiscoQosPibMib::Qosmacclassificationtable>())
	,qospolicertable(std::make_shared<CiscoQosPibMib::Qospolicertable>())
	,qosunmatchedpolicytable(std::make_shared<CiscoQosPibMib::Qosunmatchedpolicytable>())
{
    qosaggregatetable->parent = this;

    qoscostodscptable->parent = this;

    qosdeviceattributetable->parent = this;

    qosdevicepibincarnationtable->parent = this;

    qosdiffservmappingtable->parent = this;

    qosifdroppreferencetable->parent = this;

    qosifdscpassignmenttable->parent = this;

    qosifredtable->parent = this;

    qosifschedulingpreferencestable->parent = this;

    qosiftaildroptable->parent = this;

    qosifweightstable->parent = this;

    qosinterfacetypetable->parent = this;

    qosipacetable->parent = this;

    qosipaclactiontable->parent = this;

    qosipacldefinitiontable->parent = this;

    qosmacclassificationtable->parent = this;

    qospolicertable->parent = this;

    qosunmatchedpolicytable->parent = this;

    yang_name = "CISCO-QOS-PIB-MIB"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::~CiscoQosPibMib()
{
}

bool CiscoQosPibMib::has_data() const
{
    return (qosaggregatetable !=  nullptr && qosaggregatetable->has_data())
	|| (qoscostodscptable !=  nullptr && qoscostodscptable->has_data())
	|| (qosdeviceattributetable !=  nullptr && qosdeviceattributetable->has_data())
	|| (qosdevicepibincarnationtable !=  nullptr && qosdevicepibincarnationtable->has_data())
	|| (qosdiffservmappingtable !=  nullptr && qosdiffservmappingtable->has_data())
	|| (qosifdroppreferencetable !=  nullptr && qosifdroppreferencetable->has_data())
	|| (qosifdscpassignmenttable !=  nullptr && qosifdscpassignmenttable->has_data())
	|| (qosifredtable !=  nullptr && qosifredtable->has_data())
	|| (qosifschedulingpreferencestable !=  nullptr && qosifschedulingpreferencestable->has_data())
	|| (qosiftaildroptable !=  nullptr && qosiftaildroptable->has_data())
	|| (qosifweightstable !=  nullptr && qosifweightstable->has_data())
	|| (qosinterfacetypetable !=  nullptr && qosinterfacetypetable->has_data())
	|| (qosipacetable !=  nullptr && qosipacetable->has_data())
	|| (qosipaclactiontable !=  nullptr && qosipaclactiontable->has_data())
	|| (qosipacldefinitiontable !=  nullptr && qosipacldefinitiontable->has_data())
	|| (qosmacclassificationtable !=  nullptr && qosmacclassificationtable->has_data())
	|| (qospolicertable !=  nullptr && qospolicertable->has_data())
	|| (qosunmatchedpolicytable !=  nullptr && qosunmatchedpolicytable->has_data());
}

bool CiscoQosPibMib::has_operation() const
{
    return is_set(yfilter)
	|| (qosaggregatetable !=  nullptr && qosaggregatetable->has_operation())
	|| (qoscostodscptable !=  nullptr && qoscostodscptable->has_operation())
	|| (qosdeviceattributetable !=  nullptr && qosdeviceattributetable->has_operation())
	|| (qosdevicepibincarnationtable !=  nullptr && qosdevicepibincarnationtable->has_operation())
	|| (qosdiffservmappingtable !=  nullptr && qosdiffservmappingtable->has_operation())
	|| (qosifdroppreferencetable !=  nullptr && qosifdroppreferencetable->has_operation())
	|| (qosifdscpassignmenttable !=  nullptr && qosifdscpassignmenttable->has_operation())
	|| (qosifredtable !=  nullptr && qosifredtable->has_operation())
	|| (qosifschedulingpreferencestable !=  nullptr && qosifschedulingpreferencestable->has_operation())
	|| (qosiftaildroptable !=  nullptr && qosiftaildroptable->has_operation())
	|| (qosifweightstable !=  nullptr && qosifweightstable->has_operation())
	|| (qosinterfacetypetable !=  nullptr && qosinterfacetypetable->has_operation())
	|| (qosipacetable !=  nullptr && qosipacetable->has_operation())
	|| (qosipaclactiontable !=  nullptr && qosipaclactiontable->has_operation())
	|| (qosipacldefinitiontable !=  nullptr && qosipacldefinitiontable->has_operation())
	|| (qosmacclassificationtable !=  nullptr && qosmacclassificationtable->has_operation())
	|| (qospolicertable !=  nullptr && qospolicertable->has_operation())
	|| (qosunmatchedpolicytable !=  nullptr && qosunmatchedpolicytable->has_operation());
}

std::string CiscoQosPibMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoQosPibMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosAggregateTable")
    {
        if(qosaggregatetable == nullptr)
        {
            qosaggregatetable = std::make_shared<CiscoQosPibMib::Qosaggregatetable>();
        }
        return qosaggregatetable;
    }

    if(child_yang_name == "qosCosToDscpTable")
    {
        if(qoscostodscptable == nullptr)
        {
            qoscostodscptable = std::make_shared<CiscoQosPibMib::Qoscostodscptable>();
        }
        return qoscostodscptable;
    }

    if(child_yang_name == "qosDeviceAttributeTable")
    {
        if(qosdeviceattributetable == nullptr)
        {
            qosdeviceattributetable = std::make_shared<CiscoQosPibMib::Qosdeviceattributetable>();
        }
        return qosdeviceattributetable;
    }

    if(child_yang_name == "qosDevicePibIncarnationTable")
    {
        if(qosdevicepibincarnationtable == nullptr)
        {
            qosdevicepibincarnationtable = std::make_shared<CiscoQosPibMib::Qosdevicepibincarnationtable>();
        }
        return qosdevicepibincarnationtable;
    }

    if(child_yang_name == "qosDiffServMappingTable")
    {
        if(qosdiffservmappingtable == nullptr)
        {
            qosdiffservmappingtable = std::make_shared<CiscoQosPibMib::Qosdiffservmappingtable>();
        }
        return qosdiffservmappingtable;
    }

    if(child_yang_name == "qosIfDropPreferenceTable")
    {
        if(qosifdroppreferencetable == nullptr)
        {
            qosifdroppreferencetable = std::make_shared<CiscoQosPibMib::Qosifdroppreferencetable>();
        }
        return qosifdroppreferencetable;
    }

    if(child_yang_name == "qosIfDscpAssignmentTable")
    {
        if(qosifdscpassignmenttable == nullptr)
        {
            qosifdscpassignmenttable = std::make_shared<CiscoQosPibMib::Qosifdscpassignmenttable>();
        }
        return qosifdscpassignmenttable;
    }

    if(child_yang_name == "qosIfRedTable")
    {
        if(qosifredtable == nullptr)
        {
            qosifredtable = std::make_shared<CiscoQosPibMib::Qosifredtable>();
        }
        return qosifredtable;
    }

    if(child_yang_name == "qosIfSchedulingPreferencesTable")
    {
        if(qosifschedulingpreferencestable == nullptr)
        {
            qosifschedulingpreferencestable = std::make_shared<CiscoQosPibMib::Qosifschedulingpreferencestable>();
        }
        return qosifschedulingpreferencestable;
    }

    if(child_yang_name == "qosIfTailDropTable")
    {
        if(qosiftaildroptable == nullptr)
        {
            qosiftaildroptable = std::make_shared<CiscoQosPibMib::Qosiftaildroptable>();
        }
        return qosiftaildroptable;
    }

    if(child_yang_name == "qosIfWeightsTable")
    {
        if(qosifweightstable == nullptr)
        {
            qosifweightstable = std::make_shared<CiscoQosPibMib::Qosifweightstable>();
        }
        return qosifweightstable;
    }

    if(child_yang_name == "qosInterfaceTypeTable")
    {
        if(qosinterfacetypetable == nullptr)
        {
            qosinterfacetypetable = std::make_shared<CiscoQosPibMib::Qosinterfacetypetable>();
        }
        return qosinterfacetypetable;
    }

    if(child_yang_name == "qosIpAceTable")
    {
        if(qosipacetable == nullptr)
        {
            qosipacetable = std::make_shared<CiscoQosPibMib::Qosipacetable>();
        }
        return qosipacetable;
    }

    if(child_yang_name == "qosIpAclActionTable")
    {
        if(qosipaclactiontable == nullptr)
        {
            qosipaclactiontable = std::make_shared<CiscoQosPibMib::Qosipaclactiontable>();
        }
        return qosipaclactiontable;
    }

    if(child_yang_name == "qosIpAclDefinitionTable")
    {
        if(qosipacldefinitiontable == nullptr)
        {
            qosipacldefinitiontable = std::make_shared<CiscoQosPibMib::Qosipacldefinitiontable>();
        }
        return qosipacldefinitiontable;
    }

    if(child_yang_name == "qosMacClassificationTable")
    {
        if(qosmacclassificationtable == nullptr)
        {
            qosmacclassificationtable = std::make_shared<CiscoQosPibMib::Qosmacclassificationtable>();
        }
        return qosmacclassificationtable;
    }

    if(child_yang_name == "qosPolicerTable")
    {
        if(qospolicertable == nullptr)
        {
            qospolicertable = std::make_shared<CiscoQosPibMib::Qospolicertable>();
        }
        return qospolicertable;
    }

    if(child_yang_name == "qosUnmatchedPolicyTable")
    {
        if(qosunmatchedpolicytable == nullptr)
        {
            qosunmatchedpolicytable = std::make_shared<CiscoQosPibMib::Qosunmatchedpolicytable>();
        }
        return qosunmatchedpolicytable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(qosaggregatetable != nullptr)
    {
        children["qosAggregateTable"] = qosaggregatetable;
    }

    if(qoscostodscptable != nullptr)
    {
        children["qosCosToDscpTable"] = qoscostodscptable;
    }

    if(qosdeviceattributetable != nullptr)
    {
        children["qosDeviceAttributeTable"] = qosdeviceattributetable;
    }

    if(qosdevicepibincarnationtable != nullptr)
    {
        children["qosDevicePibIncarnationTable"] = qosdevicepibincarnationtable;
    }

    if(qosdiffservmappingtable != nullptr)
    {
        children["qosDiffServMappingTable"] = qosdiffservmappingtable;
    }

    if(qosifdroppreferencetable != nullptr)
    {
        children["qosIfDropPreferenceTable"] = qosifdroppreferencetable;
    }

    if(qosifdscpassignmenttable != nullptr)
    {
        children["qosIfDscpAssignmentTable"] = qosifdscpassignmenttable;
    }

    if(qosifredtable != nullptr)
    {
        children["qosIfRedTable"] = qosifredtable;
    }

    if(qosifschedulingpreferencestable != nullptr)
    {
        children["qosIfSchedulingPreferencesTable"] = qosifschedulingpreferencestable;
    }

    if(qosiftaildroptable != nullptr)
    {
        children["qosIfTailDropTable"] = qosiftaildroptable;
    }

    if(qosifweightstable != nullptr)
    {
        children["qosIfWeightsTable"] = qosifweightstable;
    }

    if(qosinterfacetypetable != nullptr)
    {
        children["qosInterfaceTypeTable"] = qosinterfacetypetable;
    }

    if(qosipacetable != nullptr)
    {
        children["qosIpAceTable"] = qosipacetable;
    }

    if(qosipaclactiontable != nullptr)
    {
        children["qosIpAclActionTable"] = qosipaclactiontable;
    }

    if(qosipacldefinitiontable != nullptr)
    {
        children["qosIpAclDefinitionTable"] = qosipacldefinitiontable;
    }

    if(qosmacclassificationtable != nullptr)
    {
        children["qosMacClassificationTable"] = qosmacclassificationtable;
    }

    if(qospolicertable != nullptr)
    {
        children["qosPolicerTable"] = qospolicertable;
    }

    if(qosunmatchedpolicytable != nullptr)
    {
        children["qosUnmatchedPolicyTable"] = qosunmatchedpolicytable;
    }

    return children;
}

void CiscoQosPibMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoQosPibMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoQosPibMib::clone_ptr() const
{
    return std::make_shared<CiscoQosPibMib>();
}

std::string CiscoQosPibMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoQosPibMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoQosPibMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoQosPibMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoQosPibMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosAggregateTable" || name == "qosCosToDscpTable" || name == "qosDeviceAttributeTable" || name == "qosDevicePibIncarnationTable" || name == "qosDiffServMappingTable" || name == "qosIfDropPreferenceTable" || name == "qosIfDscpAssignmentTable" || name == "qosIfRedTable" || name == "qosIfSchedulingPreferencesTable" || name == "qosIfTailDropTable" || name == "qosIfWeightsTable" || name == "qosInterfaceTypeTable" || name == "qosIpAceTable" || name == "qosIpAclActionTable" || name == "qosIpAclDefinitionTable" || name == "qosMacClassificationTable" || name == "qosPolicerTable" || name == "qosUnmatchedPolicyTable")
        return true;
    return false;
}

CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationtable()
{
    yang_name = "qosDevicePibIncarnationTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosdevicepibincarnationtable::~Qosdevicepibincarnationtable()
{
}

bool CiscoQosPibMib::Qosdevicepibincarnationtable::has_data() const
{
    for (std::size_t index=0; index<qosdevicepibincarnationentry.size(); index++)
    {
        if(qosdevicepibincarnationentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosdevicepibincarnationtable::has_operation() const
{
    for (std::size_t index=0; index<qosdevicepibincarnationentry.size(); index++)
    {
        if(qosdevicepibincarnationentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoQosPibMib::Qosdevicepibincarnationtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosDevicePibIncarnationTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosdevicepibincarnationtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosdevicepibincarnationtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosDevicePibIncarnationEntry")
    {
        for(auto const & c : qosdevicepibincarnationentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry>();
        c->parent = this;
        qosdevicepibincarnationentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosdevicepibincarnationtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosdevicepibincarnationentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosdevicepibincarnationtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoQosPibMib::Qosdevicepibincarnationtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoQosPibMib::Qosdevicepibincarnationtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosDevicePibIncarnationEntry")
        return true;
    return false;
}

CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry::Qosdevicepibincarnationentry()
    :
    qosdeviceincarnationid{YType::uint32, "qosDeviceIncarnationId"},
    qosdevicepdpname{YType::str, "qosDevicePdpName"},
    qosdevicepibincarnation{YType::str, "qosDevicePibIncarnation"},
    qosdevicepibttl{YType::uint32, "qosDevicePibTtl"}
{
    yang_name = "qosDevicePibIncarnationEntry"; yang_parent_name = "qosDevicePibIncarnationTable";
}

CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry::~Qosdevicepibincarnationentry()
{
}

bool CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry::has_data() const
{
    return qosdeviceincarnationid.is_set
	|| qosdevicepdpname.is_set
	|| qosdevicepibincarnation.is_set
	|| qosdevicepibttl.is_set;
}

bool CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosdeviceincarnationid.yfilter)
	|| ydk::is_set(qosdevicepdpname.yfilter)
	|| ydk::is_set(qosdevicepibincarnation.yfilter)
	|| ydk::is_set(qosdevicepibttl.yfilter);
}

std::string CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosDevicePibIncarnationEntry" <<"[qosDeviceIncarnationId='" <<qosdeviceincarnationid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosDevicePibIncarnationTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosdeviceincarnationid.is_set || is_set(qosdeviceincarnationid.yfilter)) leaf_name_data.push_back(qosdeviceincarnationid.get_name_leafdata());
    if (qosdevicepdpname.is_set || is_set(qosdevicepdpname.yfilter)) leaf_name_data.push_back(qosdevicepdpname.get_name_leafdata());
    if (qosdevicepibincarnation.is_set || is_set(qosdevicepibincarnation.yfilter)) leaf_name_data.push_back(qosdevicepibincarnation.get_name_leafdata());
    if (qosdevicepibttl.is_set || is_set(qosdevicepibttl.yfilter)) leaf_name_data.push_back(qosdevicepibttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosDeviceIncarnationId")
    {
        qosdeviceincarnationid = value;
        qosdeviceincarnationid.value_namespace = name_space;
        qosdeviceincarnationid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosDevicePdpName")
    {
        qosdevicepdpname = value;
        qosdevicepdpname.value_namespace = name_space;
        qosdevicepdpname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosDevicePibIncarnation")
    {
        qosdevicepibincarnation = value;
        qosdevicepibincarnation.value_namespace = name_space;
        qosdevicepibincarnation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosDevicePibTtl")
    {
        qosdevicepibttl = value;
        qosdevicepibttl.value_namespace = name_space;
        qosdevicepibttl.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosDeviceIncarnationId")
    {
        qosdeviceincarnationid.yfilter = yfilter;
    }
    if(value_path == "qosDevicePdpName")
    {
        qosdevicepdpname.yfilter = yfilter;
    }
    if(value_path == "qosDevicePibIncarnation")
    {
        qosdevicepibincarnation.yfilter = yfilter;
    }
    if(value_path == "qosDevicePibTtl")
    {
        qosdevicepibttl.yfilter = yfilter;
    }
}

bool CiscoQosPibMib::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosDeviceIncarnationId" || name == "qosDevicePdpName" || name == "qosDevicePibIncarnation" || name == "qosDevicePibTtl")
        return true;
    return false;
}

CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributetable()
{
    yang_name = "qosDeviceAttributeTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosdeviceattributetable::~Qosdeviceattributetable()
{
}

bool CiscoQosPibMib::Qosdeviceattributetable::has_data() const
{
    for (std::size_t index=0; index<qosdeviceattributeentry.size(); index++)
    {
        if(qosdeviceattributeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosdeviceattributetable::has_operation() const
{
    for (std::size_t index=0; index<qosdeviceattributeentry.size(); index++)
    {
        if(qosdeviceattributeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoQosPibMib::Qosdeviceattributetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosDeviceAttributeTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosdeviceattributetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosdeviceattributetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosDeviceAttributeEntry")
    {
        for(auto const & c : qosdeviceattributeentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry>();
        c->parent = this;
        qosdeviceattributeentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosdeviceattributetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosdeviceattributeentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosdeviceattributetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoQosPibMib::Qosdeviceattributetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoQosPibMib::Qosdeviceattributetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosDeviceAttributeEntry")
        return true;
    return false;
}

CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry::Qosdeviceattributeentry()
    :
    qosdeviceattributeid{YType::uint32, "qosDeviceAttributeId"},
    qosdevicecapabilities{YType::bits, "qosDeviceCapabilities"},
    qosdevicemaxmessagesize{YType::uint32, "qosDeviceMaxMessageSize"},
    qosdevicepepdomain{YType::str, "qosDevicePepDomain"},
    qosdeviceprimarypdp{YType::str, "qosDevicePrimaryPdp"},
    qosdevicesecondarypdp{YType::str, "qosDeviceSecondaryPdp"}
{
    yang_name = "qosDeviceAttributeEntry"; yang_parent_name = "qosDeviceAttributeTable";
}

CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry::~Qosdeviceattributeentry()
{
}

bool CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry::has_data() const
{
    return qosdeviceattributeid.is_set
	|| qosdevicecapabilities.is_set
	|| qosdevicemaxmessagesize.is_set
	|| qosdevicepepdomain.is_set
	|| qosdeviceprimarypdp.is_set
	|| qosdevicesecondarypdp.is_set;
}

bool CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosdeviceattributeid.yfilter)
	|| ydk::is_set(qosdevicecapabilities.yfilter)
	|| ydk::is_set(qosdevicemaxmessagesize.yfilter)
	|| ydk::is_set(qosdevicepepdomain.yfilter)
	|| ydk::is_set(qosdeviceprimarypdp.yfilter)
	|| ydk::is_set(qosdevicesecondarypdp.yfilter);
}

std::string CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosDeviceAttributeEntry" <<"[qosDeviceAttributeId='" <<qosdeviceattributeid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosDeviceAttributeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosdeviceattributeid.is_set || is_set(qosdeviceattributeid.yfilter)) leaf_name_data.push_back(qosdeviceattributeid.get_name_leafdata());
    if (qosdevicecapabilities.is_set || is_set(qosdevicecapabilities.yfilter)) leaf_name_data.push_back(qosdevicecapabilities.get_name_leafdata());
    if (qosdevicemaxmessagesize.is_set || is_set(qosdevicemaxmessagesize.yfilter)) leaf_name_data.push_back(qosdevicemaxmessagesize.get_name_leafdata());
    if (qosdevicepepdomain.is_set || is_set(qosdevicepepdomain.yfilter)) leaf_name_data.push_back(qosdevicepepdomain.get_name_leafdata());
    if (qosdeviceprimarypdp.is_set || is_set(qosdeviceprimarypdp.yfilter)) leaf_name_data.push_back(qosdeviceprimarypdp.get_name_leafdata());
    if (qosdevicesecondarypdp.is_set || is_set(qosdevicesecondarypdp.yfilter)) leaf_name_data.push_back(qosdevicesecondarypdp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosDeviceAttributeId")
    {
        qosdeviceattributeid = value;
        qosdeviceattributeid.value_namespace = name_space;
        qosdeviceattributeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosDeviceCapabilities")
    {
        qosdevicecapabilities[value] = true;
    }
    if(value_path == "qosDeviceMaxMessageSize")
    {
        qosdevicemaxmessagesize = value;
        qosdevicemaxmessagesize.value_namespace = name_space;
        qosdevicemaxmessagesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosDevicePepDomain")
    {
        qosdevicepepdomain = value;
        qosdevicepepdomain.value_namespace = name_space;
        qosdevicepepdomain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosDevicePrimaryPdp")
    {
        qosdeviceprimarypdp = value;
        qosdeviceprimarypdp.value_namespace = name_space;
        qosdeviceprimarypdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosDeviceSecondaryPdp")
    {
        qosdevicesecondarypdp = value;
        qosdevicesecondarypdp.value_namespace = name_space;
        qosdevicesecondarypdp.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosDeviceAttributeId")
    {
        qosdeviceattributeid.yfilter = yfilter;
    }
    if(value_path == "qosDeviceCapabilities")
    {
        qosdevicecapabilities.yfilter = yfilter;
    }
    if(value_path == "qosDeviceMaxMessageSize")
    {
        qosdevicemaxmessagesize.yfilter = yfilter;
    }
    if(value_path == "qosDevicePepDomain")
    {
        qosdevicepepdomain.yfilter = yfilter;
    }
    if(value_path == "qosDevicePrimaryPdp")
    {
        qosdeviceprimarypdp.yfilter = yfilter;
    }
    if(value_path == "qosDeviceSecondaryPdp")
    {
        qosdevicesecondarypdp.yfilter = yfilter;
    }
}

bool CiscoQosPibMib::Qosdeviceattributetable::Qosdeviceattributeentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosDeviceAttributeId" || name == "qosDeviceCapabilities" || name == "qosDeviceMaxMessageSize" || name == "qosDevicePepDomain" || name == "qosDevicePrimaryPdp" || name == "qosDeviceSecondaryPdp")
        return true;
    return false;
}

CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypetable()
{
    yang_name = "qosInterfaceTypeTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosinterfacetypetable::~Qosinterfacetypetable()
{
}

bool CiscoQosPibMib::Qosinterfacetypetable::has_data() const
{
    for (std::size_t index=0; index<qosinterfacetypeentry.size(); index++)
    {
        if(qosinterfacetypeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosinterfacetypetable::has_operation() const
{
    for (std::size_t index=0; index<qosinterfacetypeentry.size(); index++)
    {
        if(qosinterfacetypeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoQosPibMib::Qosinterfacetypetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosInterfaceTypeTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosinterfacetypetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosinterfacetypetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosInterfaceTypeEntry")
    {
        for(auto const & c : qosinterfacetypeentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry>();
        c->parent = this;
        qosinterfacetypeentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosinterfacetypetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosinterfacetypeentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosinterfacetypetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoQosPibMib::Qosinterfacetypetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoQosPibMib::Qosinterfacetypetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosInterfaceTypeEntry")
        return true;
    return false;
}

CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry::Qosinterfacetypeentry()
    :
    qosinterfacetypeid{YType::uint32, "qosInterfaceTypeId"},
    qosinterfacequeuetype{YType::enumeration, "qosInterfaceQueueType"},
    qosinterfacetypecapabilities{YType::bits, "qosInterfaceTypeCapabilities"},
    qosinterfacetyperoles{YType::str, "qosInterfaceTypeRoles"}
{
    yang_name = "qosInterfaceTypeEntry"; yang_parent_name = "qosInterfaceTypeTable";
}

CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry::~Qosinterfacetypeentry()
{
}

bool CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry::has_data() const
{
    return qosinterfacetypeid.is_set
	|| qosinterfacequeuetype.is_set
	|| qosinterfacetypecapabilities.is_set
	|| qosinterfacetyperoles.is_set;
}

bool CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosinterfacetypeid.yfilter)
	|| ydk::is_set(qosinterfacequeuetype.yfilter)
	|| ydk::is_set(qosinterfacetypecapabilities.yfilter)
	|| ydk::is_set(qosinterfacetyperoles.yfilter);
}

std::string CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosInterfaceTypeEntry" <<"[qosInterfaceTypeId='" <<qosinterfacetypeid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosInterfaceTypeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosinterfacetypeid.is_set || is_set(qosinterfacetypeid.yfilter)) leaf_name_data.push_back(qosinterfacetypeid.get_name_leafdata());
    if (qosinterfacequeuetype.is_set || is_set(qosinterfacequeuetype.yfilter)) leaf_name_data.push_back(qosinterfacequeuetype.get_name_leafdata());
    if (qosinterfacetypecapabilities.is_set || is_set(qosinterfacetypecapabilities.yfilter)) leaf_name_data.push_back(qosinterfacetypecapabilities.get_name_leafdata());
    if (qosinterfacetyperoles.is_set || is_set(qosinterfacetyperoles.yfilter)) leaf_name_data.push_back(qosinterfacetyperoles.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosInterfaceTypeId")
    {
        qosinterfacetypeid = value;
        qosinterfacetypeid.value_namespace = name_space;
        qosinterfacetypeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosInterfaceQueueType")
    {
        qosinterfacequeuetype = value;
        qosinterfacequeuetype.value_namespace = name_space;
        qosinterfacequeuetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosInterfaceTypeCapabilities")
    {
        qosinterfacetypecapabilities[value] = true;
    }
    if(value_path == "qosInterfaceTypeRoles")
    {
        qosinterfacetyperoles = value;
        qosinterfacetyperoles.value_namespace = name_space;
        qosinterfacetyperoles.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosInterfaceTypeId")
    {
        qosinterfacetypeid.yfilter = yfilter;
    }
    if(value_path == "qosInterfaceQueueType")
    {
        qosinterfacequeuetype.yfilter = yfilter;
    }
    if(value_path == "qosInterfaceTypeCapabilities")
    {
        qosinterfacetypecapabilities.yfilter = yfilter;
    }
    if(value_path == "qosInterfaceTypeRoles")
    {
        qosinterfacetyperoles.yfilter = yfilter;
    }
}

bool CiscoQosPibMib::Qosinterfacetypetable::Qosinterfacetypeentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosInterfaceTypeId" || name == "qosInterfaceQueueType" || name == "qosInterfaceTypeCapabilities" || name == "qosInterfaceTypeRoles")
        return true;
    return false;
}

CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingtable()
{
    yang_name = "qosDiffServMappingTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosdiffservmappingtable::~Qosdiffservmappingtable()
{
}

bool CiscoQosPibMib::Qosdiffservmappingtable::has_data() const
{
    for (std::size_t index=0; index<qosdiffservmappingentry.size(); index++)
    {
        if(qosdiffservmappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosdiffservmappingtable::has_operation() const
{
    for (std::size_t index=0; index<qosdiffservmappingentry.size(); index++)
    {
        if(qosdiffservmappingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoQosPibMib::Qosdiffservmappingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosDiffServMappingTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosdiffservmappingtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosdiffservmappingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosDiffServMappingEntry")
    {
        for(auto const & c : qosdiffservmappingentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry>();
        c->parent = this;
        qosdiffservmappingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosdiffservmappingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosdiffservmappingentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosdiffservmappingtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoQosPibMib::Qosdiffservmappingtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoQosPibMib::Qosdiffservmappingtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosDiffServMappingEntry")
        return true;
    return false;
}

CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry::Qosdiffservmappingentry()
    :
    qosdscp{YType::int32, "qosDscp"},
    qosl2cos{YType::int32, "qosL2Cos"},
    qosmarkeddscp{YType::int32, "qosMarkedDscp"}
{
    yang_name = "qosDiffServMappingEntry"; yang_parent_name = "qosDiffServMappingTable";
}

CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry::~Qosdiffservmappingentry()
{
}

bool CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry::has_data() const
{
    return qosdscp.is_set
	|| qosl2cos.is_set
	|| qosmarkeddscp.is_set;
}

bool CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosdscp.yfilter)
	|| ydk::is_set(qosl2cos.yfilter)
	|| ydk::is_set(qosmarkeddscp.yfilter);
}

std::string CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosDiffServMappingEntry" <<"[qosDscp='" <<qosdscp <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosDiffServMappingTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosdscp.is_set || is_set(qosdscp.yfilter)) leaf_name_data.push_back(qosdscp.get_name_leafdata());
    if (qosl2cos.is_set || is_set(qosl2cos.yfilter)) leaf_name_data.push_back(qosl2cos.get_name_leafdata());
    if (qosmarkeddscp.is_set || is_set(qosmarkeddscp.yfilter)) leaf_name_data.push_back(qosmarkeddscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosDscp")
    {
        qosdscp = value;
        qosdscp.value_namespace = name_space;
        qosdscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosL2Cos")
    {
        qosl2cos = value;
        qosl2cos.value_namespace = name_space;
        qosl2cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosMarkedDscp")
    {
        qosmarkeddscp = value;
        qosmarkeddscp.value_namespace = name_space;
        qosmarkeddscp.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosDscp")
    {
        qosdscp.yfilter = yfilter;
    }
    if(value_path == "qosL2Cos")
    {
        qosl2cos.yfilter = yfilter;
    }
    if(value_path == "qosMarkedDscp")
    {
        qosmarkeddscp.yfilter = yfilter;
    }
}

bool CiscoQosPibMib::Qosdiffservmappingtable::Qosdiffservmappingentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosDscp" || name == "qosL2Cos" || name == "qosMarkedDscp")
        return true;
    return false;
}

CiscoQosPibMib::Qoscostodscptable::Qoscostodscptable()
{
    yang_name = "qosCosToDscpTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qoscostodscptable::~Qoscostodscptable()
{
}

bool CiscoQosPibMib::Qoscostodscptable::has_data() const
{
    for (std::size_t index=0; index<qoscostodscpentry.size(); index++)
    {
        if(qoscostodscpentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qoscostodscptable::has_operation() const
{
    for (std::size_t index=0; index<qoscostodscpentry.size(); index++)
    {
        if(qoscostodscpentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoQosPibMib::Qoscostodscptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosCosToDscpTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qoscostodscptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qoscostodscptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosCosToDscpEntry")
    {
        for(auto const & c : qoscostodscpentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry>();
        c->parent = this;
        qoscostodscpentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qoscostodscptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qoscostodscpentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qoscostodscptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoQosPibMib::Qoscostodscptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoQosPibMib::Qoscostodscptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosCosToDscpEntry")
        return true;
    return false;
}

CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry::Qoscostodscpentry()
    :
    qoscostodscpcos{YType::int32, "qosCosToDscpCos"},
    qoscostodscpdscp{YType::int32, "qosCosToDscpDscp"}
{
    yang_name = "qosCosToDscpEntry"; yang_parent_name = "qosCosToDscpTable";
}

CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry::~Qoscostodscpentry()
{
}

bool CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry::has_data() const
{
    return qoscostodscpcos.is_set
	|| qoscostodscpdscp.is_set;
}

bool CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qoscostodscpcos.yfilter)
	|| ydk::is_set(qoscostodscpdscp.yfilter);
}

std::string CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosCosToDscpEntry" <<"[qosCosToDscpCos='" <<qoscostodscpcos <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosCosToDscpTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qoscostodscpcos.is_set || is_set(qoscostodscpcos.yfilter)) leaf_name_data.push_back(qoscostodscpcos.get_name_leafdata());
    if (qoscostodscpdscp.is_set || is_set(qoscostodscpdscp.yfilter)) leaf_name_data.push_back(qoscostodscpdscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosCosToDscpCos")
    {
        qoscostodscpcos = value;
        qoscostodscpcos.value_namespace = name_space;
        qoscostodscpcos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosCosToDscpDscp")
    {
        qoscostodscpdscp = value;
        qoscostodscpdscp.value_namespace = name_space;
        qoscostodscpdscp.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosCosToDscpCos")
    {
        qoscostodscpcos.yfilter = yfilter;
    }
    if(value_path == "qosCosToDscpDscp")
    {
        qoscostodscpdscp.yfilter = yfilter;
    }
}

bool CiscoQosPibMib::Qoscostodscptable::Qoscostodscpentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosCosToDscpCos" || name == "qosCosToDscpDscp")
        return true;
    return false;
}

CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicytable()
{
    yang_name = "qosUnmatchedPolicyTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosunmatchedpolicytable::~Qosunmatchedpolicytable()
{
}

bool CiscoQosPibMib::Qosunmatchedpolicytable::has_data() const
{
    for (std::size_t index=0; index<qosunmatchedpolicyentry.size(); index++)
    {
        if(qosunmatchedpolicyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosunmatchedpolicytable::has_operation() const
{
    for (std::size_t index=0; index<qosunmatchedpolicyentry.size(); index++)
    {
        if(qosunmatchedpolicyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoQosPibMib::Qosunmatchedpolicytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosUnmatchedPolicyTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosunmatchedpolicytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosunmatchedpolicytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosUnmatchedPolicyEntry")
    {
        for(auto const & c : qosunmatchedpolicyentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry>();
        c->parent = this;
        qosunmatchedpolicyentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosunmatchedpolicytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosunmatchedpolicyentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosunmatchedpolicytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoQosPibMib::Qosunmatchedpolicytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoQosPibMib::Qosunmatchedpolicytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosUnmatchedPolicyEntry")
        return true;
    return false;
}

CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::Qosunmatchedpolicyentry()
    :
    qosunmatchedpolicyid{YType::uint32, "qosUnmatchedPolicyId"},
    qosunmatchedpolicyaggregateid{YType::uint32, "qosUnmatchedPolicyAggregateId"},
    qosunmatchedpolicydirection{YType::enumeration, "qosUnmatchedPolicyDirection"},
    qosunmatchedpolicydscp{YType::int32, "qosUnmatchedPolicyDscp"},
    qosunmatchedpolicydscptrusted{YType::boolean, "qosUnmatchedPolicyDscpTrusted"},
    qosunmatchedpolicyrole{YType::str, "qosUnmatchedPolicyRole"},
    qosunmatchpolmicroflowpolicerid{YType::uint32, "qosUnmatchPolMicroFlowPolicerId"}
{
    yang_name = "qosUnmatchedPolicyEntry"; yang_parent_name = "qosUnmatchedPolicyTable";
}

CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::~Qosunmatchedpolicyentry()
{
}

bool CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::has_data() const
{
    return qosunmatchedpolicyid.is_set
	|| qosunmatchedpolicyaggregateid.is_set
	|| qosunmatchedpolicydirection.is_set
	|| qosunmatchedpolicydscp.is_set
	|| qosunmatchedpolicydscptrusted.is_set
	|| qosunmatchedpolicyrole.is_set
	|| qosunmatchpolmicroflowpolicerid.is_set;
}

bool CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosunmatchedpolicyid.yfilter)
	|| ydk::is_set(qosunmatchedpolicyaggregateid.yfilter)
	|| ydk::is_set(qosunmatchedpolicydirection.yfilter)
	|| ydk::is_set(qosunmatchedpolicydscp.yfilter)
	|| ydk::is_set(qosunmatchedpolicydscptrusted.yfilter)
	|| ydk::is_set(qosunmatchedpolicyrole.yfilter)
	|| ydk::is_set(qosunmatchpolmicroflowpolicerid.yfilter);
}

std::string CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosUnmatchedPolicyEntry" <<"[qosUnmatchedPolicyId='" <<qosunmatchedpolicyid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosUnmatchedPolicyTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosunmatchedpolicyid.is_set || is_set(qosunmatchedpolicyid.yfilter)) leaf_name_data.push_back(qosunmatchedpolicyid.get_name_leafdata());
    if (qosunmatchedpolicyaggregateid.is_set || is_set(qosunmatchedpolicyaggregateid.yfilter)) leaf_name_data.push_back(qosunmatchedpolicyaggregateid.get_name_leafdata());
    if (qosunmatchedpolicydirection.is_set || is_set(qosunmatchedpolicydirection.yfilter)) leaf_name_data.push_back(qosunmatchedpolicydirection.get_name_leafdata());
    if (qosunmatchedpolicydscp.is_set || is_set(qosunmatchedpolicydscp.yfilter)) leaf_name_data.push_back(qosunmatchedpolicydscp.get_name_leafdata());
    if (qosunmatchedpolicydscptrusted.is_set || is_set(qosunmatchedpolicydscptrusted.yfilter)) leaf_name_data.push_back(qosunmatchedpolicydscptrusted.get_name_leafdata());
    if (qosunmatchedpolicyrole.is_set || is_set(qosunmatchedpolicyrole.yfilter)) leaf_name_data.push_back(qosunmatchedpolicyrole.get_name_leafdata());
    if (qosunmatchpolmicroflowpolicerid.is_set || is_set(qosunmatchpolmicroflowpolicerid.yfilter)) leaf_name_data.push_back(qosunmatchpolmicroflowpolicerid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosUnmatchedPolicyId")
    {
        qosunmatchedpolicyid = value;
        qosunmatchedpolicyid.value_namespace = name_space;
        qosunmatchedpolicyid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosUnmatchedPolicyAggregateId")
    {
        qosunmatchedpolicyaggregateid = value;
        qosunmatchedpolicyaggregateid.value_namespace = name_space;
        qosunmatchedpolicyaggregateid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosUnmatchedPolicyDirection")
    {
        qosunmatchedpolicydirection = value;
        qosunmatchedpolicydirection.value_namespace = name_space;
        qosunmatchedpolicydirection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosUnmatchedPolicyDscp")
    {
        qosunmatchedpolicydscp = value;
        qosunmatchedpolicydscp.value_namespace = name_space;
        qosunmatchedpolicydscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosUnmatchedPolicyDscpTrusted")
    {
        qosunmatchedpolicydscptrusted = value;
        qosunmatchedpolicydscptrusted.value_namespace = name_space;
        qosunmatchedpolicydscptrusted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosUnmatchedPolicyRole")
    {
        qosunmatchedpolicyrole = value;
        qosunmatchedpolicyrole.value_namespace = name_space;
        qosunmatchedpolicyrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosUnmatchPolMicroFlowPolicerId")
    {
        qosunmatchpolmicroflowpolicerid = value;
        qosunmatchpolmicroflowpolicerid.value_namespace = name_space;
        qosunmatchpolmicroflowpolicerid.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosUnmatchedPolicyId")
    {
        qosunmatchedpolicyid.yfilter = yfilter;
    }
    if(value_path == "qosUnmatchedPolicyAggregateId")
    {
        qosunmatchedpolicyaggregateid.yfilter = yfilter;
    }
    if(value_path == "qosUnmatchedPolicyDirection")
    {
        qosunmatchedpolicydirection.yfilter = yfilter;
    }
    if(value_path == "qosUnmatchedPolicyDscp")
    {
        qosunmatchedpolicydscp.yfilter = yfilter;
    }
    if(value_path == "qosUnmatchedPolicyDscpTrusted")
    {
        qosunmatchedpolicydscptrusted.yfilter = yfilter;
    }
    if(value_path == "qosUnmatchedPolicyRole")
    {
        qosunmatchedpolicyrole.yfilter = yfilter;
    }
    if(value_path == "qosUnmatchPolMicroFlowPolicerId")
    {
        qosunmatchpolmicroflowpolicerid.yfilter = yfilter;
    }
}

bool CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosUnmatchedPolicyId" || name == "qosUnmatchedPolicyAggregateId" || name == "qosUnmatchedPolicyDirection" || name == "qosUnmatchedPolicyDscp" || name == "qosUnmatchedPolicyDscpTrusted" || name == "qosUnmatchedPolicyRole" || name == "qosUnmatchPolMicroFlowPolicerId")
        return true;
    return false;
}

CiscoQosPibMib::Qospolicertable::Qospolicertable()
{
    yang_name = "qosPolicerTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qospolicertable::~Qospolicertable()
{
}

bool CiscoQosPibMib::Qospolicertable::has_data() const
{
    for (std::size_t index=0; index<qospolicerentry.size(); index++)
    {
        if(qospolicerentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qospolicertable::has_operation() const
{
    for (std::size_t index=0; index<qospolicerentry.size(); index++)
    {
        if(qospolicerentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoQosPibMib::Qospolicertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosPolicerTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qospolicertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qospolicertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosPolicerEntry")
    {
        for(auto const & c : qospolicerentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qospolicertable::Qospolicerentry>();
        c->parent = this;
        qospolicerentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qospolicertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qospolicerentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qospolicertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoQosPibMib::Qospolicertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoQosPibMib::Qospolicertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosPolicerEntry")
        return true;
    return false;
}

CiscoQosPibMib::Qospolicertable::Qospolicerentry::Qospolicerentry()
    :
    qospolicerid{YType::uint32, "qosPolicerId"},
    qospoliceraction{YType::enumeration, "qosPolicerAction"},
    qospolicerexcessburst{YType::uint32, "qosPolicerExcessBurst"},
    qospolicernormalburst{YType::uint32, "qosPolicerNormalBurst"},
    qospolicerrate{YType::uint32, "qosPolicerRate"}
{
    yang_name = "qosPolicerEntry"; yang_parent_name = "qosPolicerTable";
}

CiscoQosPibMib::Qospolicertable::Qospolicerentry::~Qospolicerentry()
{
}

bool CiscoQosPibMib::Qospolicertable::Qospolicerentry::has_data() const
{
    return qospolicerid.is_set
	|| qospoliceraction.is_set
	|| qospolicerexcessburst.is_set
	|| qospolicernormalburst.is_set
	|| qospolicerrate.is_set;
}

bool CiscoQosPibMib::Qospolicertable::Qospolicerentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qospolicerid.yfilter)
	|| ydk::is_set(qospoliceraction.yfilter)
	|| ydk::is_set(qospolicerexcessburst.yfilter)
	|| ydk::is_set(qospolicernormalburst.yfilter)
	|| ydk::is_set(qospolicerrate.yfilter);
}

std::string CiscoQosPibMib::Qospolicertable::Qospolicerentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosPolicerEntry" <<"[qosPolicerId='" <<qospolicerid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qospolicertable::Qospolicerentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosPolicerTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qospolicerid.is_set || is_set(qospolicerid.yfilter)) leaf_name_data.push_back(qospolicerid.get_name_leafdata());
    if (qospoliceraction.is_set || is_set(qospoliceraction.yfilter)) leaf_name_data.push_back(qospoliceraction.get_name_leafdata());
    if (qospolicerexcessburst.is_set || is_set(qospolicerexcessburst.yfilter)) leaf_name_data.push_back(qospolicerexcessburst.get_name_leafdata());
    if (qospolicernormalburst.is_set || is_set(qospolicernormalburst.yfilter)) leaf_name_data.push_back(qospolicernormalburst.get_name_leafdata());
    if (qospolicerrate.is_set || is_set(qospolicerrate.yfilter)) leaf_name_data.push_back(qospolicerrate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qospolicertable::Qospolicerentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qospolicertable::Qospolicerentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qospolicertable::Qospolicerentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosPolicerId")
    {
        qospolicerid = value;
        qospolicerid.value_namespace = name_space;
        qospolicerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosPolicerAction")
    {
        qospoliceraction = value;
        qospoliceraction.value_namespace = name_space;
        qospoliceraction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosPolicerExcessBurst")
    {
        qospolicerexcessburst = value;
        qospolicerexcessburst.value_namespace = name_space;
        qospolicerexcessburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosPolicerNormalBurst")
    {
        qospolicernormalburst = value;
        qospolicernormalburst.value_namespace = name_space;
        qospolicernormalburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosPolicerRate")
    {
        qospolicerrate = value;
        qospolicerrate.value_namespace = name_space;
        qospolicerrate.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoQosPibMib::Qospolicertable::Qospolicerentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosPolicerId")
    {
        qospolicerid.yfilter = yfilter;
    }
    if(value_path == "qosPolicerAction")
    {
        qospoliceraction.yfilter = yfilter;
    }
    if(value_path == "qosPolicerExcessBurst")
    {
        qospolicerexcessburst.yfilter = yfilter;
    }
    if(value_path == "qosPolicerNormalBurst")
    {
        qospolicernormalburst.yfilter = yfilter;
    }
    if(value_path == "qosPolicerRate")
    {
        qospolicerrate.yfilter = yfilter;
    }
}

bool CiscoQosPibMib::Qospolicertable::Qospolicerentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosPolicerId" || name == "qosPolicerAction" || name == "qosPolicerExcessBurst" || name == "qosPolicerNormalBurst" || name == "qosPolicerRate")
        return true;
    return false;
}

CiscoQosPibMib::Qosaggregatetable::Qosaggregatetable()
{
    yang_name = "qosAggregateTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosaggregatetable::~Qosaggregatetable()
{
}

bool CiscoQosPibMib::Qosaggregatetable::has_data() const
{
    for (std::size_t index=0; index<qosaggregateentry.size(); index++)
    {
        if(qosaggregateentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosaggregatetable::has_operation() const
{
    for (std::size_t index=0; index<qosaggregateentry.size(); index++)
    {
        if(qosaggregateentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoQosPibMib::Qosaggregatetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosAggregateTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosaggregatetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosaggregatetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosAggregateEntry")
    {
        for(auto const & c : qosaggregateentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry>();
        c->parent = this;
        qosaggregateentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosaggregatetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosaggregateentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosaggregatetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoQosPibMib::Qosaggregatetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoQosPibMib::Qosaggregatetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosAggregateEntry")
        return true;
    return false;
}

CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry::Qosaggregateentry()
    :
    qosaggregateid{YType::uint32, "qosAggregateId"},
    qosaggregatepolicerid{YType::uint32, "qosAggregatePolicerId"}
{
    yang_name = "qosAggregateEntry"; yang_parent_name = "qosAggregateTable";
}

CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry::~Qosaggregateentry()
{
}

bool CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry::has_data() const
{
    return qosaggregateid.is_set
	|| qosaggregatepolicerid.is_set;
}

bool CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosaggregateid.yfilter)
	|| ydk::is_set(qosaggregatepolicerid.yfilter);
}

std::string CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosAggregateEntry" <<"[qosAggregateId='" <<qosaggregateid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosAggregateTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosaggregateid.is_set || is_set(qosaggregateid.yfilter)) leaf_name_data.push_back(qosaggregateid.get_name_leafdata());
    if (qosaggregatepolicerid.is_set || is_set(qosaggregatepolicerid.yfilter)) leaf_name_data.push_back(qosaggregatepolicerid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosAggregateId")
    {
        qosaggregateid = value;
        qosaggregateid.value_namespace = name_space;
        qosaggregateid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosAggregatePolicerId")
    {
        qosaggregatepolicerid = value;
        qosaggregatepolicerid.value_namespace = name_space;
        qosaggregatepolicerid.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosAggregateId")
    {
        qosaggregateid.yfilter = yfilter;
    }
    if(value_path == "qosAggregatePolicerId")
    {
        qosaggregatepolicerid.yfilter = yfilter;
    }
}

bool CiscoQosPibMib::Qosaggregatetable::Qosaggregateentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosAggregateId" || name == "qosAggregatePolicerId")
        return true;
    return false;
}

CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationtable()
{
    yang_name = "qosMacClassificationTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosmacclassificationtable::~Qosmacclassificationtable()
{
}

bool CiscoQosPibMib::Qosmacclassificationtable::has_data() const
{
    for (std::size_t index=0; index<qosmacclassificationentry.size(); index++)
    {
        if(qosmacclassificationentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosmacclassificationtable::has_operation() const
{
    for (std::size_t index=0; index<qosmacclassificationentry.size(); index++)
    {
        if(qosmacclassificationentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoQosPibMib::Qosmacclassificationtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosMacClassificationTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosmacclassificationtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosmacclassificationtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosMacClassificationEntry")
    {
        for(auto const & c : qosmacclassificationentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry>();
        c->parent = this;
        qosmacclassificationentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosmacclassificationtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosmacclassificationentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosmacclassificationtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoQosPibMib::Qosmacclassificationtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoQosPibMib::Qosmacclassificationtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosMacClassificationEntry")
        return true;
    return false;
}

CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry::Qosmacclassificationentry()
    :
    qosmacclassificationid{YType::uint32, "qosMacClassificationId"},
    qosdstmacaddress{YType::str, "qosDstMacAddress"},
    qosdstmaccos{YType::int32, "qosDstMacCos"},
    qosdstmacvlan{YType::int32, "qosDstMacVlan"}
{
    yang_name = "qosMacClassificationEntry"; yang_parent_name = "qosMacClassificationTable";
}

CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry::~Qosmacclassificationentry()
{
}

bool CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry::has_data() const
{
    return qosmacclassificationid.is_set
	|| qosdstmacaddress.is_set
	|| qosdstmaccos.is_set
	|| qosdstmacvlan.is_set;
}

bool CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosmacclassificationid.yfilter)
	|| ydk::is_set(qosdstmacaddress.yfilter)
	|| ydk::is_set(qosdstmaccos.yfilter)
	|| ydk::is_set(qosdstmacvlan.yfilter);
}

std::string CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosMacClassificationEntry" <<"[qosMacClassificationId='" <<qosmacclassificationid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosMacClassificationTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosmacclassificationid.is_set || is_set(qosmacclassificationid.yfilter)) leaf_name_data.push_back(qosmacclassificationid.get_name_leafdata());
    if (qosdstmacaddress.is_set || is_set(qosdstmacaddress.yfilter)) leaf_name_data.push_back(qosdstmacaddress.get_name_leafdata());
    if (qosdstmaccos.is_set || is_set(qosdstmaccos.yfilter)) leaf_name_data.push_back(qosdstmaccos.get_name_leafdata());
    if (qosdstmacvlan.is_set || is_set(qosdstmacvlan.yfilter)) leaf_name_data.push_back(qosdstmacvlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosMacClassificationId")
    {
        qosmacclassificationid = value;
        qosmacclassificationid.value_namespace = name_space;
        qosmacclassificationid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosDstMacAddress")
    {
        qosdstmacaddress = value;
        qosdstmacaddress.value_namespace = name_space;
        qosdstmacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosDstMacCos")
    {
        qosdstmaccos = value;
        qosdstmaccos.value_namespace = name_space;
        qosdstmaccos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosDstMacVlan")
    {
        qosdstmacvlan = value;
        qosdstmacvlan.value_namespace = name_space;
        qosdstmacvlan.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosMacClassificationId")
    {
        qosmacclassificationid.yfilter = yfilter;
    }
    if(value_path == "qosDstMacAddress")
    {
        qosdstmacaddress.yfilter = yfilter;
    }
    if(value_path == "qosDstMacCos")
    {
        qosdstmaccos.yfilter = yfilter;
    }
    if(value_path == "qosDstMacVlan")
    {
        qosdstmacvlan.yfilter = yfilter;
    }
}

bool CiscoQosPibMib::Qosmacclassificationtable::Qosmacclassificationentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosMacClassificationId" || name == "qosDstMacAddress" || name == "qosDstMacCos" || name == "qosDstMacVlan")
        return true;
    return false;
}

CiscoQosPibMib::Qosipacetable::Qosipacetable()
{
    yang_name = "qosIpAceTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosipacetable::~Qosipacetable()
{
}

bool CiscoQosPibMib::Qosipacetable::has_data() const
{
    for (std::size_t index=0; index<qosipaceentry.size(); index++)
    {
        if(qosipaceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosipacetable::has_operation() const
{
    for (std::size_t index=0; index<qosipaceentry.size(); index++)
    {
        if(qosipaceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoQosPibMib::Qosipacetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIpAceTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosipacetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosipacetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIpAceEntry")
    {
        for(auto const & c : qosipaceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosipacetable::Qosipaceentry>();
        c->parent = this;
        qosipaceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosipacetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosipaceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosipacetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoQosPibMib::Qosipacetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoQosPibMib::Qosipacetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIpAceEntry")
        return true;
    return false;
}

CiscoQosPibMib::Qosipacetable::Qosipaceentry::Qosipaceentry()
    :
    qosipaceid{YType::uint32, "qosIpAceId"},
    qosipacedscpmax{YType::int32, "qosIpAceDscpMax"},
    qosipacedscpmin{YType::int32, "qosIpAceDscpMin"},
    qosipacedstaddr{YType::str, "qosIpAceDstAddr"},
    qosipacedstaddrmask{YType::str, "qosIpAceDstAddrMask"},
    qosipacedstl4portmax{YType::int32, "qosIpAceDstL4PortMax"},
    qosipacedstl4portmin{YType::int32, "qosIpAceDstL4PortMin"},
    qosipacepermit{YType::boolean, "qosIpAcePermit"},
    qosipaceprotocol{YType::int32, "qosIpAceProtocol"},
    qosipacesrcaddr{YType::str, "qosIpAceSrcAddr"},
    qosipacesrcaddrmask{YType::str, "qosIpAceSrcAddrMask"},
    qosipacesrcl4portmax{YType::int32, "qosIpAceSrcL4PortMax"},
    qosipacesrcl4portmin{YType::int32, "qosIpAceSrcL4PortMin"}
{
    yang_name = "qosIpAceEntry"; yang_parent_name = "qosIpAceTable";
}

CiscoQosPibMib::Qosipacetable::Qosipaceentry::~Qosipaceentry()
{
}

bool CiscoQosPibMib::Qosipacetable::Qosipaceentry::has_data() const
{
    return qosipaceid.is_set
	|| qosipacedscpmax.is_set
	|| qosipacedscpmin.is_set
	|| qosipacedstaddr.is_set
	|| qosipacedstaddrmask.is_set
	|| qosipacedstl4portmax.is_set
	|| qosipacedstl4portmin.is_set
	|| qosipacepermit.is_set
	|| qosipaceprotocol.is_set
	|| qosipacesrcaddr.is_set
	|| qosipacesrcaddrmask.is_set
	|| qosipacesrcl4portmax.is_set
	|| qosipacesrcl4portmin.is_set;
}

bool CiscoQosPibMib::Qosipacetable::Qosipaceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosipaceid.yfilter)
	|| ydk::is_set(qosipacedscpmax.yfilter)
	|| ydk::is_set(qosipacedscpmin.yfilter)
	|| ydk::is_set(qosipacedstaddr.yfilter)
	|| ydk::is_set(qosipacedstaddrmask.yfilter)
	|| ydk::is_set(qosipacedstl4portmax.yfilter)
	|| ydk::is_set(qosipacedstl4portmin.yfilter)
	|| ydk::is_set(qosipacepermit.yfilter)
	|| ydk::is_set(qosipaceprotocol.yfilter)
	|| ydk::is_set(qosipacesrcaddr.yfilter)
	|| ydk::is_set(qosipacesrcaddrmask.yfilter)
	|| ydk::is_set(qosipacesrcl4portmax.yfilter)
	|| ydk::is_set(qosipacesrcl4portmin.yfilter);
}

std::string CiscoQosPibMib::Qosipacetable::Qosipaceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIpAceEntry" <<"[qosIpAceId='" <<qosipaceid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosipacetable::Qosipaceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIpAceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosipaceid.is_set || is_set(qosipaceid.yfilter)) leaf_name_data.push_back(qosipaceid.get_name_leafdata());
    if (qosipacedscpmax.is_set || is_set(qosipacedscpmax.yfilter)) leaf_name_data.push_back(qosipacedscpmax.get_name_leafdata());
    if (qosipacedscpmin.is_set || is_set(qosipacedscpmin.yfilter)) leaf_name_data.push_back(qosipacedscpmin.get_name_leafdata());
    if (qosipacedstaddr.is_set || is_set(qosipacedstaddr.yfilter)) leaf_name_data.push_back(qosipacedstaddr.get_name_leafdata());
    if (qosipacedstaddrmask.is_set || is_set(qosipacedstaddrmask.yfilter)) leaf_name_data.push_back(qosipacedstaddrmask.get_name_leafdata());
    if (qosipacedstl4portmax.is_set || is_set(qosipacedstl4portmax.yfilter)) leaf_name_data.push_back(qosipacedstl4portmax.get_name_leafdata());
    if (qosipacedstl4portmin.is_set || is_set(qosipacedstl4portmin.yfilter)) leaf_name_data.push_back(qosipacedstl4portmin.get_name_leafdata());
    if (qosipacepermit.is_set || is_set(qosipacepermit.yfilter)) leaf_name_data.push_back(qosipacepermit.get_name_leafdata());
    if (qosipaceprotocol.is_set || is_set(qosipaceprotocol.yfilter)) leaf_name_data.push_back(qosipaceprotocol.get_name_leafdata());
    if (qosipacesrcaddr.is_set || is_set(qosipacesrcaddr.yfilter)) leaf_name_data.push_back(qosipacesrcaddr.get_name_leafdata());
    if (qosipacesrcaddrmask.is_set || is_set(qosipacesrcaddrmask.yfilter)) leaf_name_data.push_back(qosipacesrcaddrmask.get_name_leafdata());
    if (qosipacesrcl4portmax.is_set || is_set(qosipacesrcl4portmax.yfilter)) leaf_name_data.push_back(qosipacesrcl4portmax.get_name_leafdata());
    if (qosipacesrcl4portmin.is_set || is_set(qosipacesrcl4portmin.yfilter)) leaf_name_data.push_back(qosipacesrcl4portmin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosipacetable::Qosipaceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosipacetable::Qosipaceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosipacetable::Qosipaceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosIpAceId")
    {
        qosipaceid = value;
        qosipaceid.value_namespace = name_space;
        qosipaceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAceDscpMax")
    {
        qosipacedscpmax = value;
        qosipacedscpmax.value_namespace = name_space;
        qosipacedscpmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAceDscpMin")
    {
        qosipacedscpmin = value;
        qosipacedscpmin.value_namespace = name_space;
        qosipacedscpmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAceDstAddr")
    {
        qosipacedstaddr = value;
        qosipacedstaddr.value_namespace = name_space;
        qosipacedstaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAceDstAddrMask")
    {
        qosipacedstaddrmask = value;
        qosipacedstaddrmask.value_namespace = name_space;
        qosipacedstaddrmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAceDstL4PortMax")
    {
        qosipacedstl4portmax = value;
        qosipacedstl4portmax.value_namespace = name_space;
        qosipacedstl4portmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAceDstL4PortMin")
    {
        qosipacedstl4portmin = value;
        qosipacedstl4portmin.value_namespace = name_space;
        qosipacedstl4portmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAcePermit")
    {
        qosipacepermit = value;
        qosipacepermit.value_namespace = name_space;
        qosipacepermit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAceProtocol")
    {
        qosipaceprotocol = value;
        qosipaceprotocol.value_namespace = name_space;
        qosipaceprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAceSrcAddr")
    {
        qosipacesrcaddr = value;
        qosipacesrcaddr.value_namespace = name_space;
        qosipacesrcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAceSrcAddrMask")
    {
        qosipacesrcaddrmask = value;
        qosipacesrcaddrmask.value_namespace = name_space;
        qosipacesrcaddrmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAceSrcL4PortMax")
    {
        qosipacesrcl4portmax = value;
        qosipacesrcl4portmax.value_namespace = name_space;
        qosipacesrcl4portmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAceSrcL4PortMin")
    {
        qosipacesrcl4portmin = value;
        qosipacesrcl4portmin.value_namespace = name_space;
        qosipacesrcl4portmin.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoQosPibMib::Qosipacetable::Qosipaceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosIpAceId")
    {
        qosipaceid.yfilter = yfilter;
    }
    if(value_path == "qosIpAceDscpMax")
    {
        qosipacedscpmax.yfilter = yfilter;
    }
    if(value_path == "qosIpAceDscpMin")
    {
        qosipacedscpmin.yfilter = yfilter;
    }
    if(value_path == "qosIpAceDstAddr")
    {
        qosipacedstaddr.yfilter = yfilter;
    }
    if(value_path == "qosIpAceDstAddrMask")
    {
        qosipacedstaddrmask.yfilter = yfilter;
    }
    if(value_path == "qosIpAceDstL4PortMax")
    {
        qosipacedstl4portmax.yfilter = yfilter;
    }
    if(value_path == "qosIpAceDstL4PortMin")
    {
        qosipacedstl4portmin.yfilter = yfilter;
    }
    if(value_path == "qosIpAcePermit")
    {
        qosipacepermit.yfilter = yfilter;
    }
    if(value_path == "qosIpAceProtocol")
    {
        qosipaceprotocol.yfilter = yfilter;
    }
    if(value_path == "qosIpAceSrcAddr")
    {
        qosipacesrcaddr.yfilter = yfilter;
    }
    if(value_path == "qosIpAceSrcAddrMask")
    {
        qosipacesrcaddrmask.yfilter = yfilter;
    }
    if(value_path == "qosIpAceSrcL4PortMax")
    {
        qosipacesrcl4portmax.yfilter = yfilter;
    }
    if(value_path == "qosIpAceSrcL4PortMin")
    {
        qosipacesrcl4portmin.yfilter = yfilter;
    }
}

bool CiscoQosPibMib::Qosipacetable::Qosipaceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIpAceId" || name == "qosIpAceDscpMax" || name == "qosIpAceDscpMin" || name == "qosIpAceDstAddr" || name == "qosIpAceDstAddrMask" || name == "qosIpAceDstL4PortMax" || name == "qosIpAceDstL4PortMin" || name == "qosIpAcePermit" || name == "qosIpAceProtocol" || name == "qosIpAceSrcAddr" || name == "qosIpAceSrcAddrMask" || name == "qosIpAceSrcL4PortMax" || name == "qosIpAceSrcL4PortMin")
        return true;
    return false;
}

CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitiontable()
{
    yang_name = "qosIpAclDefinitionTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosipacldefinitiontable::~Qosipacldefinitiontable()
{
}

bool CiscoQosPibMib::Qosipacldefinitiontable::has_data() const
{
    for (std::size_t index=0; index<qosipacldefinitionentry.size(); index++)
    {
        if(qosipacldefinitionentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosipacldefinitiontable::has_operation() const
{
    for (std::size_t index=0; index<qosipacldefinitionentry.size(); index++)
    {
        if(qosipacldefinitionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoQosPibMib::Qosipacldefinitiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIpAclDefinitionTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosipacldefinitiontable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosipacldefinitiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIpAclDefinitionEntry")
    {
        for(auto const & c : qosipacldefinitionentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry>();
        c->parent = this;
        qosipacldefinitionentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosipacldefinitiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosipacldefinitionentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosipacldefinitiontable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoQosPibMib::Qosipacldefinitiontable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoQosPibMib::Qosipacldefinitiontable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIpAclDefinitionEntry")
        return true;
    return false;
}

CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry::Qosipacldefinitionentry()
    :
    qosipacldefinitionid{YType::uint32, "qosIpAclDefinitionId"},
    qosipaceorder{YType::uint32, "qosIpAceOrder"},
    qosipacldefaceid{YType::uint32, "qosIpAclDefAceId"},
    qosipaclid{YType::uint32, "qosIpAclId"}
{
    yang_name = "qosIpAclDefinitionEntry"; yang_parent_name = "qosIpAclDefinitionTable";
}

CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry::~Qosipacldefinitionentry()
{
}

bool CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry::has_data() const
{
    return qosipacldefinitionid.is_set
	|| qosipaceorder.is_set
	|| qosipacldefaceid.is_set
	|| qosipaclid.is_set;
}

bool CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosipacldefinitionid.yfilter)
	|| ydk::is_set(qosipaceorder.yfilter)
	|| ydk::is_set(qosipacldefaceid.yfilter)
	|| ydk::is_set(qosipaclid.yfilter);
}

std::string CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIpAclDefinitionEntry" <<"[qosIpAclDefinitionId='" <<qosipacldefinitionid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIpAclDefinitionTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosipacldefinitionid.is_set || is_set(qosipacldefinitionid.yfilter)) leaf_name_data.push_back(qosipacldefinitionid.get_name_leafdata());
    if (qosipaceorder.is_set || is_set(qosipaceorder.yfilter)) leaf_name_data.push_back(qosipaceorder.get_name_leafdata());
    if (qosipacldefaceid.is_set || is_set(qosipacldefaceid.yfilter)) leaf_name_data.push_back(qosipacldefaceid.get_name_leafdata());
    if (qosipaclid.is_set || is_set(qosipaclid.yfilter)) leaf_name_data.push_back(qosipaclid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosIpAclDefinitionId")
    {
        qosipacldefinitionid = value;
        qosipacldefinitionid.value_namespace = name_space;
        qosipacldefinitionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAceOrder")
    {
        qosipaceorder = value;
        qosipaceorder.value_namespace = name_space;
        qosipaceorder.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAclDefAceId")
    {
        qosipacldefaceid = value;
        qosipacldefaceid.value_namespace = name_space;
        qosipacldefaceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAclId")
    {
        qosipaclid = value;
        qosipaclid.value_namespace = name_space;
        qosipaclid.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosIpAclDefinitionId")
    {
        qosipacldefinitionid.yfilter = yfilter;
    }
    if(value_path == "qosIpAceOrder")
    {
        qosipaceorder.yfilter = yfilter;
    }
    if(value_path == "qosIpAclDefAceId")
    {
        qosipacldefaceid.yfilter = yfilter;
    }
    if(value_path == "qosIpAclId")
    {
        qosipaclid.yfilter = yfilter;
    }
}

bool CiscoQosPibMib::Qosipacldefinitiontable::Qosipacldefinitionentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIpAclDefinitionId" || name == "qosIpAceOrder" || name == "qosIpAclDefAceId" || name == "qosIpAclId")
        return true;
    return false;
}

CiscoQosPibMib::Qosipaclactiontable::Qosipaclactiontable()
{
    yang_name = "qosIpAclActionTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosipaclactiontable::~Qosipaclactiontable()
{
}

bool CiscoQosPibMib::Qosipaclactiontable::has_data() const
{
    for (std::size_t index=0; index<qosipaclactionentry.size(); index++)
    {
        if(qosipaclactionentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosipaclactiontable::has_operation() const
{
    for (std::size_t index=0; index<qosipaclactionentry.size(); index++)
    {
        if(qosipaclactionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoQosPibMib::Qosipaclactiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIpAclActionTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosipaclactiontable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosipaclactiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIpAclActionEntry")
    {
        for(auto const & c : qosipaclactionentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry>();
        c->parent = this;
        qosipaclactionentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosipaclactiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosipaclactionentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosipaclactiontable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoQosPibMib::Qosipaclactiontable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoQosPibMib::Qosipaclactiontable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIpAclActionEntry")
        return true;
    return false;
}

CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::Qosipaclactionentry()
    :
    qosipaclactionid{YType::uint32, "qosIpAclActionId"},
    qosipaclactaclid{YType::uint32, "qosIpAclActAclId"},
    qosipaclaggregateid{YType::uint32, "qosIpAclAggregateId"},
    qosipacldscp{YType::int32, "qosIpAclDscp"},
    qosipacldscptrusted{YType::boolean, "qosIpAclDscpTrusted"},
    qosipaclinterfacedirection{YType::enumeration, "qosIpAclInterfaceDirection"},
    qosipaclinterfaceroles{YType::str, "qosIpAclInterfaceRoles"},
    qosipaclmicroflowpolicerid{YType::uint32, "qosIpAclMicroFlowPolicerId"},
    qosipaclorder{YType::uint32, "qosIpAclOrder"}
{
    yang_name = "qosIpAclActionEntry"; yang_parent_name = "qosIpAclActionTable";
}

CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::~Qosipaclactionentry()
{
}

bool CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::has_data() const
{
    return qosipaclactionid.is_set
	|| qosipaclactaclid.is_set
	|| qosipaclaggregateid.is_set
	|| qosipacldscp.is_set
	|| qosipacldscptrusted.is_set
	|| qosipaclinterfacedirection.is_set
	|| qosipaclinterfaceroles.is_set
	|| qosipaclmicroflowpolicerid.is_set
	|| qosipaclorder.is_set;
}

bool CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosipaclactionid.yfilter)
	|| ydk::is_set(qosipaclactaclid.yfilter)
	|| ydk::is_set(qosipaclaggregateid.yfilter)
	|| ydk::is_set(qosipacldscp.yfilter)
	|| ydk::is_set(qosipacldscptrusted.yfilter)
	|| ydk::is_set(qosipaclinterfacedirection.yfilter)
	|| ydk::is_set(qosipaclinterfaceroles.yfilter)
	|| ydk::is_set(qosipaclmicroflowpolicerid.yfilter)
	|| ydk::is_set(qosipaclorder.yfilter);
}

std::string CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIpAclActionEntry" <<"[qosIpAclActionId='" <<qosipaclactionid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIpAclActionTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosipaclactionid.is_set || is_set(qosipaclactionid.yfilter)) leaf_name_data.push_back(qosipaclactionid.get_name_leafdata());
    if (qosipaclactaclid.is_set || is_set(qosipaclactaclid.yfilter)) leaf_name_data.push_back(qosipaclactaclid.get_name_leafdata());
    if (qosipaclaggregateid.is_set || is_set(qosipaclaggregateid.yfilter)) leaf_name_data.push_back(qosipaclaggregateid.get_name_leafdata());
    if (qosipacldscp.is_set || is_set(qosipacldscp.yfilter)) leaf_name_data.push_back(qosipacldscp.get_name_leafdata());
    if (qosipacldscptrusted.is_set || is_set(qosipacldscptrusted.yfilter)) leaf_name_data.push_back(qosipacldscptrusted.get_name_leafdata());
    if (qosipaclinterfacedirection.is_set || is_set(qosipaclinterfacedirection.yfilter)) leaf_name_data.push_back(qosipaclinterfacedirection.get_name_leafdata());
    if (qosipaclinterfaceroles.is_set || is_set(qosipaclinterfaceroles.yfilter)) leaf_name_data.push_back(qosipaclinterfaceroles.get_name_leafdata());
    if (qosipaclmicroflowpolicerid.is_set || is_set(qosipaclmicroflowpolicerid.yfilter)) leaf_name_data.push_back(qosipaclmicroflowpolicerid.get_name_leafdata());
    if (qosipaclorder.is_set || is_set(qosipaclorder.yfilter)) leaf_name_data.push_back(qosipaclorder.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosIpAclActionId")
    {
        qosipaclactionid = value;
        qosipaclactionid.value_namespace = name_space;
        qosipaclactionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAclActAclId")
    {
        qosipaclactaclid = value;
        qosipaclactaclid.value_namespace = name_space;
        qosipaclactaclid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAclAggregateId")
    {
        qosipaclaggregateid = value;
        qosipaclaggregateid.value_namespace = name_space;
        qosipaclaggregateid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAclDscp")
    {
        qosipacldscp = value;
        qosipacldscp.value_namespace = name_space;
        qosipacldscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAclDscpTrusted")
    {
        qosipacldscptrusted = value;
        qosipacldscptrusted.value_namespace = name_space;
        qosipacldscptrusted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAclInterfaceDirection")
    {
        qosipaclinterfacedirection = value;
        qosipaclinterfacedirection.value_namespace = name_space;
        qosipaclinterfacedirection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAclInterfaceRoles")
    {
        qosipaclinterfaceroles = value;
        qosipaclinterfaceroles.value_namespace = name_space;
        qosipaclinterfaceroles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAclMicroFlowPolicerId")
    {
        qosipaclmicroflowpolicerid = value;
        qosipaclmicroflowpolicerid.value_namespace = name_space;
        qosipaclmicroflowpolicerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIpAclOrder")
    {
        qosipaclorder = value;
        qosipaclorder.value_namespace = name_space;
        qosipaclorder.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosIpAclActionId")
    {
        qosipaclactionid.yfilter = yfilter;
    }
    if(value_path == "qosIpAclActAclId")
    {
        qosipaclactaclid.yfilter = yfilter;
    }
    if(value_path == "qosIpAclAggregateId")
    {
        qosipaclaggregateid.yfilter = yfilter;
    }
    if(value_path == "qosIpAclDscp")
    {
        qosipacldscp.yfilter = yfilter;
    }
    if(value_path == "qosIpAclDscpTrusted")
    {
        qosipacldscptrusted.yfilter = yfilter;
    }
    if(value_path == "qosIpAclInterfaceDirection")
    {
        qosipaclinterfacedirection.yfilter = yfilter;
    }
    if(value_path == "qosIpAclInterfaceRoles")
    {
        qosipaclinterfaceroles.yfilter = yfilter;
    }
    if(value_path == "qosIpAclMicroFlowPolicerId")
    {
        qosipaclmicroflowpolicerid.yfilter = yfilter;
    }
    if(value_path == "qosIpAclOrder")
    {
        qosipaclorder.yfilter = yfilter;
    }
}

bool CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIpAclActionId" || name == "qosIpAclActAclId" || name == "qosIpAclAggregateId" || name == "qosIpAclDscp" || name == "qosIpAclDscpTrusted" || name == "qosIpAclInterfaceDirection" || name == "qosIpAclInterfaceRoles" || name == "qosIpAclMicroFlowPolicerId" || name == "qosIpAclOrder")
        return true;
    return false;
}

CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferencestable()
{
    yang_name = "qosIfSchedulingPreferencesTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosifschedulingpreferencestable::~Qosifschedulingpreferencestable()
{
}

bool CiscoQosPibMib::Qosifschedulingpreferencestable::has_data() const
{
    for (std::size_t index=0; index<qosifschedulingpreferenceentry.size(); index++)
    {
        if(qosifschedulingpreferenceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosifschedulingpreferencestable::has_operation() const
{
    for (std::size_t index=0; index<qosifschedulingpreferenceentry.size(); index++)
    {
        if(qosifschedulingpreferenceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoQosPibMib::Qosifschedulingpreferencestable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfSchedulingPreferencesTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosifschedulingpreferencestable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosifschedulingpreferencestable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIfSchedulingPreferenceEntry")
    {
        for(auto const & c : qosifschedulingpreferenceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry>();
        c->parent = this;
        qosifschedulingpreferenceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosifschedulingpreferencestable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosifschedulingpreferenceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosifschedulingpreferencestable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoQosPibMib::Qosifschedulingpreferencestable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoQosPibMib::Qosifschedulingpreferencestable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIfSchedulingPreferenceEntry")
        return true;
    return false;
}

CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::Qosifschedulingpreferenceentry()
    :
    qosifschedulingpreferenceid{YType::uint32, "qosIfSchedulingPreferenceId"},
    qosifschedulingdiscipline{YType::enumeration, "qosIfSchedulingDiscipline"},
    qosifschedulingpreference{YType::int32, "qosIfSchedulingPreference"},
    qosifschedulingqueuetype{YType::enumeration, "qosIfSchedulingQueueType"},
    qosifschedulingroles{YType::str, "qosIfSchedulingRoles"}
{
    yang_name = "qosIfSchedulingPreferenceEntry"; yang_parent_name = "qosIfSchedulingPreferencesTable";
}

CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::~Qosifschedulingpreferenceentry()
{
}

bool CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::has_data() const
{
    return qosifschedulingpreferenceid.is_set
	|| qosifschedulingdiscipline.is_set
	|| qosifschedulingpreference.is_set
	|| qosifschedulingqueuetype.is_set
	|| qosifschedulingroles.is_set;
}

bool CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosifschedulingpreferenceid.yfilter)
	|| ydk::is_set(qosifschedulingdiscipline.yfilter)
	|| ydk::is_set(qosifschedulingpreference.yfilter)
	|| ydk::is_set(qosifschedulingqueuetype.yfilter)
	|| ydk::is_set(qosifschedulingroles.yfilter);
}

std::string CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfSchedulingPreferenceEntry" <<"[qosIfSchedulingPreferenceId='" <<qosifschedulingpreferenceid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIfSchedulingPreferencesTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosifschedulingpreferenceid.is_set || is_set(qosifschedulingpreferenceid.yfilter)) leaf_name_data.push_back(qosifschedulingpreferenceid.get_name_leafdata());
    if (qosifschedulingdiscipline.is_set || is_set(qosifschedulingdiscipline.yfilter)) leaf_name_data.push_back(qosifschedulingdiscipline.get_name_leafdata());
    if (qosifschedulingpreference.is_set || is_set(qosifschedulingpreference.yfilter)) leaf_name_data.push_back(qosifschedulingpreference.get_name_leafdata());
    if (qosifschedulingqueuetype.is_set || is_set(qosifschedulingqueuetype.yfilter)) leaf_name_data.push_back(qosifschedulingqueuetype.get_name_leafdata());
    if (qosifschedulingroles.is_set || is_set(qosifschedulingroles.yfilter)) leaf_name_data.push_back(qosifschedulingroles.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosIfSchedulingPreferenceId")
    {
        qosifschedulingpreferenceid = value;
        qosifschedulingpreferenceid.value_namespace = name_space;
        qosifschedulingpreferenceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfSchedulingDiscipline")
    {
        qosifschedulingdiscipline = value;
        qosifschedulingdiscipline.value_namespace = name_space;
        qosifschedulingdiscipline.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfSchedulingPreference")
    {
        qosifschedulingpreference = value;
        qosifschedulingpreference.value_namespace = name_space;
        qosifschedulingpreference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfSchedulingQueueType")
    {
        qosifschedulingqueuetype = value;
        qosifschedulingqueuetype.value_namespace = name_space;
        qosifschedulingqueuetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfSchedulingRoles")
    {
        qosifschedulingroles = value;
        qosifschedulingroles.value_namespace = name_space;
        qosifschedulingroles.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosIfSchedulingPreferenceId")
    {
        qosifschedulingpreferenceid.yfilter = yfilter;
    }
    if(value_path == "qosIfSchedulingDiscipline")
    {
        qosifschedulingdiscipline.yfilter = yfilter;
    }
    if(value_path == "qosIfSchedulingPreference")
    {
        qosifschedulingpreference.yfilter = yfilter;
    }
    if(value_path == "qosIfSchedulingQueueType")
    {
        qosifschedulingqueuetype.yfilter = yfilter;
    }
    if(value_path == "qosIfSchedulingRoles")
    {
        qosifschedulingroles.yfilter = yfilter;
    }
}

bool CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIfSchedulingPreferenceId" || name == "qosIfSchedulingDiscipline" || name == "qosIfSchedulingPreference" || name == "qosIfSchedulingQueueType" || name == "qosIfSchedulingRoles")
        return true;
    return false;
}

CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferencetable()
{
    yang_name = "qosIfDropPreferenceTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosifdroppreferencetable::~Qosifdroppreferencetable()
{
}

bool CiscoQosPibMib::Qosifdroppreferencetable::has_data() const
{
    for (std::size_t index=0; index<qosifdroppreferenceentry.size(); index++)
    {
        if(qosifdroppreferenceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosifdroppreferencetable::has_operation() const
{
    for (std::size_t index=0; index<qosifdroppreferenceentry.size(); index++)
    {
        if(qosifdroppreferenceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoQosPibMib::Qosifdroppreferencetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfDropPreferenceTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosifdroppreferencetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosifdroppreferencetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIfDropPreferenceEntry")
    {
        for(auto const & c : qosifdroppreferenceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry>();
        c->parent = this;
        qosifdroppreferenceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosifdroppreferencetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosifdroppreferenceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosifdroppreferencetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoQosPibMib::Qosifdroppreferencetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoQosPibMib::Qosifdroppreferencetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIfDropPreferenceEntry")
        return true;
    return false;
}

CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::Qosifdroppreferenceentry()
    :
    qosifdroppreferenceid{YType::uint32, "qosIfDropPreferenceId"},
    qosifdropdiscipline{YType::enumeration, "qosIfDropDiscipline"},
    qosifdroppreference{YType::int32, "qosIfDropPreference"},
    qosifdroproles{YType::str, "qosIfDropRoles"}
{
    yang_name = "qosIfDropPreferenceEntry"; yang_parent_name = "qosIfDropPreferenceTable";
}

CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::~Qosifdroppreferenceentry()
{
}

bool CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::has_data() const
{
    return qosifdroppreferenceid.is_set
	|| qosifdropdiscipline.is_set
	|| qosifdroppreference.is_set
	|| qosifdroproles.is_set;
}

bool CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosifdroppreferenceid.yfilter)
	|| ydk::is_set(qosifdropdiscipline.yfilter)
	|| ydk::is_set(qosifdroppreference.yfilter)
	|| ydk::is_set(qosifdroproles.yfilter);
}

std::string CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfDropPreferenceEntry" <<"[qosIfDropPreferenceId='" <<qosifdroppreferenceid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIfDropPreferenceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosifdroppreferenceid.is_set || is_set(qosifdroppreferenceid.yfilter)) leaf_name_data.push_back(qosifdroppreferenceid.get_name_leafdata());
    if (qosifdropdiscipline.is_set || is_set(qosifdropdiscipline.yfilter)) leaf_name_data.push_back(qosifdropdiscipline.get_name_leafdata());
    if (qosifdroppreference.is_set || is_set(qosifdroppreference.yfilter)) leaf_name_data.push_back(qosifdroppreference.get_name_leafdata());
    if (qosifdroproles.is_set || is_set(qosifdroproles.yfilter)) leaf_name_data.push_back(qosifdroproles.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosIfDropPreferenceId")
    {
        qosifdroppreferenceid = value;
        qosifdroppreferenceid.value_namespace = name_space;
        qosifdroppreferenceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfDropDiscipline")
    {
        qosifdropdiscipline = value;
        qosifdropdiscipline.value_namespace = name_space;
        qosifdropdiscipline.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfDropPreference")
    {
        qosifdroppreference = value;
        qosifdroppreference.value_namespace = name_space;
        qosifdroppreference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfDropRoles")
    {
        qosifdroproles = value;
        qosifdroproles.value_namespace = name_space;
        qosifdroproles.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosIfDropPreferenceId")
    {
        qosifdroppreferenceid.yfilter = yfilter;
    }
    if(value_path == "qosIfDropDiscipline")
    {
        qosifdropdiscipline.yfilter = yfilter;
    }
    if(value_path == "qosIfDropPreference")
    {
        qosifdroppreference.yfilter = yfilter;
    }
    if(value_path == "qosIfDropRoles")
    {
        qosifdroproles.yfilter = yfilter;
    }
}

bool CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIfDropPreferenceId" || name == "qosIfDropDiscipline" || name == "qosIfDropPreference" || name == "qosIfDropRoles")
        return true;
    return false;
}

CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmenttable()
{
    yang_name = "qosIfDscpAssignmentTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosifdscpassignmenttable::~Qosifdscpassignmenttable()
{
}

bool CiscoQosPibMib::Qosifdscpassignmenttable::has_data() const
{
    for (std::size_t index=0; index<qosifdscpassignmententry.size(); index++)
    {
        if(qosifdscpassignmententry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosifdscpassignmenttable::has_operation() const
{
    for (std::size_t index=0; index<qosifdscpassignmententry.size(); index++)
    {
        if(qosifdscpassignmententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoQosPibMib::Qosifdscpassignmenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfDscpAssignmentTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosifdscpassignmenttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosifdscpassignmenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIfDscpAssignmentEntry")
    {
        for(auto const & c : qosifdscpassignmententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry>();
        c->parent = this;
        qosifdscpassignmententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosifdscpassignmenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosifdscpassignmententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosifdscpassignmenttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoQosPibMib::Qosifdscpassignmenttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoQosPibMib::Qosifdscpassignmenttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIfDscpAssignmentEntry")
        return true;
    return false;
}

CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry::Qosifdscpassignmententry()
    :
    qosifdscpassignmentid{YType::uint32, "qosIfDscpAssignmentId"},
    qosifdscp{YType::int32, "qosIfDscp"},
    qosifdscproles{YType::str, "qosIfDscpRoles"},
    qosifqueue{YType::int32, "qosIfQueue"},
    qosifqueuetype{YType::enumeration, "qosIfQueueType"},
    qosifthresholdset{YType::int32, "qosIfThresholdSet"}
{
    yang_name = "qosIfDscpAssignmentEntry"; yang_parent_name = "qosIfDscpAssignmentTable";
}

CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry::~Qosifdscpassignmententry()
{
}

bool CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry::has_data() const
{
    return qosifdscpassignmentid.is_set
	|| qosifdscp.is_set
	|| qosifdscproles.is_set
	|| qosifqueue.is_set
	|| qosifqueuetype.is_set
	|| qosifthresholdset.is_set;
}

bool CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosifdscpassignmentid.yfilter)
	|| ydk::is_set(qosifdscp.yfilter)
	|| ydk::is_set(qosifdscproles.yfilter)
	|| ydk::is_set(qosifqueue.yfilter)
	|| ydk::is_set(qosifqueuetype.yfilter)
	|| ydk::is_set(qosifthresholdset.yfilter);
}

std::string CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfDscpAssignmentEntry" <<"[qosIfDscpAssignmentId='" <<qosifdscpassignmentid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIfDscpAssignmentTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosifdscpassignmentid.is_set || is_set(qosifdscpassignmentid.yfilter)) leaf_name_data.push_back(qosifdscpassignmentid.get_name_leafdata());
    if (qosifdscp.is_set || is_set(qosifdscp.yfilter)) leaf_name_data.push_back(qosifdscp.get_name_leafdata());
    if (qosifdscproles.is_set || is_set(qosifdscproles.yfilter)) leaf_name_data.push_back(qosifdscproles.get_name_leafdata());
    if (qosifqueue.is_set || is_set(qosifqueue.yfilter)) leaf_name_data.push_back(qosifqueue.get_name_leafdata());
    if (qosifqueuetype.is_set || is_set(qosifqueuetype.yfilter)) leaf_name_data.push_back(qosifqueuetype.get_name_leafdata());
    if (qosifthresholdset.is_set || is_set(qosifthresholdset.yfilter)) leaf_name_data.push_back(qosifthresholdset.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosIfDscpAssignmentId")
    {
        qosifdscpassignmentid = value;
        qosifdscpassignmentid.value_namespace = name_space;
        qosifdscpassignmentid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfDscp")
    {
        qosifdscp = value;
        qosifdscp.value_namespace = name_space;
        qosifdscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfDscpRoles")
    {
        qosifdscproles = value;
        qosifdscproles.value_namespace = name_space;
        qosifdscproles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfQueue")
    {
        qosifqueue = value;
        qosifqueue.value_namespace = name_space;
        qosifqueue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfQueueType")
    {
        qosifqueuetype = value;
        qosifqueuetype.value_namespace = name_space;
        qosifqueuetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfThresholdSet")
    {
        qosifthresholdset = value;
        qosifthresholdset.value_namespace = name_space;
        qosifthresholdset.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosIfDscpAssignmentId")
    {
        qosifdscpassignmentid.yfilter = yfilter;
    }
    if(value_path == "qosIfDscp")
    {
        qosifdscp.yfilter = yfilter;
    }
    if(value_path == "qosIfDscpRoles")
    {
        qosifdscproles.yfilter = yfilter;
    }
    if(value_path == "qosIfQueue")
    {
        qosifqueue.yfilter = yfilter;
    }
    if(value_path == "qosIfQueueType")
    {
        qosifqueuetype.yfilter = yfilter;
    }
    if(value_path == "qosIfThresholdSet")
    {
        qosifthresholdset.yfilter = yfilter;
    }
}

bool CiscoQosPibMib::Qosifdscpassignmenttable::Qosifdscpassignmententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIfDscpAssignmentId" || name == "qosIfDscp" || name == "qosIfDscpRoles" || name == "qosIfQueue" || name == "qosIfQueueType" || name == "qosIfThresholdSet")
        return true;
    return false;
}

CiscoQosPibMib::Qosifredtable::Qosifredtable()
{
    yang_name = "qosIfRedTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosifredtable::~Qosifredtable()
{
}

bool CiscoQosPibMib::Qosifredtable::has_data() const
{
    for (std::size_t index=0; index<qosifredentry.size(); index++)
    {
        if(qosifredentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosifredtable::has_operation() const
{
    for (std::size_t index=0; index<qosifredentry.size(); index++)
    {
        if(qosifredentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoQosPibMib::Qosifredtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfRedTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosifredtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosifredtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIfRedEntry")
    {
        for(auto const & c : qosifredentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosifredtable::Qosifredentry>();
        c->parent = this;
        qosifredentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosifredtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosifredentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosifredtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoQosPibMib::Qosifredtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoQosPibMib::Qosifredtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIfRedEntry")
        return true;
    return false;
}

CiscoQosPibMib::Qosifredtable::Qosifredentry::Qosifredentry()
    :
    qosifredid{YType::uint32, "qosIfRedId"},
    qosifrednumthresholdsets{YType::enumeration, "qosIfRedNumThresholdSets"},
    qosifredroles{YType::str, "qosIfRedRoles"},
    qosifredthresholdset{YType::int32, "qosIfRedThresholdSet"},
    qosifredthresholdsetlower{YType::int32, "qosIfRedThresholdSetLower"},
    qosifredthresholdsetupper{YType::int32, "qosIfRedThresholdSetUpper"}
{
    yang_name = "qosIfRedEntry"; yang_parent_name = "qosIfRedTable";
}

CiscoQosPibMib::Qosifredtable::Qosifredentry::~Qosifredentry()
{
}

bool CiscoQosPibMib::Qosifredtable::Qosifredentry::has_data() const
{
    return qosifredid.is_set
	|| qosifrednumthresholdsets.is_set
	|| qosifredroles.is_set
	|| qosifredthresholdset.is_set
	|| qosifredthresholdsetlower.is_set
	|| qosifredthresholdsetupper.is_set;
}

bool CiscoQosPibMib::Qosifredtable::Qosifredentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosifredid.yfilter)
	|| ydk::is_set(qosifrednumthresholdsets.yfilter)
	|| ydk::is_set(qosifredroles.yfilter)
	|| ydk::is_set(qosifredthresholdset.yfilter)
	|| ydk::is_set(qosifredthresholdsetlower.yfilter)
	|| ydk::is_set(qosifredthresholdsetupper.yfilter);
}

std::string CiscoQosPibMib::Qosifredtable::Qosifredentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfRedEntry" <<"[qosIfRedId='" <<qosifredid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosifredtable::Qosifredentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIfRedTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosifredid.is_set || is_set(qosifredid.yfilter)) leaf_name_data.push_back(qosifredid.get_name_leafdata());
    if (qosifrednumthresholdsets.is_set || is_set(qosifrednumthresholdsets.yfilter)) leaf_name_data.push_back(qosifrednumthresholdsets.get_name_leafdata());
    if (qosifredroles.is_set || is_set(qosifredroles.yfilter)) leaf_name_data.push_back(qosifredroles.get_name_leafdata());
    if (qosifredthresholdset.is_set || is_set(qosifredthresholdset.yfilter)) leaf_name_data.push_back(qosifredthresholdset.get_name_leafdata());
    if (qosifredthresholdsetlower.is_set || is_set(qosifredthresholdsetlower.yfilter)) leaf_name_data.push_back(qosifredthresholdsetlower.get_name_leafdata());
    if (qosifredthresholdsetupper.is_set || is_set(qosifredthresholdsetupper.yfilter)) leaf_name_data.push_back(qosifredthresholdsetupper.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosifredtable::Qosifredentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosifredtable::Qosifredentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosifredtable::Qosifredentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosIfRedId")
    {
        qosifredid = value;
        qosifredid.value_namespace = name_space;
        qosifredid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfRedNumThresholdSets")
    {
        qosifrednumthresholdsets = value;
        qosifrednumthresholdsets.value_namespace = name_space;
        qosifrednumthresholdsets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfRedRoles")
    {
        qosifredroles = value;
        qosifredroles.value_namespace = name_space;
        qosifredroles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfRedThresholdSet")
    {
        qosifredthresholdset = value;
        qosifredthresholdset.value_namespace = name_space;
        qosifredthresholdset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfRedThresholdSetLower")
    {
        qosifredthresholdsetlower = value;
        qosifredthresholdsetlower.value_namespace = name_space;
        qosifredthresholdsetlower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfRedThresholdSetUpper")
    {
        qosifredthresholdsetupper = value;
        qosifredthresholdsetupper.value_namespace = name_space;
        qosifredthresholdsetupper.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoQosPibMib::Qosifredtable::Qosifredentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosIfRedId")
    {
        qosifredid.yfilter = yfilter;
    }
    if(value_path == "qosIfRedNumThresholdSets")
    {
        qosifrednumthresholdsets.yfilter = yfilter;
    }
    if(value_path == "qosIfRedRoles")
    {
        qosifredroles.yfilter = yfilter;
    }
    if(value_path == "qosIfRedThresholdSet")
    {
        qosifredthresholdset.yfilter = yfilter;
    }
    if(value_path == "qosIfRedThresholdSetLower")
    {
        qosifredthresholdsetlower.yfilter = yfilter;
    }
    if(value_path == "qosIfRedThresholdSetUpper")
    {
        qosifredthresholdsetupper.yfilter = yfilter;
    }
}

bool CiscoQosPibMib::Qosifredtable::Qosifredentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIfRedId" || name == "qosIfRedNumThresholdSets" || name == "qosIfRedRoles" || name == "qosIfRedThresholdSet" || name == "qosIfRedThresholdSetLower" || name == "qosIfRedThresholdSetUpper")
        return true;
    return false;
}

CiscoQosPibMib::Qosiftaildroptable::Qosiftaildroptable()
{
    yang_name = "qosIfTailDropTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosiftaildroptable::~Qosiftaildroptable()
{
}

bool CiscoQosPibMib::Qosiftaildroptable::has_data() const
{
    for (std::size_t index=0; index<qosiftaildropentry.size(); index++)
    {
        if(qosiftaildropentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosiftaildroptable::has_operation() const
{
    for (std::size_t index=0; index<qosiftaildropentry.size(); index++)
    {
        if(qosiftaildropentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoQosPibMib::Qosiftaildroptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfTailDropTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosiftaildroptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosiftaildroptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIfTailDropEntry")
    {
        for(auto const & c : qosiftaildropentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry>();
        c->parent = this;
        qosiftaildropentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosiftaildroptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosiftaildropentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosiftaildroptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoQosPibMib::Qosiftaildroptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoQosPibMib::Qosiftaildroptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIfTailDropEntry")
        return true;
    return false;
}

CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry::Qosiftaildropentry()
    :
    qosiftaildropid{YType::uint32, "qosIfTailDropId"},
    qosiftaildropnumthresholdsets{YType::enumeration, "qosIfTailDropNumThresholdSets"},
    qosiftaildroproles{YType::str, "qosIfTailDropRoles"},
    qosiftaildropthresholdset{YType::int32, "qosIfTailDropThresholdSet"},
    qosiftaildropthresholdsetvalue{YType::int32, "qosIfTailDropThresholdSetValue"}
{
    yang_name = "qosIfTailDropEntry"; yang_parent_name = "qosIfTailDropTable";
}

CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry::~Qosiftaildropentry()
{
}

bool CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry::has_data() const
{
    return qosiftaildropid.is_set
	|| qosiftaildropnumthresholdsets.is_set
	|| qosiftaildroproles.is_set
	|| qosiftaildropthresholdset.is_set
	|| qosiftaildropthresholdsetvalue.is_set;
}

bool CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosiftaildropid.yfilter)
	|| ydk::is_set(qosiftaildropnumthresholdsets.yfilter)
	|| ydk::is_set(qosiftaildroproles.yfilter)
	|| ydk::is_set(qosiftaildropthresholdset.yfilter)
	|| ydk::is_set(qosiftaildropthresholdsetvalue.yfilter);
}

std::string CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfTailDropEntry" <<"[qosIfTailDropId='" <<qosiftaildropid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIfTailDropTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosiftaildropid.is_set || is_set(qosiftaildropid.yfilter)) leaf_name_data.push_back(qosiftaildropid.get_name_leafdata());
    if (qosiftaildropnumthresholdsets.is_set || is_set(qosiftaildropnumthresholdsets.yfilter)) leaf_name_data.push_back(qosiftaildropnumthresholdsets.get_name_leafdata());
    if (qosiftaildroproles.is_set || is_set(qosiftaildroproles.yfilter)) leaf_name_data.push_back(qosiftaildroproles.get_name_leafdata());
    if (qosiftaildropthresholdset.is_set || is_set(qosiftaildropthresholdset.yfilter)) leaf_name_data.push_back(qosiftaildropthresholdset.get_name_leafdata());
    if (qosiftaildropthresholdsetvalue.is_set || is_set(qosiftaildropthresholdsetvalue.yfilter)) leaf_name_data.push_back(qosiftaildropthresholdsetvalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosIfTailDropId")
    {
        qosiftaildropid = value;
        qosiftaildropid.value_namespace = name_space;
        qosiftaildropid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfTailDropNumThresholdSets")
    {
        qosiftaildropnumthresholdsets = value;
        qosiftaildropnumthresholdsets.value_namespace = name_space;
        qosiftaildropnumthresholdsets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfTailDropRoles")
    {
        qosiftaildroproles = value;
        qosiftaildroproles.value_namespace = name_space;
        qosiftaildroproles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfTailDropThresholdSet")
    {
        qosiftaildropthresholdset = value;
        qosiftaildropthresholdset.value_namespace = name_space;
        qosiftaildropthresholdset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfTailDropThresholdSetValue")
    {
        qosiftaildropthresholdsetvalue = value;
        qosiftaildropthresholdsetvalue.value_namespace = name_space;
        qosiftaildropthresholdsetvalue.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosIfTailDropId")
    {
        qosiftaildropid.yfilter = yfilter;
    }
    if(value_path == "qosIfTailDropNumThresholdSets")
    {
        qosiftaildropnumthresholdsets.yfilter = yfilter;
    }
    if(value_path == "qosIfTailDropRoles")
    {
        qosiftaildroproles.yfilter = yfilter;
    }
    if(value_path == "qosIfTailDropThresholdSet")
    {
        qosiftaildropthresholdset.yfilter = yfilter;
    }
    if(value_path == "qosIfTailDropThresholdSetValue")
    {
        qosiftaildropthresholdsetvalue.yfilter = yfilter;
    }
}

bool CiscoQosPibMib::Qosiftaildroptable::Qosiftaildropentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIfTailDropId" || name == "qosIfTailDropNumThresholdSets" || name == "qosIfTailDropRoles" || name == "qosIfTailDropThresholdSet" || name == "qosIfTailDropThresholdSetValue")
        return true;
    return false;
}

CiscoQosPibMib::Qosifweightstable::Qosifweightstable()
{
    yang_name = "qosIfWeightsTable"; yang_parent_name = "CISCO-QOS-PIB-MIB";
}

CiscoQosPibMib::Qosifweightstable::~Qosifweightstable()
{
}

bool CiscoQosPibMib::Qosifweightstable::has_data() const
{
    for (std::size_t index=0; index<qosifweightsentry.size(); index++)
    {
        if(qosifweightsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoQosPibMib::Qosifweightstable::has_operation() const
{
    for (std::size_t index=0; index<qosifweightsentry.size(); index++)
    {
        if(qosifweightsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoQosPibMib::Qosifweightstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfWeightsTable";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosifweightstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosifweightstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qosIfWeightsEntry")
    {
        for(auto const & c : qosifweightsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoQosPibMib::Qosifweightstable::Qosifweightsentry>();
        c->parent = this;
        qosifweightsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosifweightstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qosifweightsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoQosPibMib::Qosifweightstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoQosPibMib::Qosifweightstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoQosPibMib::Qosifweightstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIfWeightsEntry")
        return true;
    return false;
}

CiscoQosPibMib::Qosifweightstable::Qosifweightsentry::Qosifweightsentry()
    :
    qosifweightsid{YType::uint32, "qosIfWeightsId"},
    qosifweightsdrainsize{YType::uint32, "qosIfWeightsDrainSize"},
    qosifweightsnumqueues{YType::enumeration, "qosIfWeightsNumQueues"},
    qosifweightsqueue{YType::int32, "qosIfWeightsQueue"},
    qosifweightsqueuesize{YType::uint32, "qosIfWeightsQueueSize"},
    qosifweightsroles{YType::str, "qosIfWeightsRoles"}
{
    yang_name = "qosIfWeightsEntry"; yang_parent_name = "qosIfWeightsTable";
}

CiscoQosPibMib::Qosifweightstable::Qosifweightsentry::~Qosifweightsentry()
{
}

bool CiscoQosPibMib::Qosifweightstable::Qosifweightsentry::has_data() const
{
    return qosifweightsid.is_set
	|| qosifweightsdrainsize.is_set
	|| qosifweightsnumqueues.is_set
	|| qosifweightsqueue.is_set
	|| qosifweightsqueuesize.is_set
	|| qosifweightsroles.is_set;
}

bool CiscoQosPibMib::Qosifweightstable::Qosifweightsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosifweightsid.yfilter)
	|| ydk::is_set(qosifweightsdrainsize.yfilter)
	|| ydk::is_set(qosifweightsnumqueues.yfilter)
	|| ydk::is_set(qosifweightsqueue.yfilter)
	|| ydk::is_set(qosifweightsqueuesize.yfilter)
	|| ydk::is_set(qosifweightsroles.yfilter);
}

std::string CiscoQosPibMib::Qosifweightstable::Qosifweightsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosIfWeightsEntry" <<"[qosIfWeightsId='" <<qosifweightsid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoQosPibMib::Qosifweightstable::Qosifweightsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-QOS-PIB-MIB:CISCO-QOS-PIB-MIB/qosIfWeightsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosifweightsid.is_set || is_set(qosifweightsid.yfilter)) leaf_name_data.push_back(qosifweightsid.get_name_leafdata());
    if (qosifweightsdrainsize.is_set || is_set(qosifweightsdrainsize.yfilter)) leaf_name_data.push_back(qosifweightsdrainsize.get_name_leafdata());
    if (qosifweightsnumqueues.is_set || is_set(qosifweightsnumqueues.yfilter)) leaf_name_data.push_back(qosifweightsnumqueues.get_name_leafdata());
    if (qosifweightsqueue.is_set || is_set(qosifweightsqueue.yfilter)) leaf_name_data.push_back(qosifweightsqueue.get_name_leafdata());
    if (qosifweightsqueuesize.is_set || is_set(qosifweightsqueuesize.yfilter)) leaf_name_data.push_back(qosifweightsqueuesize.get_name_leafdata());
    if (qosifweightsroles.is_set || is_set(qosifweightsroles.yfilter)) leaf_name_data.push_back(qosifweightsroles.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoQosPibMib::Qosifweightstable::Qosifweightsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoQosPibMib::Qosifweightstable::Qosifweightsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoQosPibMib::Qosifweightstable::Qosifweightsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosIfWeightsId")
    {
        qosifweightsid = value;
        qosifweightsid.value_namespace = name_space;
        qosifweightsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfWeightsDrainSize")
    {
        qosifweightsdrainsize = value;
        qosifweightsdrainsize.value_namespace = name_space;
        qosifweightsdrainsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfWeightsNumQueues")
    {
        qosifweightsnumqueues = value;
        qosifweightsnumqueues.value_namespace = name_space;
        qosifweightsnumqueues.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfWeightsQueue")
    {
        qosifweightsqueue = value;
        qosifweightsqueue.value_namespace = name_space;
        qosifweightsqueue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfWeightsQueueSize")
    {
        qosifweightsqueuesize = value;
        qosifweightsqueuesize.value_namespace = name_space;
        qosifweightsqueuesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIfWeightsRoles")
    {
        qosifweightsroles = value;
        qosifweightsroles.value_namespace = name_space;
        qosifweightsroles.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoQosPibMib::Qosifweightstable::Qosifweightsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosIfWeightsId")
    {
        qosifweightsid.yfilter = yfilter;
    }
    if(value_path == "qosIfWeightsDrainSize")
    {
        qosifweightsdrainsize.yfilter = yfilter;
    }
    if(value_path == "qosIfWeightsNumQueues")
    {
        qosifweightsnumqueues.yfilter = yfilter;
    }
    if(value_path == "qosIfWeightsQueue")
    {
        qosifweightsqueue.yfilter = yfilter;
    }
    if(value_path == "qosIfWeightsQueueSize")
    {
        qosifweightsqueuesize.yfilter = yfilter;
    }
    if(value_path == "qosIfWeightsRoles")
    {
        qosifweightsroles.yfilter = yfilter;
    }
}

bool CiscoQosPibMib::Qosifweightstable::Qosifweightsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosIfWeightsId" || name == "qosIfWeightsDrainSize" || name == "qosIfWeightsNumQueues" || name == "qosIfWeightsQueue" || name == "qosIfWeightsQueueSize" || name == "qosIfWeightsRoles")
        return true;
    return false;
}

const Enum::YLeaf Qosinterfacequeuetype::oneQ1t {1, "oneQ1t"};
const Enum::YLeaf Qosinterfacequeuetype::oneQ2t {2, "oneQ2t"};
const Enum::YLeaf Qosinterfacequeuetype::oneQ4t {3, "oneQ4t"};
const Enum::YLeaf Qosinterfacequeuetype::oneQ8t {4, "oneQ8t"};
const Enum::YLeaf Qosinterfacequeuetype::twoQ1t {5, "twoQ1t"};
const Enum::YLeaf Qosinterfacequeuetype::twoQ2t {6, "twoQ2t"};
const Enum::YLeaf Qosinterfacequeuetype::twoQ4t {7, "twoQ4t"};
const Enum::YLeaf Qosinterfacequeuetype::twoQ8t {8, "twoQ8t"};
const Enum::YLeaf Qosinterfacequeuetype::threeQ1t {9, "threeQ1t"};
const Enum::YLeaf Qosinterfacequeuetype::threeQ2t {10, "threeQ2t"};
const Enum::YLeaf Qosinterfacequeuetype::threeQ4t {11, "threeQ4t"};
const Enum::YLeaf Qosinterfacequeuetype::threeQ8t {12, "threeQ8t"};
const Enum::YLeaf Qosinterfacequeuetype::fourQ1t {13, "fourQ1t"};
const Enum::YLeaf Qosinterfacequeuetype::fourQ2t {14, "fourQ2t"};
const Enum::YLeaf Qosinterfacequeuetype::fourQ4t {15, "fourQ4t"};
const Enum::YLeaf Qosinterfacequeuetype::fourQ8t {16, "fourQ8t"};
const Enum::YLeaf Qosinterfacequeuetype::eightQ1t {17, "eightQ1t"};
const Enum::YLeaf Qosinterfacequeuetype::eightQ2t {18, "eightQ2t"};
const Enum::YLeaf Qosinterfacequeuetype::eightQ4t {19, "eightQ4t"};
const Enum::YLeaf Qosinterfacequeuetype::eightQ8t {20, "eightQ8t"};
const Enum::YLeaf Qosinterfacequeuetype::sixteenQ1t {21, "sixteenQ1t"};
const Enum::YLeaf Qosinterfacequeuetype::sixteenQ2t {22, "sixteenQ2t"};
const Enum::YLeaf Qosinterfacequeuetype::sixteenQ4t {23, "sixteenQ4t"};
const Enum::YLeaf Qosinterfacequeuetype::sixtyfourQ1t {24, "sixtyfourQ1t"};
const Enum::YLeaf Qosinterfacequeuetype::sixtyfourQ2t {25, "sixtyfourQ2t"};
const Enum::YLeaf Qosinterfacequeuetype::sixtyfourQ4t {26, "sixtyfourQ4t"};
const Enum::YLeaf Qosinterfacequeuetype::oneP1Q0t {27, "oneP1Q0t"};
const Enum::YLeaf Qosinterfacequeuetype::oneP1Q4t {28, "oneP1Q4t"};
const Enum::YLeaf Qosinterfacequeuetype::oneP1Q8t {29, "oneP1Q8t"};
const Enum::YLeaf Qosinterfacequeuetype::oneP2Q1t {30, "oneP2Q1t"};
const Enum::YLeaf Qosinterfacequeuetype::oneP2Q2t {31, "oneP2Q2t"};
const Enum::YLeaf Qosinterfacequeuetype::oneP3Q1t {32, "oneP3Q1t"};
const Enum::YLeaf Qosinterfacequeuetype::oneP7Q8t {33, "oneP7Q8t"};
const Enum::YLeaf Qosinterfacequeuetype::oneP3Q8t {34, "oneP3Q8t"};
const Enum::YLeaf Qosinterfacequeuetype::sixteenQ8t {35, "sixteenQ8t"};
const Enum::YLeaf Qosinterfacequeuetype::oneP15Q8t {36, "oneP15Q8t"};
const Enum::YLeaf Qosinterfacequeuetype::oneP15Q1t {37, "oneP15Q1t"};
const Enum::YLeaf Qosinterfacequeuetype::oneP7Q1t {38, "oneP7Q1t"};
const Enum::YLeaf Qosinterfacequeuetype::oneP31Q1t {39, "oneP31Q1t"};
const Enum::YLeaf Qosinterfacequeuetype::thirtytwoQ1t {40, "thirtytwoQ1t"};
const Enum::YLeaf Qosinterfacequeuetype::thirtytwoQ8t {41, "thirtytwoQ8t"};
const Enum::YLeaf Qosinterfacequeuetype::oneP31Q8t {42, "oneP31Q8t"};
const Enum::YLeaf Qosinterfacequeuetype::oneP7Q4t {43, "oneP7Q4t"};
const Enum::YLeaf Qosinterfacequeuetype::oneP3Q4t {44, "oneP3Q4t"};
const Enum::YLeaf Qosinterfacequeuetype::oneP7Q2t {45, "oneP7Q2t"};

const Enum::YLeaf Queuerange::oneQ {1, "oneQ"};
const Enum::YLeaf Queuerange::twoQ {2, "twoQ"};
const Enum::YLeaf Queuerange::threeQ {3, "threeQ"};
const Enum::YLeaf Queuerange::fourQ {4, "fourQ"};
const Enum::YLeaf Queuerange::eightQ {8, "eightQ"};
const Enum::YLeaf Queuerange::sixteenQ {16, "sixteenQ"};
const Enum::YLeaf Queuerange::thirtyTwoQ {32, "thirtyTwoQ"};
const Enum::YLeaf Queuerange::sixtyFourQ {64, "sixtyFourQ"};

const Enum::YLeaf Thresholdsetrange::zeroT {0, "zeroT"};
const Enum::YLeaf Thresholdsetrange::oneT {1, "oneT"};
const Enum::YLeaf Thresholdsetrange::twoT {2, "twoT"};
const Enum::YLeaf Thresholdsetrange::fourT {4, "fourT"};
const Enum::YLeaf Thresholdsetrange::eightT {8, "eightT"};

const Enum::YLeaf CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::Qosunmatchedpolicydirection::in {0, "in"};
const Enum::YLeaf CiscoQosPibMib::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::Qosunmatchedpolicydirection::out {1, "out"};

const Enum::YLeaf CiscoQosPibMib::Qospolicertable::Qospolicerentry::Qospoliceraction::drop {0, "drop"};
const Enum::YLeaf CiscoQosPibMib::Qospolicertable::Qospolicerentry::Qospoliceraction::mark {1, "mark"};
const Enum::YLeaf CiscoQosPibMib::Qospolicertable::Qospolicerentry::Qospoliceraction::shape {2, "shape"};

const Enum::YLeaf CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::Qosipaclinterfacedirection::in {0, "in"};
const Enum::YLeaf CiscoQosPibMib::Qosipaclactiontable::Qosipaclactionentry::Qosipaclinterfacedirection::out {1, "out"};

const Enum::YLeaf CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::Qosifschedulingdiscipline::weightedFairQueueing {1, "weightedFairQueueing"};
const Enum::YLeaf CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::Qosifschedulingdiscipline::weightedRoundRobin {2, "weightedRoundRobin"};
const Enum::YLeaf CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::Qosifschedulingdiscipline::customQueueing {3, "customQueueing"};
const Enum::YLeaf CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::Qosifschedulingdiscipline::priorityQueueing {4, "priorityQueueing"};
const Enum::YLeaf CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::Qosifschedulingdiscipline::classBasedWFQ {5, "classBasedWFQ"};
const Enum::YLeaf CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::Qosifschedulingdiscipline::fifo {6, "fifo"};
const Enum::YLeaf CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::Qosifschedulingdiscipline::pqWrr {7, "pqWrr"};
const Enum::YLeaf CiscoQosPibMib::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::Qosifschedulingdiscipline::pqCbwfq {8, "pqCbwfq"};

const Enum::YLeaf CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::Qosifdropdiscipline::qosIfDropWRED {1, "qosIfDropWRED"};
const Enum::YLeaf CiscoQosPibMib::Qosifdroppreferencetable::Qosifdroppreferenceentry::Qosifdropdiscipline::qosIfDropTailDrop {2, "qosIfDropTailDrop"};


}
}
