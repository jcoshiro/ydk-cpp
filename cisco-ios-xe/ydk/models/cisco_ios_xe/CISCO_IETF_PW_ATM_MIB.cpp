
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_PW_ATM_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IETF_PW_ATM_MIB {

CiscoIetfPwAtmMib::CiscoIetfPwAtmMib()
    :
    cpwvcatmtable(std::make_shared<CiscoIetfPwAtmMib::Cpwvcatmtable>())
{
    cpwvcatmtable->parent = this;

    yang_name = "CISCO-IETF-PW-ATM-MIB"; yang_parent_name = "CISCO-IETF-PW-ATM-MIB";
}

CiscoIetfPwAtmMib::~CiscoIetfPwAtmMib()
{
}

bool CiscoIetfPwAtmMib::has_data() const
{
    return (cpwvcatmtable !=  nullptr && cpwvcatmtable->has_data());
}

bool CiscoIetfPwAtmMib::has_operation() const
{
    return is_set(yfilter)
	|| (cpwvcatmtable !=  nullptr && cpwvcatmtable->has_operation());
}

std::string CiscoIetfPwAtmMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-ATM-MIB:CISCO-IETF-PW-ATM-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwAtmMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoIetfPwAtmMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcAtmTable")
    {
        if(cpwvcatmtable == nullptr)
        {
            cpwvcatmtable = std::make_shared<CiscoIetfPwAtmMib::Cpwvcatmtable>();
        }
        return cpwvcatmtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwAtmMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cpwvcatmtable != nullptr)
    {
        children["cpwVcAtmTable"] = cpwvcatmtable;
    }

    return children;
}

void CiscoIetfPwAtmMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfPwAtmMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoIetfPwAtmMib::clone_ptr() const
{
    return std::make_shared<CiscoIetfPwAtmMib>();
}

std::string CiscoIetfPwAtmMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIetfPwAtmMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIetfPwAtmMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoIetfPwAtmMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoIetfPwAtmMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcAtmTable")
        return true;
    return false;
}

CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmtable()
{
    yang_name = "cpwVcAtmTable"; yang_parent_name = "CISCO-IETF-PW-ATM-MIB";
}

CiscoIetfPwAtmMib::Cpwvcatmtable::~Cpwvcatmtable()
{
}

bool CiscoIetfPwAtmMib::Cpwvcatmtable::has_data() const
{
    for (std::size_t index=0; index<cpwvcatmentry.size(); index++)
    {
        if(cpwvcatmentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfPwAtmMib::Cpwvcatmtable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcatmentry.size(); index++)
    {
        if(cpwvcatmentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIetfPwAtmMib::Cpwvcatmtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcAtmTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwAtmMib::Cpwvcatmtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-ATM-MIB:CISCO-IETF-PW-ATM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwAtmMib::Cpwvcatmtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcAtmEntry")
    {
        for(auto const & c : cpwvcatmentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry>();
        c->parent = this;
        cpwvcatmentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwAtmMib::Cpwvcatmtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwvcatmentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfPwAtmMib::Cpwvcatmtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfPwAtmMib::Cpwvcatmtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfPwAtmMib::Cpwvcatmtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcAtmEntry")
        return true;
    return false;
}

CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::Cpwvcatmentry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwatmavgcellspacked{YType::uint32, "cpwAtmAvgCellsPacked"},
    cpwatmcellpacking{YType::boolean, "cpwAtmCellPacking"},
    cpwatmcellsreceived{YType::uint32, "cpwAtmCellsReceived"},
    cpwatmcellsrejected{YType::uint32, "cpwAtmCellsRejected"},
    cpwatmcellssent{YType::uint32, "cpwAtmCellsSent"},
    cpwatmcellstagged{YType::uint32, "cpwAtmCellsTagged"},
    cpwatmclpqosmapping{YType::boolean, "cpwAtmClpQosMapping"},
    cpwatmencap{YType::enumeration, "cpwAtmEncap"},
    cpwatmhccellsreceived{YType::uint64, "cpwAtmHCCellsReceived"},
    cpwatmhccellsrejected{YType::uint64, "cpwAtmHCCellsRejected"},
    cpwatmhccellstagged{YType::uint64, "cpwAtmHCCellsTagged"},
    cpwatmif{YType::int32, "cpwAtmIf"},
    cpwatmmcpttimeout{YType::int32, "cpwAtmMcptTimeout"},
    cpwatmmncp{YType::int32, "cpwAtmMncp"},
    cpwatmoamcellsupported{YType::boolean, "cpwAtmOamCellSupported"},
    cpwatmpeermncp{YType::int32, "cpwAtmPeerMncp"},
    cpwatmpktsreceived{YType::uint32, "cpwAtmPktsReceived"},
    cpwatmpktsrejected{YType::uint32, "cpwAtmPktsRejected"},
    cpwatmpktssent{YType::uint32, "cpwAtmPktsSent"},
    cpwatmqosscalingfactor{YType::int32, "cpwAtmQosScalingFactor"},
    cpwatmrowstatus{YType::enumeration, "cpwAtmRowStatus"},
    cpwatmvci{YType::int32, "cpwAtmVci"},
    cpwatmvpi{YType::int32, "cpwAtmVpi"}
{
    yang_name = "cpwVcAtmEntry"; yang_parent_name = "cpwVcAtmTable";
}

CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::~Cpwvcatmentry()
{
}

bool CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::has_data() const
{
    return cpwvcindex.is_set
	|| cpwatmavgcellspacked.is_set
	|| cpwatmcellpacking.is_set
	|| cpwatmcellsreceived.is_set
	|| cpwatmcellsrejected.is_set
	|| cpwatmcellssent.is_set
	|| cpwatmcellstagged.is_set
	|| cpwatmclpqosmapping.is_set
	|| cpwatmencap.is_set
	|| cpwatmhccellsreceived.is_set
	|| cpwatmhccellsrejected.is_set
	|| cpwatmhccellstagged.is_set
	|| cpwatmif.is_set
	|| cpwatmmcpttimeout.is_set
	|| cpwatmmncp.is_set
	|| cpwatmoamcellsupported.is_set
	|| cpwatmpeermncp.is_set
	|| cpwatmpktsreceived.is_set
	|| cpwatmpktsrejected.is_set
	|| cpwatmpktssent.is_set
	|| cpwatmqosscalingfactor.is_set
	|| cpwatmrowstatus.is_set
	|| cpwatmvci.is_set
	|| cpwatmvpi.is_set;
}

bool CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwvcindex.yfilter)
	|| ydk::is_set(cpwatmavgcellspacked.yfilter)
	|| ydk::is_set(cpwatmcellpacking.yfilter)
	|| ydk::is_set(cpwatmcellsreceived.yfilter)
	|| ydk::is_set(cpwatmcellsrejected.yfilter)
	|| ydk::is_set(cpwatmcellssent.yfilter)
	|| ydk::is_set(cpwatmcellstagged.yfilter)
	|| ydk::is_set(cpwatmclpqosmapping.yfilter)
	|| ydk::is_set(cpwatmencap.yfilter)
	|| ydk::is_set(cpwatmhccellsreceived.yfilter)
	|| ydk::is_set(cpwatmhccellsrejected.yfilter)
	|| ydk::is_set(cpwatmhccellstagged.yfilter)
	|| ydk::is_set(cpwatmif.yfilter)
	|| ydk::is_set(cpwatmmcpttimeout.yfilter)
	|| ydk::is_set(cpwatmmncp.yfilter)
	|| ydk::is_set(cpwatmoamcellsupported.yfilter)
	|| ydk::is_set(cpwatmpeermncp.yfilter)
	|| ydk::is_set(cpwatmpktsreceived.yfilter)
	|| ydk::is_set(cpwatmpktsrejected.yfilter)
	|| ydk::is_set(cpwatmpktssent.yfilter)
	|| ydk::is_set(cpwatmqosscalingfactor.yfilter)
	|| ydk::is_set(cpwatmrowstatus.yfilter)
	|| ydk::is_set(cpwatmvci.yfilter)
	|| ydk::is_set(cpwatmvpi.yfilter);
}

std::string CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcAtmEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-ATM-MIB:CISCO-IETF-PW-ATM-MIB/cpwVcAtmTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.yfilter)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwatmavgcellspacked.is_set || is_set(cpwatmavgcellspacked.yfilter)) leaf_name_data.push_back(cpwatmavgcellspacked.get_name_leafdata());
    if (cpwatmcellpacking.is_set || is_set(cpwatmcellpacking.yfilter)) leaf_name_data.push_back(cpwatmcellpacking.get_name_leafdata());
    if (cpwatmcellsreceived.is_set || is_set(cpwatmcellsreceived.yfilter)) leaf_name_data.push_back(cpwatmcellsreceived.get_name_leafdata());
    if (cpwatmcellsrejected.is_set || is_set(cpwatmcellsrejected.yfilter)) leaf_name_data.push_back(cpwatmcellsrejected.get_name_leafdata());
    if (cpwatmcellssent.is_set || is_set(cpwatmcellssent.yfilter)) leaf_name_data.push_back(cpwatmcellssent.get_name_leafdata());
    if (cpwatmcellstagged.is_set || is_set(cpwatmcellstagged.yfilter)) leaf_name_data.push_back(cpwatmcellstagged.get_name_leafdata());
    if (cpwatmclpqosmapping.is_set || is_set(cpwatmclpqosmapping.yfilter)) leaf_name_data.push_back(cpwatmclpqosmapping.get_name_leafdata());
    if (cpwatmencap.is_set || is_set(cpwatmencap.yfilter)) leaf_name_data.push_back(cpwatmencap.get_name_leafdata());
    if (cpwatmhccellsreceived.is_set || is_set(cpwatmhccellsreceived.yfilter)) leaf_name_data.push_back(cpwatmhccellsreceived.get_name_leafdata());
    if (cpwatmhccellsrejected.is_set || is_set(cpwatmhccellsrejected.yfilter)) leaf_name_data.push_back(cpwatmhccellsrejected.get_name_leafdata());
    if (cpwatmhccellstagged.is_set || is_set(cpwatmhccellstagged.yfilter)) leaf_name_data.push_back(cpwatmhccellstagged.get_name_leafdata());
    if (cpwatmif.is_set || is_set(cpwatmif.yfilter)) leaf_name_data.push_back(cpwatmif.get_name_leafdata());
    if (cpwatmmcpttimeout.is_set || is_set(cpwatmmcpttimeout.yfilter)) leaf_name_data.push_back(cpwatmmcpttimeout.get_name_leafdata());
    if (cpwatmmncp.is_set || is_set(cpwatmmncp.yfilter)) leaf_name_data.push_back(cpwatmmncp.get_name_leafdata());
    if (cpwatmoamcellsupported.is_set || is_set(cpwatmoamcellsupported.yfilter)) leaf_name_data.push_back(cpwatmoamcellsupported.get_name_leafdata());
    if (cpwatmpeermncp.is_set || is_set(cpwatmpeermncp.yfilter)) leaf_name_data.push_back(cpwatmpeermncp.get_name_leafdata());
    if (cpwatmpktsreceived.is_set || is_set(cpwatmpktsreceived.yfilter)) leaf_name_data.push_back(cpwatmpktsreceived.get_name_leafdata());
    if (cpwatmpktsrejected.is_set || is_set(cpwatmpktsrejected.yfilter)) leaf_name_data.push_back(cpwatmpktsrejected.get_name_leafdata());
    if (cpwatmpktssent.is_set || is_set(cpwatmpktssent.yfilter)) leaf_name_data.push_back(cpwatmpktssent.get_name_leafdata());
    if (cpwatmqosscalingfactor.is_set || is_set(cpwatmqosscalingfactor.yfilter)) leaf_name_data.push_back(cpwatmqosscalingfactor.get_name_leafdata());
    if (cpwatmrowstatus.is_set || is_set(cpwatmrowstatus.yfilter)) leaf_name_data.push_back(cpwatmrowstatus.get_name_leafdata());
    if (cpwatmvci.is_set || is_set(cpwatmvci.yfilter)) leaf_name_data.push_back(cpwatmvci.get_name_leafdata());
    if (cpwatmvpi.is_set || is_set(cpwatmvpi.yfilter)) leaf_name_data.push_back(cpwatmvpi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
        cpwvcindex.value_namespace = name_space;
        cpwvcindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmAvgCellsPacked")
    {
        cpwatmavgcellspacked = value;
        cpwatmavgcellspacked.value_namespace = name_space;
        cpwatmavgcellspacked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmCellPacking")
    {
        cpwatmcellpacking = value;
        cpwatmcellpacking.value_namespace = name_space;
        cpwatmcellpacking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmCellsReceived")
    {
        cpwatmcellsreceived = value;
        cpwatmcellsreceived.value_namespace = name_space;
        cpwatmcellsreceived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmCellsRejected")
    {
        cpwatmcellsrejected = value;
        cpwatmcellsrejected.value_namespace = name_space;
        cpwatmcellsrejected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmCellsSent")
    {
        cpwatmcellssent = value;
        cpwatmcellssent.value_namespace = name_space;
        cpwatmcellssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmCellsTagged")
    {
        cpwatmcellstagged = value;
        cpwatmcellstagged.value_namespace = name_space;
        cpwatmcellstagged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmClpQosMapping")
    {
        cpwatmclpqosmapping = value;
        cpwatmclpqosmapping.value_namespace = name_space;
        cpwatmclpqosmapping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmEncap")
    {
        cpwatmencap = value;
        cpwatmencap.value_namespace = name_space;
        cpwatmencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmHCCellsReceived")
    {
        cpwatmhccellsreceived = value;
        cpwatmhccellsreceived.value_namespace = name_space;
        cpwatmhccellsreceived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmHCCellsRejected")
    {
        cpwatmhccellsrejected = value;
        cpwatmhccellsrejected.value_namespace = name_space;
        cpwatmhccellsrejected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmHCCellsTagged")
    {
        cpwatmhccellstagged = value;
        cpwatmhccellstagged.value_namespace = name_space;
        cpwatmhccellstagged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmIf")
    {
        cpwatmif = value;
        cpwatmif.value_namespace = name_space;
        cpwatmif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmMcptTimeout")
    {
        cpwatmmcpttimeout = value;
        cpwatmmcpttimeout.value_namespace = name_space;
        cpwatmmcpttimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmMncp")
    {
        cpwatmmncp = value;
        cpwatmmncp.value_namespace = name_space;
        cpwatmmncp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmOamCellSupported")
    {
        cpwatmoamcellsupported = value;
        cpwatmoamcellsupported.value_namespace = name_space;
        cpwatmoamcellsupported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmPeerMncp")
    {
        cpwatmpeermncp = value;
        cpwatmpeermncp.value_namespace = name_space;
        cpwatmpeermncp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmPktsReceived")
    {
        cpwatmpktsreceived = value;
        cpwatmpktsreceived.value_namespace = name_space;
        cpwatmpktsreceived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmPktsRejected")
    {
        cpwatmpktsrejected = value;
        cpwatmpktsrejected.value_namespace = name_space;
        cpwatmpktsrejected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmPktsSent")
    {
        cpwatmpktssent = value;
        cpwatmpktssent.value_namespace = name_space;
        cpwatmpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmQosScalingFactor")
    {
        cpwatmqosscalingfactor = value;
        cpwatmqosscalingfactor.value_namespace = name_space;
        cpwatmqosscalingfactor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmRowStatus")
    {
        cpwatmrowstatus = value;
        cpwatmrowstatus.value_namespace = name_space;
        cpwatmrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmVci")
    {
        cpwatmvci = value;
        cpwatmvci.value_namespace = name_space;
        cpwatmvci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmVpi")
    {
        cpwatmvpi = value;
        cpwatmvpi.value_namespace = name_space;
        cpwatmvpi.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex.yfilter = yfilter;
    }
    if(value_path == "cpwAtmAvgCellsPacked")
    {
        cpwatmavgcellspacked.yfilter = yfilter;
    }
    if(value_path == "cpwAtmCellPacking")
    {
        cpwatmcellpacking.yfilter = yfilter;
    }
    if(value_path == "cpwAtmCellsReceived")
    {
        cpwatmcellsreceived.yfilter = yfilter;
    }
    if(value_path == "cpwAtmCellsRejected")
    {
        cpwatmcellsrejected.yfilter = yfilter;
    }
    if(value_path == "cpwAtmCellsSent")
    {
        cpwatmcellssent.yfilter = yfilter;
    }
    if(value_path == "cpwAtmCellsTagged")
    {
        cpwatmcellstagged.yfilter = yfilter;
    }
    if(value_path == "cpwAtmClpQosMapping")
    {
        cpwatmclpqosmapping.yfilter = yfilter;
    }
    if(value_path == "cpwAtmEncap")
    {
        cpwatmencap.yfilter = yfilter;
    }
    if(value_path == "cpwAtmHCCellsReceived")
    {
        cpwatmhccellsreceived.yfilter = yfilter;
    }
    if(value_path == "cpwAtmHCCellsRejected")
    {
        cpwatmhccellsrejected.yfilter = yfilter;
    }
    if(value_path == "cpwAtmHCCellsTagged")
    {
        cpwatmhccellstagged.yfilter = yfilter;
    }
    if(value_path == "cpwAtmIf")
    {
        cpwatmif.yfilter = yfilter;
    }
    if(value_path == "cpwAtmMcptTimeout")
    {
        cpwatmmcpttimeout.yfilter = yfilter;
    }
    if(value_path == "cpwAtmMncp")
    {
        cpwatmmncp.yfilter = yfilter;
    }
    if(value_path == "cpwAtmOamCellSupported")
    {
        cpwatmoamcellsupported.yfilter = yfilter;
    }
    if(value_path == "cpwAtmPeerMncp")
    {
        cpwatmpeermncp.yfilter = yfilter;
    }
    if(value_path == "cpwAtmPktsReceived")
    {
        cpwatmpktsreceived.yfilter = yfilter;
    }
    if(value_path == "cpwAtmPktsRejected")
    {
        cpwatmpktsrejected.yfilter = yfilter;
    }
    if(value_path == "cpwAtmPktsSent")
    {
        cpwatmpktssent.yfilter = yfilter;
    }
    if(value_path == "cpwAtmQosScalingFactor")
    {
        cpwatmqosscalingfactor.yfilter = yfilter;
    }
    if(value_path == "cpwAtmRowStatus")
    {
        cpwatmrowstatus.yfilter = yfilter;
    }
    if(value_path == "cpwAtmVci")
    {
        cpwatmvci.yfilter = yfilter;
    }
    if(value_path == "cpwAtmVpi")
    {
        cpwatmvpi.yfilter = yfilter;
    }
}

bool CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcIndex" || name == "cpwAtmAvgCellsPacked" || name == "cpwAtmCellPacking" || name == "cpwAtmCellsReceived" || name == "cpwAtmCellsRejected" || name == "cpwAtmCellsSent" || name == "cpwAtmCellsTagged" || name == "cpwAtmClpQosMapping" || name == "cpwAtmEncap" || name == "cpwAtmHCCellsReceived" || name == "cpwAtmHCCellsRejected" || name == "cpwAtmHCCellsTagged" || name == "cpwAtmIf" || name == "cpwAtmMcptTimeout" || name == "cpwAtmMncp" || name == "cpwAtmOamCellSupported" || name == "cpwAtmPeerMncp" || name == "cpwAtmPktsReceived" || name == "cpwAtmPktsRejected" || name == "cpwAtmPktsSent" || name == "cpwAtmQosScalingFactor" || name == "cpwAtmRowStatus" || name == "cpwAtmVci" || name == "cpwAtmVpi")
        return true;
    return false;
}

const Enum::YLeaf CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::Cpwatmencap::mpls {1, "mpls"};
const Enum::YLeaf CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::Cpwatmencap::l2tpv3 {2, "l2tpv3"};
const Enum::YLeaf CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::Cpwatmencap::unknown {3, "unknown"};


}
}
