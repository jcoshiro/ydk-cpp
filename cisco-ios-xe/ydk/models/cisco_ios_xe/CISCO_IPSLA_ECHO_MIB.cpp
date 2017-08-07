
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IPSLA_ECHO_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IPSLA_ECHO_MIB {

CiscoIpslaEchoMib::CiscoIpslaEchoMib()
    :
    cipslaicmpechotmpltable(std::make_shared<CiscoIpslaEchoMib::Cipslaicmpechotmpltable>())
	,cipslatcpconntmpltable(std::make_shared<CiscoIpslaEchoMib::Cipslatcpconntmpltable>())
	,cipslaudpechotmpltable(std::make_shared<CiscoIpslaEchoMib::Cipslaudpechotmpltable>())
{
    cipslaicmpechotmpltable->parent = this;

    cipslatcpconntmpltable->parent = this;

    cipslaudpechotmpltable->parent = this;

    yang_name = "CISCO-IPSLA-ECHO-MIB"; yang_parent_name = "CISCO-IPSLA-ECHO-MIB";
}

CiscoIpslaEchoMib::~CiscoIpslaEchoMib()
{
}

bool CiscoIpslaEchoMib::has_data() const
{
    return (cipslaicmpechotmpltable !=  nullptr && cipslaicmpechotmpltable->has_data())
	|| (cipslatcpconntmpltable !=  nullptr && cipslatcpconntmpltable->has_data())
	|| (cipslaudpechotmpltable !=  nullptr && cipslaudpechotmpltable->has_data());
}

bool CiscoIpslaEchoMib::has_operation() const
{
    return is_set(yfilter)
	|| (cipslaicmpechotmpltable !=  nullptr && cipslaicmpechotmpltable->has_operation())
	|| (cipslatcpconntmpltable !=  nullptr && cipslatcpconntmpltable->has_operation())
	|| (cipslaudpechotmpltable !=  nullptr && cipslaudpechotmpltable->has_operation());
}

std::string CiscoIpslaEchoMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSLA-ECHO-MIB:CISCO-IPSLA-ECHO-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIpslaEchoMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoIpslaEchoMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaIcmpEchoTmplTable")
    {
        if(cipslaicmpechotmpltable == nullptr)
        {
            cipslaicmpechotmpltable = std::make_shared<CiscoIpslaEchoMib::Cipslaicmpechotmpltable>();
        }
        return cipslaicmpechotmpltable;
    }

    if(child_yang_name == "cipslaTcpConnTmplTable")
    {
        if(cipslatcpconntmpltable == nullptr)
        {
            cipslatcpconntmpltable = std::make_shared<CiscoIpslaEchoMib::Cipslatcpconntmpltable>();
        }
        return cipslatcpconntmpltable;
    }

    if(child_yang_name == "cipslaUdpEchoTmplTable")
    {
        if(cipslaudpechotmpltable == nullptr)
        {
            cipslaudpechotmpltable = std::make_shared<CiscoIpslaEchoMib::Cipslaudpechotmpltable>();
        }
        return cipslaudpechotmpltable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaEchoMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cipslaicmpechotmpltable != nullptr)
    {
        children["cipslaIcmpEchoTmplTable"] = cipslaicmpechotmpltable;
    }

    if(cipslatcpconntmpltable != nullptr)
    {
        children["cipslaTcpConnTmplTable"] = cipslatcpconntmpltable;
    }

    if(cipslaudpechotmpltable != nullptr)
    {
        children["cipslaUdpEchoTmplTable"] = cipslaudpechotmpltable;
    }

    return children;
}

void CiscoIpslaEchoMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpslaEchoMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoIpslaEchoMib::clone_ptr() const
{
    return std::make_shared<CiscoIpslaEchoMib>();
}

std::string CiscoIpslaEchoMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIpslaEchoMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIpslaEchoMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoIpslaEchoMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoIpslaEchoMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaIcmpEchoTmplTable" || name == "cipslaTcpConnTmplTable" || name == "cipslaUdpEchoTmplTable")
        return true;
    return false;
}

CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmpltable()
{
    yang_name = "cipslaIcmpEchoTmplTable"; yang_parent_name = "CISCO-IPSLA-ECHO-MIB";
}

CiscoIpslaEchoMib::Cipslaicmpechotmpltable::~Cipslaicmpechotmpltable()
{
}

bool CiscoIpslaEchoMib::Cipslaicmpechotmpltable::has_data() const
{
    for (std::size_t index=0; index<cipslaicmpechotmplentry.size(); index++)
    {
        if(cipslaicmpechotmplentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpslaEchoMib::Cipslaicmpechotmpltable::has_operation() const
{
    for (std::size_t index=0; index<cipslaicmpechotmplentry.size(); index++)
    {
        if(cipslaicmpechotmplentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIpslaEchoMib::Cipslaicmpechotmpltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaIcmpEchoTmplTable";

    return path_buffer.str();

}

const EntityPath CiscoIpslaEchoMib::Cipslaicmpechotmpltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-ECHO-MIB:CISCO-IPSLA-ECHO-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaEchoMib::Cipslaicmpechotmpltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaIcmpEchoTmplEntry")
    {
        for(auto const & c : cipslaicmpechotmplentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry>();
        c->parent = this;
        cipslaicmpechotmplentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaEchoMib::Cipslaicmpechotmpltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipslaicmpechotmplentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpslaEchoMib::Cipslaicmpechotmpltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpslaEchoMib::Cipslaicmpechotmpltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIpslaEchoMib::Cipslaicmpechotmpltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaIcmpEchoTmplEntry")
        return true;
    return false;
}

CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::Cipslaicmpechotmplentry()
    :
    cipslaicmpechotmplname{YType::str, "cipslaIcmpEchoTmplName"},
    cipslaicmpechotmpldescription{YType::str, "cipslaIcmpEchoTmplDescription"},
    cipslaicmpechotmpldistbuckets{YType::uint32, "cipslaIcmpEchoTmplDistBuckets"},
    cipslaicmpechotmpldistinterval{YType::uint32, "cipslaIcmpEchoTmplDistInterval"},
    cipslaicmpechotmplhistbuckets{YType::uint32, "cipslaIcmpEchoTmplHistBuckets"},
    cipslaicmpechotmplhistfilter{YType::enumeration, "cipslaIcmpEchoTmplHistFilter"},
    cipslaicmpechotmplhistlives{YType::uint32, "cipslaIcmpEchoTmplHistLives"},
    cipslaicmpechotmplreqdatasize{YType::uint32, "cipslaIcmpEchoTmplReqDataSize"},
    cipslaicmpechotmplrowstatus{YType::enumeration, "cipslaIcmpEchoTmplRowStatus"},
    cipslaicmpechotmplsrcaddr{YType::str, "cipslaIcmpEchoTmplSrcAddr"},
    cipslaicmpechotmplsrcaddrtype{YType::enumeration, "cipslaIcmpEchoTmplSrcAddrType"},
    cipslaicmpechotmplstatshours{YType::uint32, "cipslaIcmpEchoTmplStatsHours"},
    cipslaicmpechotmplstoragetype{YType::enumeration, "cipslaIcmpEchoTmplStorageType"},
    cipslaicmpechotmplthreshold{YType::uint32, "cipslaIcmpEchoTmplThreshold"},
    cipslaicmpechotmpltimeout{YType::uint32, "cipslaIcmpEchoTmplTimeOut"},
    cipslaicmpechotmpltos{YType::uint32, "cipslaIcmpEchoTmplTOS"},
    cipslaicmpechotmplverifydata{YType::boolean, "cipslaIcmpEchoTmplVerifyData"},
    cipslaicmpechotmplvrfname{YType::str, "cipslaIcmpEchoTmplVrfName"}
{
    yang_name = "cipslaIcmpEchoTmplEntry"; yang_parent_name = "cipslaIcmpEchoTmplTable";
}

CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::~Cipslaicmpechotmplentry()
{
}

bool CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::has_data() const
{
    return cipslaicmpechotmplname.is_set
	|| cipslaicmpechotmpldescription.is_set
	|| cipslaicmpechotmpldistbuckets.is_set
	|| cipslaicmpechotmpldistinterval.is_set
	|| cipslaicmpechotmplhistbuckets.is_set
	|| cipslaicmpechotmplhistfilter.is_set
	|| cipslaicmpechotmplhistlives.is_set
	|| cipslaicmpechotmplreqdatasize.is_set
	|| cipslaicmpechotmplrowstatus.is_set
	|| cipslaicmpechotmplsrcaddr.is_set
	|| cipslaicmpechotmplsrcaddrtype.is_set
	|| cipslaicmpechotmplstatshours.is_set
	|| cipslaicmpechotmplstoragetype.is_set
	|| cipslaicmpechotmplthreshold.is_set
	|| cipslaicmpechotmpltimeout.is_set
	|| cipslaicmpechotmpltos.is_set
	|| cipslaicmpechotmplverifydata.is_set
	|| cipslaicmpechotmplvrfname.is_set;
}

bool CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipslaicmpechotmplname.yfilter)
	|| ydk::is_set(cipslaicmpechotmpldescription.yfilter)
	|| ydk::is_set(cipslaicmpechotmpldistbuckets.yfilter)
	|| ydk::is_set(cipslaicmpechotmpldistinterval.yfilter)
	|| ydk::is_set(cipslaicmpechotmplhistbuckets.yfilter)
	|| ydk::is_set(cipslaicmpechotmplhistfilter.yfilter)
	|| ydk::is_set(cipslaicmpechotmplhistlives.yfilter)
	|| ydk::is_set(cipslaicmpechotmplreqdatasize.yfilter)
	|| ydk::is_set(cipslaicmpechotmplrowstatus.yfilter)
	|| ydk::is_set(cipslaicmpechotmplsrcaddr.yfilter)
	|| ydk::is_set(cipslaicmpechotmplsrcaddrtype.yfilter)
	|| ydk::is_set(cipslaicmpechotmplstatshours.yfilter)
	|| ydk::is_set(cipslaicmpechotmplstoragetype.yfilter)
	|| ydk::is_set(cipslaicmpechotmplthreshold.yfilter)
	|| ydk::is_set(cipslaicmpechotmpltimeout.yfilter)
	|| ydk::is_set(cipslaicmpechotmpltos.yfilter)
	|| ydk::is_set(cipslaicmpechotmplverifydata.yfilter)
	|| ydk::is_set(cipslaicmpechotmplvrfname.yfilter);
}

std::string CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaIcmpEchoTmplEntry" <<"[cipslaIcmpEchoTmplName='" <<cipslaicmpechotmplname <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-ECHO-MIB:CISCO-IPSLA-ECHO-MIB/cipslaIcmpEchoTmplTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipslaicmpechotmplname.is_set || is_set(cipslaicmpechotmplname.yfilter)) leaf_name_data.push_back(cipslaicmpechotmplname.get_name_leafdata());
    if (cipslaicmpechotmpldescription.is_set || is_set(cipslaicmpechotmpldescription.yfilter)) leaf_name_data.push_back(cipslaicmpechotmpldescription.get_name_leafdata());
    if (cipslaicmpechotmpldistbuckets.is_set || is_set(cipslaicmpechotmpldistbuckets.yfilter)) leaf_name_data.push_back(cipslaicmpechotmpldistbuckets.get_name_leafdata());
    if (cipslaicmpechotmpldistinterval.is_set || is_set(cipslaicmpechotmpldistinterval.yfilter)) leaf_name_data.push_back(cipslaicmpechotmpldistinterval.get_name_leafdata());
    if (cipslaicmpechotmplhistbuckets.is_set || is_set(cipslaicmpechotmplhistbuckets.yfilter)) leaf_name_data.push_back(cipslaicmpechotmplhistbuckets.get_name_leafdata());
    if (cipslaicmpechotmplhistfilter.is_set || is_set(cipslaicmpechotmplhistfilter.yfilter)) leaf_name_data.push_back(cipslaicmpechotmplhistfilter.get_name_leafdata());
    if (cipslaicmpechotmplhistlives.is_set || is_set(cipslaicmpechotmplhistlives.yfilter)) leaf_name_data.push_back(cipslaicmpechotmplhistlives.get_name_leafdata());
    if (cipslaicmpechotmplreqdatasize.is_set || is_set(cipslaicmpechotmplreqdatasize.yfilter)) leaf_name_data.push_back(cipslaicmpechotmplreqdatasize.get_name_leafdata());
    if (cipslaicmpechotmplrowstatus.is_set || is_set(cipslaicmpechotmplrowstatus.yfilter)) leaf_name_data.push_back(cipslaicmpechotmplrowstatus.get_name_leafdata());
    if (cipslaicmpechotmplsrcaddr.is_set || is_set(cipslaicmpechotmplsrcaddr.yfilter)) leaf_name_data.push_back(cipslaicmpechotmplsrcaddr.get_name_leafdata());
    if (cipslaicmpechotmplsrcaddrtype.is_set || is_set(cipslaicmpechotmplsrcaddrtype.yfilter)) leaf_name_data.push_back(cipslaicmpechotmplsrcaddrtype.get_name_leafdata());
    if (cipslaicmpechotmplstatshours.is_set || is_set(cipslaicmpechotmplstatshours.yfilter)) leaf_name_data.push_back(cipslaicmpechotmplstatshours.get_name_leafdata());
    if (cipslaicmpechotmplstoragetype.is_set || is_set(cipslaicmpechotmplstoragetype.yfilter)) leaf_name_data.push_back(cipslaicmpechotmplstoragetype.get_name_leafdata());
    if (cipslaicmpechotmplthreshold.is_set || is_set(cipslaicmpechotmplthreshold.yfilter)) leaf_name_data.push_back(cipslaicmpechotmplthreshold.get_name_leafdata());
    if (cipslaicmpechotmpltimeout.is_set || is_set(cipslaicmpechotmpltimeout.yfilter)) leaf_name_data.push_back(cipslaicmpechotmpltimeout.get_name_leafdata());
    if (cipslaicmpechotmpltos.is_set || is_set(cipslaicmpechotmpltos.yfilter)) leaf_name_data.push_back(cipslaicmpechotmpltos.get_name_leafdata());
    if (cipslaicmpechotmplverifydata.is_set || is_set(cipslaicmpechotmplverifydata.yfilter)) leaf_name_data.push_back(cipslaicmpechotmplverifydata.get_name_leafdata());
    if (cipslaicmpechotmplvrfname.is_set || is_set(cipslaicmpechotmplvrfname.yfilter)) leaf_name_data.push_back(cipslaicmpechotmplvrfname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipslaIcmpEchoTmplName")
    {
        cipslaicmpechotmplname = value;
        cipslaicmpechotmplname.value_namespace = name_space;
        cipslaicmpechotmplname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpEchoTmplDescription")
    {
        cipslaicmpechotmpldescription = value;
        cipslaicmpechotmpldescription.value_namespace = name_space;
        cipslaicmpechotmpldescription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpEchoTmplDistBuckets")
    {
        cipslaicmpechotmpldistbuckets = value;
        cipslaicmpechotmpldistbuckets.value_namespace = name_space;
        cipslaicmpechotmpldistbuckets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpEchoTmplDistInterval")
    {
        cipslaicmpechotmpldistinterval = value;
        cipslaicmpechotmpldistinterval.value_namespace = name_space;
        cipslaicmpechotmpldistinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpEchoTmplHistBuckets")
    {
        cipslaicmpechotmplhistbuckets = value;
        cipslaicmpechotmplhistbuckets.value_namespace = name_space;
        cipslaicmpechotmplhistbuckets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpEchoTmplHistFilter")
    {
        cipslaicmpechotmplhistfilter = value;
        cipslaicmpechotmplhistfilter.value_namespace = name_space;
        cipslaicmpechotmplhistfilter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpEchoTmplHistLives")
    {
        cipslaicmpechotmplhistlives = value;
        cipslaicmpechotmplhistlives.value_namespace = name_space;
        cipslaicmpechotmplhistlives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpEchoTmplReqDataSize")
    {
        cipslaicmpechotmplreqdatasize = value;
        cipslaicmpechotmplreqdatasize.value_namespace = name_space;
        cipslaicmpechotmplreqdatasize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpEchoTmplRowStatus")
    {
        cipslaicmpechotmplrowstatus = value;
        cipslaicmpechotmplrowstatus.value_namespace = name_space;
        cipslaicmpechotmplrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpEchoTmplSrcAddr")
    {
        cipslaicmpechotmplsrcaddr = value;
        cipslaicmpechotmplsrcaddr.value_namespace = name_space;
        cipslaicmpechotmplsrcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpEchoTmplSrcAddrType")
    {
        cipslaicmpechotmplsrcaddrtype = value;
        cipslaicmpechotmplsrcaddrtype.value_namespace = name_space;
        cipslaicmpechotmplsrcaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpEchoTmplStatsHours")
    {
        cipslaicmpechotmplstatshours = value;
        cipslaicmpechotmplstatshours.value_namespace = name_space;
        cipslaicmpechotmplstatshours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpEchoTmplStorageType")
    {
        cipslaicmpechotmplstoragetype = value;
        cipslaicmpechotmplstoragetype.value_namespace = name_space;
        cipslaicmpechotmplstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpEchoTmplThreshold")
    {
        cipslaicmpechotmplthreshold = value;
        cipslaicmpechotmplthreshold.value_namespace = name_space;
        cipslaicmpechotmplthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpEchoTmplTimeOut")
    {
        cipslaicmpechotmpltimeout = value;
        cipslaicmpechotmpltimeout.value_namespace = name_space;
        cipslaicmpechotmpltimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpEchoTmplTOS")
    {
        cipslaicmpechotmpltos = value;
        cipslaicmpechotmpltos.value_namespace = name_space;
        cipslaicmpechotmpltos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpEchoTmplVerifyData")
    {
        cipslaicmpechotmplverifydata = value;
        cipslaicmpechotmplverifydata.value_namespace = name_space;
        cipslaicmpechotmplverifydata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpEchoTmplVrfName")
    {
        cipslaicmpechotmplvrfname = value;
        cipslaicmpechotmplvrfname.value_namespace = name_space;
        cipslaicmpechotmplvrfname.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipslaIcmpEchoTmplName")
    {
        cipslaicmpechotmplname.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpEchoTmplDescription")
    {
        cipslaicmpechotmpldescription.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpEchoTmplDistBuckets")
    {
        cipslaicmpechotmpldistbuckets.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpEchoTmplDistInterval")
    {
        cipslaicmpechotmpldistinterval.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpEchoTmplHistBuckets")
    {
        cipslaicmpechotmplhistbuckets.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpEchoTmplHistFilter")
    {
        cipslaicmpechotmplhistfilter.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpEchoTmplHistLives")
    {
        cipslaicmpechotmplhistlives.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpEchoTmplReqDataSize")
    {
        cipslaicmpechotmplreqdatasize.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpEchoTmplRowStatus")
    {
        cipslaicmpechotmplrowstatus.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpEchoTmplSrcAddr")
    {
        cipslaicmpechotmplsrcaddr.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpEchoTmplSrcAddrType")
    {
        cipslaicmpechotmplsrcaddrtype.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpEchoTmplStatsHours")
    {
        cipslaicmpechotmplstatshours.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpEchoTmplStorageType")
    {
        cipslaicmpechotmplstoragetype.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpEchoTmplThreshold")
    {
        cipslaicmpechotmplthreshold.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpEchoTmplTimeOut")
    {
        cipslaicmpechotmpltimeout.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpEchoTmplTOS")
    {
        cipslaicmpechotmpltos.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpEchoTmplVerifyData")
    {
        cipslaicmpechotmplverifydata.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpEchoTmplVrfName")
    {
        cipslaicmpechotmplvrfname.yfilter = yfilter;
    }
}

bool CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaIcmpEchoTmplName" || name == "cipslaIcmpEchoTmplDescription" || name == "cipslaIcmpEchoTmplDistBuckets" || name == "cipslaIcmpEchoTmplDistInterval" || name == "cipslaIcmpEchoTmplHistBuckets" || name == "cipslaIcmpEchoTmplHistFilter" || name == "cipslaIcmpEchoTmplHistLives" || name == "cipslaIcmpEchoTmplReqDataSize" || name == "cipslaIcmpEchoTmplRowStatus" || name == "cipslaIcmpEchoTmplSrcAddr" || name == "cipslaIcmpEchoTmplSrcAddrType" || name == "cipslaIcmpEchoTmplStatsHours" || name == "cipslaIcmpEchoTmplStorageType" || name == "cipslaIcmpEchoTmplThreshold" || name == "cipslaIcmpEchoTmplTimeOut" || name == "cipslaIcmpEchoTmplTOS" || name == "cipslaIcmpEchoTmplVerifyData" || name == "cipslaIcmpEchoTmplVrfName")
        return true;
    return false;
}

CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmpltable()
{
    yang_name = "cipslaUdpEchoTmplTable"; yang_parent_name = "CISCO-IPSLA-ECHO-MIB";
}

CiscoIpslaEchoMib::Cipslaudpechotmpltable::~Cipslaudpechotmpltable()
{
}

bool CiscoIpslaEchoMib::Cipslaudpechotmpltable::has_data() const
{
    for (std::size_t index=0; index<cipslaudpechotmplentry.size(); index++)
    {
        if(cipslaudpechotmplentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpslaEchoMib::Cipslaudpechotmpltable::has_operation() const
{
    for (std::size_t index=0; index<cipslaudpechotmplentry.size(); index++)
    {
        if(cipslaudpechotmplentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIpslaEchoMib::Cipslaudpechotmpltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaUdpEchoTmplTable";

    return path_buffer.str();

}

const EntityPath CiscoIpslaEchoMib::Cipslaudpechotmpltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-ECHO-MIB:CISCO-IPSLA-ECHO-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaEchoMib::Cipslaudpechotmpltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaUdpEchoTmplEntry")
    {
        for(auto const & c : cipslaudpechotmplentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry>();
        c->parent = this;
        cipslaudpechotmplentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaEchoMib::Cipslaudpechotmpltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipslaudpechotmplentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpslaEchoMib::Cipslaudpechotmpltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpslaEchoMib::Cipslaudpechotmpltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIpslaEchoMib::Cipslaudpechotmpltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaUdpEchoTmplEntry")
        return true;
    return false;
}

CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::Cipslaudpechotmplentry()
    :
    cipslaudpechotmplname{YType::str, "cipslaUdpEchoTmplName"},
    cipslaudpechotmplcontrolenable{YType::boolean, "cipslaUdpEchoTmplControlEnable"},
    cipslaudpechotmpldescription{YType::str, "cipslaUdpEchoTmplDescription"},
    cipslaudpechotmpldistbuckets{YType::uint32, "cipslaUdpEchoTmplDistBuckets"},
    cipslaudpechotmpldistinterval{YType::uint32, "cipslaUdpEchoTmplDistInterval"},
    cipslaudpechotmplhistbuckets{YType::uint32, "cipslaUdpEchoTmplHistBuckets"},
    cipslaudpechotmplhistfilter{YType::enumeration, "cipslaUdpEchoTmplHistFilter"},
    cipslaudpechotmplhistlives{YType::uint32, "cipslaUdpEchoTmplHistLives"},
    cipslaudpechotmplreqdatasize{YType::uint32, "cipslaUdpEchoTmplReqDataSize"},
    cipslaudpechotmplrowstatus{YType::enumeration, "cipslaUdpEchoTmplRowStatus"},
    cipslaudpechotmplsrcaddr{YType::str, "cipslaUdpEchoTmplSrcAddr"},
    cipslaudpechotmplsrcaddrtype{YType::enumeration, "cipslaUdpEchoTmplSrcAddrType"},
    cipslaudpechotmplsrcport{YType::uint16, "cipslaUdpEchoTmplSrcPort"},
    cipslaudpechotmplstatshours{YType::uint32, "cipslaUdpEchoTmplStatsHours"},
    cipslaudpechotmplstoragetype{YType::enumeration, "cipslaUdpEchoTmplStorageType"},
    cipslaudpechotmplthreshold{YType::uint32, "cipslaUdpEchoTmplThreshold"},
    cipslaudpechotmpltimeout{YType::uint32, "cipslaUdpEchoTmplTimeOut"},
    cipslaudpechotmpltos{YType::uint32, "cipslaUdpEchoTmplTOS"},
    cipslaudpechotmplverifydata{YType::boolean, "cipslaUdpEchoTmplVerifyData"},
    cipslaudpechotmplvrfname{YType::str, "cipslaUdpEchoTmplVrfName"}
{
    yang_name = "cipslaUdpEchoTmplEntry"; yang_parent_name = "cipslaUdpEchoTmplTable";
}

CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::~Cipslaudpechotmplentry()
{
}

bool CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::has_data() const
{
    return cipslaudpechotmplname.is_set
	|| cipslaudpechotmplcontrolenable.is_set
	|| cipslaudpechotmpldescription.is_set
	|| cipslaudpechotmpldistbuckets.is_set
	|| cipslaudpechotmpldistinterval.is_set
	|| cipslaudpechotmplhistbuckets.is_set
	|| cipslaudpechotmplhistfilter.is_set
	|| cipslaudpechotmplhistlives.is_set
	|| cipslaudpechotmplreqdatasize.is_set
	|| cipslaudpechotmplrowstatus.is_set
	|| cipslaudpechotmplsrcaddr.is_set
	|| cipslaudpechotmplsrcaddrtype.is_set
	|| cipslaudpechotmplsrcport.is_set
	|| cipslaudpechotmplstatshours.is_set
	|| cipslaudpechotmplstoragetype.is_set
	|| cipslaudpechotmplthreshold.is_set
	|| cipslaudpechotmpltimeout.is_set
	|| cipslaudpechotmpltos.is_set
	|| cipslaudpechotmplverifydata.is_set
	|| cipslaudpechotmplvrfname.is_set;
}

bool CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipslaudpechotmplname.yfilter)
	|| ydk::is_set(cipslaudpechotmplcontrolenable.yfilter)
	|| ydk::is_set(cipslaudpechotmpldescription.yfilter)
	|| ydk::is_set(cipslaudpechotmpldistbuckets.yfilter)
	|| ydk::is_set(cipslaudpechotmpldistinterval.yfilter)
	|| ydk::is_set(cipslaudpechotmplhistbuckets.yfilter)
	|| ydk::is_set(cipslaudpechotmplhistfilter.yfilter)
	|| ydk::is_set(cipslaudpechotmplhistlives.yfilter)
	|| ydk::is_set(cipslaudpechotmplreqdatasize.yfilter)
	|| ydk::is_set(cipslaudpechotmplrowstatus.yfilter)
	|| ydk::is_set(cipslaudpechotmplsrcaddr.yfilter)
	|| ydk::is_set(cipslaudpechotmplsrcaddrtype.yfilter)
	|| ydk::is_set(cipslaudpechotmplsrcport.yfilter)
	|| ydk::is_set(cipslaudpechotmplstatshours.yfilter)
	|| ydk::is_set(cipslaudpechotmplstoragetype.yfilter)
	|| ydk::is_set(cipslaudpechotmplthreshold.yfilter)
	|| ydk::is_set(cipslaudpechotmpltimeout.yfilter)
	|| ydk::is_set(cipslaudpechotmpltos.yfilter)
	|| ydk::is_set(cipslaudpechotmplverifydata.yfilter)
	|| ydk::is_set(cipslaudpechotmplvrfname.yfilter);
}

std::string CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaUdpEchoTmplEntry" <<"[cipslaUdpEchoTmplName='" <<cipslaudpechotmplname <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-ECHO-MIB:CISCO-IPSLA-ECHO-MIB/cipslaUdpEchoTmplTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipslaudpechotmplname.is_set || is_set(cipslaudpechotmplname.yfilter)) leaf_name_data.push_back(cipslaudpechotmplname.get_name_leafdata());
    if (cipslaudpechotmplcontrolenable.is_set || is_set(cipslaudpechotmplcontrolenable.yfilter)) leaf_name_data.push_back(cipslaudpechotmplcontrolenable.get_name_leafdata());
    if (cipslaudpechotmpldescription.is_set || is_set(cipslaudpechotmpldescription.yfilter)) leaf_name_data.push_back(cipslaudpechotmpldescription.get_name_leafdata());
    if (cipslaudpechotmpldistbuckets.is_set || is_set(cipslaudpechotmpldistbuckets.yfilter)) leaf_name_data.push_back(cipslaudpechotmpldistbuckets.get_name_leafdata());
    if (cipslaudpechotmpldistinterval.is_set || is_set(cipslaudpechotmpldistinterval.yfilter)) leaf_name_data.push_back(cipslaudpechotmpldistinterval.get_name_leafdata());
    if (cipslaudpechotmplhistbuckets.is_set || is_set(cipslaudpechotmplhistbuckets.yfilter)) leaf_name_data.push_back(cipslaudpechotmplhistbuckets.get_name_leafdata());
    if (cipslaudpechotmplhistfilter.is_set || is_set(cipslaudpechotmplhistfilter.yfilter)) leaf_name_data.push_back(cipslaudpechotmplhistfilter.get_name_leafdata());
    if (cipslaudpechotmplhistlives.is_set || is_set(cipslaudpechotmplhistlives.yfilter)) leaf_name_data.push_back(cipslaudpechotmplhistlives.get_name_leafdata());
    if (cipslaudpechotmplreqdatasize.is_set || is_set(cipslaudpechotmplreqdatasize.yfilter)) leaf_name_data.push_back(cipslaudpechotmplreqdatasize.get_name_leafdata());
    if (cipslaudpechotmplrowstatus.is_set || is_set(cipslaudpechotmplrowstatus.yfilter)) leaf_name_data.push_back(cipslaudpechotmplrowstatus.get_name_leafdata());
    if (cipslaudpechotmplsrcaddr.is_set || is_set(cipslaudpechotmplsrcaddr.yfilter)) leaf_name_data.push_back(cipslaudpechotmplsrcaddr.get_name_leafdata());
    if (cipslaudpechotmplsrcaddrtype.is_set || is_set(cipslaudpechotmplsrcaddrtype.yfilter)) leaf_name_data.push_back(cipslaudpechotmplsrcaddrtype.get_name_leafdata());
    if (cipslaudpechotmplsrcport.is_set || is_set(cipslaudpechotmplsrcport.yfilter)) leaf_name_data.push_back(cipslaudpechotmplsrcport.get_name_leafdata());
    if (cipslaudpechotmplstatshours.is_set || is_set(cipslaudpechotmplstatshours.yfilter)) leaf_name_data.push_back(cipslaudpechotmplstatshours.get_name_leafdata());
    if (cipslaudpechotmplstoragetype.is_set || is_set(cipslaudpechotmplstoragetype.yfilter)) leaf_name_data.push_back(cipslaudpechotmplstoragetype.get_name_leafdata());
    if (cipslaudpechotmplthreshold.is_set || is_set(cipslaudpechotmplthreshold.yfilter)) leaf_name_data.push_back(cipslaudpechotmplthreshold.get_name_leafdata());
    if (cipslaudpechotmpltimeout.is_set || is_set(cipslaudpechotmpltimeout.yfilter)) leaf_name_data.push_back(cipslaudpechotmpltimeout.get_name_leafdata());
    if (cipslaudpechotmpltos.is_set || is_set(cipslaudpechotmpltos.yfilter)) leaf_name_data.push_back(cipslaudpechotmpltos.get_name_leafdata());
    if (cipslaudpechotmplverifydata.is_set || is_set(cipslaudpechotmplverifydata.yfilter)) leaf_name_data.push_back(cipslaudpechotmplverifydata.get_name_leafdata());
    if (cipslaudpechotmplvrfname.is_set || is_set(cipslaudpechotmplvrfname.yfilter)) leaf_name_data.push_back(cipslaudpechotmplvrfname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipslaUdpEchoTmplName")
    {
        cipslaudpechotmplname = value;
        cipslaudpechotmplname.value_namespace = name_space;
        cipslaudpechotmplname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpEchoTmplControlEnable")
    {
        cipslaudpechotmplcontrolenable = value;
        cipslaudpechotmplcontrolenable.value_namespace = name_space;
        cipslaudpechotmplcontrolenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpEchoTmplDescription")
    {
        cipslaudpechotmpldescription = value;
        cipslaudpechotmpldescription.value_namespace = name_space;
        cipslaudpechotmpldescription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpEchoTmplDistBuckets")
    {
        cipslaudpechotmpldistbuckets = value;
        cipslaudpechotmpldistbuckets.value_namespace = name_space;
        cipslaudpechotmpldistbuckets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpEchoTmplDistInterval")
    {
        cipslaudpechotmpldistinterval = value;
        cipslaudpechotmpldistinterval.value_namespace = name_space;
        cipslaudpechotmpldistinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpEchoTmplHistBuckets")
    {
        cipslaudpechotmplhistbuckets = value;
        cipslaudpechotmplhistbuckets.value_namespace = name_space;
        cipslaudpechotmplhistbuckets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpEchoTmplHistFilter")
    {
        cipslaudpechotmplhistfilter = value;
        cipslaudpechotmplhistfilter.value_namespace = name_space;
        cipslaudpechotmplhistfilter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpEchoTmplHistLives")
    {
        cipslaudpechotmplhistlives = value;
        cipslaudpechotmplhistlives.value_namespace = name_space;
        cipslaudpechotmplhistlives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpEchoTmplReqDataSize")
    {
        cipslaudpechotmplreqdatasize = value;
        cipslaudpechotmplreqdatasize.value_namespace = name_space;
        cipslaudpechotmplreqdatasize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpEchoTmplRowStatus")
    {
        cipslaudpechotmplrowstatus = value;
        cipslaudpechotmplrowstatus.value_namespace = name_space;
        cipslaudpechotmplrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpEchoTmplSrcAddr")
    {
        cipslaudpechotmplsrcaddr = value;
        cipslaudpechotmplsrcaddr.value_namespace = name_space;
        cipslaudpechotmplsrcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpEchoTmplSrcAddrType")
    {
        cipslaudpechotmplsrcaddrtype = value;
        cipslaudpechotmplsrcaddrtype.value_namespace = name_space;
        cipslaudpechotmplsrcaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpEchoTmplSrcPort")
    {
        cipslaudpechotmplsrcport = value;
        cipslaudpechotmplsrcport.value_namespace = name_space;
        cipslaudpechotmplsrcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpEchoTmplStatsHours")
    {
        cipslaudpechotmplstatshours = value;
        cipslaudpechotmplstatshours.value_namespace = name_space;
        cipslaudpechotmplstatshours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpEchoTmplStorageType")
    {
        cipslaudpechotmplstoragetype = value;
        cipslaudpechotmplstoragetype.value_namespace = name_space;
        cipslaudpechotmplstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpEchoTmplThreshold")
    {
        cipslaudpechotmplthreshold = value;
        cipslaudpechotmplthreshold.value_namespace = name_space;
        cipslaudpechotmplthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpEchoTmplTimeOut")
    {
        cipslaudpechotmpltimeout = value;
        cipslaudpechotmpltimeout.value_namespace = name_space;
        cipslaudpechotmpltimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpEchoTmplTOS")
    {
        cipslaudpechotmpltos = value;
        cipslaudpechotmpltos.value_namespace = name_space;
        cipslaudpechotmpltos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpEchoTmplVerifyData")
    {
        cipslaudpechotmplverifydata = value;
        cipslaudpechotmplverifydata.value_namespace = name_space;
        cipslaudpechotmplverifydata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpEchoTmplVrfName")
    {
        cipslaudpechotmplvrfname = value;
        cipslaudpechotmplvrfname.value_namespace = name_space;
        cipslaudpechotmplvrfname.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipslaUdpEchoTmplName")
    {
        cipslaudpechotmplname.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpEchoTmplControlEnable")
    {
        cipslaudpechotmplcontrolenable.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpEchoTmplDescription")
    {
        cipslaudpechotmpldescription.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpEchoTmplDistBuckets")
    {
        cipslaudpechotmpldistbuckets.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpEchoTmplDistInterval")
    {
        cipslaudpechotmpldistinterval.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpEchoTmplHistBuckets")
    {
        cipslaudpechotmplhistbuckets.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpEchoTmplHistFilter")
    {
        cipslaudpechotmplhistfilter.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpEchoTmplHistLives")
    {
        cipslaudpechotmplhistlives.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpEchoTmplReqDataSize")
    {
        cipslaudpechotmplreqdatasize.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpEchoTmplRowStatus")
    {
        cipslaudpechotmplrowstatus.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpEchoTmplSrcAddr")
    {
        cipslaudpechotmplsrcaddr.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpEchoTmplSrcAddrType")
    {
        cipslaudpechotmplsrcaddrtype.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpEchoTmplSrcPort")
    {
        cipslaudpechotmplsrcport.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpEchoTmplStatsHours")
    {
        cipslaudpechotmplstatshours.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpEchoTmplStorageType")
    {
        cipslaudpechotmplstoragetype.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpEchoTmplThreshold")
    {
        cipslaudpechotmplthreshold.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpEchoTmplTimeOut")
    {
        cipslaudpechotmpltimeout.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpEchoTmplTOS")
    {
        cipslaudpechotmpltos.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpEchoTmplVerifyData")
    {
        cipslaudpechotmplverifydata.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpEchoTmplVrfName")
    {
        cipslaudpechotmplvrfname.yfilter = yfilter;
    }
}

bool CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaUdpEchoTmplName" || name == "cipslaUdpEchoTmplControlEnable" || name == "cipslaUdpEchoTmplDescription" || name == "cipslaUdpEchoTmplDistBuckets" || name == "cipslaUdpEchoTmplDistInterval" || name == "cipslaUdpEchoTmplHistBuckets" || name == "cipslaUdpEchoTmplHistFilter" || name == "cipslaUdpEchoTmplHistLives" || name == "cipslaUdpEchoTmplReqDataSize" || name == "cipslaUdpEchoTmplRowStatus" || name == "cipslaUdpEchoTmplSrcAddr" || name == "cipslaUdpEchoTmplSrcAddrType" || name == "cipslaUdpEchoTmplSrcPort" || name == "cipslaUdpEchoTmplStatsHours" || name == "cipslaUdpEchoTmplStorageType" || name == "cipslaUdpEchoTmplThreshold" || name == "cipslaUdpEchoTmplTimeOut" || name == "cipslaUdpEchoTmplTOS" || name == "cipslaUdpEchoTmplVerifyData" || name == "cipslaUdpEchoTmplVrfName")
        return true;
    return false;
}

CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmpltable()
{
    yang_name = "cipslaTcpConnTmplTable"; yang_parent_name = "CISCO-IPSLA-ECHO-MIB";
}

CiscoIpslaEchoMib::Cipslatcpconntmpltable::~Cipslatcpconntmpltable()
{
}

bool CiscoIpslaEchoMib::Cipslatcpconntmpltable::has_data() const
{
    for (std::size_t index=0; index<cipslatcpconntmplentry.size(); index++)
    {
        if(cipslatcpconntmplentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpslaEchoMib::Cipslatcpconntmpltable::has_operation() const
{
    for (std::size_t index=0; index<cipslatcpconntmplentry.size(); index++)
    {
        if(cipslatcpconntmplentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIpslaEchoMib::Cipslatcpconntmpltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaTcpConnTmplTable";

    return path_buffer.str();

}

const EntityPath CiscoIpslaEchoMib::Cipslatcpconntmpltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-ECHO-MIB:CISCO-IPSLA-ECHO-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaEchoMib::Cipslatcpconntmpltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaTcpConnTmplEntry")
    {
        for(auto const & c : cipslatcpconntmplentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry>();
        c->parent = this;
        cipslatcpconntmplentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaEchoMib::Cipslatcpconntmpltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipslatcpconntmplentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpslaEchoMib::Cipslatcpconntmpltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpslaEchoMib::Cipslatcpconntmpltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIpslaEchoMib::Cipslatcpconntmpltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaTcpConnTmplEntry")
        return true;
    return false;
}

CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::Cipslatcpconntmplentry()
    :
    cipslatcpconntmplname{YType::str, "cipslaTcpConnTmplName"},
    cipslatcpconntmplcontrolenable{YType::boolean, "cipslaTcpConnTmplControlEnable"},
    cipslatcpconntmpldescription{YType::str, "cipslaTcpConnTmplDescription"},
    cipslatcpconntmpldistbuckets{YType::uint32, "cipslaTcpConnTmplDistBuckets"},
    cipslatcpconntmpldistinterval{YType::uint32, "cipslaTcpConnTmplDistInterval"},
    cipslatcpconntmplhistbuckets{YType::uint32, "cipslaTcpConnTmplHistBuckets"},
    cipslatcpconntmplhistfilter{YType::enumeration, "cipslaTcpConnTmplHistFilter"},
    cipslatcpconntmplhistlives{YType::uint32, "cipslaTcpConnTmplHistLives"},
    cipslatcpconntmplrowstatus{YType::enumeration, "cipslaTcpConnTmplRowStatus"},
    cipslatcpconntmplsrcaddr{YType::str, "cipslaTcpConnTmplSrcAddr"},
    cipslatcpconntmplsrcaddrtype{YType::enumeration, "cipslaTcpConnTmplSrcAddrType"},
    cipslatcpconntmplsrcport{YType::uint16, "cipslaTcpConnTmplSrcPort"},
    cipslatcpconntmplstatshours{YType::uint32, "cipslaTcpConnTmplStatsHours"},
    cipslatcpconntmplstoragetype{YType::enumeration, "cipslaTcpConnTmplStorageType"},
    cipslatcpconntmplthreshold{YType::uint32, "cipslaTcpConnTmplThreshold"},
    cipslatcpconntmpltimeout{YType::uint32, "cipslaTcpConnTmplTimeOut"},
    cipslatcpconntmpltos{YType::uint32, "cipslaTcpConnTmplTOS"},
    cipslatcpconntmplverifydata{YType::boolean, "cipslaTcpConnTmplVerifyData"}
{
    yang_name = "cipslaTcpConnTmplEntry"; yang_parent_name = "cipslaTcpConnTmplTable";
}

CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::~Cipslatcpconntmplentry()
{
}

bool CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::has_data() const
{
    return cipslatcpconntmplname.is_set
	|| cipslatcpconntmplcontrolenable.is_set
	|| cipslatcpconntmpldescription.is_set
	|| cipslatcpconntmpldistbuckets.is_set
	|| cipslatcpconntmpldistinterval.is_set
	|| cipslatcpconntmplhistbuckets.is_set
	|| cipslatcpconntmplhistfilter.is_set
	|| cipslatcpconntmplhistlives.is_set
	|| cipslatcpconntmplrowstatus.is_set
	|| cipslatcpconntmplsrcaddr.is_set
	|| cipslatcpconntmplsrcaddrtype.is_set
	|| cipslatcpconntmplsrcport.is_set
	|| cipslatcpconntmplstatshours.is_set
	|| cipslatcpconntmplstoragetype.is_set
	|| cipslatcpconntmplthreshold.is_set
	|| cipslatcpconntmpltimeout.is_set
	|| cipslatcpconntmpltos.is_set
	|| cipslatcpconntmplverifydata.is_set;
}

bool CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipslatcpconntmplname.yfilter)
	|| ydk::is_set(cipslatcpconntmplcontrolenable.yfilter)
	|| ydk::is_set(cipslatcpconntmpldescription.yfilter)
	|| ydk::is_set(cipslatcpconntmpldistbuckets.yfilter)
	|| ydk::is_set(cipslatcpconntmpldistinterval.yfilter)
	|| ydk::is_set(cipslatcpconntmplhistbuckets.yfilter)
	|| ydk::is_set(cipslatcpconntmplhistfilter.yfilter)
	|| ydk::is_set(cipslatcpconntmplhistlives.yfilter)
	|| ydk::is_set(cipslatcpconntmplrowstatus.yfilter)
	|| ydk::is_set(cipslatcpconntmplsrcaddr.yfilter)
	|| ydk::is_set(cipslatcpconntmplsrcaddrtype.yfilter)
	|| ydk::is_set(cipslatcpconntmplsrcport.yfilter)
	|| ydk::is_set(cipslatcpconntmplstatshours.yfilter)
	|| ydk::is_set(cipslatcpconntmplstoragetype.yfilter)
	|| ydk::is_set(cipslatcpconntmplthreshold.yfilter)
	|| ydk::is_set(cipslatcpconntmpltimeout.yfilter)
	|| ydk::is_set(cipslatcpconntmpltos.yfilter)
	|| ydk::is_set(cipslatcpconntmplverifydata.yfilter);
}

std::string CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaTcpConnTmplEntry" <<"[cipslaTcpConnTmplName='" <<cipslatcpconntmplname <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-ECHO-MIB:CISCO-IPSLA-ECHO-MIB/cipslaTcpConnTmplTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipslatcpconntmplname.is_set || is_set(cipslatcpconntmplname.yfilter)) leaf_name_data.push_back(cipslatcpconntmplname.get_name_leafdata());
    if (cipslatcpconntmplcontrolenable.is_set || is_set(cipslatcpconntmplcontrolenable.yfilter)) leaf_name_data.push_back(cipslatcpconntmplcontrolenable.get_name_leafdata());
    if (cipslatcpconntmpldescription.is_set || is_set(cipslatcpconntmpldescription.yfilter)) leaf_name_data.push_back(cipslatcpconntmpldescription.get_name_leafdata());
    if (cipslatcpconntmpldistbuckets.is_set || is_set(cipslatcpconntmpldistbuckets.yfilter)) leaf_name_data.push_back(cipslatcpconntmpldistbuckets.get_name_leafdata());
    if (cipslatcpconntmpldistinterval.is_set || is_set(cipslatcpconntmpldistinterval.yfilter)) leaf_name_data.push_back(cipslatcpconntmpldistinterval.get_name_leafdata());
    if (cipslatcpconntmplhistbuckets.is_set || is_set(cipslatcpconntmplhistbuckets.yfilter)) leaf_name_data.push_back(cipslatcpconntmplhistbuckets.get_name_leafdata());
    if (cipslatcpconntmplhistfilter.is_set || is_set(cipslatcpconntmplhistfilter.yfilter)) leaf_name_data.push_back(cipslatcpconntmplhistfilter.get_name_leafdata());
    if (cipslatcpconntmplhistlives.is_set || is_set(cipslatcpconntmplhistlives.yfilter)) leaf_name_data.push_back(cipslatcpconntmplhistlives.get_name_leafdata());
    if (cipslatcpconntmplrowstatus.is_set || is_set(cipslatcpconntmplrowstatus.yfilter)) leaf_name_data.push_back(cipslatcpconntmplrowstatus.get_name_leafdata());
    if (cipslatcpconntmplsrcaddr.is_set || is_set(cipslatcpconntmplsrcaddr.yfilter)) leaf_name_data.push_back(cipslatcpconntmplsrcaddr.get_name_leafdata());
    if (cipslatcpconntmplsrcaddrtype.is_set || is_set(cipslatcpconntmplsrcaddrtype.yfilter)) leaf_name_data.push_back(cipslatcpconntmplsrcaddrtype.get_name_leafdata());
    if (cipslatcpconntmplsrcport.is_set || is_set(cipslatcpconntmplsrcport.yfilter)) leaf_name_data.push_back(cipslatcpconntmplsrcport.get_name_leafdata());
    if (cipslatcpconntmplstatshours.is_set || is_set(cipslatcpconntmplstatshours.yfilter)) leaf_name_data.push_back(cipslatcpconntmplstatshours.get_name_leafdata());
    if (cipslatcpconntmplstoragetype.is_set || is_set(cipslatcpconntmplstoragetype.yfilter)) leaf_name_data.push_back(cipslatcpconntmplstoragetype.get_name_leafdata());
    if (cipslatcpconntmplthreshold.is_set || is_set(cipslatcpconntmplthreshold.yfilter)) leaf_name_data.push_back(cipslatcpconntmplthreshold.get_name_leafdata());
    if (cipslatcpconntmpltimeout.is_set || is_set(cipslatcpconntmpltimeout.yfilter)) leaf_name_data.push_back(cipslatcpconntmpltimeout.get_name_leafdata());
    if (cipslatcpconntmpltos.is_set || is_set(cipslatcpconntmpltos.yfilter)) leaf_name_data.push_back(cipslatcpconntmpltos.get_name_leafdata());
    if (cipslatcpconntmplverifydata.is_set || is_set(cipslatcpconntmplverifydata.yfilter)) leaf_name_data.push_back(cipslatcpconntmplverifydata.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipslaTcpConnTmplName")
    {
        cipslatcpconntmplname = value;
        cipslatcpconntmplname.value_namespace = name_space;
        cipslatcpconntmplname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaTcpConnTmplControlEnable")
    {
        cipslatcpconntmplcontrolenable = value;
        cipslatcpconntmplcontrolenable.value_namespace = name_space;
        cipslatcpconntmplcontrolenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaTcpConnTmplDescription")
    {
        cipslatcpconntmpldescription = value;
        cipslatcpconntmpldescription.value_namespace = name_space;
        cipslatcpconntmpldescription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaTcpConnTmplDistBuckets")
    {
        cipslatcpconntmpldistbuckets = value;
        cipslatcpconntmpldistbuckets.value_namespace = name_space;
        cipslatcpconntmpldistbuckets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaTcpConnTmplDistInterval")
    {
        cipslatcpconntmpldistinterval = value;
        cipslatcpconntmpldistinterval.value_namespace = name_space;
        cipslatcpconntmpldistinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaTcpConnTmplHistBuckets")
    {
        cipslatcpconntmplhistbuckets = value;
        cipslatcpconntmplhistbuckets.value_namespace = name_space;
        cipslatcpconntmplhistbuckets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaTcpConnTmplHistFilter")
    {
        cipslatcpconntmplhistfilter = value;
        cipslatcpconntmplhistfilter.value_namespace = name_space;
        cipslatcpconntmplhistfilter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaTcpConnTmplHistLives")
    {
        cipslatcpconntmplhistlives = value;
        cipslatcpconntmplhistlives.value_namespace = name_space;
        cipslatcpconntmplhistlives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaTcpConnTmplRowStatus")
    {
        cipslatcpconntmplrowstatus = value;
        cipslatcpconntmplrowstatus.value_namespace = name_space;
        cipslatcpconntmplrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaTcpConnTmplSrcAddr")
    {
        cipslatcpconntmplsrcaddr = value;
        cipslatcpconntmplsrcaddr.value_namespace = name_space;
        cipslatcpconntmplsrcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaTcpConnTmplSrcAddrType")
    {
        cipslatcpconntmplsrcaddrtype = value;
        cipslatcpconntmplsrcaddrtype.value_namespace = name_space;
        cipslatcpconntmplsrcaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaTcpConnTmplSrcPort")
    {
        cipslatcpconntmplsrcport = value;
        cipslatcpconntmplsrcport.value_namespace = name_space;
        cipslatcpconntmplsrcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaTcpConnTmplStatsHours")
    {
        cipslatcpconntmplstatshours = value;
        cipslatcpconntmplstatshours.value_namespace = name_space;
        cipslatcpconntmplstatshours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaTcpConnTmplStorageType")
    {
        cipslatcpconntmplstoragetype = value;
        cipslatcpconntmplstoragetype.value_namespace = name_space;
        cipslatcpconntmplstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaTcpConnTmplThreshold")
    {
        cipslatcpconntmplthreshold = value;
        cipslatcpconntmplthreshold.value_namespace = name_space;
        cipslatcpconntmplthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaTcpConnTmplTimeOut")
    {
        cipslatcpconntmpltimeout = value;
        cipslatcpconntmpltimeout.value_namespace = name_space;
        cipslatcpconntmpltimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaTcpConnTmplTOS")
    {
        cipslatcpconntmpltos = value;
        cipslatcpconntmpltos.value_namespace = name_space;
        cipslatcpconntmpltos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaTcpConnTmplVerifyData")
    {
        cipslatcpconntmplverifydata = value;
        cipslatcpconntmplverifydata.value_namespace = name_space;
        cipslatcpconntmplverifydata.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipslaTcpConnTmplName")
    {
        cipslatcpconntmplname.yfilter = yfilter;
    }
    if(value_path == "cipslaTcpConnTmplControlEnable")
    {
        cipslatcpconntmplcontrolenable.yfilter = yfilter;
    }
    if(value_path == "cipslaTcpConnTmplDescription")
    {
        cipslatcpconntmpldescription.yfilter = yfilter;
    }
    if(value_path == "cipslaTcpConnTmplDistBuckets")
    {
        cipslatcpconntmpldistbuckets.yfilter = yfilter;
    }
    if(value_path == "cipslaTcpConnTmplDistInterval")
    {
        cipslatcpconntmpldistinterval.yfilter = yfilter;
    }
    if(value_path == "cipslaTcpConnTmplHistBuckets")
    {
        cipslatcpconntmplhistbuckets.yfilter = yfilter;
    }
    if(value_path == "cipslaTcpConnTmplHistFilter")
    {
        cipslatcpconntmplhistfilter.yfilter = yfilter;
    }
    if(value_path == "cipslaTcpConnTmplHistLives")
    {
        cipslatcpconntmplhistlives.yfilter = yfilter;
    }
    if(value_path == "cipslaTcpConnTmplRowStatus")
    {
        cipslatcpconntmplrowstatus.yfilter = yfilter;
    }
    if(value_path == "cipslaTcpConnTmplSrcAddr")
    {
        cipslatcpconntmplsrcaddr.yfilter = yfilter;
    }
    if(value_path == "cipslaTcpConnTmplSrcAddrType")
    {
        cipslatcpconntmplsrcaddrtype.yfilter = yfilter;
    }
    if(value_path == "cipslaTcpConnTmplSrcPort")
    {
        cipslatcpconntmplsrcport.yfilter = yfilter;
    }
    if(value_path == "cipslaTcpConnTmplStatsHours")
    {
        cipslatcpconntmplstatshours.yfilter = yfilter;
    }
    if(value_path == "cipslaTcpConnTmplStorageType")
    {
        cipslatcpconntmplstoragetype.yfilter = yfilter;
    }
    if(value_path == "cipslaTcpConnTmplThreshold")
    {
        cipslatcpconntmplthreshold.yfilter = yfilter;
    }
    if(value_path == "cipslaTcpConnTmplTimeOut")
    {
        cipslatcpconntmpltimeout.yfilter = yfilter;
    }
    if(value_path == "cipslaTcpConnTmplTOS")
    {
        cipslatcpconntmpltos.yfilter = yfilter;
    }
    if(value_path == "cipslaTcpConnTmplVerifyData")
    {
        cipslatcpconntmplverifydata.yfilter = yfilter;
    }
}

bool CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaTcpConnTmplName" || name == "cipslaTcpConnTmplControlEnable" || name == "cipslaTcpConnTmplDescription" || name == "cipslaTcpConnTmplDistBuckets" || name == "cipslaTcpConnTmplDistInterval" || name == "cipslaTcpConnTmplHistBuckets" || name == "cipslaTcpConnTmplHistFilter" || name == "cipslaTcpConnTmplHistLives" || name == "cipslaTcpConnTmplRowStatus" || name == "cipslaTcpConnTmplSrcAddr" || name == "cipslaTcpConnTmplSrcAddrType" || name == "cipslaTcpConnTmplSrcPort" || name == "cipslaTcpConnTmplStatsHours" || name == "cipslaTcpConnTmplStorageType" || name == "cipslaTcpConnTmplThreshold" || name == "cipslaTcpConnTmplTimeOut" || name == "cipslaTcpConnTmplTOS" || name == "cipslaTcpConnTmplVerifyData")
        return true;
    return false;
}

const Enum::YLeaf CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::Cipslaicmpechotmplhistfilter::none {1, "none"};
const Enum::YLeaf CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::Cipslaicmpechotmplhistfilter::all {2, "all"};
const Enum::YLeaf CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::Cipslaicmpechotmplhistfilter::overThreshold {3, "overThreshold"};
const Enum::YLeaf CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::Cipslaicmpechotmplhistfilter::failures {4, "failures"};

const Enum::YLeaf CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::Cipslaudpechotmplhistfilter::none {1, "none"};
const Enum::YLeaf CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::Cipslaudpechotmplhistfilter::all {2, "all"};
const Enum::YLeaf CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::Cipslaudpechotmplhistfilter::overThreshold {3, "overThreshold"};
const Enum::YLeaf CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::Cipslaudpechotmplhistfilter::failures {4, "failures"};

const Enum::YLeaf CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::Cipslatcpconntmplhistfilter::none {1, "none"};
const Enum::YLeaf CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::Cipslatcpconntmplhistfilter::all {2, "all"};
const Enum::YLeaf CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::Cipslatcpconntmplhistfilter::overThreshold {3, "overThreshold"};
const Enum::YLeaf CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::Cipslatcpconntmplhistfilter::failures {4, "failures"};


}
}
