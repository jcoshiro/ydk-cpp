
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_3.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_5.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_4.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_pim_oper {

Pim::Active::DefaultContext::Ranges::Range::Range()
    :
    client{YType::enumeration, "client"},
    client_xr{YType::enumeration, "client-xr"},
    expires{YType::uint64, "expires"},
    protocol{YType::enumeration, "protocol"},
    rp_address{YType::str, "rp-address"}
    	,
    rp_address_xr(std::make_shared<Pim::Active::DefaultContext::Ranges::Range::RpAddressXr>())
	,source_of_information(std::make_shared<Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation>())
{
    rp_address_xr->parent = this;
    children["rp-address-xr"] = rp_address_xr;

    source_of_information->parent = this;
    children["source-of-information"] = source_of_information;

    yang_name = "range"; yang_parent_name = "ranges";
}

Pim::Active::DefaultContext::Ranges::Range::~Range()
{
}

bool Pim::Active::DefaultContext::Ranges::Range::has_data() const
{
    for (std::size_t index=0; index<group_range.size(); index++)
    {
        if(group_range[index]->has_data())
            return true;
    }
    return client.is_set
	|| client_xr.is_set
	|| expires.is_set
	|| protocol.is_set
	|| rp_address.is_set
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_data())
	|| (source_of_information !=  nullptr && source_of_information->has_data());
}

bool Pim::Active::DefaultContext::Ranges::Range::has_operation() const
{
    for (std::size_t index=0; index<group_range.size(); index++)
    {
        if(group_range[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(client.operation)
	|| is_set(client_xr.operation)
	|| is_set(expires.operation)
	|| is_set(protocol.operation)
	|| is_set(rp_address.operation)
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_operation())
	|| (source_of_information !=  nullptr && source_of_information->has_operation());
}

std::string Pim::Active::DefaultContext::Ranges::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Ranges::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/ranges/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.operation)) leaf_name_data.push_back(client.get_name_leafdata());
    if (client_xr.is_set || is_set(client_xr.operation)) leaf_name_data.push_back(client_xr.get_name_leafdata());
    if (expires.is_set || is_set(expires.operation)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Ranges::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-range")
    {
        for(auto const & c : group_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::Ranges::Range::GroupRange>();
        c->parent = this;
        group_range.push_back(std::move(c));
        children[segment_path] = group_range.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "rp-address-xr")
    {
        if(rp_address_xr != nullptr)
        {
            children["rp-address-xr"] = rp_address_xr;
        }
        else
        {
            rp_address_xr = std::make_shared<Pim::Active::DefaultContext::Ranges::Range::RpAddressXr>();
            rp_address_xr->parent = this;
            children["rp-address-xr"] = rp_address_xr;
        }
        return children.at("rp-address-xr");
    }

    if(child_yang_name == "source-of-information")
    {
        if(source_of_information != nullptr)
        {
            children["source-of-information"] = source_of_information;
        }
        else
        {
            source_of_information = std::make_shared<Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation>();
            source_of_information->parent = this;
            children["source-of-information"] = source_of_information;
        }
        return children.at("source-of-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Ranges::Range::get_children()
{
    for (auto const & c : group_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("rp-address-xr") == children.end())
    {
        if(rp_address_xr != nullptr)
        {
            children["rp-address-xr"] = rp_address_xr;
        }
    }

    if(children.find("source-of-information") == children.end())
    {
        if(source_of_information != nullptr)
        {
            children["source-of-information"] = source_of_information;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Ranges::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client")
    {
        client = value;
    }
    if(value_path == "client-xr")
    {
        client_xr = value;
    }
    if(value_path == "expires")
    {
        expires = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
}

Pim::Active::DefaultContext::Ranges::Range::RpAddressXr::RpAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address-xr"; yang_parent_name = "range";
}

Pim::Active::DefaultContext::Ranges::Range::RpAddressXr::~RpAddressXr()
{
}

bool Pim::Active::DefaultContext::Ranges::Range::RpAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Ranges::Range::RpAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Ranges::Range::RpAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address-xr";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Ranges::Range::RpAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/ranges/range/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Ranges::Range::RpAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Ranges::Range::RpAddressXr::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Ranges::Range::RpAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation::SourceOfInformation()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-of-information"; yang_parent_name = "range";
}

Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation::~SourceOfInformation()
{
}

bool Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-of-information";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/ranges/range/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Ranges::Range::GroupRange::GroupRange()
    :
    expires{YType::uint64, "expires"},
    prefix_length{YType::int32, "prefix-length"},
    uptime{YType::uint64, "uptime"}
    	,
    prefix(std::make_shared<Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix>())
	,source_of_information(std::make_shared<Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation>())
{
    prefix->parent = this;
    children["prefix"] = prefix;

    source_of_information->parent = this;
    children["source-of-information"] = source_of_information;

    yang_name = "group-range"; yang_parent_name = "range";
}

Pim::Active::DefaultContext::Ranges::Range::GroupRange::~GroupRange()
{
}

bool Pim::Active::DefaultContext::Ranges::Range::GroupRange::has_data() const
{
    return expires.is_set
	|| prefix_length.is_set
	|| uptime.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (source_of_information !=  nullptr && source_of_information->has_data());
}

bool Pim::Active::DefaultContext::Ranges::Range::GroupRange::has_operation() const
{
    return is_set(operation)
	|| is_set(expires.operation)
	|| is_set(prefix_length.operation)
	|| is_set(uptime.operation)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (source_of_information !=  nullptr && source_of_information->has_operation());
}

std::string Pim::Active::DefaultContext::Ranges::Range::GroupRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-range";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Ranges::Range::GroupRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/ranges/range/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expires.is_set || is_set(expires.operation)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Ranges::Range::GroupRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix")
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix;
        }
        else
        {
            prefix = std::make_shared<Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix>();
            prefix->parent = this;
            children["prefix"] = prefix;
        }
        return children.at("prefix");
    }

    if(child_yang_name == "source-of-information")
    {
        if(source_of_information != nullptr)
        {
            children["source-of-information"] = source_of_information;
        }
        else
        {
            source_of_information = std::make_shared<Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation>();
            source_of_information->parent = this;
            children["source-of-information"] = source_of_information;
        }
        return children.at("source-of-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Ranges::Range::GroupRange::get_children()
{
    if(children.find("prefix") == children.end())
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix;
        }
    }

    if(children.find("source-of-information") == children.end())
    {
        if(source_of_information != nullptr)
        {
            children["source-of-information"] = source_of_information;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Ranges::Range::GroupRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expires")
    {
        expires = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "prefix"; yang_parent_name = "group-range";
}

Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix::~Prefix()
{
}

bool Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/ranges/range/group-range/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::SourceOfInformation()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-of-information"; yang_parent_name = "group-range";
}

Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::~SourceOfInformation()
{
}

bool Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-of-information";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/ranges/range/group-range/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormats()
{
    yang_name = "interface-old-formats"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::InterfaceOldFormats::~InterfaceOldFormats()
{
}

bool Pim::Active::DefaultContext::InterfaceOldFormats::has_data() const
{
    for (std::size_t index=0; index<interface_old_format.size(); index++)
    {
        if(interface_old_format[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::InterfaceOldFormats::has_operation() const
{
    for (std::size_t index=0; index<interface_old_format.size(); index++)
    {
        if(interface_old_format[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::InterfaceOldFormats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-formats";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::InterfaceOldFormats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::InterfaceOldFormats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-old-format")
    {
        for(auto const & c : interface_old_format)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat>();
        c->parent = this;
        interface_old_format.push_back(std::move(c));
        children[segment_path] = interface_old_format.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::InterfaceOldFormats::get_children()
{
    for (auto const & c : interface_old_format)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::InterfaceOldFormats::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceOldFormat()
    :
    interface_name{YType::str, "interface-name"},
    are_we_dr{YType::boolean, "are-we-dr"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    configured_override_interval{YType::uint16, "configured-override-interval"},
    configured_propagation_delay{YType::uint16, "configured-propagation-delay"},
    dr_priority{YType::uint32, "dr-priority"},
    external_neighbor_count{YType::uint16, "external-neighbor-count"},
    generation_id{YType::uint32, "generation-id"},
    hello_expiry{YType::uint64, "hello-expiry"},
    hello_interval{YType::uint16, "hello-interval"},
    idb_acl_name{YType::str, "idb-acl-name"},
    idb_acl_provided{YType::boolean, "idb-acl-provided"},
    idb_current_count{YType::uint32, "idb-current-count"},
    idb_max_count{YType::uint32, "idb-max-count"},
    idb_oor_enabled{YType::boolean, "idb-oor-enabled"},
    idb_threshold_count{YType::uint32, "idb-threshold-count"},
    interface_address_mask{YType::uint8, "interface-address-mask"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_enabled{YType::boolean, "is-enabled"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    join_prune_interval{YType::uint16, "join-prune-interval"},
    neighbor_count{YType::uint16, "neighbor-count"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    override_interval{YType::uint16, "override-interval"},
    passive_interface{YType::boolean, "passive-interface"},
    propagation_delay{YType::uint16, "propagation-delay"},
    prune_delay_enabled{YType::boolean, "prune-delay-enabled"},
    virtual_interface{YType::boolean, "virtual-interface"}
    	,
    dr_address(std::make_shared<Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress>())
{
    dr_address->parent = this;
    children["dr-address"] = dr_address;

    yang_name = "interface-old-format"; yang_parent_name = "interface-old-formats";
}

Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::~InterfaceOldFormat()
{
}

bool Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::has_data() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| are_we_dr.is_set
	|| bfd_enabled.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| configured_override_interval.is_set
	|| configured_propagation_delay.is_set
	|| dr_priority.is_set
	|| external_neighbor_count.is_set
	|| generation_id.is_set
	|| hello_expiry.is_set
	|| hello_interval.is_set
	|| idb_acl_name.is_set
	|| idb_acl_provided.is_set
	|| idb_current_count.is_set
	|| idb_max_count.is_set
	|| idb_oor_enabled.is_set
	|| idb_threshold_count.is_set
	|| interface_address_mask.is_set
	|| interface_name_xr.is_set
	|| is_batch_asserts_capable.is_set
	|| is_bidirectional_capable.is_set
	|| is_enabled.is_set
	|| is_proxy_capable.is_set
	|| join_prune_interval.is_set
	|| neighbor_count.is_set
	|| neighbor_filter_name.is_set
	|| override_interval.is_set
	|| passive_interface.is_set
	|| propagation_delay.is_set
	|| prune_delay_enabled.is_set
	|| virtual_interface.is_set
	|| (dr_address !=  nullptr && dr_address->has_data());
}

bool Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::has_operation() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(are_we_dr.operation)
	|| is_set(bfd_enabled.operation)
	|| is_set(bfd_interval.operation)
	|| is_set(bfd_multiplier.operation)
	|| is_set(configured_override_interval.operation)
	|| is_set(configured_propagation_delay.operation)
	|| is_set(dr_priority.operation)
	|| is_set(external_neighbor_count.operation)
	|| is_set(generation_id.operation)
	|| is_set(hello_expiry.operation)
	|| is_set(hello_interval.operation)
	|| is_set(idb_acl_name.operation)
	|| is_set(idb_acl_provided.operation)
	|| is_set(idb_current_count.operation)
	|| is_set(idb_max_count.operation)
	|| is_set(idb_oor_enabled.operation)
	|| is_set(idb_threshold_count.operation)
	|| is_set(interface_address_mask.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_batch_asserts_capable.operation)
	|| is_set(is_bidirectional_capable.operation)
	|| is_set(is_enabled.operation)
	|| is_set(is_proxy_capable.operation)
	|| is_set(join_prune_interval.operation)
	|| is_set(neighbor_count.operation)
	|| is_set(neighbor_filter_name.operation)
	|| is_set(override_interval.operation)
	|| is_set(passive_interface.operation)
	|| is_set(propagation_delay.operation)
	|| is_set(prune_delay_enabled.operation)
	|| is_set(virtual_interface.operation)
	|| (dr_address !=  nullptr && dr_address->has_operation());
}

std::string Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-format" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/interface-old-formats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (are_we_dr.is_set || is_set(are_we_dr.operation)) leaf_name_data.push_back(are_we_dr.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.operation)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.operation)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.operation)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (configured_override_interval.is_set || is_set(configured_override_interval.operation)) leaf_name_data.push_back(configured_override_interval.get_name_leafdata());
    if (configured_propagation_delay.is_set || is_set(configured_propagation_delay.operation)) leaf_name_data.push_back(configured_propagation_delay.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.operation)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (external_neighbor_count.is_set || is_set(external_neighbor_count.operation)) leaf_name_data.push_back(external_neighbor_count.get_name_leafdata());
    if (generation_id.is_set || is_set(generation_id.operation)) leaf_name_data.push_back(generation_id.get_name_leafdata());
    if (hello_expiry.is_set || is_set(hello_expiry.operation)) leaf_name_data.push_back(hello_expiry.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (idb_acl_name.is_set || is_set(idb_acl_name.operation)) leaf_name_data.push_back(idb_acl_name.get_name_leafdata());
    if (idb_acl_provided.is_set || is_set(idb_acl_provided.operation)) leaf_name_data.push_back(idb_acl_provided.get_name_leafdata());
    if (idb_current_count.is_set || is_set(idb_current_count.operation)) leaf_name_data.push_back(idb_current_count.get_name_leafdata());
    if (idb_max_count.is_set || is_set(idb_max_count.operation)) leaf_name_data.push_back(idb_max_count.get_name_leafdata());
    if (idb_oor_enabled.is_set || is_set(idb_oor_enabled.operation)) leaf_name_data.push_back(idb_oor_enabled.get_name_leafdata());
    if (idb_threshold_count.is_set || is_set(idb_threshold_count.operation)) leaf_name_data.push_back(idb_threshold_count.get_name_leafdata());
    if (interface_address_mask.is_set || is_set(interface_address_mask.operation)) leaf_name_data.push_back(interface_address_mask.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.operation)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.operation)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_enabled.is_set || is_set(is_enabled.operation)) leaf_name_data.push_back(is_enabled.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.operation)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (join_prune_interval.is_set || is_set(join_prune_interval.operation)) leaf_name_data.push_back(join_prune_interval.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.operation)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.operation)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.operation)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.operation)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.operation)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (prune_delay_enabled.is_set || is_set(prune_delay_enabled.operation)) leaf_name_data.push_back(prune_delay_enabled.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.operation)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dr-address")
    {
        if(dr_address != nullptr)
        {
            children["dr-address"] = dr_address;
        }
        else
        {
            dr_address = std::make_shared<Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress>();
            dr_address->parent = this;
            children["dr-address"] = dr_address;
        }
        return children.at("dr-address");
    }

    if(child_yang_name == "interface-address")
    {
        for(auto const & c : interface_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress>();
        c->parent = this;
        interface_address.push_back(std::move(c));
        children[segment_path] = interface_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_children()
{
    if(children.find("dr-address") == children.end())
    {
        if(dr_address != nullptr)
        {
            children["dr-address"] = dr_address;
        }
    }

    for (auto const & c : interface_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr = value;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval = value;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay = value;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count = value;
    }
    if(value_path == "generation-id")
    {
        generation_id = value;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name = value;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided = value;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count = value;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count = value;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled = value;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count = value;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
    }
    if(value_path == "is-enabled")
    {
        is_enabled = value;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval = value;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled = value;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
    }
}

Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::DrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "dr-address"; yang_parent_name = "interface-old-format";
}

Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::~DrAddress()
{
}

bool Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dr-address";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DrAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::InterfaceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "interface-address"; yang_parent_name = "interface-old-format";
}

Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::~InterfaceAddress()
{
}

bool Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Bsr::Bsr()
    :
    bsr_elections(std::make_shared<Pim::Active::DefaultContext::Bsr::BsrElections>())
	,candidate_rps(std::make_shared<Pim::Active::DefaultContext::Bsr::CandidateRps>())
	,rp_caches(std::make_shared<Pim::Active::DefaultContext::Bsr::RpCaches>())
{
    bsr_elections->parent = this;
    children["bsr-elections"] = bsr_elections;

    candidate_rps->parent = this;
    children["candidate-rps"] = candidate_rps;

    rp_caches->parent = this;
    children["rp-caches"] = rp_caches;

    yang_name = "bsr"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::Bsr::~Bsr()
{
}

bool Pim::Active::DefaultContext::Bsr::has_data() const
{
    return (bsr_elections !=  nullptr && bsr_elections->has_data())
	|| (candidate_rps !=  nullptr && candidate_rps->has_data())
	|| (rp_caches !=  nullptr && rp_caches->has_data());
}

bool Pim::Active::DefaultContext::Bsr::has_operation() const
{
    return is_set(operation)
	|| (bsr_elections !=  nullptr && bsr_elections->has_operation())
	|| (candidate_rps !=  nullptr && candidate_rps->has_operation())
	|| (rp_caches !=  nullptr && rp_caches->has_operation());
}

std::string Pim::Active::DefaultContext::Bsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Bsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bsr-elections")
    {
        if(bsr_elections != nullptr)
        {
            children["bsr-elections"] = bsr_elections;
        }
        else
        {
            bsr_elections = std::make_shared<Pim::Active::DefaultContext::Bsr::BsrElections>();
            bsr_elections->parent = this;
            children["bsr-elections"] = bsr_elections;
        }
        return children.at("bsr-elections");
    }

    if(child_yang_name == "candidate-rps")
    {
        if(candidate_rps != nullptr)
        {
            children["candidate-rps"] = candidate_rps;
        }
        else
        {
            candidate_rps = std::make_shared<Pim::Active::DefaultContext::Bsr::CandidateRps>();
            candidate_rps->parent = this;
            children["candidate-rps"] = candidate_rps;
        }
        return children.at("candidate-rps");
    }

    if(child_yang_name == "rp-caches")
    {
        if(rp_caches != nullptr)
        {
            children["rp-caches"] = rp_caches;
        }
        else
        {
            rp_caches = std::make_shared<Pim::Active::DefaultContext::Bsr::RpCaches>();
            rp_caches->parent = this;
            children["rp-caches"] = rp_caches;
        }
        return children.at("rp-caches");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Bsr::get_children()
{
    if(children.find("bsr-elections") == children.end())
    {
        if(bsr_elections != nullptr)
        {
            children["bsr-elections"] = bsr_elections;
        }
    }

    if(children.find("candidate-rps") == children.end())
    {
        if(candidate_rps != nullptr)
        {
            children["candidate-rps"] = candidate_rps;
        }
    }

    if(children.find("rp-caches") == children.end())
    {
        if(rp_caches != nullptr)
        {
            children["rp-caches"] = rp_caches;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Bsr::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::Bsr::RpCaches::RpCaches()
{
    yang_name = "rp-caches"; yang_parent_name = "bsr";
}

Pim::Active::DefaultContext::Bsr::RpCaches::~RpCaches()
{
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::has_data() const
{
    for (std::size_t index=0; index<rp_cache.size(); index++)
    {
        if(rp_cache[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::has_operation() const
{
    for (std::size_t index=0; index<rp_cache.size(); index++)
    {
        if(rp_cache[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::Bsr::RpCaches::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-caches";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Bsr::RpCaches::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/bsr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::RpCaches::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rp-cache")
    {
        for(auto const & c : rp_cache)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::Bsr::RpCaches::RpCache>();
        c->parent = this;
        rp_cache.push_back(std::move(c));
        children[segment_path] = rp_cache.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Bsr::RpCaches::get_children()
{
    for (auto const & c : rp_cache)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Bsr::RpCaches::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::RpCache()
    :
    group_prefix{YType::str, "group-prefix"},
    candidate_rp_group_count{YType::uint32, "candidate-rp-group-count"},
    group_prefix_length{YType::uint32, "group-prefix-length"}
    	,
    candidate_rp_list(std::make_shared<Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList>())
	,group_prefix_xr(std::make_shared<Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr>())
{
    candidate_rp_list->parent = this;
    children["candidate-rp-list"] = candidate_rp_list;

    group_prefix_xr->parent = this;
    children["group-prefix-xr"] = group_prefix_xr;

    yang_name = "rp-cache"; yang_parent_name = "rp-caches";
}

Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::~RpCache()
{
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::has_data() const
{
    return group_prefix.is_set
	|| candidate_rp_group_count.is_set
	|| group_prefix_length.is_set
	|| (candidate_rp_list !=  nullptr && candidate_rp_list->has_data())
	|| (group_prefix_xr !=  nullptr && group_prefix_xr->has_data());
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::has_operation() const
{
    return is_set(operation)
	|| is_set(group_prefix.operation)
	|| is_set(candidate_rp_group_count.operation)
	|| is_set(group_prefix_length.operation)
	|| (candidate_rp_list !=  nullptr && candidate_rp_list->has_operation())
	|| (group_prefix_xr !=  nullptr && group_prefix_xr->has_operation());
}

std::string Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-cache" <<"[group-prefix='" <<group_prefix <<"']";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/bsr/rp-caches/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_prefix.is_set || is_set(group_prefix.operation)) leaf_name_data.push_back(group_prefix.get_name_leafdata());
    if (candidate_rp_group_count.is_set || is_set(candidate_rp_group_count.operation)) leaf_name_data.push_back(candidate_rp_group_count.get_name_leafdata());
    if (group_prefix_length.is_set || is_set(group_prefix_length.operation)) leaf_name_data.push_back(group_prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-rp-list")
    {
        if(candidate_rp_list != nullptr)
        {
            children["candidate-rp-list"] = candidate_rp_list;
        }
        else
        {
            candidate_rp_list = std::make_shared<Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList>();
            candidate_rp_list->parent = this;
            children["candidate-rp-list"] = candidate_rp_list;
        }
        return children.at("candidate-rp-list");
    }

    if(child_yang_name == "group-prefix-xr")
    {
        if(group_prefix_xr != nullptr)
        {
            children["group-prefix-xr"] = group_prefix_xr;
        }
        else
        {
            group_prefix_xr = std::make_shared<Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr>();
            group_prefix_xr->parent = this;
            children["group-prefix-xr"] = group_prefix_xr;
        }
        return children.at("group-prefix-xr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::get_children()
{
    if(children.find("candidate-rp-list") == children.end())
    {
        if(candidate_rp_list != nullptr)
        {
            children["candidate-rp-list"] = candidate_rp_list;
        }
    }

    if(children.find("group-prefix-xr") == children.end())
    {
        if(group_prefix_xr != nullptr)
        {
            children["group-prefix-xr"] = group_prefix_xr;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-prefix")
    {
        group_prefix = value;
    }
    if(value_path == "candidate-rp-group-count")
    {
        candidate_rp_group_count = value;
    }
    if(value_path == "group-prefix-length")
    {
        group_prefix_length = value;
    }
}

Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::GroupPrefixXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-prefix-xr"; yang_parent_name = "rp-cache";
}

Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::~GroupPrefixXr()
{
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-prefix-xr";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupPrefixXr' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::CandidateRpList()
{
    yang_name = "candidate-rp-list"; yang_parent_name = "rp-cache";
}

Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::~CandidateRpList()
{
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::has_data() const
{
    for (std::size_t index=0; index<pim_bsr_crp_bag.size(); index++)
    {
        if(pim_bsr_crp_bag[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::has_operation() const
{
    for (std::size_t index=0; index<pim_bsr_crp_bag.size(); index++)
    {
        if(pim_bsr_crp_bag[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp-list";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateRpList' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pim-bsr-crp-bag")
    {
        for(auto const & c : pim_bsr_crp_bag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag>();
        c->parent = this;
        pim_bsr_crp_bag.push_back(std::move(c));
        children[segment_path] = pim_bsr_crp_bag.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::get_children()
{
    for (auto const & c : pim_bsr_crp_bag)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::PimBsrCrpBag()
    :
    candidate_rp_expires{YType::uint16, "candidate-rp-expires"},
    candidate_rp_holdtime{YType::uint16, "candidate-rp-holdtime"},
    candidate_rp_priority{YType::uint8, "candidate-rp-priority"},
    candidate_rp_up_time{YType::uint16, "candidate-rp-up-time"},
    protocol{YType::enumeration, "protocol"}
    	,
    candidate_rp_address(std::make_shared<Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress>())
{
    candidate_rp_address->parent = this;
    children["candidate-rp-address"] = candidate_rp_address;

    yang_name = "pim-bsr-crp-bag"; yang_parent_name = "candidate-rp-list";
}

Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::~PimBsrCrpBag()
{
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::has_data() const
{
    return candidate_rp_expires.is_set
	|| candidate_rp_holdtime.is_set
	|| candidate_rp_priority.is_set
	|| candidate_rp_up_time.is_set
	|| protocol.is_set
	|| (candidate_rp_address !=  nullptr && candidate_rp_address->has_data());
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::has_operation() const
{
    return is_set(operation)
	|| is_set(candidate_rp_expires.operation)
	|| is_set(candidate_rp_holdtime.operation)
	|| is_set(candidate_rp_priority.operation)
	|| is_set(candidate_rp_up_time.operation)
	|| is_set(protocol.operation)
	|| (candidate_rp_address !=  nullptr && candidate_rp_address->has_operation());
}

std::string Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim-bsr-crp-bag";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PimBsrCrpBag' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate_rp_expires.is_set || is_set(candidate_rp_expires.operation)) leaf_name_data.push_back(candidate_rp_expires.get_name_leafdata());
    if (candidate_rp_holdtime.is_set || is_set(candidate_rp_holdtime.operation)) leaf_name_data.push_back(candidate_rp_holdtime.get_name_leafdata());
    if (candidate_rp_priority.is_set || is_set(candidate_rp_priority.operation)) leaf_name_data.push_back(candidate_rp_priority.get_name_leafdata());
    if (candidate_rp_up_time.is_set || is_set(candidate_rp_up_time.operation)) leaf_name_data.push_back(candidate_rp_up_time.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-rp-address")
    {
        if(candidate_rp_address != nullptr)
        {
            children["candidate-rp-address"] = candidate_rp_address;
        }
        else
        {
            candidate_rp_address = std::make_shared<Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress>();
            candidate_rp_address->parent = this;
            children["candidate-rp-address"] = candidate_rp_address;
        }
        return children.at("candidate-rp-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::get_children()
{
    if(children.find("candidate-rp-address") == children.end())
    {
        if(candidate_rp_address != nullptr)
        {
            children["candidate-rp-address"] = candidate_rp_address;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "candidate-rp-expires")
    {
        candidate_rp_expires = value;
    }
    if(value_path == "candidate-rp-holdtime")
    {
        candidate_rp_holdtime = value;
    }
    if(value_path == "candidate-rp-priority")
    {
        candidate_rp_priority = value;
    }
    if(value_path == "candidate-rp-up-time")
    {
        candidate_rp_up_time = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::CandidateRpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "candidate-rp-address"; yang_parent_name = "pim-bsr-crp-bag";
}

Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::~CandidateRpAddress()
{
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp-address";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateRpAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRps()
{
    yang_name = "candidate-rps"; yang_parent_name = "bsr";
}

Pim::Active::DefaultContext::Bsr::CandidateRps::~CandidateRps()
{
}

bool Pim::Active::DefaultContext::Bsr::CandidateRps::has_data() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::Bsr::CandidateRps::has_operation() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::Bsr::CandidateRps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rps";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Bsr::CandidateRps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/bsr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::CandidateRps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-rp")
    {
        for(auto const & c : candidate_rp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp>();
        c->parent = this;
        candidate_rp.push_back(std::move(c));
        children[segment_path] = candidate_rp.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Bsr::CandidateRps::get_children()
{
    for (auto const & c : candidate_rp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Bsr::CandidateRps::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp()
    :
    rp_address{YType::str, "rp-address"},
    acl_name{YType::str, "acl-name"},
    candidate_rp_advance_interval{YType::uint16, "candidate-rp-advance-interval"},
    candidate_rp_mode{YType::enumeration, "candidate-rp-mode"},
    candidate_rp_scope{YType::int32, "candidate-rp-scope"},
    candidate_rp_uptime{YType::uint16, "candidate-rp-uptime"},
    crp_holdtime{YType::uint16, "crp-holdtime"},
    crp_priority{YType::uint8, "crp-priority"}
    	,
    candidate_rp(std::make_shared<Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_>())
{
    candidate_rp->parent = this;
    children["candidate-rp"] = candidate_rp;

    yang_name = "candidate-rp"; yang_parent_name = "candidate-rps";
}

Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::~CandidateRp()
{
}

bool Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::has_data() const
{
    for (std::size_t index=0; index<crp_access.size(); index++)
    {
        if(crp_access[index]->has_data())
            return true;
    }
    return rp_address.is_set
	|| acl_name.is_set
	|| candidate_rp_advance_interval.is_set
	|| candidate_rp_mode.is_set
	|| candidate_rp_scope.is_set
	|| candidate_rp_uptime.is_set
	|| crp_holdtime.is_set
	|| crp_priority.is_set
	|| (candidate_rp !=  nullptr && candidate_rp->has_data());
}

bool Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::has_operation() const
{
    for (std::size_t index=0; index<crp_access.size(); index++)
    {
        if(crp_access[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(rp_address.operation)
	|| is_set(acl_name.operation)
	|| is_set(candidate_rp_advance_interval.operation)
	|| is_set(candidate_rp_mode.operation)
	|| is_set(candidate_rp_scope.operation)
	|| is_set(candidate_rp_uptime.operation)
	|| is_set(crp_holdtime.operation)
	|| is_set(crp_priority.operation)
	|| (candidate_rp !=  nullptr && candidate_rp->has_operation());
}

std::string Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp" <<"[rp-address='" <<rp_address <<"']";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/bsr/candidate-rps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (candidate_rp_advance_interval.is_set || is_set(candidate_rp_advance_interval.operation)) leaf_name_data.push_back(candidate_rp_advance_interval.get_name_leafdata());
    if (candidate_rp_mode.is_set || is_set(candidate_rp_mode.operation)) leaf_name_data.push_back(candidate_rp_mode.get_name_leafdata());
    if (candidate_rp_scope.is_set || is_set(candidate_rp_scope.operation)) leaf_name_data.push_back(candidate_rp_scope.get_name_leafdata());
    if (candidate_rp_uptime.is_set || is_set(candidate_rp_uptime.operation)) leaf_name_data.push_back(candidate_rp_uptime.get_name_leafdata());
    if (crp_holdtime.is_set || is_set(crp_holdtime.operation)) leaf_name_data.push_back(crp_holdtime.get_name_leafdata());
    if (crp_priority.is_set || is_set(crp_priority.operation)) leaf_name_data.push_back(crp_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-rp")
    {
        if(candidate_rp != nullptr)
        {
            children["candidate-rp"] = candidate_rp;
        }
        else
        {
            candidate_rp = std::make_shared<Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_>();
            candidate_rp->parent = this;
            children["candidate-rp"] = candidate_rp;
        }
        return children.at("candidate-rp");
    }

    if(child_yang_name == "crp-access")
    {
        for(auto const & c : crp_access)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess>();
        c->parent = this;
        crp_access.push_back(std::move(c));
        children[segment_path] = crp_access.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::get_children()
{
    if(children.find("candidate-rp") == children.end())
    {
        if(candidate_rp != nullptr)
        {
            children["candidate-rp"] = candidate_rp;
        }
    }

    for (auto const & c : crp_access)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "candidate-rp-advance-interval")
    {
        candidate_rp_advance_interval = value;
    }
    if(value_path == "candidate-rp-mode")
    {
        candidate_rp_mode = value;
    }
    if(value_path == "candidate-rp-scope")
    {
        candidate_rp_scope = value;
    }
    if(value_path == "candidate-rp-uptime")
    {
        candidate_rp_uptime = value;
    }
    if(value_path == "crp-holdtime")
    {
        crp_holdtime = value;
    }
    if(value_path == "crp-priority")
    {
        crp_priority = value;
    }
}

Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::CandidateRp_()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "candidate-rp"; yang_parent_name = "candidate-rp";
}

Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::~CandidateRp_()
{
}

bool Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateRp_' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::CrpAccess()
    :
    acl_name{YType::str, "acl-name"},
    candidate_rp_mode{YType::enumeration, "candidate-rp-mode"}
{
    yang_name = "crp-access"; yang_parent_name = "candidate-rp";
}

Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::~CrpAccess()
{
}

bool Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::has_data() const
{
    return acl_name.is_set
	|| candidate_rp_mode.is_set;
}

bool Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_name.operation)
	|| is_set(candidate_rp_mode.operation);
}

std::string Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crp-access";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CrpAccess' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (candidate_rp_mode.is_set || is_set(candidate_rp_mode.operation)) leaf_name_data.push_back(candidate_rp_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "candidate-rp-mode")
    {
        candidate_rp_mode = value;
    }
}

Pim::Active::DefaultContext::Bsr::BsrElections::BsrElections()
{
    yang_name = "bsr-elections"; yang_parent_name = "bsr";
}

Pim::Active::DefaultContext::Bsr::BsrElections::~BsrElections()
{
}

bool Pim::Active::DefaultContext::Bsr::BsrElections::has_data() const
{
    for (std::size_t index=0; index<bsr_election.size(); index++)
    {
        if(bsr_election[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::Bsr::BsrElections::has_operation() const
{
    for (std::size_t index=0; index<bsr_election.size(); index++)
    {
        if(bsr_election[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::Bsr::BsrElections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-elections";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Bsr::BsrElections::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/bsr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::BsrElections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bsr-election")
    {
        for(auto const & c : bsr_election)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection>();
        c->parent = this;
        bsr_election.push_back(std::move(c));
        children[segment_path] = bsr_election.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Bsr::BsrElections::get_children()
{
    for (auto const & c : bsr_election)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Bsr::BsrElections::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrElection()
    :
    pim_scope{YType::int32, "pim-scope"},
    bootstrap_timeout{YType::uint16, "bootstrap-timeout"},
    bsr_election_state{YType::uint32, "bsr-election-state"},
    bsr_mask_length{YType::uint8, "bsr-mask-length"},
    bsr_priority{YType::uint8, "bsr-priority"},
    bsr_scope{YType::uint16, "bsr-scope"},
    bsr_up_time{YType::uint16, "bsr-up-time"},
    candidate_bsr_flag{YType::boolean, "candidate-bsr-flag"},
    candidate_bsr_mask_length{YType::uint8, "candidate-bsr-mask-length"},
    candidate_bsr_priority{YType::uint8, "candidate-bsr-priority"},
    candidate_bsr_state{YType::uint32, "candidate-bsr-state"}
    	,
    bsr_address(std::make_shared<Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress>())
	,candidate_bsr_address(std::make_shared<Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress>())
{
    bsr_address->parent = this;
    children["bsr-address"] = bsr_address;

    candidate_bsr_address->parent = this;
    children["candidate-bsr-address"] = candidate_bsr_address;

    yang_name = "bsr-election"; yang_parent_name = "bsr-elections";
}

Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::~BsrElection()
{
}

bool Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::has_data() const
{
    return pim_scope.is_set
	|| bootstrap_timeout.is_set
	|| bsr_election_state.is_set
	|| bsr_mask_length.is_set
	|| bsr_priority.is_set
	|| bsr_scope.is_set
	|| bsr_up_time.is_set
	|| candidate_bsr_flag.is_set
	|| candidate_bsr_mask_length.is_set
	|| candidate_bsr_priority.is_set
	|| candidate_bsr_state.is_set
	|| (bsr_address !=  nullptr && bsr_address->has_data())
	|| (candidate_bsr_address !=  nullptr && candidate_bsr_address->has_data());
}

bool Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::has_operation() const
{
    return is_set(operation)
	|| is_set(pim_scope.operation)
	|| is_set(bootstrap_timeout.operation)
	|| is_set(bsr_election_state.operation)
	|| is_set(bsr_mask_length.operation)
	|| is_set(bsr_priority.operation)
	|| is_set(bsr_scope.operation)
	|| is_set(bsr_up_time.operation)
	|| is_set(candidate_bsr_flag.operation)
	|| is_set(candidate_bsr_mask_length.operation)
	|| is_set(candidate_bsr_priority.operation)
	|| is_set(candidate_bsr_state.operation)
	|| (bsr_address !=  nullptr && bsr_address->has_operation())
	|| (candidate_bsr_address !=  nullptr && candidate_bsr_address->has_operation());
}

std::string Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-election" <<"[pim-scope='" <<pim_scope <<"']";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/bsr/bsr-elections/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pim_scope.is_set || is_set(pim_scope.operation)) leaf_name_data.push_back(pim_scope.get_name_leafdata());
    if (bootstrap_timeout.is_set || is_set(bootstrap_timeout.operation)) leaf_name_data.push_back(bootstrap_timeout.get_name_leafdata());
    if (bsr_election_state.is_set || is_set(bsr_election_state.operation)) leaf_name_data.push_back(bsr_election_state.get_name_leafdata());
    if (bsr_mask_length.is_set || is_set(bsr_mask_length.operation)) leaf_name_data.push_back(bsr_mask_length.get_name_leafdata());
    if (bsr_priority.is_set || is_set(bsr_priority.operation)) leaf_name_data.push_back(bsr_priority.get_name_leafdata());
    if (bsr_scope.is_set || is_set(bsr_scope.operation)) leaf_name_data.push_back(bsr_scope.get_name_leafdata());
    if (bsr_up_time.is_set || is_set(bsr_up_time.operation)) leaf_name_data.push_back(bsr_up_time.get_name_leafdata());
    if (candidate_bsr_flag.is_set || is_set(candidate_bsr_flag.operation)) leaf_name_data.push_back(candidate_bsr_flag.get_name_leafdata());
    if (candidate_bsr_mask_length.is_set || is_set(candidate_bsr_mask_length.operation)) leaf_name_data.push_back(candidate_bsr_mask_length.get_name_leafdata());
    if (candidate_bsr_priority.is_set || is_set(candidate_bsr_priority.operation)) leaf_name_data.push_back(candidate_bsr_priority.get_name_leafdata());
    if (candidate_bsr_state.is_set || is_set(candidate_bsr_state.operation)) leaf_name_data.push_back(candidate_bsr_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bsr-address")
    {
        if(bsr_address != nullptr)
        {
            children["bsr-address"] = bsr_address;
        }
        else
        {
            bsr_address = std::make_shared<Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress>();
            bsr_address->parent = this;
            children["bsr-address"] = bsr_address;
        }
        return children.at("bsr-address");
    }

    if(child_yang_name == "candidate-bsr-address")
    {
        if(candidate_bsr_address != nullptr)
        {
            children["candidate-bsr-address"] = candidate_bsr_address;
        }
        else
        {
            candidate_bsr_address = std::make_shared<Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress>();
            candidate_bsr_address->parent = this;
            children["candidate-bsr-address"] = candidate_bsr_address;
        }
        return children.at("candidate-bsr-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::get_children()
{
    if(children.find("bsr-address") == children.end())
    {
        if(bsr_address != nullptr)
        {
            children["bsr-address"] = bsr_address;
        }
    }

    if(children.find("candidate-bsr-address") == children.end())
    {
        if(candidate_bsr_address != nullptr)
        {
            children["candidate-bsr-address"] = candidate_bsr_address;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pim-scope")
    {
        pim_scope = value;
    }
    if(value_path == "bootstrap-timeout")
    {
        bootstrap_timeout = value;
    }
    if(value_path == "bsr-election-state")
    {
        bsr_election_state = value;
    }
    if(value_path == "bsr-mask-length")
    {
        bsr_mask_length = value;
    }
    if(value_path == "bsr-priority")
    {
        bsr_priority = value;
    }
    if(value_path == "bsr-scope")
    {
        bsr_scope = value;
    }
    if(value_path == "bsr-up-time")
    {
        bsr_up_time = value;
    }
    if(value_path == "candidate-bsr-flag")
    {
        candidate_bsr_flag = value;
    }
    if(value_path == "candidate-bsr-mask-length")
    {
        candidate_bsr_mask_length = value;
    }
    if(value_path == "candidate-bsr-priority")
    {
        candidate_bsr_priority = value;
    }
    if(value_path == "candidate-bsr-state")
    {
        candidate_bsr_state = value;
    }
}

Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::BsrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "bsr-address"; yang_parent_name = "bsr-election";
}

Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::~BsrAddress()
{
}

bool Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-address";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BsrAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::CandidateBsrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "candidate-bsr-address"; yang_parent_name = "bsr-election";
}

Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::~CandidateBsrAddress()
{
}

bool Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-bsr-address";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateBsrAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::RoutePolicy::RoutePolicy()
    :
    route_policy_statistics(std::make_shared<Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics>())
	,route_policy_tests(std::make_shared<Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests>())
{
    route_policy_statistics->parent = this;
    children["route-policy-statistics"] = route_policy_statistics;

    route_policy_tests->parent = this;
    children["route-policy-tests"] = route_policy_tests;

    yang_name = "route-policy"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::RoutePolicy::~RoutePolicy()
{
}

bool Pim::Active::DefaultContext::RoutePolicy::has_data() const
{
    return (route_policy_statistics !=  nullptr && route_policy_statistics->has_data())
	|| (route_policy_tests !=  nullptr && route_policy_tests->has_data());
}

bool Pim::Active::DefaultContext::RoutePolicy::has_operation() const
{
    return is_set(operation)
	|| (route_policy_statistics !=  nullptr && route_policy_statistics->has_operation())
	|| (route_policy_tests !=  nullptr && route_policy_tests->has_operation());
}

std::string Pim::Active::DefaultContext::RoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::RoutePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::RoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-policy-statistics")
    {
        if(route_policy_statistics != nullptr)
        {
            children["route-policy-statistics"] = route_policy_statistics;
        }
        else
        {
            route_policy_statistics = std::make_shared<Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics>();
            route_policy_statistics->parent = this;
            children["route-policy-statistics"] = route_policy_statistics;
        }
        return children.at("route-policy-statistics");
    }

    if(child_yang_name == "route-policy-tests")
    {
        if(route_policy_tests != nullptr)
        {
            children["route-policy-tests"] = route_policy_tests;
        }
        else
        {
            route_policy_tests = std::make_shared<Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests>();
            route_policy_tests->parent = this;
            children["route-policy-tests"] = route_policy_tests;
        }
        return children.at("route-policy-tests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::RoutePolicy::get_children()
{
    if(children.find("route-policy-statistics") == children.end())
    {
        if(route_policy_statistics != nullptr)
        {
            children["route-policy-statistics"] = route_policy_statistics;
        }
    }

    if(children.find("route-policy-tests") == children.end())
    {
        if(route_policy_tests != nullptr)
        {
            children["route-policy-tests"] = route_policy_tests;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::RoutePolicy::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics::RoutePolicyStatistics()
    :
    any_table{YType::uint32, "any-table"},
    default_table{YType::uint32, "default-table"},
    drop{YType::uint32, "drop"},
    pass{YType::uint32, "pass"},
    policy_name{YType::str, "policy-name"},
    requests{YType::uint32, "requests"}
{
    yang_name = "route-policy-statistics"; yang_parent_name = "route-policy";
}

Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics::~RoutePolicyStatistics()
{
}

bool Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics::has_data() const
{
    return any_table.is_set
	|| default_table.is_set
	|| drop.is_set
	|| pass.is_set
	|| policy_name.is_set
	|| requests.is_set;
}

bool Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(any_table.operation)
	|| is_set(default_table.operation)
	|| is_set(drop.operation)
	|| is_set(pass.operation)
	|| is_set(policy_name.operation)
	|| is_set(requests.operation);
}

std::string Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy-statistics";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/route-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_table.is_set || is_set(any_table.operation)) leaf_name_data.push_back(any_table.get_name_leafdata());
    if (default_table.is_set || is_set(default_table.operation)) leaf_name_data.push_back(default_table.get_name_leafdata());
    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (pass.is_set || is_set(pass.operation)) leaf_name_data.push_back(pass.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (requests.is_set || is_set(requests.operation)) leaf_name_data.push_back(requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "any-table")
    {
        any_table = value;
    }
    if(value_path == "default-table")
    {
        default_table = value;
    }
    if(value_path == "drop")
    {
        drop = value;
    }
    if(value_path == "pass")
    {
        pass = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "requests")
    {
        requests = value;
    }
}

Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTests()
{
    yang_name = "route-policy-tests"; yang_parent_name = "route-policy";
}

Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::~RoutePolicyTests()
{
}

bool Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::has_data() const
{
    for (std::size_t index=0; index<route_policy_test.size(); index++)
    {
        if(route_policy_test[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::has_operation() const
{
    for (std::size_t index=0; index<route_policy_test.size(); index++)
    {
        if(route_policy_test[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy-tests";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/route-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-policy-test")
    {
        for(auto const & c : route_policy_test)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest>();
        c->parent = this;
        route_policy_test.push_back(std::move(c));
        children[segment_path] = route_policy_test.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::get_children()
{
    for (auto const & c : route_policy_test)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::RoutePolicyTest()
    :
    afi{YType::uint32, "afi"},
    default_table{YType::boolean, "default-table"},
    ext_comm{YType::str, "ext-comm"},
    extended_community_rt{YType::str, "extended-community-rt"},
    group_address{YType::str, "group-address"},
    pass{YType::boolean, "pass"},
    policy_name{YType::str, "policy-name"},
    safi{YType::uint32, "safi"},
    source_address{YType::str, "source-address"},
    table_active{YType::boolean, "table-active"},
    table_exists{YType::boolean, "table-exists"},
    table_name{YType::str, "table-name"},
    vrf_name{YType::str, "vrf-name"}
    	,
    group_address_xr(std::make_shared<Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr>())
	,source_address_xr(std::make_shared<Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr>())
{
    group_address_xr->parent = this;
    children["group-address-xr"] = group_address_xr;

    source_address_xr->parent = this;
    children["source-address-xr"] = source_address_xr;

    yang_name = "route-policy-test"; yang_parent_name = "route-policy-tests";
}

Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::~RoutePolicyTest()
{
}

bool Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::has_data() const
{
    return afi.is_set
	|| default_table.is_set
	|| ext_comm.is_set
	|| extended_community_rt.is_set
	|| group_address.is_set
	|| pass.is_set
	|| policy_name.is_set
	|| safi.is_set
	|| source_address.is_set
	|| table_active.is_set
	|| table_exists.is_set
	|| table_name.is_set
	|| vrf_name.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (source_address_xr !=  nullptr && source_address_xr->has_data());
}

bool Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(default_table.operation)
	|| is_set(ext_comm.operation)
	|| is_set(extended_community_rt.operation)
	|| is_set(group_address.operation)
	|| is_set(pass.operation)
	|| is_set(policy_name.operation)
	|| is_set(safi.operation)
	|| is_set(source_address.operation)
	|| is_set(table_active.operation)
	|| is_set(table_exists.operation)
	|| is_set(table_name.operation)
	|| is_set(vrf_name.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (source_address_xr !=  nullptr && source_address_xr->has_operation());
}

std::string Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy-test";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/route-policy/route-policy-tests/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (default_table.is_set || is_set(default_table.operation)) leaf_name_data.push_back(default_table.get_name_leafdata());
    if (ext_comm.is_set || is_set(ext_comm.operation)) leaf_name_data.push_back(ext_comm.get_name_leafdata());
    if (extended_community_rt.is_set || is_set(extended_community_rt.operation)) leaf_name_data.push_back(extended_community_rt.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (pass.is_set || is_set(pass.operation)) leaf_name_data.push_back(pass.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (safi.is_set || is_set(safi.operation)) leaf_name_data.push_back(safi.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (table_active.is_set || is_set(table_active.operation)) leaf_name_data.push_back(table_active.get_name_leafdata());
    if (table_exists.is_set || is_set(table_exists.operation)) leaf_name_data.push_back(table_exists.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.operation)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
        else
        {
            group_address_xr = std::make_shared<Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr>();
            group_address_xr->parent = this;
            children["group-address-xr"] = group_address_xr;
        }
        return children.at("group-address-xr");
    }

    if(child_yang_name == "source-address-xr")
    {
        if(source_address_xr != nullptr)
        {
            children["source-address-xr"] = source_address_xr;
        }
        else
        {
            source_address_xr = std::make_shared<Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr>();
            source_address_xr->parent = this;
            children["source-address-xr"] = source_address_xr;
        }
        return children.at("source-address-xr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_children()
{
    if(children.find("group-address-xr") == children.end())
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
    }

    if(children.find("source-address-xr") == children.end())
    {
        if(source_address_xr != nullptr)
        {
            children["source-address-xr"] = source_address_xr;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "default-table")
    {
        default_table = value;
    }
    if(value_path == "ext-comm")
    {
        ext_comm = value;
    }
    if(value_path == "extended-community-rt")
    {
        extended_community_rt = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "pass")
    {
        pass = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "safi")
    {
        safi = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "table-active")
    {
        table_active = value;
    }
    if(value_path == "table-exists")
    {
        table_exists = value;
    }
    if(value_path == "table-name")
    {
        table_name = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::SourceAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address-xr"; yang_parent_name = "route-policy-test";
}

Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::~SourceAddressXr()
{
}

bool Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-xr";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/route-policy/route-policy-tests/route-policy-test/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "route-policy-test";
}

Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::~GroupAddressXr()
{
}

bool Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/route-policy/route-policy-tests/route-policy-test/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::RpfSummary::RpfSummary()
    :
    default_safi{YType::uint32, "default-safi"},
    default_table_name{YType::str, "default-table-name"},
    is_isis_mtr_configured{YType::boolean, "is-isis-mtr-configured"},
    is_isis_te_configured{YType::boolean, "is-isis-te-configured"},
    is_mbgp_configured{YType::boolean, "is-mbgp-configured"},
    is_multipath_enabled{YType::boolean, "is-multipath-enabled"},
    is_multipath_interface_hash_enabled{YType::boolean, "is-multipath-interface-hash-enabled"},
    is_multipath_source_hash_enabled{YType::boolean, "is-multipath-source-hash-enabled"},
    is_multipath_source_next_hop_hash_enabled{YType::boolean, "is-multipath-source-next-hop-hash-enabled"},
    is_ospf_te_configured{YType::boolean, "is-ospf-te-configured"},
    is_rib_convergence{YType::boolean, "is-rib-convergence"},
    mo_frr_configured{YType::boolean, "mo-frr-configured"},
    rib_convergence_time_left{YType::uint32, "rib-convergence-time-left"},
    rib_convergence_timeout{YType::uint32, "rib-convergence-timeout"},
    rib_mo_frr_configured{YType::boolean, "rib-mo-frr-configured"},
    rpf_registrations{YType::uint32, "rpf-registrations"},
    rump_enabled{YType::boolean, "rump-enabled"}
{
    yang_name = "rpf-summary"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::RpfSummary::~RpfSummary()
{
}

bool Pim::Active::DefaultContext::RpfSummary::has_data() const
{
    return default_safi.is_set
	|| default_table_name.is_set
	|| is_isis_mtr_configured.is_set
	|| is_isis_te_configured.is_set
	|| is_mbgp_configured.is_set
	|| is_multipath_enabled.is_set
	|| is_multipath_interface_hash_enabled.is_set
	|| is_multipath_source_hash_enabled.is_set
	|| is_multipath_source_next_hop_hash_enabled.is_set
	|| is_ospf_te_configured.is_set
	|| is_rib_convergence.is_set
	|| mo_frr_configured.is_set
	|| rib_convergence_time_left.is_set
	|| rib_convergence_timeout.is_set
	|| rib_mo_frr_configured.is_set
	|| rpf_registrations.is_set
	|| rump_enabled.is_set;
}

bool Pim::Active::DefaultContext::RpfSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(default_safi.operation)
	|| is_set(default_table_name.operation)
	|| is_set(is_isis_mtr_configured.operation)
	|| is_set(is_isis_te_configured.operation)
	|| is_set(is_mbgp_configured.operation)
	|| is_set(is_multipath_enabled.operation)
	|| is_set(is_multipath_interface_hash_enabled.operation)
	|| is_set(is_multipath_source_hash_enabled.operation)
	|| is_set(is_multipath_source_next_hop_hash_enabled.operation)
	|| is_set(is_ospf_te_configured.operation)
	|| is_set(is_rib_convergence.operation)
	|| is_set(mo_frr_configured.operation)
	|| is_set(rib_convergence_time_left.operation)
	|| is_set(rib_convergence_timeout.operation)
	|| is_set(rib_mo_frr_configured.operation)
	|| is_set(rpf_registrations.operation)
	|| is_set(rump_enabled.operation);
}

std::string Pim::Active::DefaultContext::RpfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-summary";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::RpfSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_safi.is_set || is_set(default_safi.operation)) leaf_name_data.push_back(default_safi.get_name_leafdata());
    if (default_table_name.is_set || is_set(default_table_name.operation)) leaf_name_data.push_back(default_table_name.get_name_leafdata());
    if (is_isis_mtr_configured.is_set || is_set(is_isis_mtr_configured.operation)) leaf_name_data.push_back(is_isis_mtr_configured.get_name_leafdata());
    if (is_isis_te_configured.is_set || is_set(is_isis_te_configured.operation)) leaf_name_data.push_back(is_isis_te_configured.get_name_leafdata());
    if (is_mbgp_configured.is_set || is_set(is_mbgp_configured.operation)) leaf_name_data.push_back(is_mbgp_configured.get_name_leafdata());
    if (is_multipath_enabled.is_set || is_set(is_multipath_enabled.operation)) leaf_name_data.push_back(is_multipath_enabled.get_name_leafdata());
    if (is_multipath_interface_hash_enabled.is_set || is_set(is_multipath_interface_hash_enabled.operation)) leaf_name_data.push_back(is_multipath_interface_hash_enabled.get_name_leafdata());
    if (is_multipath_source_hash_enabled.is_set || is_set(is_multipath_source_hash_enabled.operation)) leaf_name_data.push_back(is_multipath_source_hash_enabled.get_name_leafdata());
    if (is_multipath_source_next_hop_hash_enabled.is_set || is_set(is_multipath_source_next_hop_hash_enabled.operation)) leaf_name_data.push_back(is_multipath_source_next_hop_hash_enabled.get_name_leafdata());
    if (is_ospf_te_configured.is_set || is_set(is_ospf_te_configured.operation)) leaf_name_data.push_back(is_ospf_te_configured.get_name_leafdata());
    if (is_rib_convergence.is_set || is_set(is_rib_convergence.operation)) leaf_name_data.push_back(is_rib_convergence.get_name_leafdata());
    if (mo_frr_configured.is_set || is_set(mo_frr_configured.operation)) leaf_name_data.push_back(mo_frr_configured.get_name_leafdata());
    if (rib_convergence_time_left.is_set || is_set(rib_convergence_time_left.operation)) leaf_name_data.push_back(rib_convergence_time_left.get_name_leafdata());
    if (rib_convergence_timeout.is_set || is_set(rib_convergence_timeout.operation)) leaf_name_data.push_back(rib_convergence_timeout.get_name_leafdata());
    if (rib_mo_frr_configured.is_set || is_set(rib_mo_frr_configured.operation)) leaf_name_data.push_back(rib_mo_frr_configured.get_name_leafdata());
    if (rpf_registrations.is_set || is_set(rpf_registrations.operation)) leaf_name_data.push_back(rpf_registrations.get_name_leafdata());
    if (rump_enabled.is_set || is_set(rump_enabled.operation)) leaf_name_data.push_back(rump_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::RpfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::RpfSummary::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::RpfSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-safi")
    {
        default_safi = value;
    }
    if(value_path == "default-table-name")
    {
        default_table_name = value;
    }
    if(value_path == "is-isis-mtr-configured")
    {
        is_isis_mtr_configured = value;
    }
    if(value_path == "is-isis-te-configured")
    {
        is_isis_te_configured = value;
    }
    if(value_path == "is-mbgp-configured")
    {
        is_mbgp_configured = value;
    }
    if(value_path == "is-multipath-enabled")
    {
        is_multipath_enabled = value;
    }
    if(value_path == "is-multipath-interface-hash-enabled")
    {
        is_multipath_interface_hash_enabled = value;
    }
    if(value_path == "is-multipath-source-hash-enabled")
    {
        is_multipath_source_hash_enabled = value;
    }
    if(value_path == "is-multipath-source-next-hop-hash-enabled")
    {
        is_multipath_source_next_hop_hash_enabled = value;
    }
    if(value_path == "is-ospf-te-configured")
    {
        is_ospf_te_configured = value;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence = value;
    }
    if(value_path == "mo-frr-configured")
    {
        mo_frr_configured = value;
    }
    if(value_path == "rib-convergence-time-left")
    {
        rib_convergence_time_left = value;
    }
    if(value_path == "rib-convergence-timeout")
    {
        rib_convergence_timeout = value;
    }
    if(value_path == "rib-mo-frr-configured")
    {
        rib_mo_frr_configured = value;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations = value;
    }
    if(value_path == "rump-enabled")
    {
        rump_enabled = value;
    }
}

Pim::Active::DefaultContext::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::Interfaces::~Interfaces()
{
}

bool Pim::Active::DefaultContext::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    are_we_dr{YType::boolean, "are-we-dr"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    configured_override_interval{YType::uint16, "configured-override-interval"},
    configured_propagation_delay{YType::uint16, "configured-propagation-delay"},
    dr_priority{YType::uint32, "dr-priority"},
    external_neighbor_count{YType::uint16, "external-neighbor-count"},
    generation_id{YType::uint32, "generation-id"},
    hello_expiry{YType::uint64, "hello-expiry"},
    hello_interval{YType::uint16, "hello-interval"},
    idb_acl_name{YType::str, "idb-acl-name"},
    idb_acl_provided{YType::boolean, "idb-acl-provided"},
    idb_current_count{YType::uint32, "idb-current-count"},
    idb_max_count{YType::uint32, "idb-max-count"},
    idb_oor_enabled{YType::boolean, "idb-oor-enabled"},
    idb_threshold_count{YType::uint32, "idb-threshold-count"},
    interface_address_mask{YType::uint8, "interface-address-mask"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_enabled{YType::boolean, "is-enabled"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    join_prune_interval{YType::uint16, "join-prune-interval"},
    neighbor_count{YType::uint16, "neighbor-count"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    override_interval{YType::uint16, "override-interval"},
    passive_interface{YType::boolean, "passive-interface"},
    propagation_delay{YType::uint16, "propagation-delay"},
    prune_delay_enabled{YType::boolean, "prune-delay-enabled"},
    virtual_interface{YType::boolean, "virtual-interface"}
    	,
    dr_address(std::make_shared<Pim::Active::DefaultContext::Interfaces::Interface::DrAddress>())
{
    dr_address->parent = this;
    children["dr-address"] = dr_address;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Pim::Active::DefaultContext::Interfaces::Interface::~Interface()
{
}

bool Pim::Active::DefaultContext::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| are_we_dr.is_set
	|| bfd_enabled.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| configured_override_interval.is_set
	|| configured_propagation_delay.is_set
	|| dr_priority.is_set
	|| external_neighbor_count.is_set
	|| generation_id.is_set
	|| hello_expiry.is_set
	|| hello_interval.is_set
	|| idb_acl_name.is_set
	|| idb_acl_provided.is_set
	|| idb_current_count.is_set
	|| idb_max_count.is_set
	|| idb_oor_enabled.is_set
	|| idb_threshold_count.is_set
	|| interface_address_mask.is_set
	|| interface_name_xr.is_set
	|| is_batch_asserts_capable.is_set
	|| is_bidirectional_capable.is_set
	|| is_enabled.is_set
	|| is_proxy_capable.is_set
	|| join_prune_interval.is_set
	|| neighbor_count.is_set
	|| neighbor_filter_name.is_set
	|| override_interval.is_set
	|| passive_interface.is_set
	|| propagation_delay.is_set
	|| prune_delay_enabled.is_set
	|| virtual_interface.is_set
	|| (dr_address !=  nullptr && dr_address->has_data());
}

bool Pim::Active::DefaultContext::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(are_we_dr.operation)
	|| is_set(bfd_enabled.operation)
	|| is_set(bfd_interval.operation)
	|| is_set(bfd_multiplier.operation)
	|| is_set(configured_override_interval.operation)
	|| is_set(configured_propagation_delay.operation)
	|| is_set(dr_priority.operation)
	|| is_set(external_neighbor_count.operation)
	|| is_set(generation_id.operation)
	|| is_set(hello_expiry.operation)
	|| is_set(hello_interval.operation)
	|| is_set(idb_acl_name.operation)
	|| is_set(idb_acl_provided.operation)
	|| is_set(idb_current_count.operation)
	|| is_set(idb_max_count.operation)
	|| is_set(idb_oor_enabled.operation)
	|| is_set(idb_threshold_count.operation)
	|| is_set(interface_address_mask.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_batch_asserts_capable.operation)
	|| is_set(is_bidirectional_capable.operation)
	|| is_set(is_enabled.operation)
	|| is_set(is_proxy_capable.operation)
	|| is_set(join_prune_interval.operation)
	|| is_set(neighbor_count.operation)
	|| is_set(neighbor_filter_name.operation)
	|| is_set(override_interval.operation)
	|| is_set(passive_interface.operation)
	|| is_set(propagation_delay.operation)
	|| is_set(prune_delay_enabled.operation)
	|| is_set(virtual_interface.operation)
	|| (dr_address !=  nullptr && dr_address->has_operation());
}

std::string Pim::Active::DefaultContext::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (are_we_dr.is_set || is_set(are_we_dr.operation)) leaf_name_data.push_back(are_we_dr.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.operation)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.operation)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.operation)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (configured_override_interval.is_set || is_set(configured_override_interval.operation)) leaf_name_data.push_back(configured_override_interval.get_name_leafdata());
    if (configured_propagation_delay.is_set || is_set(configured_propagation_delay.operation)) leaf_name_data.push_back(configured_propagation_delay.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.operation)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (external_neighbor_count.is_set || is_set(external_neighbor_count.operation)) leaf_name_data.push_back(external_neighbor_count.get_name_leafdata());
    if (generation_id.is_set || is_set(generation_id.operation)) leaf_name_data.push_back(generation_id.get_name_leafdata());
    if (hello_expiry.is_set || is_set(hello_expiry.operation)) leaf_name_data.push_back(hello_expiry.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (idb_acl_name.is_set || is_set(idb_acl_name.operation)) leaf_name_data.push_back(idb_acl_name.get_name_leafdata());
    if (idb_acl_provided.is_set || is_set(idb_acl_provided.operation)) leaf_name_data.push_back(idb_acl_provided.get_name_leafdata());
    if (idb_current_count.is_set || is_set(idb_current_count.operation)) leaf_name_data.push_back(idb_current_count.get_name_leafdata());
    if (idb_max_count.is_set || is_set(idb_max_count.operation)) leaf_name_data.push_back(idb_max_count.get_name_leafdata());
    if (idb_oor_enabled.is_set || is_set(idb_oor_enabled.operation)) leaf_name_data.push_back(idb_oor_enabled.get_name_leafdata());
    if (idb_threshold_count.is_set || is_set(idb_threshold_count.operation)) leaf_name_data.push_back(idb_threshold_count.get_name_leafdata());
    if (interface_address_mask.is_set || is_set(interface_address_mask.operation)) leaf_name_data.push_back(interface_address_mask.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.operation)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.operation)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_enabled.is_set || is_set(is_enabled.operation)) leaf_name_data.push_back(is_enabled.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.operation)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (join_prune_interval.is_set || is_set(join_prune_interval.operation)) leaf_name_data.push_back(join_prune_interval.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.operation)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.operation)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.operation)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.operation)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.operation)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (prune_delay_enabled.is_set || is_set(prune_delay_enabled.operation)) leaf_name_data.push_back(prune_delay_enabled.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.operation)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dr-address")
    {
        if(dr_address != nullptr)
        {
            children["dr-address"] = dr_address;
        }
        else
        {
            dr_address = std::make_shared<Pim::Active::DefaultContext::Interfaces::Interface::DrAddress>();
            dr_address->parent = this;
            children["dr-address"] = dr_address;
        }
        return children.at("dr-address");
    }

    if(child_yang_name == "interface-address")
    {
        for(auto const & c : interface_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress>();
        c->parent = this;
        interface_address.push_back(std::move(c));
        children[segment_path] = interface_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Interfaces::Interface::get_children()
{
    if(children.find("dr-address") == children.end())
    {
        if(dr_address != nullptr)
        {
            children["dr-address"] = dr_address;
        }
    }

    for (auto const & c : interface_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr = value;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval = value;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay = value;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count = value;
    }
    if(value_path == "generation-id")
    {
        generation_id = value;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name = value;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided = value;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count = value;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count = value;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled = value;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count = value;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
    }
    if(value_path == "is-enabled")
    {
        is_enabled = value;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval = value;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled = value;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
    }
}

Pim::Active::DefaultContext::Interfaces::Interface::DrAddress::DrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "dr-address"; yang_parent_name = "interface";
}

Pim::Active::DefaultContext::Interfaces::Interface::DrAddress::~DrAddress()
{
}

bool Pim::Active::DefaultContext::Interfaces::Interface::DrAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Interfaces::Interface::DrAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Interfaces::Interface::DrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dr-address";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Interfaces::Interface::DrAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DrAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Interfaces::Interface::DrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Interfaces::Interface::DrAddress::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Interfaces::Interface::DrAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress::InterfaceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "interface-address"; yang_parent_name = "interface";
}

Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress::~InterfaceAddress()
{
}

bool Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnels()
{
    yang_name = "net-io-tunnels"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::NetIoTunnels::~NetIoTunnels()
{
}

bool Pim::Active::DefaultContext::NetIoTunnels::has_data() const
{
    for (std::size_t index=0; index<net_io_tunnel.size(); index++)
    {
        if(net_io_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::NetIoTunnels::has_operation() const
{
    for (std::size_t index=0; index<net_io_tunnel.size(); index++)
    {
        if(net_io_tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::NetIoTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "net-io-tunnels";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::NetIoTunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::NetIoTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "net-io-tunnel")
    {
        for(auto const & c : net_io_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel>();
        c->parent = this;
        net_io_tunnel.push_back(std::move(c));
        children[segment_path] = net_io_tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::NetIoTunnels::get_children()
{
    for (auto const & c : net_io_tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::NetIoTunnels::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::NetIoTunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    vrf_name{YType::str, "vrf-name"}
    	,
    group_address_netio(std::make_shared<Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio>())
	,rp_address(std::make_shared<Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress>())
	,source_address(std::make_shared<Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress>())
	,source_address_netio(std::make_shared<Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio>())
{
    group_address_netio->parent = this;
    children["group-address-netio"] = group_address_netio;

    rp_address->parent = this;
    children["rp-address"] = rp_address;

    source_address->parent = this;
    children["source-address"] = source_address;

    source_address_netio->parent = this;
    children["source-address-netio"] = source_address_netio;

    yang_name = "net-io-tunnel"; yang_parent_name = "net-io-tunnels";
}

Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::~NetIoTunnel()
{
}

bool Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::has_data() const
{
    return tunnel_name.is_set
	|| vrf_name.is_set
	|| (group_address_netio !=  nullptr && group_address_netio->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (source_address_netio !=  nullptr && source_address_netio->has_data());
}

bool Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_name.operation)
	|| is_set(vrf_name.operation)
	|| (group_address_netio !=  nullptr && group_address_netio->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (source_address_netio !=  nullptr && source_address_netio->has_operation());
}

std::string Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "net-io-tunnel" <<"[tunnel-name='" <<tunnel_name <<"']";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/net-io-tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address-netio")
    {
        if(group_address_netio != nullptr)
        {
            children["group-address-netio"] = group_address_netio;
        }
        else
        {
            group_address_netio = std::make_shared<Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio>();
            group_address_netio->parent = this;
            children["group-address-netio"] = group_address_netio;
        }
        return children.at("group-address-netio");
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
        else
        {
            rp_address = std::make_shared<Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress>();
            rp_address->parent = this;
            children["rp-address"] = rp_address;
        }
        return children.at("rp-address");
    }

    if(child_yang_name == "source-address")
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
        else
        {
            source_address = std::make_shared<Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress>();
            source_address->parent = this;
            children["source-address"] = source_address;
        }
        return children.at("source-address");
    }

    if(child_yang_name == "source-address-netio")
    {
        if(source_address_netio != nullptr)
        {
            children["source-address-netio"] = source_address_netio;
        }
        else
        {
            source_address_netio = std::make_shared<Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio>();
            source_address_netio->parent = this;
            children["source-address-netio"] = source_address_netio;
        }
        return children.at("source-address-netio");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::get_children()
{
    if(children.find("group-address-netio") == children.end())
    {
        if(group_address_netio != nullptr)
        {
            children["group-address-netio"] = group_address_netio;
        }
    }

    if(children.find("rp-address") == children.end())
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
    }

    if(children.find("source-address") == children.end())
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
    }

    if(children.find("source-address-netio") == children.end())
    {
        if(source_address_netio != nullptr)
        {
            children["source-address-netio"] = source_address_netio;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "net-io-tunnel";
}

Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::~SourceAddress()
{
}

bool Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "net-io-tunnel";
}

Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::~RpAddress()
{
}

bool Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::SourceAddressNetio()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address-netio"; yang_parent_name = "net-io-tunnel";
}

Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::~SourceAddressNetio()
{
}

bool Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-netio";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddressNetio' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::GroupAddressNetio()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-netio"; yang_parent_name = "net-io-tunnel";
}

Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::~GroupAddressNetio()
{
}

bool Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-netio";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddressNetio' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::BidirDfStates::BidirDfStates()
{
    yang_name = "bidir-df-states"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::BidirDfStates::~BidirDfStates()
{
}

bool Pim::Active::DefaultContext::BidirDfStates::has_data() const
{
    for (std::size_t index=0; index<bidir_df_state.size(); index++)
    {
        if(bidir_df_state[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::BidirDfStates::has_operation() const
{
    for (std::size_t index=0; index<bidir_df_state.size(); index++)
    {
        if(bidir_df_state[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::BidirDfStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-df-states";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::BidirDfStates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::BidirDfStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bidir-df-state")
    {
        for(auto const & c : bidir_df_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::BidirDfStates::BidirDfState>();
        c->parent = this;
        bidir_df_state.push_back(std::move(c));
        children[segment_path] = bidir_df_state.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::BidirDfStates::get_children()
{
    for (auto const & c : bidir_df_state)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::BidirDfStates::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::BidirDfStates::BidirDfState::BidirDfState()
    :
    election_state{YType::str, "election-state"},
    interface_name{YType::str, "interface-name"},
    our_metric{YType::uint32, "our-metric"},
    our_metric_preference{YType::uint32, "our-metric-preference"},
    pim_interface_name{YType::str, "pim-interface-name"},
    rp_address{YType::str, "rp-address"},
    time_nano_seconds{YType::uint64, "time-nano-seconds"},
    time_seconds{YType::uint64, "time-seconds"}
    	,
    rp_address_xr(std::make_shared<Pim::Active::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr>())
{
    rp_address_xr->parent = this;
    children["rp-address-xr"] = rp_address_xr;

    yang_name = "bidir-df-state"; yang_parent_name = "bidir-df-states";
}

Pim::Active::DefaultContext::BidirDfStates::BidirDfState::~BidirDfState()
{
}

bool Pim::Active::DefaultContext::BidirDfStates::BidirDfState::has_data() const
{
    return election_state.is_set
	|| interface_name.is_set
	|| our_metric.is_set
	|| our_metric_preference.is_set
	|| pim_interface_name.is_set
	|| rp_address.is_set
	|| time_nano_seconds.is_set
	|| time_seconds.is_set
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_data());
}

bool Pim::Active::DefaultContext::BidirDfStates::BidirDfState::has_operation() const
{
    return is_set(operation)
	|| is_set(election_state.operation)
	|| is_set(interface_name.operation)
	|| is_set(our_metric.operation)
	|| is_set(our_metric_preference.operation)
	|| is_set(pim_interface_name.operation)
	|| is_set(rp_address.operation)
	|| is_set(time_nano_seconds.operation)
	|| is_set(time_seconds.operation)
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_operation());
}

std::string Pim::Active::DefaultContext::BidirDfStates::BidirDfState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-df-state";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::BidirDfStates::BidirDfState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/bidir-df-states/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (election_state.is_set || is_set(election_state.operation)) leaf_name_data.push_back(election_state.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (our_metric.is_set || is_set(our_metric.operation)) leaf_name_data.push_back(our_metric.get_name_leafdata());
    if (our_metric_preference.is_set || is_set(our_metric_preference.operation)) leaf_name_data.push_back(our_metric_preference.get_name_leafdata());
    if (pim_interface_name.is_set || is_set(pim_interface_name.operation)) leaf_name_data.push_back(pim_interface_name.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (time_nano_seconds.is_set || is_set(time_nano_seconds.operation)) leaf_name_data.push_back(time_nano_seconds.get_name_leafdata());
    if (time_seconds.is_set || is_set(time_seconds.operation)) leaf_name_data.push_back(time_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::BidirDfStates::BidirDfState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rp-address-xr")
    {
        if(rp_address_xr != nullptr)
        {
            children["rp-address-xr"] = rp_address_xr;
        }
        else
        {
            rp_address_xr = std::make_shared<Pim::Active::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr>();
            rp_address_xr->parent = this;
            children["rp-address-xr"] = rp_address_xr;
        }
        return children.at("rp-address-xr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::BidirDfStates::BidirDfState::get_children()
{
    if(children.find("rp-address-xr") == children.end())
    {
        if(rp_address_xr != nullptr)
        {
            children["rp-address-xr"] = rp_address_xr;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::BidirDfStates::BidirDfState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "election-state")
    {
        election_state = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "our-metric")
    {
        our_metric = value;
    }
    if(value_path == "our-metric-preference")
    {
        our_metric_preference = value;
    }
    if(value_path == "pim-interface-name")
    {
        pim_interface_name = value;
    }
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
    if(value_path == "time-nano-seconds")
    {
        time_nano_seconds = value;
    }
    if(value_path == "time-seconds")
    {
        time_seconds = value;
    }
}

Pim::Active::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::RpAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address-xr"; yang_parent_name = "bidir-df-state";
}

Pim::Active::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::~RpAddressXr()
{
}

bool Pim::Active::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address-xr";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/bidir-df-states/bidir-df-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Topologies::Topologies()
{
    yang_name = "topologies"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::Topologies::~Topologies()
{
}

bool Pim::Active::DefaultContext::Topologies::has_data() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::Topologies::has_operation() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::Topologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topologies";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Topologies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Topologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::Topologies::Topology>();
        c->parent = this;
        topology.push_back(std::move(c));
        children[segment_path] = topology.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Topologies::get_children()
{
    for (auto const & c : topology)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Topologies::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::Topologies::Topology::Topology()
    :
    alive{YType::int32, "alive"},
    anycast_rp_match{YType::boolean, "anycast-rp-match"},
    anycast_rp_route_target{YType::str, "anycast-rp-route-target"},
    assume_alive{YType::boolean, "assume-alive"},
    bgp_join{YType::boolean, "bgp-join"},
    bgpjp_time{YType::uint64, "bgpjp-time"},
    connected{YType::boolean, "connected"},
    customer_routing_type{YType::int32, "customer-routing-type"},
    dont_check_connected{YType::boolean, "dont-check-connected"},
    expiry{YType::uint64, "expiry"},
    extranet_route{YType::boolean, "extranet-route"},
    group_address{YType::str, "group-address"},
    inherit_alive{YType::boolean, "inherit-alive"},
    inherit_spt{YType::boolean, "inherit-spt"},
    is_via_lsm{YType::boolean, "is-via-lsm"},
    jp_status{YType::int32, "jp-status"},
    jp_timer{YType::int32, "jp-timer"},
    last_hop{YType::boolean, "last-hop"},
    limit_reached{YType::boolean, "limit-reached"},
    low_memory{YType::boolean, "low-memory"},
    mofrr_active{YType::boolean, "mofrr-active"},
    mofrr_backup{YType::boolean, "mofrr-backup"},
    mofrr_enabled{YType::boolean, "mofrr-enabled"},
    mofrr_primary{YType::boolean, "mofrr-primary"},
    probe_alive{YType::boolean, "probe-alive"},
    protocol{YType::enumeration, "protocol"},
    proxy{YType::boolean, "proxy"},
    really_alive{YType::boolean, "really-alive"},
    register_received{YType::boolean, "register-received"},
    register_received_timer{YType::int32, "register-received-timer"},
    remote_source{YType::boolean, "remote-source"},
    rib_mo_frr_enabled{YType::boolean, "rib-mo-frr-enabled"},
    rpf_drop{YType::boolean, "rpf-drop"},
    rpf_extranet{YType::boolean, "rpf-extranet"},
    rpf_interface_name{YType::str, "rpf-interface-name"},
    rpf_proxy_enabled{YType::boolean, "rpf-proxy-enabled"},
    rpf_safi{YType::uint8, "rpf-safi"},
    rpf_table_name{YType::str, "rpf-table-name"},
    rpf_vrf_name{YType::str, "rpf-vrf-name"},
    rpt{YType::int32, "rpt"},
    rpt_xr{YType::boolean, "rpt-xr"},
    sa_joined{YType::boolean, "sa-joined"},
    sa_received{YType::boolean, "sa-received"},
    sa_sent{YType::boolean, "sa-sent"},
    secondary_rpf_interface_name{YType::str, "secondary-rpf-interface-name"},
    sending_null_registers{YType::boolean, "sending-null-registers"},
    sending_registers{YType::boolean, "sending-registers"},
    signal_sources{YType::boolean, "signal-sources"},
    source_address{YType::str, "source-address"},
    spt{YType::boolean, "spt"},
    suppress_registers{YType::int32, "suppress-registers"},
    uptime{YType::uint64, "uptime"},
    vxlan{YType::boolean, "vxlan"},
    wildcard{YType::boolean, "wildcard"}
    	,
    group_address_xr(std::make_shared<Pim::Active::DefaultContext::Topologies::Topology::GroupAddressXr>())
	,orig_src_address(std::make_shared<Pim::Active::DefaultContext::Topologies::Topology::OrigSrcAddress>())
	,proxy_address(std::make_shared<Pim::Active::DefaultContext::Topologies::Topology::ProxyAddress>())
	,rp_address(std::make_shared<Pim::Active::DefaultContext::Topologies::Topology::RpAddress>())
	,rpf_neighbor(std::make_shared<Pim::Active::DefaultContext::Topologies::Topology::RpfNeighbor>())
	,rpf_root(std::make_shared<Pim::Active::DefaultContext::Topologies::Topology::RpfRoot>())
	,secondary_rpf_neighbor(std::make_shared<Pim::Active::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor>())
	,source_address_xr(std::make_shared<Pim::Active::DefaultContext::Topologies::Topology::SourceAddressXr>())
{
    group_address_xr->parent = this;
    children["group-address-xr"] = group_address_xr;

    orig_src_address->parent = this;
    children["orig-src-address"] = orig_src_address;

    proxy_address->parent = this;
    children["proxy-address"] = proxy_address;

    rp_address->parent = this;
    children["rp-address"] = rp_address;

    rpf_neighbor->parent = this;
    children["rpf-neighbor"] = rpf_neighbor;

    rpf_root->parent = this;
    children["rpf-root"] = rpf_root;

    secondary_rpf_neighbor->parent = this;
    children["secondary-rpf-neighbor"] = secondary_rpf_neighbor;

    source_address_xr->parent = this;
    children["source-address-xr"] = source_address_xr;

    yang_name = "topology"; yang_parent_name = "topologies";
}

Pim::Active::DefaultContext::Topologies::Topology::~Topology()
{
}

bool Pim::Active::DefaultContext::Topologies::Topology::has_data() const
{
    for (std::size_t index=0; index<outgoing_interface.size(); index++)
    {
        if(outgoing_interface[index]->has_data())
            return true;
    }
    return alive.is_set
	|| anycast_rp_match.is_set
	|| anycast_rp_route_target.is_set
	|| assume_alive.is_set
	|| bgp_join.is_set
	|| bgpjp_time.is_set
	|| connected.is_set
	|| customer_routing_type.is_set
	|| dont_check_connected.is_set
	|| expiry.is_set
	|| extranet_route.is_set
	|| group_address.is_set
	|| inherit_alive.is_set
	|| inherit_spt.is_set
	|| is_via_lsm.is_set
	|| jp_status.is_set
	|| jp_timer.is_set
	|| last_hop.is_set
	|| limit_reached.is_set
	|| low_memory.is_set
	|| mofrr_active.is_set
	|| mofrr_backup.is_set
	|| mofrr_enabled.is_set
	|| mofrr_primary.is_set
	|| probe_alive.is_set
	|| protocol.is_set
	|| proxy.is_set
	|| really_alive.is_set
	|| register_received.is_set
	|| register_received_timer.is_set
	|| remote_source.is_set
	|| rib_mo_frr_enabled.is_set
	|| rpf_drop.is_set
	|| rpf_extranet.is_set
	|| rpf_interface_name.is_set
	|| rpf_proxy_enabled.is_set
	|| rpf_safi.is_set
	|| rpf_table_name.is_set
	|| rpf_vrf_name.is_set
	|| rpt.is_set
	|| rpt_xr.is_set
	|| sa_joined.is_set
	|| sa_received.is_set
	|| sa_sent.is_set
	|| secondary_rpf_interface_name.is_set
	|| sending_null_registers.is_set
	|| sending_registers.is_set
	|| signal_sources.is_set
	|| source_address.is_set
	|| spt.is_set
	|| suppress_registers.is_set
	|| uptime.is_set
	|| vxlan.is_set
	|| wildcard.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (orig_src_address !=  nullptr && orig_src_address->has_data())
	|| (proxy_address !=  nullptr && proxy_address->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data())
	|| (rpf_root !=  nullptr && rpf_root->has_data())
	|| (secondary_rpf_neighbor !=  nullptr && secondary_rpf_neighbor->has_data())
	|| (source_address_xr !=  nullptr && source_address_xr->has_data());
}

bool Pim::Active::DefaultContext::Topologies::Topology::has_operation() const
{
    for (std::size_t index=0; index<outgoing_interface.size(); index++)
    {
        if(outgoing_interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alive.operation)
	|| is_set(anycast_rp_match.operation)
	|| is_set(anycast_rp_route_target.operation)
	|| is_set(assume_alive.operation)
	|| is_set(bgp_join.operation)
	|| is_set(bgpjp_time.operation)
	|| is_set(connected.operation)
	|| is_set(customer_routing_type.operation)
	|| is_set(dont_check_connected.operation)
	|| is_set(expiry.operation)
	|| is_set(extranet_route.operation)
	|| is_set(group_address.operation)
	|| is_set(inherit_alive.operation)
	|| is_set(inherit_spt.operation)
	|| is_set(is_via_lsm.operation)
	|| is_set(jp_status.operation)
	|| is_set(jp_timer.operation)
	|| is_set(last_hop.operation)
	|| is_set(limit_reached.operation)
	|| is_set(low_memory.operation)
	|| is_set(mofrr_active.operation)
	|| is_set(mofrr_backup.operation)
	|| is_set(mofrr_enabled.operation)
	|| is_set(mofrr_primary.operation)
	|| is_set(probe_alive.operation)
	|| is_set(protocol.operation)
	|| is_set(proxy.operation)
	|| is_set(really_alive.operation)
	|| is_set(register_received.operation)
	|| is_set(register_received_timer.operation)
	|| is_set(remote_source.operation)
	|| is_set(rib_mo_frr_enabled.operation)
	|| is_set(rpf_drop.operation)
	|| is_set(rpf_extranet.operation)
	|| is_set(rpf_interface_name.operation)
	|| is_set(rpf_proxy_enabled.operation)
	|| is_set(rpf_safi.operation)
	|| is_set(rpf_table_name.operation)
	|| is_set(rpf_vrf_name.operation)
	|| is_set(rpt.operation)
	|| is_set(rpt_xr.operation)
	|| is_set(sa_joined.operation)
	|| is_set(sa_received.operation)
	|| is_set(sa_sent.operation)
	|| is_set(secondary_rpf_interface_name.operation)
	|| is_set(sending_null_registers.operation)
	|| is_set(sending_registers.operation)
	|| is_set(signal_sources.operation)
	|| is_set(source_address.operation)
	|| is_set(spt.operation)
	|| is_set(suppress_registers.operation)
	|| is_set(uptime.operation)
	|| is_set(vxlan.operation)
	|| is_set(wildcard.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (orig_src_address !=  nullptr && orig_src_address->has_operation())
	|| (proxy_address !=  nullptr && proxy_address->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation())
	|| (rpf_root !=  nullptr && rpf_root->has_operation())
	|| (secondary_rpf_neighbor !=  nullptr && secondary_rpf_neighbor->has_operation())
	|| (source_address_xr !=  nullptr && source_address_xr->has_operation());
}

std::string Pim::Active::DefaultContext::Topologies::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Topologies::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/topologies/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alive.is_set || is_set(alive.operation)) leaf_name_data.push_back(alive.get_name_leafdata());
    if (anycast_rp_match.is_set || is_set(anycast_rp_match.operation)) leaf_name_data.push_back(anycast_rp_match.get_name_leafdata());
    if (anycast_rp_route_target.is_set || is_set(anycast_rp_route_target.operation)) leaf_name_data.push_back(anycast_rp_route_target.get_name_leafdata());
    if (assume_alive.is_set || is_set(assume_alive.operation)) leaf_name_data.push_back(assume_alive.get_name_leafdata());
    if (bgp_join.is_set || is_set(bgp_join.operation)) leaf_name_data.push_back(bgp_join.get_name_leafdata());
    if (bgpjp_time.is_set || is_set(bgpjp_time.operation)) leaf_name_data.push_back(bgpjp_time.get_name_leafdata());
    if (connected.is_set || is_set(connected.operation)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (customer_routing_type.is_set || is_set(customer_routing_type.operation)) leaf_name_data.push_back(customer_routing_type.get_name_leafdata());
    if (dont_check_connected.is_set || is_set(dont_check_connected.operation)) leaf_name_data.push_back(dont_check_connected.get_name_leafdata());
    if (expiry.is_set || is_set(expiry.operation)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (extranet_route.is_set || is_set(extranet_route.operation)) leaf_name_data.push_back(extranet_route.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (inherit_alive.is_set || is_set(inherit_alive.operation)) leaf_name_data.push_back(inherit_alive.get_name_leafdata());
    if (inherit_spt.is_set || is_set(inherit_spt.operation)) leaf_name_data.push_back(inherit_spt.get_name_leafdata());
    if (is_via_lsm.is_set || is_set(is_via_lsm.operation)) leaf_name_data.push_back(is_via_lsm.get_name_leafdata());
    if (jp_status.is_set || is_set(jp_status.operation)) leaf_name_data.push_back(jp_status.get_name_leafdata());
    if (jp_timer.is_set || is_set(jp_timer.operation)) leaf_name_data.push_back(jp_timer.get_name_leafdata());
    if (last_hop.is_set || is_set(last_hop.operation)) leaf_name_data.push_back(last_hop.get_name_leafdata());
    if (limit_reached.is_set || is_set(limit_reached.operation)) leaf_name_data.push_back(limit_reached.get_name_leafdata());
    if (low_memory.is_set || is_set(low_memory.operation)) leaf_name_data.push_back(low_memory.get_name_leafdata());
    if (mofrr_active.is_set || is_set(mofrr_active.operation)) leaf_name_data.push_back(mofrr_active.get_name_leafdata());
    if (mofrr_backup.is_set || is_set(mofrr_backup.operation)) leaf_name_data.push_back(mofrr_backup.get_name_leafdata());
    if (mofrr_enabled.is_set || is_set(mofrr_enabled.operation)) leaf_name_data.push_back(mofrr_enabled.get_name_leafdata());
    if (mofrr_primary.is_set || is_set(mofrr_primary.operation)) leaf_name_data.push_back(mofrr_primary.get_name_leafdata());
    if (probe_alive.is_set || is_set(probe_alive.operation)) leaf_name_data.push_back(probe_alive.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (proxy.is_set || is_set(proxy.operation)) leaf_name_data.push_back(proxy.get_name_leafdata());
    if (really_alive.is_set || is_set(really_alive.operation)) leaf_name_data.push_back(really_alive.get_name_leafdata());
    if (register_received.is_set || is_set(register_received.operation)) leaf_name_data.push_back(register_received.get_name_leafdata());
    if (register_received_timer.is_set || is_set(register_received_timer.operation)) leaf_name_data.push_back(register_received_timer.get_name_leafdata());
    if (remote_source.is_set || is_set(remote_source.operation)) leaf_name_data.push_back(remote_source.get_name_leafdata());
    if (rib_mo_frr_enabled.is_set || is_set(rib_mo_frr_enabled.operation)) leaf_name_data.push_back(rib_mo_frr_enabled.get_name_leafdata());
    if (rpf_drop.is_set || is_set(rpf_drop.operation)) leaf_name_data.push_back(rpf_drop.get_name_leafdata());
    if (rpf_extranet.is_set || is_set(rpf_extranet.operation)) leaf_name_data.push_back(rpf_extranet.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.operation)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());
    if (rpf_proxy_enabled.is_set || is_set(rpf_proxy_enabled.operation)) leaf_name_data.push_back(rpf_proxy_enabled.get_name_leafdata());
    if (rpf_safi.is_set || is_set(rpf_safi.operation)) leaf_name_data.push_back(rpf_safi.get_name_leafdata());
    if (rpf_table_name.is_set || is_set(rpf_table_name.operation)) leaf_name_data.push_back(rpf_table_name.get_name_leafdata());
    if (rpf_vrf_name.is_set || is_set(rpf_vrf_name.operation)) leaf_name_data.push_back(rpf_vrf_name.get_name_leafdata());
    if (rpt.is_set || is_set(rpt.operation)) leaf_name_data.push_back(rpt.get_name_leafdata());
    if (rpt_xr.is_set || is_set(rpt_xr.operation)) leaf_name_data.push_back(rpt_xr.get_name_leafdata());
    if (sa_joined.is_set || is_set(sa_joined.operation)) leaf_name_data.push_back(sa_joined.get_name_leafdata());
    if (sa_received.is_set || is_set(sa_received.operation)) leaf_name_data.push_back(sa_received.get_name_leafdata());
    if (sa_sent.is_set || is_set(sa_sent.operation)) leaf_name_data.push_back(sa_sent.get_name_leafdata());
    if (secondary_rpf_interface_name.is_set || is_set(secondary_rpf_interface_name.operation)) leaf_name_data.push_back(secondary_rpf_interface_name.get_name_leafdata());
    if (sending_null_registers.is_set || is_set(sending_null_registers.operation)) leaf_name_data.push_back(sending_null_registers.get_name_leafdata());
    if (sending_registers.is_set || is_set(sending_registers.operation)) leaf_name_data.push_back(sending_registers.get_name_leafdata());
    if (signal_sources.is_set || is_set(signal_sources.operation)) leaf_name_data.push_back(signal_sources.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (spt.is_set || is_set(spt.operation)) leaf_name_data.push_back(spt.get_name_leafdata());
    if (suppress_registers.is_set || is_set(suppress_registers.operation)) leaf_name_data.push_back(suppress_registers.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (vxlan.is_set || is_set(vxlan.operation)) leaf_name_data.push_back(vxlan.get_name_leafdata());
    if (wildcard.is_set || is_set(wildcard.operation)) leaf_name_data.push_back(wildcard.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Topologies::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
        else
        {
            group_address_xr = std::make_shared<Pim::Active::DefaultContext::Topologies::Topology::GroupAddressXr>();
            group_address_xr->parent = this;
            children["group-address-xr"] = group_address_xr;
        }
        return children.at("group-address-xr");
    }

    if(child_yang_name == "orig-src-address")
    {
        if(orig_src_address != nullptr)
        {
            children["orig-src-address"] = orig_src_address;
        }
        else
        {
            orig_src_address = std::make_shared<Pim::Active::DefaultContext::Topologies::Topology::OrigSrcAddress>();
            orig_src_address->parent = this;
            children["orig-src-address"] = orig_src_address;
        }
        return children.at("orig-src-address");
    }

    if(child_yang_name == "outgoing-interface")
    {
        for(auto const & c : outgoing_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface>();
        c->parent = this;
        outgoing_interface.push_back(std::move(c));
        children[segment_path] = outgoing_interface.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "proxy-address")
    {
        if(proxy_address != nullptr)
        {
            children["proxy-address"] = proxy_address;
        }
        else
        {
            proxy_address = std::make_shared<Pim::Active::DefaultContext::Topologies::Topology::ProxyAddress>();
            proxy_address->parent = this;
            children["proxy-address"] = proxy_address;
        }
        return children.at("proxy-address");
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
        else
        {
            rp_address = std::make_shared<Pim::Active::DefaultContext::Topologies::Topology::RpAddress>();
            rp_address->parent = this;
            children["rp-address"] = rp_address;
        }
        return children.at("rp-address");
    }

    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor != nullptr)
        {
            children["rpf-neighbor"] = rpf_neighbor;
        }
        else
        {
            rpf_neighbor = std::make_shared<Pim::Active::DefaultContext::Topologies::Topology::RpfNeighbor>();
            rpf_neighbor->parent = this;
            children["rpf-neighbor"] = rpf_neighbor;
        }
        return children.at("rpf-neighbor");
    }

    if(child_yang_name == "rpf-root")
    {
        if(rpf_root != nullptr)
        {
            children["rpf-root"] = rpf_root;
        }
        else
        {
            rpf_root = std::make_shared<Pim::Active::DefaultContext::Topologies::Topology::RpfRoot>();
            rpf_root->parent = this;
            children["rpf-root"] = rpf_root;
        }
        return children.at("rpf-root");
    }

    if(child_yang_name == "secondary-rpf-neighbor")
    {
        if(secondary_rpf_neighbor != nullptr)
        {
            children["secondary-rpf-neighbor"] = secondary_rpf_neighbor;
        }
        else
        {
            secondary_rpf_neighbor = std::make_shared<Pim::Active::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor>();
            secondary_rpf_neighbor->parent = this;
            children["secondary-rpf-neighbor"] = secondary_rpf_neighbor;
        }
        return children.at("secondary-rpf-neighbor");
    }

    if(child_yang_name == "source-address-xr")
    {
        if(source_address_xr != nullptr)
        {
            children["source-address-xr"] = source_address_xr;
        }
        else
        {
            source_address_xr = std::make_shared<Pim::Active::DefaultContext::Topologies::Topology::SourceAddressXr>();
            source_address_xr->parent = this;
            children["source-address-xr"] = source_address_xr;
        }
        return children.at("source-address-xr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Topologies::Topology::get_children()
{
    if(children.find("group-address-xr") == children.end())
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
    }

    if(children.find("orig-src-address") == children.end())
    {
        if(orig_src_address != nullptr)
        {
            children["orig-src-address"] = orig_src_address;
        }
    }

    for (auto const & c : outgoing_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("proxy-address") == children.end())
    {
        if(proxy_address != nullptr)
        {
            children["proxy-address"] = proxy_address;
        }
    }

    if(children.find("rp-address") == children.end())
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
    }

    if(children.find("rpf-neighbor") == children.end())
    {
        if(rpf_neighbor != nullptr)
        {
            children["rpf-neighbor"] = rpf_neighbor;
        }
    }

    if(children.find("rpf-root") == children.end())
    {
        if(rpf_root != nullptr)
        {
            children["rpf-root"] = rpf_root;
        }
    }

    if(children.find("secondary-rpf-neighbor") == children.end())
    {
        if(secondary_rpf_neighbor != nullptr)
        {
            children["secondary-rpf-neighbor"] = secondary_rpf_neighbor;
        }
    }

    if(children.find("source-address-xr") == children.end())
    {
        if(source_address_xr != nullptr)
        {
            children["source-address-xr"] = source_address_xr;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Topologies::Topology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alive")
    {
        alive = value;
    }
    if(value_path == "anycast-rp-match")
    {
        anycast_rp_match = value;
    }
    if(value_path == "anycast-rp-route-target")
    {
        anycast_rp_route_target = value;
    }
    if(value_path == "assume-alive")
    {
        assume_alive = value;
    }
    if(value_path == "bgp-join")
    {
        bgp_join = value;
    }
    if(value_path == "bgpjp-time")
    {
        bgpjp_time = value;
    }
    if(value_path == "connected")
    {
        connected = value;
    }
    if(value_path == "customer-routing-type")
    {
        customer_routing_type = value;
    }
    if(value_path == "dont-check-connected")
    {
        dont_check_connected = value;
    }
    if(value_path == "expiry")
    {
        expiry = value;
    }
    if(value_path == "extranet-route")
    {
        extranet_route = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "inherit-alive")
    {
        inherit_alive = value;
    }
    if(value_path == "inherit-spt")
    {
        inherit_spt = value;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm = value;
    }
    if(value_path == "jp-status")
    {
        jp_status = value;
    }
    if(value_path == "jp-timer")
    {
        jp_timer = value;
    }
    if(value_path == "last-hop")
    {
        last_hop = value;
    }
    if(value_path == "limit-reached")
    {
        limit_reached = value;
    }
    if(value_path == "low-memory")
    {
        low_memory = value;
    }
    if(value_path == "mofrr-active")
    {
        mofrr_active = value;
    }
    if(value_path == "mofrr-backup")
    {
        mofrr_backup = value;
    }
    if(value_path == "mofrr-enabled")
    {
        mofrr_enabled = value;
    }
    if(value_path == "mofrr-primary")
    {
        mofrr_primary = value;
    }
    if(value_path == "probe-alive")
    {
        probe_alive = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "proxy")
    {
        proxy = value;
    }
    if(value_path == "really-alive")
    {
        really_alive = value;
    }
    if(value_path == "register-received")
    {
        register_received = value;
    }
    if(value_path == "register-received-timer")
    {
        register_received_timer = value;
    }
    if(value_path == "remote-source")
    {
        remote_source = value;
    }
    if(value_path == "rib-mo-frr-enabled")
    {
        rib_mo_frr_enabled = value;
    }
    if(value_path == "rpf-drop")
    {
        rpf_drop = value;
    }
    if(value_path == "rpf-extranet")
    {
        rpf_extranet = value;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
    }
    if(value_path == "rpf-proxy-enabled")
    {
        rpf_proxy_enabled = value;
    }
    if(value_path == "rpf-safi")
    {
        rpf_safi = value;
    }
    if(value_path == "rpf-table-name")
    {
        rpf_table_name = value;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name = value;
    }
    if(value_path == "rpt")
    {
        rpt = value;
    }
    if(value_path == "rpt-xr")
    {
        rpt_xr = value;
    }
    if(value_path == "sa-joined")
    {
        sa_joined = value;
    }
    if(value_path == "sa-received")
    {
        sa_received = value;
    }
    if(value_path == "sa-sent")
    {
        sa_sent = value;
    }
    if(value_path == "secondary-rpf-interface-name")
    {
        secondary_rpf_interface_name = value;
    }
    if(value_path == "sending-null-registers")
    {
        sending_null_registers = value;
    }
    if(value_path == "sending-registers")
    {
        sending_registers = value;
    }
    if(value_path == "signal-sources")
    {
        signal_sources = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "spt")
    {
        spt = value;
    }
    if(value_path == "suppress-registers")
    {
        suppress_registers = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
    if(value_path == "vxlan")
    {
        vxlan = value;
    }
    if(value_path == "wildcard")
    {
        wildcard = value;
    }
}

Pim::Active::DefaultContext::Topologies::Topology::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "topology";
}

Pim::Active::DefaultContext::Topologies::Topology::GroupAddressXr::~GroupAddressXr()
{
}

bool Pim::Active::DefaultContext::Topologies::Topology::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Topologies::Topology::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Topologies::Topology::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Topologies::Topology::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/topologies/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Topologies::Topology::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Topologies::Topology::GroupAddressXr::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Topologies::Topology::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Topologies::Topology::SourceAddressXr::SourceAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address-xr"; yang_parent_name = "topology";
}

Pim::Active::DefaultContext::Topologies::Topology::SourceAddressXr::~SourceAddressXr()
{
}

bool Pim::Active::DefaultContext::Topologies::Topology::SourceAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Topologies::Topology::SourceAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Topologies::Topology::SourceAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-xr";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Topologies::Topology::SourceAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/topologies/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Topologies::Topology::SourceAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Topologies::Topology::SourceAddressXr::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Topologies::Topology::SourceAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Topologies::Topology::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "topology";
}

Pim::Active::DefaultContext::Topologies::Topology::RpAddress::~RpAddress()
{
}

bool Pim::Active::DefaultContext::Topologies::Topology::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Topologies::Topology::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Topologies::Topology::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Topologies::Topology::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/topologies/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Topologies::Topology::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Topologies::Topology::RpAddress::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Topologies::Topology::RpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Topologies::Topology::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-neighbor"; yang_parent_name = "topology";
}

Pim::Active::DefaultContext::Topologies::Topology::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Active::DefaultContext::Topologies::Topology::RpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Topologies::Topology::RpfNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Topologies::Topology::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Topologies::Topology::RpfNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/topologies/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Topologies::Topology::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Topologies::Topology::RpfNeighbor::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Topologies::Topology::RpfNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::SecondaryRpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "secondary-rpf-neighbor"; yang_parent_name = "topology";
}

Pim::Active::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::~SecondaryRpfNeighbor()
{
}

bool Pim::Active::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-rpf-neighbor";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/topologies/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Topologies::Topology::RpfRoot::RpfRoot()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-root"; yang_parent_name = "topology";
}

Pim::Active::DefaultContext::Topologies::Topology::RpfRoot::~RpfRoot()
{
}

bool Pim::Active::DefaultContext::Topologies::Topology::RpfRoot::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Topologies::Topology::RpfRoot::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Topologies::Topology::RpfRoot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-root";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Topologies::Topology::RpfRoot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/topologies/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Topologies::Topology::RpfRoot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Topologies::Topology::RpfRoot::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Topologies::Topology::RpfRoot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Topologies::Topology::ProxyAddress::ProxyAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "proxy-address"; yang_parent_name = "topology";
}

Pim::Active::DefaultContext::Topologies::Topology::ProxyAddress::~ProxyAddress()
{
}

bool Pim::Active::DefaultContext::Topologies::Topology::ProxyAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Topologies::Topology::ProxyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Topologies::Topology::ProxyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-address";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Topologies::Topology::ProxyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/topologies/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Topologies::Topology::ProxyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Topologies::Topology::ProxyAddress::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Topologies::Topology::ProxyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Topologies::Topology::OrigSrcAddress::OrigSrcAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "orig-src-address"; yang_parent_name = "topology";
}

Pim::Active::DefaultContext::Topologies::Topology::OrigSrcAddress::~OrigSrcAddress()
{
}

bool Pim::Active::DefaultContext::Topologies::Topology::OrigSrcAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Topologies::Topology::OrigSrcAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Topologies::Topology::OrigSrcAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "orig-src-address";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Topologies::Topology::OrigSrcAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/topologies/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Topologies::Topology::OrigSrcAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Topologies::Topology::OrigSrcAddress::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Topologies::Topology::OrigSrcAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::OutgoingInterface()
    :
    admin_boundary{YType::boolean, "admin-boundary"},
    assert_timer{YType::int32, "assert-timer"},
    bgp_c_mcast_join{YType::boolean, "bgp-c-mcast-join"},
    bgp_c_mcast_prune_delay_timer{YType::uint64, "bgp-c-mcast-prune-delay-timer"},
    data_mdt_join{YType::boolean, "data-mdt-join"},
    expiry{YType::uint64, "expiry"},
    extranet_interface{YType::boolean, "extranet-interface"},
    forwarding_state{YType::int32, "forwarding-state"},
    igmp_membership{YType::boolean, "igmp-membership"},
    immediate_state{YType::int32, "immediate-state"},
    interface_name{YType::str, "interface-name"},
    internal_interest_info{YType::int32, "internal-interest-info"},
    jp_state{YType::int32, "jp-state"},
    jp_timer{YType::int32, "jp-timer"},
    last_hop{YType::boolean, "last-hop"},
    local_mdt_join{YType::boolean, "local-mdt-join"},
    local_members{YType::int32, "local-members"},
    mdt_safi_join{YType::boolean, "mdt-safi-join"},
    mldp_inband_mdt{YType::boolean, "mldp-inband-mdt"},
    mldp_stale{YType::boolean, "mldp-stale"},
    mvp_nv6_safi_join{YType::boolean, "mvp-nv6-safi-join"},
    mvpn_safi_join{YType::boolean, "mvpn-safi-join"},
    sa_prune{YType::boolean, "sa-prune"},
    uptime{YType::uint64, "uptime"},
    vrf_name{YType::str, "vrf-name"}
    	,
    assert_winner(std::make_shared<Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner>())
{
    assert_winner->parent = this;
    children["assert-winner"] = assert_winner;

    yang_name = "outgoing-interface"; yang_parent_name = "topology";
}

Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::~OutgoingInterface()
{
}

bool Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::has_data() const
{
    return admin_boundary.is_set
	|| assert_timer.is_set
	|| bgp_c_mcast_join.is_set
	|| bgp_c_mcast_prune_delay_timer.is_set
	|| data_mdt_join.is_set
	|| expiry.is_set
	|| extranet_interface.is_set
	|| forwarding_state.is_set
	|| igmp_membership.is_set
	|| immediate_state.is_set
	|| interface_name.is_set
	|| internal_interest_info.is_set
	|| jp_state.is_set
	|| jp_timer.is_set
	|| last_hop.is_set
	|| local_mdt_join.is_set
	|| local_members.is_set
	|| mdt_safi_join.is_set
	|| mldp_inband_mdt.is_set
	|| mldp_stale.is_set
	|| mvp_nv6_safi_join.is_set
	|| mvpn_safi_join.is_set
	|| sa_prune.is_set
	|| uptime.is_set
	|| vrf_name.is_set
	|| (assert_winner !=  nullptr && assert_winner->has_data());
}

bool Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_boundary.operation)
	|| is_set(assert_timer.operation)
	|| is_set(bgp_c_mcast_join.operation)
	|| is_set(bgp_c_mcast_prune_delay_timer.operation)
	|| is_set(data_mdt_join.operation)
	|| is_set(expiry.operation)
	|| is_set(extranet_interface.operation)
	|| is_set(forwarding_state.operation)
	|| is_set(igmp_membership.operation)
	|| is_set(immediate_state.operation)
	|| is_set(interface_name.operation)
	|| is_set(internal_interest_info.operation)
	|| is_set(jp_state.operation)
	|| is_set(jp_timer.operation)
	|| is_set(last_hop.operation)
	|| is_set(local_mdt_join.operation)
	|| is_set(local_members.operation)
	|| is_set(mdt_safi_join.operation)
	|| is_set(mldp_inband_mdt.operation)
	|| is_set(mldp_stale.operation)
	|| is_set(mvp_nv6_safi_join.operation)
	|| is_set(mvpn_safi_join.operation)
	|| is_set(sa_prune.operation)
	|| is_set(uptime.operation)
	|| is_set(vrf_name.operation)
	|| (assert_winner !=  nullptr && assert_winner->has_operation());
}

std::string Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-interface";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/topologies/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_boundary.is_set || is_set(admin_boundary.operation)) leaf_name_data.push_back(admin_boundary.get_name_leafdata());
    if (assert_timer.is_set || is_set(assert_timer.operation)) leaf_name_data.push_back(assert_timer.get_name_leafdata());
    if (bgp_c_mcast_join.is_set || is_set(bgp_c_mcast_join.operation)) leaf_name_data.push_back(bgp_c_mcast_join.get_name_leafdata());
    if (bgp_c_mcast_prune_delay_timer.is_set || is_set(bgp_c_mcast_prune_delay_timer.operation)) leaf_name_data.push_back(bgp_c_mcast_prune_delay_timer.get_name_leafdata());
    if (data_mdt_join.is_set || is_set(data_mdt_join.operation)) leaf_name_data.push_back(data_mdt_join.get_name_leafdata());
    if (expiry.is_set || is_set(expiry.operation)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (extranet_interface.is_set || is_set(extranet_interface.operation)) leaf_name_data.push_back(extranet_interface.get_name_leafdata());
    if (forwarding_state.is_set || is_set(forwarding_state.operation)) leaf_name_data.push_back(forwarding_state.get_name_leafdata());
    if (igmp_membership.is_set || is_set(igmp_membership.operation)) leaf_name_data.push_back(igmp_membership.get_name_leafdata());
    if (immediate_state.is_set || is_set(immediate_state.operation)) leaf_name_data.push_back(immediate_state.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (internal_interest_info.is_set || is_set(internal_interest_info.operation)) leaf_name_data.push_back(internal_interest_info.get_name_leafdata());
    if (jp_state.is_set || is_set(jp_state.operation)) leaf_name_data.push_back(jp_state.get_name_leafdata());
    if (jp_timer.is_set || is_set(jp_timer.operation)) leaf_name_data.push_back(jp_timer.get_name_leafdata());
    if (last_hop.is_set || is_set(last_hop.operation)) leaf_name_data.push_back(last_hop.get_name_leafdata());
    if (local_mdt_join.is_set || is_set(local_mdt_join.operation)) leaf_name_data.push_back(local_mdt_join.get_name_leafdata());
    if (local_members.is_set || is_set(local_members.operation)) leaf_name_data.push_back(local_members.get_name_leafdata());
    if (mdt_safi_join.is_set || is_set(mdt_safi_join.operation)) leaf_name_data.push_back(mdt_safi_join.get_name_leafdata());
    if (mldp_inband_mdt.is_set || is_set(mldp_inband_mdt.operation)) leaf_name_data.push_back(mldp_inband_mdt.get_name_leafdata());
    if (mldp_stale.is_set || is_set(mldp_stale.operation)) leaf_name_data.push_back(mldp_stale.get_name_leafdata());
    if (mvp_nv6_safi_join.is_set || is_set(mvp_nv6_safi_join.operation)) leaf_name_data.push_back(mvp_nv6_safi_join.get_name_leafdata());
    if (mvpn_safi_join.is_set || is_set(mvpn_safi_join.operation)) leaf_name_data.push_back(mvpn_safi_join.get_name_leafdata());
    if (sa_prune.is_set || is_set(sa_prune.operation)) leaf_name_data.push_back(sa_prune.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "assert-winner")
    {
        if(assert_winner != nullptr)
        {
            children["assert-winner"] = assert_winner;
        }
        else
        {
            assert_winner = std::make_shared<Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner>();
            assert_winner->parent = this;
            children["assert-winner"] = assert_winner;
        }
        return children.at("assert-winner");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::get_children()
{
    if(children.find("assert-winner") == children.end())
    {
        if(assert_winner != nullptr)
        {
            children["assert-winner"] = assert_winner;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-boundary")
    {
        admin_boundary = value;
    }
    if(value_path == "assert-timer")
    {
        assert_timer = value;
    }
    if(value_path == "bgp-c-mcast-join")
    {
        bgp_c_mcast_join = value;
    }
    if(value_path == "bgp-c-mcast-prune-delay-timer")
    {
        bgp_c_mcast_prune_delay_timer = value;
    }
    if(value_path == "data-mdt-join")
    {
        data_mdt_join = value;
    }
    if(value_path == "expiry")
    {
        expiry = value;
    }
    if(value_path == "extranet-interface")
    {
        extranet_interface = value;
    }
    if(value_path == "forwarding-state")
    {
        forwarding_state = value;
    }
    if(value_path == "igmp-membership")
    {
        igmp_membership = value;
    }
    if(value_path == "immediate-state")
    {
        immediate_state = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "internal-interest-info")
    {
        internal_interest_info = value;
    }
    if(value_path == "jp-state")
    {
        jp_state = value;
    }
    if(value_path == "jp-timer")
    {
        jp_timer = value;
    }
    if(value_path == "last-hop")
    {
        last_hop = value;
    }
    if(value_path == "local-mdt-join")
    {
        local_mdt_join = value;
    }
    if(value_path == "local-members")
    {
        local_members = value;
    }
    if(value_path == "mdt-safi-join")
    {
        mdt_safi_join = value;
    }
    if(value_path == "mldp-inband-mdt")
    {
        mldp_inband_mdt = value;
    }
    if(value_path == "mldp-stale")
    {
        mldp_stale = value;
    }
    if(value_path == "mvp-nv6-safi-join")
    {
        mvp_nv6_safi_join = value;
    }
    if(value_path == "mvpn-safi-join")
    {
        mvpn_safi_join = value;
    }
    if(value_path == "sa-prune")
    {
        sa_prune = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::AssertWinner()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "assert-winner"; yang_parent_name = "outgoing-interface";
}

Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::~AssertWinner()
{
}

bool Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "assert-winner";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/topologies/topology/outgoing-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::BgpAfs::BgpAfs()
{
    yang_name = "bgp-afs"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::BgpAfs::~BgpAfs()
{
}

bool Pim::Active::DefaultContext::BgpAfs::has_data() const
{
    for (std::size_t index=0; index<bgp_af.size(); index++)
    {
        if(bgp_af[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::BgpAfs::has_operation() const
{
    for (std::size_t index=0; index<bgp_af.size(); index++)
    {
        if(bgp_af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::BgpAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-afs";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::BgpAfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::BgpAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-af")
    {
        for(auto const & c : bgp_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::BgpAfs::BgpAf>();
        c->parent = this;
        bgp_af.push_back(std::move(c));
        children[segment_path] = bgp_af.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::BgpAfs::get_children()
{
    for (auto const & c : bgp_af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::BgpAfs::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::BgpAfs::BgpAf::BgpAf()
    :
    extranet_path_count{YType::uint32, "extranet-path-count"},
    group_address{YType::str, "group-address"},
    is_bgp_added{YType::boolean, "is-bgp-added"},
    route_distinguisher{YType::str, "route-distinguisher"},
    source_address{YType::str, "source-address"}
    	,
    group(std::make_shared<Pim::Active::DefaultContext::BgpAfs::BgpAf::Group>())
	,next_hop(std::make_shared<Pim::Active::DefaultContext::BgpAfs::BgpAf::NextHop>())
	,source(std::make_shared<Pim::Active::DefaultContext::BgpAfs::BgpAf::Source>())
{
    group->parent = this;
    children["group"] = group;

    next_hop->parent = this;
    children["next-hop"] = next_hop;

    source->parent = this;
    children["source"] = source;

    yang_name = "bgp-af"; yang_parent_name = "bgp-afs";
}

Pim::Active::DefaultContext::BgpAfs::BgpAf::~BgpAf()
{
}

bool Pim::Active::DefaultContext::BgpAfs::BgpAf::has_data() const
{
    return extranet_path_count.is_set
	|| group_address.is_set
	|| is_bgp_added.is_set
	|| route_distinguisher.is_set
	|| source_address.is_set
	|| (group !=  nullptr && group->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Pim::Active::DefaultContext::BgpAfs::BgpAf::has_operation() const
{
    return is_set(operation)
	|| is_set(extranet_path_count.operation)
	|| is_set(group_address.operation)
	|| is_set(is_bgp_added.operation)
	|| is_set(route_distinguisher.operation)
	|| is_set(source_address.operation)
	|| (group !=  nullptr && group->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Pim::Active::DefaultContext::BgpAfs::BgpAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-af";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::BgpAfs::BgpAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/bgp-afs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extranet_path_count.is_set || is_set(extranet_path_count.operation)) leaf_name_data.push_back(extranet_path_count.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (is_bgp_added.is_set || is_set(is_bgp_added.operation)) leaf_name_data.push_back(is_bgp_added.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.operation)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::BgpAfs::BgpAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group")
    {
        if(group != nullptr)
        {
            children["group"] = group;
        }
        else
        {
            group = std::make_shared<Pim::Active::DefaultContext::BgpAfs::BgpAf::Group>();
            group->parent = this;
            children["group"] = group;
        }
        return children.at("group");
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop != nullptr)
        {
            children["next-hop"] = next_hop;
        }
        else
        {
            next_hop = std::make_shared<Pim::Active::DefaultContext::BgpAfs::BgpAf::NextHop>();
            next_hop->parent = this;
            children["next-hop"] = next_hop;
        }
        return children.at("next-hop");
    }

    if(child_yang_name == "source")
    {
        if(source != nullptr)
        {
            children["source"] = source;
        }
        else
        {
            source = std::make_shared<Pim::Active::DefaultContext::BgpAfs::BgpAf::Source>();
            source->parent = this;
            children["source"] = source;
        }
        return children.at("source");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::BgpAfs::BgpAf::get_children()
{
    if(children.find("group") == children.end())
    {
        if(group != nullptr)
        {
            children["group"] = group;
        }
    }

    if(children.find("next-hop") == children.end())
    {
        if(next_hop != nullptr)
        {
            children["next-hop"] = next_hop;
        }
    }

    if(children.find("source") == children.end())
    {
        if(source != nullptr)
        {
            children["source"] = source;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::BgpAfs::BgpAf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extranet-path-count")
    {
        extranet_path_count = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "is-bgp-added")
    {
        is_bgp_added = value;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
}

Pim::Active::DefaultContext::BgpAfs::BgpAf::Source::Source()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source"; yang_parent_name = "bgp-af";
}

Pim::Active::DefaultContext::BgpAfs::BgpAf::Source::~Source()
{
}

bool Pim::Active::DefaultContext::BgpAfs::BgpAf::Source::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::BgpAfs::BgpAf::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::BgpAfs::BgpAf::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::BgpAfs::BgpAf::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/bgp-afs/bgp-af/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::BgpAfs::BgpAf::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::BgpAfs::BgpAf::Source::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::BgpAfs::BgpAf::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::BgpAfs::BgpAf::Group::Group()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group"; yang_parent_name = "bgp-af";
}

Pim::Active::DefaultContext::BgpAfs::BgpAf::Group::~Group()
{
}

bool Pim::Active::DefaultContext::BgpAfs::BgpAf::Group::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::BgpAfs::BgpAf::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::BgpAfs::BgpAf::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::BgpAfs::BgpAf::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/bgp-afs/bgp-af/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::BgpAfs::BgpAf::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::BgpAfs::BgpAf::Group::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::BgpAfs::BgpAf::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::BgpAfs::BgpAf::NextHop::NextHop()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "next-hop"; yang_parent_name = "bgp-af";
}

Pim::Active::DefaultContext::BgpAfs::BgpAf::NextHop::~NextHop()
{
}

bool Pim::Active::DefaultContext::BgpAfs::BgpAf::NextHop::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::BgpAfs::BgpAf::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::BgpAfs::BgpAf::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::BgpAfs::BgpAf::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/bgp-afs/bgp-af/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::BgpAfs::BgpAf::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::BgpAfs::BgpAf::NextHop::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::BgpAfs::BgpAf::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::AutoRp::AutoRp()
{
    yang_name = "auto-rp"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::AutoRp::~AutoRp()
{
}

bool Pim::Active::DefaultContext::AutoRp::has_data() const
{
    return false;
}

bool Pim::Active::DefaultContext::AutoRp::has_operation() const
{
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::AutoRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-rp";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::AutoRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::AutoRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::AutoRp::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::AutoRp::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCounts()
{
    yang_name = "topology-interface-flag-route-counts"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::~TopologyInterfaceFlagRouteCounts()
{
}

bool Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::has_data() const
{
    for (std::size_t index=0; index<topology_interface_flag_route_count.size(); index++)
    {
        if(topology_interface_flag_route_count[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::has_operation() const
{
    for (std::size_t index=0; index<topology_interface_flag_route_count.size(); index++)
    {
        if(topology_interface_flag_route_count[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-interface-flag-route-counts";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "topology-interface-flag-route-count")
    {
        for(auto const & c : topology_interface_flag_route_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount>();
        c->parent = this;
        topology_interface_flag_route_count.push_back(std::move(c));
        children[segment_path] = topology_interface_flag_route_count.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::get_children()
{
    for (auto const & c : topology_interface_flag_route_count)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::TopologyInterfaceFlagRouteCount()
    :
    interface_flag{YType::enumeration, "interface-flag"},
    active_group_ranges{YType::uint32, "active-group-ranges"},
    group_ranges{YType::uint32, "group-ranges"},
    groute_count{YType::uint32, "groute-count"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    sg_route_count{YType::uint32, "sg-route-count"},
    sgr_route_count{YType::uint32, "sgr-route-count"}
    	,
    group_address(std::make_shared<Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress>())
{
    group_address->parent = this;
    children["group-address"] = group_address;

    yang_name = "topology-interface-flag-route-count"; yang_parent_name = "topology-interface-flag-route-counts";
}

Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::~TopologyInterfaceFlagRouteCount()
{
}

bool Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::has_data() const
{
    return interface_flag.is_set
	|| active_group_ranges.is_set
	|| group_ranges.is_set
	|| groute_count.is_set
	|| is_node_low_memory.is_set
	|| sg_route_count.is_set
	|| sgr_route_count.is_set
	|| (group_address !=  nullptr && group_address->has_data());
}

bool Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_flag.operation)
	|| is_set(active_group_ranges.operation)
	|| is_set(group_ranges.operation)
	|| is_set(groute_count.operation)
	|| is_set(is_node_low_memory.operation)
	|| is_set(sg_route_count.operation)
	|| is_set(sgr_route_count.operation)
	|| (group_address !=  nullptr && group_address->has_operation());
}

std::string Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-interface-flag-route-count" <<"[interface-flag='" <<interface_flag <<"']";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/topology-interface-flag-route-counts/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_flag.is_set || is_set(interface_flag.operation)) leaf_name_data.push_back(interface_flag.get_name_leafdata());
    if (active_group_ranges.is_set || is_set(active_group_ranges.operation)) leaf_name_data.push_back(active_group_ranges.get_name_leafdata());
    if (group_ranges.is_set || is_set(group_ranges.operation)) leaf_name_data.push_back(group_ranges.get_name_leafdata());
    if (groute_count.is_set || is_set(groute_count.operation)) leaf_name_data.push_back(groute_count.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.operation)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());
    if (sg_route_count.is_set || is_set(sg_route_count.operation)) leaf_name_data.push_back(sg_route_count.get_name_leafdata());
    if (sgr_route_count.is_set || is_set(sgr_route_count.operation)) leaf_name_data.push_back(sgr_route_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address")
    {
        if(group_address != nullptr)
        {
            children["group-address"] = group_address;
        }
        else
        {
            group_address = std::make_shared<Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress>();
            group_address->parent = this;
            children["group-address"] = group_address;
        }
        return children.at("group-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_children()
{
    if(children.find("group-address") == children.end())
    {
        if(group_address != nullptr)
        {
            children["group-address"] = group_address;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-flag")
    {
        interface_flag = value;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges = value;
    }
    if(value_path == "group-ranges")
    {
        group_ranges = value;
    }
    if(value_path == "groute-count")
    {
        groute_count = value;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count = value;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count = value;
    }
}

Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address"; yang_parent_name = "topology-interface-flag-route-count";
}

Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::~GroupAddress()
{
}

bool Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::GroupMapSources::GroupMapSources()
{
    yang_name = "group-map-sources"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::GroupMapSources::~GroupMapSources()
{
}

bool Pim::Active::DefaultContext::GroupMapSources::has_data() const
{
    for (std::size_t index=0; index<group_map_source.size(); index++)
    {
        if(group_map_source[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::GroupMapSources::has_operation() const
{
    for (std::size_t index=0; index<group_map_source.size(); index++)
    {
        if(group_map_source[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::GroupMapSources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-sources";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::GroupMapSources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::GroupMapSources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-map-source")
    {
        for(auto const & c : group_map_source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::GroupMapSources::GroupMapSource>();
        c->parent = this;
        group_map_source.push_back(std::move(c));
        children[segment_path] = group_map_source.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::GroupMapSources::get_children()
{
    for (auto const & c : group_map_source)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::GroupMapSources::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapSource()
    :
    client{YType::enumeration, "client"},
    expires{YType::uint64, "expires"},
    holdtime{YType::int32, "holdtime"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::int32, "prefix-length"},
    priority{YType::int32, "priority"},
    protocol{YType::enumeration, "protocol"},
    rp_address{YType::str, "rp-address"},
    uptime{YType::uint64, "uptime"}
    	,
    group_map_information(std::make_shared<Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation>())
	,source_of_information(std::make_shared<Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation>())
{
    group_map_information->parent = this;
    children["group-map-information"] = group_map_information;

    source_of_information->parent = this;
    children["source-of-information"] = source_of_information;

    yang_name = "group-map-source"; yang_parent_name = "group-map-sources";
}

Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::~GroupMapSource()
{
}

bool Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::has_data() const
{
    return client.is_set
	|| expires.is_set
	|| holdtime.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| protocol.is_set
	|| rp_address.is_set
	|| uptime.is_set
	|| (group_map_information !=  nullptr && group_map_information->has_data())
	|| (source_of_information !=  nullptr && source_of_information->has_data());
}

bool Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::has_operation() const
{
    return is_set(operation)
	|| is_set(client.operation)
	|| is_set(expires.operation)
	|| is_set(holdtime.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation)
	|| is_set(protocol.operation)
	|| is_set(rp_address.operation)
	|| is_set(uptime.operation)
	|| (group_map_information !=  nullptr && group_map_information->has_operation())
	|| (source_of_information !=  nullptr && source_of_information->has_operation());
}

std::string Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-source";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/group-map-sources/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.operation)) leaf_name_data.push_back(client.get_name_leafdata());
    if (expires.is_set || is_set(expires.operation)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (holdtime.is_set || is_set(holdtime.operation)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-map-information")
    {
        if(group_map_information != nullptr)
        {
            children["group-map-information"] = group_map_information;
        }
        else
        {
            group_map_information = std::make_shared<Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation>();
            group_map_information->parent = this;
            children["group-map-information"] = group_map_information;
        }
        return children.at("group-map-information");
    }

    if(child_yang_name == "source-of-information")
    {
        if(source_of_information != nullptr)
        {
            children["source-of-information"] = source_of_information;
        }
        else
        {
            source_of_information = std::make_shared<Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation>();
            source_of_information->parent = this;
            children["source-of-information"] = source_of_information;
        }
        return children.at("source-of-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::get_children()
{
    if(children.find("group-map-information") == children.end())
    {
        if(group_map_information != nullptr)
        {
            children["group-map-information"] = group_map_information;
        }
    }

    if(children.find("source-of-information") == children.end())
    {
        if(source_of_information != nullptr)
        {
            children["source-of-information"] = source_of_information;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client")
    {
        client = value;
    }
    if(value_path == "expires")
    {
        expires = value;
    }
    if(value_path == "holdtime")
    {
        holdtime = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::SourceOfInformation()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-of-information"; yang_parent_name = "group-map-source";
}

Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::~SourceOfInformation()
{
}

bool Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-of-information";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/group-map-sources/group-map-source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::GroupMapInformation()
    :
    client{YType::enumeration, "client"},
    group_count{YType::uint32, "group-count"},
    is_override{YType::boolean, "is-override"},
    is_used{YType::boolean, "is-used"},
    mrib_active{YType::boolean, "mrib-active"},
    prefix_length{YType::int32, "prefix-length"},
    priority{YType::uint32, "priority"},
    protocol{YType::enumeration, "protocol"}
    	,
    prefix(std::make_shared<Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix>())
	,rp_address(std::make_shared<Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress>())
{
    prefix->parent = this;
    children["prefix"] = prefix;

    rp_address->parent = this;
    children["rp-address"] = rp_address;

    yang_name = "group-map-information"; yang_parent_name = "group-map-source";
}

Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::~GroupMapInformation()
{
}

bool Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::has_data() const
{
    return client.is_set
	|| group_count.is_set
	|| is_override.is_set
	|| is_used.is_set
	|| mrib_active.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| protocol.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data());
}

bool Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(client.operation)
	|| is_set(group_count.operation)
	|| is_set(is_override.operation)
	|| is_set(is_used.operation)
	|| is_set(mrib_active.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation)
	|| is_set(protocol.operation)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation());
}

std::string Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-information";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/group-map-sources/group-map-source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.operation)) leaf_name_data.push_back(client.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (is_override.is_set || is_set(is_override.operation)) leaf_name_data.push_back(is_override.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (mrib_active.is_set || is_set(mrib_active.operation)) leaf_name_data.push_back(mrib_active.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix")
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix;
        }
        else
        {
            prefix = std::make_shared<Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix>();
            prefix->parent = this;
            children["prefix"] = prefix;
        }
        return children.at("prefix");
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
        else
        {
            rp_address = std::make_shared<Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress>();
            rp_address->parent = this;
            children["rp-address"] = rp_address;
        }
        return children.at("rp-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::get_children()
{
    if(children.find("prefix") == children.end())
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix;
        }
    }

    if(children.find("rp-address") == children.end())
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client")
    {
        client = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "is-override")
    {
        is_override = value;
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
    if(value_path == "mrib-active")
    {
        mrib_active = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "prefix"; yang_parent_name = "group-map-information";
}

Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::~Prefix()
{
}

bool Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/group-map-sources/group-map-source/group-map-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "group-map-information";
}

Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::~RpAddress()
{
}

bool Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/group-map-sources/group-map-source/group-map-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::TrafficCounters::TrafficCounters()
    :
    boundary_acl_rx_drop{YType::uint32, "boundary-acl-rx-drop"},
    boundary_acl_tx_drop{YType::uint32, "boundary-acl-tx-drop"},
    checksum_error{YType::uint32, "checksum-error"},
    elapsed_time{YType::uint32, "elapsed-time"},
    format_error{YType::uint32, "format-error"},
    input_assert{YType::uint32, "input-assert"},
    input_assert_batched{YType::uint32, "input-assert-batched"},
    input_bsr_message{YType::uint32, "input-bsr-message"},
    input_candidate_rp_advertisement{YType::uint32, "input-candidate-rp-advertisement"},
    input_data_register{YType::uint32, "input-data-register"},
    input_df_election{YType::uint32, "input-df-election"},
    input_ecmp_redirect{YType::uint32, "input-ecmp-redirect"},
    input_hello{YType::uint32, "input-hello"},
    input_jp{YType::uint32, "input-jp"},
    input_no_idb_error{YType::uint32, "input-no-idb-error"},
    input_no_pim_error{YType::uint32, "input-no-pim-error"},
    input_no_vrf_error{YType::uint32, "input-no-vrf-error"},
    input_null_register{YType::uint32, "input-null-register"},
    input_pim_version_error{YType::uint32, "input-pim-version-error"},
    input_register_stop{YType::uint32, "input-register-stop"},
    inputs{YType::uint32, "inputs"},
    invalid_destination_packets{YType::uint32, "invalid-destination-packets"},
    invalid_join_prunes{YType::uint32, "invalid-join-prunes"},
    invalid_registers{YType::uint32, "invalid-registers"},
    mdt_drop_local_source_address{YType::uint32, "mdt-drop-local-source-address"},
    mdt_drop_no_idb{YType::uint32, "mdt-drop-no-idb"},
    mdt_drop_no_vrf{YType::uint32, "mdt-drop-no-vrf"},
    mdt_drop_null_local_address{YType::uint32, "mdt-drop-null-local-address"},
    mdt_join_bad_type{YType::uint32, "mdt-join-bad-type"},
    mdt_join_tlv_received{YType::uint32, "mdt-join-tlv-received"},
    mdt_join_tlv_sent{YType::uint32, "mdt-join-tlv-sent"},
    mdt_joins_drop_multiple_encapsulation{YType::uint32, "mdt-joins-drop-multiple-encapsulation"},
    mdt_send_queue_full{YType::uint32, "mdt-send-queue-full"},
    mdt_socket_error{YType::uint32, "mdt-socket-error"},
    mldp_mdt_invalid_lsm_identifier{YType::uint32, "mldp-mdt-invalid-lsm-identifier"},
    no_mdt_socket_connection{YType::uint32, "no-mdt-socket-connection"},
    no_socket_connection{YType::uint32, "no-socket-connection"},
    no_source_address{YType::uint32, "no-source-address"},
    non_supported_packets{YType::uint32, "non-supported-packets"},
    output_assert{YType::uint32, "output-assert"},
    output_assert_batched{YType::uint32, "output-assert-batched"},
    output_bsr_message{YType::uint32, "output-bsr-message"},
    output_candidate_rp_advertisement{YType::uint32, "output-candidate-rp-advertisement"},
    output_data_register{YType::uint32, "output-data-register"},
    output_df_election{YType::uint32, "output-df-election"},
    output_ecmp_redirect{YType::uint32, "output-ecmp-redirect"},
    output_hello{YType::uint32, "output-hello"},
    output_hello_bytes{YType::uint32, "output-hello-bytes"},
    output_join_group{YType::uint32, "output-join-group"},
    output_join_prune_bytes{YType::uint32, "output-join-prune-bytes"},
    output_jp{YType::uint32, "output-jp"},
    output_loop_error{YType::uint32, "output-loop-error"},
    output_null_register{YType::uint32, "output-null-register"},
    output_prune_group{YType::uint32, "output-prune-group"},
    output_register_stop{YType::uint32, "output-register-stop"},
    outputs{YType::uint32, "outputs"},
    packet_dequeued{YType::uint32, "packet-dequeued"},
    packet_enqueued{YType::uint32, "packet-enqueued"},
    packet_packman_error{YType::uint32, "packet-packman-error"},
    packet_queue_last_clear{YType::uint32, "packet-queue-last-clear"},
    packet_queue_length{YType::uint32, "packet-queue-length"},
    packet_queue_size{YType::uint32, "packet-queue-size"},
    packet_read_socket_error{YType::uint32, "packet-read-socket-error"},
    packet_tail_drop{YType::uint32, "packet-tail-drop"},
    packets_standby{YType::uint32, "packets-standby"},
    pakman_error{YType::uint32, "pakman-error"},
    send_queue_full{YType::uint32, "send-queue-full"},
    socket_error{YType::uint32, "socket-error"},
    standby_packets_error{YType::uint32, "standby-packets-error"},
    truncated_pim_packets{YType::uint32, "truncated-pim-packets"}
{
    yang_name = "traffic-counters"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::TrafficCounters::~TrafficCounters()
{
}

bool Pim::Active::DefaultContext::TrafficCounters::has_data() const
{
    for (std::size_t index=0; index<packet_queue.size(); index++)
    {
        if(packet_queue[index]->has_data())
            return true;
    }
    for (auto const & leaf : packet_dequeued.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : packet_enqueued.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : packet_queue_length.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : packet_queue_size.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : packet_tail_drop.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return boundary_acl_rx_drop.is_set
	|| boundary_acl_tx_drop.is_set
	|| checksum_error.is_set
	|| elapsed_time.is_set
	|| format_error.is_set
	|| input_assert.is_set
	|| input_assert_batched.is_set
	|| input_bsr_message.is_set
	|| input_candidate_rp_advertisement.is_set
	|| input_data_register.is_set
	|| input_df_election.is_set
	|| input_ecmp_redirect.is_set
	|| input_hello.is_set
	|| input_jp.is_set
	|| input_no_idb_error.is_set
	|| input_no_pim_error.is_set
	|| input_no_vrf_error.is_set
	|| input_null_register.is_set
	|| input_pim_version_error.is_set
	|| input_register_stop.is_set
	|| inputs.is_set
	|| invalid_destination_packets.is_set
	|| invalid_join_prunes.is_set
	|| invalid_registers.is_set
	|| mdt_drop_local_source_address.is_set
	|| mdt_drop_no_idb.is_set
	|| mdt_drop_no_vrf.is_set
	|| mdt_drop_null_local_address.is_set
	|| mdt_join_bad_type.is_set
	|| mdt_join_tlv_received.is_set
	|| mdt_join_tlv_sent.is_set
	|| mdt_joins_drop_multiple_encapsulation.is_set
	|| mdt_send_queue_full.is_set
	|| mdt_socket_error.is_set
	|| mldp_mdt_invalid_lsm_identifier.is_set
	|| no_mdt_socket_connection.is_set
	|| no_socket_connection.is_set
	|| no_source_address.is_set
	|| non_supported_packets.is_set
	|| output_assert.is_set
	|| output_assert_batched.is_set
	|| output_bsr_message.is_set
	|| output_candidate_rp_advertisement.is_set
	|| output_data_register.is_set
	|| output_df_election.is_set
	|| output_ecmp_redirect.is_set
	|| output_hello.is_set
	|| output_hello_bytes.is_set
	|| output_join_group.is_set
	|| output_join_prune_bytes.is_set
	|| output_jp.is_set
	|| output_loop_error.is_set
	|| output_null_register.is_set
	|| output_prune_group.is_set
	|| output_register_stop.is_set
	|| outputs.is_set
	|| packet_packman_error.is_set
	|| packet_queue_last_clear.is_set
	|| packet_read_socket_error.is_set
	|| packets_standby.is_set
	|| pakman_error.is_set
	|| send_queue_full.is_set
	|| socket_error.is_set
	|| standby_packets_error.is_set
	|| truncated_pim_packets.is_set;
}

bool Pim::Active::DefaultContext::TrafficCounters::has_operation() const
{
    for (std::size_t index=0; index<packet_queue.size(); index++)
    {
        if(packet_queue[index]->has_operation())
            return true;
    }
    for (auto const & leaf : packet_dequeued.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : packet_enqueued.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : packet_queue_length.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : packet_queue_size.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : packet_tail_drop.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(boundary_acl_rx_drop.operation)
	|| is_set(boundary_acl_tx_drop.operation)
	|| is_set(checksum_error.operation)
	|| is_set(elapsed_time.operation)
	|| is_set(format_error.operation)
	|| is_set(input_assert.operation)
	|| is_set(input_assert_batched.operation)
	|| is_set(input_bsr_message.operation)
	|| is_set(input_candidate_rp_advertisement.operation)
	|| is_set(input_data_register.operation)
	|| is_set(input_df_election.operation)
	|| is_set(input_ecmp_redirect.operation)
	|| is_set(input_hello.operation)
	|| is_set(input_jp.operation)
	|| is_set(input_no_idb_error.operation)
	|| is_set(input_no_pim_error.operation)
	|| is_set(input_no_vrf_error.operation)
	|| is_set(input_null_register.operation)
	|| is_set(input_pim_version_error.operation)
	|| is_set(input_register_stop.operation)
	|| is_set(inputs.operation)
	|| is_set(invalid_destination_packets.operation)
	|| is_set(invalid_join_prunes.operation)
	|| is_set(invalid_registers.operation)
	|| is_set(mdt_drop_local_source_address.operation)
	|| is_set(mdt_drop_no_idb.operation)
	|| is_set(mdt_drop_no_vrf.operation)
	|| is_set(mdt_drop_null_local_address.operation)
	|| is_set(mdt_join_bad_type.operation)
	|| is_set(mdt_join_tlv_received.operation)
	|| is_set(mdt_join_tlv_sent.operation)
	|| is_set(mdt_joins_drop_multiple_encapsulation.operation)
	|| is_set(mdt_send_queue_full.operation)
	|| is_set(mdt_socket_error.operation)
	|| is_set(mldp_mdt_invalid_lsm_identifier.operation)
	|| is_set(no_mdt_socket_connection.operation)
	|| is_set(no_socket_connection.operation)
	|| is_set(no_source_address.operation)
	|| is_set(non_supported_packets.operation)
	|| is_set(output_assert.operation)
	|| is_set(output_assert_batched.operation)
	|| is_set(output_bsr_message.operation)
	|| is_set(output_candidate_rp_advertisement.operation)
	|| is_set(output_data_register.operation)
	|| is_set(output_df_election.operation)
	|| is_set(output_ecmp_redirect.operation)
	|| is_set(output_hello.operation)
	|| is_set(output_hello_bytes.operation)
	|| is_set(output_join_group.operation)
	|| is_set(output_join_prune_bytes.operation)
	|| is_set(output_jp.operation)
	|| is_set(output_loop_error.operation)
	|| is_set(output_null_register.operation)
	|| is_set(output_prune_group.operation)
	|| is_set(output_register_stop.operation)
	|| is_set(outputs.operation)
	|| is_set(packet_dequeued.operation)
	|| is_set(packet_enqueued.operation)
	|| is_set(packet_packman_error.operation)
	|| is_set(packet_queue_last_clear.operation)
	|| is_set(packet_queue_length.operation)
	|| is_set(packet_queue_size.operation)
	|| is_set(packet_read_socket_error.operation)
	|| is_set(packet_tail_drop.operation)
	|| is_set(packets_standby.operation)
	|| is_set(pakman_error.operation)
	|| is_set(send_queue_full.operation)
	|| is_set(socket_error.operation)
	|| is_set(standby_packets_error.operation)
	|| is_set(truncated_pim_packets.operation);
}

std::string Pim::Active::DefaultContext::TrafficCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-counters";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::TrafficCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boundary_acl_rx_drop.is_set || is_set(boundary_acl_rx_drop.operation)) leaf_name_data.push_back(boundary_acl_rx_drop.get_name_leafdata());
    if (boundary_acl_tx_drop.is_set || is_set(boundary_acl_tx_drop.operation)) leaf_name_data.push_back(boundary_acl_tx_drop.get_name_leafdata());
    if (checksum_error.is_set || is_set(checksum_error.operation)) leaf_name_data.push_back(checksum_error.get_name_leafdata());
    if (elapsed_time.is_set || is_set(elapsed_time.operation)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (format_error.is_set || is_set(format_error.operation)) leaf_name_data.push_back(format_error.get_name_leafdata());
    if (input_assert.is_set || is_set(input_assert.operation)) leaf_name_data.push_back(input_assert.get_name_leafdata());
    if (input_assert_batched.is_set || is_set(input_assert_batched.operation)) leaf_name_data.push_back(input_assert_batched.get_name_leafdata());
    if (input_bsr_message.is_set || is_set(input_bsr_message.operation)) leaf_name_data.push_back(input_bsr_message.get_name_leafdata());
    if (input_candidate_rp_advertisement.is_set || is_set(input_candidate_rp_advertisement.operation)) leaf_name_data.push_back(input_candidate_rp_advertisement.get_name_leafdata());
    if (input_data_register.is_set || is_set(input_data_register.operation)) leaf_name_data.push_back(input_data_register.get_name_leafdata());
    if (input_df_election.is_set || is_set(input_df_election.operation)) leaf_name_data.push_back(input_df_election.get_name_leafdata());
    if (input_ecmp_redirect.is_set || is_set(input_ecmp_redirect.operation)) leaf_name_data.push_back(input_ecmp_redirect.get_name_leafdata());
    if (input_hello.is_set || is_set(input_hello.operation)) leaf_name_data.push_back(input_hello.get_name_leafdata());
    if (input_jp.is_set || is_set(input_jp.operation)) leaf_name_data.push_back(input_jp.get_name_leafdata());
    if (input_no_idb_error.is_set || is_set(input_no_idb_error.operation)) leaf_name_data.push_back(input_no_idb_error.get_name_leafdata());
    if (input_no_pim_error.is_set || is_set(input_no_pim_error.operation)) leaf_name_data.push_back(input_no_pim_error.get_name_leafdata());
    if (input_no_vrf_error.is_set || is_set(input_no_vrf_error.operation)) leaf_name_data.push_back(input_no_vrf_error.get_name_leafdata());
    if (input_null_register.is_set || is_set(input_null_register.operation)) leaf_name_data.push_back(input_null_register.get_name_leafdata());
    if (input_pim_version_error.is_set || is_set(input_pim_version_error.operation)) leaf_name_data.push_back(input_pim_version_error.get_name_leafdata());
    if (input_register_stop.is_set || is_set(input_register_stop.operation)) leaf_name_data.push_back(input_register_stop.get_name_leafdata());
    if (inputs.is_set || is_set(inputs.operation)) leaf_name_data.push_back(inputs.get_name_leafdata());
    if (invalid_destination_packets.is_set || is_set(invalid_destination_packets.operation)) leaf_name_data.push_back(invalid_destination_packets.get_name_leafdata());
    if (invalid_join_prunes.is_set || is_set(invalid_join_prunes.operation)) leaf_name_data.push_back(invalid_join_prunes.get_name_leafdata());
    if (invalid_registers.is_set || is_set(invalid_registers.operation)) leaf_name_data.push_back(invalid_registers.get_name_leafdata());
    if (mdt_drop_local_source_address.is_set || is_set(mdt_drop_local_source_address.operation)) leaf_name_data.push_back(mdt_drop_local_source_address.get_name_leafdata());
    if (mdt_drop_no_idb.is_set || is_set(mdt_drop_no_idb.operation)) leaf_name_data.push_back(mdt_drop_no_idb.get_name_leafdata());
    if (mdt_drop_no_vrf.is_set || is_set(mdt_drop_no_vrf.operation)) leaf_name_data.push_back(mdt_drop_no_vrf.get_name_leafdata());
    if (mdt_drop_null_local_address.is_set || is_set(mdt_drop_null_local_address.operation)) leaf_name_data.push_back(mdt_drop_null_local_address.get_name_leafdata());
    if (mdt_join_bad_type.is_set || is_set(mdt_join_bad_type.operation)) leaf_name_data.push_back(mdt_join_bad_type.get_name_leafdata());
    if (mdt_join_tlv_received.is_set || is_set(mdt_join_tlv_received.operation)) leaf_name_data.push_back(mdt_join_tlv_received.get_name_leafdata());
    if (mdt_join_tlv_sent.is_set || is_set(mdt_join_tlv_sent.operation)) leaf_name_data.push_back(mdt_join_tlv_sent.get_name_leafdata());
    if (mdt_joins_drop_multiple_encapsulation.is_set || is_set(mdt_joins_drop_multiple_encapsulation.operation)) leaf_name_data.push_back(mdt_joins_drop_multiple_encapsulation.get_name_leafdata());
    if (mdt_send_queue_full.is_set || is_set(mdt_send_queue_full.operation)) leaf_name_data.push_back(mdt_send_queue_full.get_name_leafdata());
    if (mdt_socket_error.is_set || is_set(mdt_socket_error.operation)) leaf_name_data.push_back(mdt_socket_error.get_name_leafdata());
    if (mldp_mdt_invalid_lsm_identifier.is_set || is_set(mldp_mdt_invalid_lsm_identifier.operation)) leaf_name_data.push_back(mldp_mdt_invalid_lsm_identifier.get_name_leafdata());
    if (no_mdt_socket_connection.is_set || is_set(no_mdt_socket_connection.operation)) leaf_name_data.push_back(no_mdt_socket_connection.get_name_leafdata());
    if (no_socket_connection.is_set || is_set(no_socket_connection.operation)) leaf_name_data.push_back(no_socket_connection.get_name_leafdata());
    if (no_source_address.is_set || is_set(no_source_address.operation)) leaf_name_data.push_back(no_source_address.get_name_leafdata());
    if (non_supported_packets.is_set || is_set(non_supported_packets.operation)) leaf_name_data.push_back(non_supported_packets.get_name_leafdata());
    if (output_assert.is_set || is_set(output_assert.operation)) leaf_name_data.push_back(output_assert.get_name_leafdata());
    if (output_assert_batched.is_set || is_set(output_assert_batched.operation)) leaf_name_data.push_back(output_assert_batched.get_name_leafdata());
    if (output_bsr_message.is_set || is_set(output_bsr_message.operation)) leaf_name_data.push_back(output_bsr_message.get_name_leafdata());
    if (output_candidate_rp_advertisement.is_set || is_set(output_candidate_rp_advertisement.operation)) leaf_name_data.push_back(output_candidate_rp_advertisement.get_name_leafdata());
    if (output_data_register.is_set || is_set(output_data_register.operation)) leaf_name_data.push_back(output_data_register.get_name_leafdata());
    if (output_df_election.is_set || is_set(output_df_election.operation)) leaf_name_data.push_back(output_df_election.get_name_leafdata());
    if (output_ecmp_redirect.is_set || is_set(output_ecmp_redirect.operation)) leaf_name_data.push_back(output_ecmp_redirect.get_name_leafdata());
    if (output_hello.is_set || is_set(output_hello.operation)) leaf_name_data.push_back(output_hello.get_name_leafdata());
    if (output_hello_bytes.is_set || is_set(output_hello_bytes.operation)) leaf_name_data.push_back(output_hello_bytes.get_name_leafdata());
    if (output_join_group.is_set || is_set(output_join_group.operation)) leaf_name_data.push_back(output_join_group.get_name_leafdata());
    if (output_join_prune_bytes.is_set || is_set(output_join_prune_bytes.operation)) leaf_name_data.push_back(output_join_prune_bytes.get_name_leafdata());
    if (output_jp.is_set || is_set(output_jp.operation)) leaf_name_data.push_back(output_jp.get_name_leafdata());
    if (output_loop_error.is_set || is_set(output_loop_error.operation)) leaf_name_data.push_back(output_loop_error.get_name_leafdata());
    if (output_null_register.is_set || is_set(output_null_register.operation)) leaf_name_data.push_back(output_null_register.get_name_leafdata());
    if (output_prune_group.is_set || is_set(output_prune_group.operation)) leaf_name_data.push_back(output_prune_group.get_name_leafdata());
    if (output_register_stop.is_set || is_set(output_register_stop.operation)) leaf_name_data.push_back(output_register_stop.get_name_leafdata());
    if (outputs.is_set || is_set(outputs.operation)) leaf_name_data.push_back(outputs.get_name_leafdata());
    if (packet_packman_error.is_set || is_set(packet_packman_error.operation)) leaf_name_data.push_back(packet_packman_error.get_name_leafdata());
    if (packet_queue_last_clear.is_set || is_set(packet_queue_last_clear.operation)) leaf_name_data.push_back(packet_queue_last_clear.get_name_leafdata());
    if (packet_read_socket_error.is_set || is_set(packet_read_socket_error.operation)) leaf_name_data.push_back(packet_read_socket_error.get_name_leafdata());
    if (packets_standby.is_set || is_set(packets_standby.operation)) leaf_name_data.push_back(packets_standby.get_name_leafdata());
    if (pakman_error.is_set || is_set(pakman_error.operation)) leaf_name_data.push_back(pakman_error.get_name_leafdata());
    if (send_queue_full.is_set || is_set(send_queue_full.operation)) leaf_name_data.push_back(send_queue_full.get_name_leafdata());
    if (socket_error.is_set || is_set(socket_error.operation)) leaf_name_data.push_back(socket_error.get_name_leafdata());
    if (standby_packets_error.is_set || is_set(standby_packets_error.operation)) leaf_name_data.push_back(standby_packets_error.get_name_leafdata());
    if (truncated_pim_packets.is_set || is_set(truncated_pim_packets.operation)) leaf_name_data.push_back(truncated_pim_packets.get_name_leafdata());

    auto packet_dequeued_name_datas = packet_dequeued.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packet_dequeued_name_datas.begin(), packet_dequeued_name_datas.end());
    auto packet_enqueued_name_datas = packet_enqueued.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packet_enqueued_name_datas.begin(), packet_enqueued_name_datas.end());
    auto packet_queue_length_name_datas = packet_queue_length.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packet_queue_length_name_datas.begin(), packet_queue_length_name_datas.end());
    auto packet_queue_size_name_datas = packet_queue_size.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packet_queue_size_name_datas.begin(), packet_queue_size_name_datas.end());
    auto packet_tail_drop_name_datas = packet_tail_drop.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packet_tail_drop_name_datas.begin(), packet_tail_drop_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::TrafficCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "packet-queue")
    {
        for(auto const & c : packet_queue)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::TrafficCounters::PacketQueue>();
        c->parent = this;
        packet_queue.push_back(std::move(c));
        children[segment_path] = packet_queue.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::TrafficCounters::get_children()
{
    for (auto const & c : packet_queue)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::TrafficCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "boundary-acl-rx-drop")
    {
        boundary_acl_rx_drop = value;
    }
    if(value_path == "boundary-acl-tx-drop")
    {
        boundary_acl_tx_drop = value;
    }
    if(value_path == "checksum-error")
    {
        checksum_error = value;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
    }
    if(value_path == "format-error")
    {
        format_error = value;
    }
    if(value_path == "input-assert")
    {
        input_assert = value;
    }
    if(value_path == "input-assert-batched")
    {
        input_assert_batched = value;
    }
    if(value_path == "input-bsr-message")
    {
        input_bsr_message = value;
    }
    if(value_path == "input-candidate-rp-advertisement")
    {
        input_candidate_rp_advertisement = value;
    }
    if(value_path == "input-data-register")
    {
        input_data_register = value;
    }
    if(value_path == "input-df-election")
    {
        input_df_election = value;
    }
    if(value_path == "input-ecmp-redirect")
    {
        input_ecmp_redirect = value;
    }
    if(value_path == "input-hello")
    {
        input_hello = value;
    }
    if(value_path == "input-jp")
    {
        input_jp = value;
    }
    if(value_path == "input-no-idb-error")
    {
        input_no_idb_error = value;
    }
    if(value_path == "input-no-pim-error")
    {
        input_no_pim_error = value;
    }
    if(value_path == "input-no-vrf-error")
    {
        input_no_vrf_error = value;
    }
    if(value_path == "input-null-register")
    {
        input_null_register = value;
    }
    if(value_path == "input-pim-version-error")
    {
        input_pim_version_error = value;
    }
    if(value_path == "input-register-stop")
    {
        input_register_stop = value;
    }
    if(value_path == "inputs")
    {
        inputs = value;
    }
    if(value_path == "invalid-destination-packets")
    {
        invalid_destination_packets = value;
    }
    if(value_path == "invalid-join-prunes")
    {
        invalid_join_prunes = value;
    }
    if(value_path == "invalid-registers")
    {
        invalid_registers = value;
    }
    if(value_path == "mdt-drop-local-source-address")
    {
        mdt_drop_local_source_address = value;
    }
    if(value_path == "mdt-drop-no-idb")
    {
        mdt_drop_no_idb = value;
    }
    if(value_path == "mdt-drop-no-vrf")
    {
        mdt_drop_no_vrf = value;
    }
    if(value_path == "mdt-drop-null-local-address")
    {
        mdt_drop_null_local_address = value;
    }
    if(value_path == "mdt-join-bad-type")
    {
        mdt_join_bad_type = value;
    }
    if(value_path == "mdt-join-tlv-received")
    {
        mdt_join_tlv_received = value;
    }
    if(value_path == "mdt-join-tlv-sent")
    {
        mdt_join_tlv_sent = value;
    }
    if(value_path == "mdt-joins-drop-multiple-encapsulation")
    {
        mdt_joins_drop_multiple_encapsulation = value;
    }
    if(value_path == "mdt-send-queue-full")
    {
        mdt_send_queue_full = value;
    }
    if(value_path == "mdt-socket-error")
    {
        mdt_socket_error = value;
    }
    if(value_path == "mldp-mdt-invalid-lsm-identifier")
    {
        mldp_mdt_invalid_lsm_identifier = value;
    }
    if(value_path == "no-mdt-socket-connection")
    {
        no_mdt_socket_connection = value;
    }
    if(value_path == "no-socket-connection")
    {
        no_socket_connection = value;
    }
    if(value_path == "no-source-address")
    {
        no_source_address = value;
    }
    if(value_path == "non-supported-packets")
    {
        non_supported_packets = value;
    }
    if(value_path == "output-assert")
    {
        output_assert = value;
    }
    if(value_path == "output-assert-batched")
    {
        output_assert_batched = value;
    }
    if(value_path == "output-bsr-message")
    {
        output_bsr_message = value;
    }
    if(value_path == "output-candidate-rp-advertisement")
    {
        output_candidate_rp_advertisement = value;
    }
    if(value_path == "output-data-register")
    {
        output_data_register = value;
    }
    if(value_path == "output-df-election")
    {
        output_df_election = value;
    }
    if(value_path == "output-ecmp-redirect")
    {
        output_ecmp_redirect = value;
    }
    if(value_path == "output-hello")
    {
        output_hello = value;
    }
    if(value_path == "output-hello-bytes")
    {
        output_hello_bytes = value;
    }
    if(value_path == "output-join-group")
    {
        output_join_group = value;
    }
    if(value_path == "output-join-prune-bytes")
    {
        output_join_prune_bytes = value;
    }
    if(value_path == "output-jp")
    {
        output_jp = value;
    }
    if(value_path == "output-loop-error")
    {
        output_loop_error = value;
    }
    if(value_path == "output-null-register")
    {
        output_null_register = value;
    }
    if(value_path == "output-prune-group")
    {
        output_prune_group = value;
    }
    if(value_path == "output-register-stop")
    {
        output_register_stop = value;
    }
    if(value_path == "outputs")
    {
        outputs = value;
    }
    if(value_path == "packet-dequeued")
    {
        packet_dequeued.append(value);
    }
    if(value_path == "packet-enqueued")
    {
        packet_enqueued.append(value);
    }
    if(value_path == "packet-packman-error")
    {
        packet_packman_error = value;
    }
    if(value_path == "packet-queue-last-clear")
    {
        packet_queue_last_clear = value;
    }
    if(value_path == "packet-queue-length")
    {
        packet_queue_length.append(value);
    }
    if(value_path == "packet-queue-size")
    {
        packet_queue_size.append(value);
    }
    if(value_path == "packet-read-socket-error")
    {
        packet_read_socket_error = value;
    }
    if(value_path == "packet-tail-drop")
    {
        packet_tail_drop.append(value);
    }
    if(value_path == "packets-standby")
    {
        packets_standby = value;
    }
    if(value_path == "pakman-error")
    {
        pakman_error = value;
    }
    if(value_path == "send-queue-full")
    {
        send_queue_full = value;
    }
    if(value_path == "socket-error")
    {
        socket_error = value;
    }
    if(value_path == "standby-packets-error")
    {
        standby_packets_error = value;
    }
    if(value_path == "truncated-pim-packets")
    {
        truncated_pim_packets = value;
    }
}

Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueue()
    :
    packet_queue_priority{YType::uint32, "packet-queue-priority"}
    	,
    packet_queue_state(std::make_shared<Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState>())
	,packet_queue_stats(std::make_shared<Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats>())
{
    packet_queue_state->parent = this;
    children["packet-queue-state"] = packet_queue_state;

    packet_queue_stats->parent = this;
    children["packet-queue-stats"] = packet_queue_stats;

    yang_name = "packet-queue"; yang_parent_name = "traffic-counters";
}

Pim::Active::DefaultContext::TrafficCounters::PacketQueue::~PacketQueue()
{
}

bool Pim::Active::DefaultContext::TrafficCounters::PacketQueue::has_data() const
{
    return packet_queue_priority.is_set
	|| (packet_queue_state !=  nullptr && packet_queue_state->has_data())
	|| (packet_queue_stats !=  nullptr && packet_queue_stats->has_data());
}

bool Pim::Active::DefaultContext::TrafficCounters::PacketQueue::has_operation() const
{
    return is_set(operation)
	|| is_set(packet_queue_priority.operation)
	|| (packet_queue_state !=  nullptr && packet_queue_state->has_operation())
	|| (packet_queue_stats !=  nullptr && packet_queue_stats->has_operation());
}

std::string Pim::Active::DefaultContext::TrafficCounters::PacketQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-queue";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::TrafficCounters::PacketQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/traffic-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_queue_priority.is_set || is_set(packet_queue_priority.operation)) leaf_name_data.push_back(packet_queue_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::TrafficCounters::PacketQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "packet-queue-state")
    {
        if(packet_queue_state != nullptr)
        {
            children["packet-queue-state"] = packet_queue_state;
        }
        else
        {
            packet_queue_state = std::make_shared<Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState>();
            packet_queue_state->parent = this;
            children["packet-queue-state"] = packet_queue_state;
        }
        return children.at("packet-queue-state");
    }

    if(child_yang_name == "packet-queue-stats")
    {
        if(packet_queue_stats != nullptr)
        {
            children["packet-queue-stats"] = packet_queue_stats;
        }
        else
        {
            packet_queue_stats = std::make_shared<Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats>();
            packet_queue_stats->parent = this;
            children["packet-queue-stats"] = packet_queue_stats;
        }
        return children.at("packet-queue-stats");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::TrafficCounters::PacketQueue::get_children()
{
    if(children.find("packet-queue-state") == children.end())
    {
        if(packet_queue_state != nullptr)
        {
            children["packet-queue-state"] = packet_queue_state;
        }
    }

    if(children.find("packet-queue-stats") == children.end())
    {
        if(packet_queue_stats != nullptr)
        {
            children["packet-queue-stats"] = packet_queue_stats;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::TrafficCounters::PacketQueue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "packet-queue-priority")
    {
        packet_queue_priority = value;
    }
}

Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::PacketQueueState()
    :
    max_queue_size{YType::uint32, "max-queue-size"},
    queue_size_bytes{YType::uint32, "queue-size-bytes"},
    queue_size_packets{YType::uint32, "queue-size-packets"}
{
    yang_name = "packet-queue-state"; yang_parent_name = "packet-queue";
}

Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::~PacketQueueState()
{
}

bool Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::has_data() const
{
    return max_queue_size.is_set
	|| queue_size_bytes.is_set
	|| queue_size_packets.is_set;
}

bool Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::has_operation() const
{
    return is_set(operation)
	|| is_set(max_queue_size.operation)
	|| is_set(queue_size_bytes.operation)
	|| is_set(queue_size_packets.operation);
}

std::string Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-queue-state";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/traffic-counters/packet-queue/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_queue_size.is_set || is_set(max_queue_size.operation)) leaf_name_data.push_back(max_queue_size.get_name_leafdata());
    if (queue_size_bytes.is_set || is_set(queue_size_bytes.operation)) leaf_name_data.push_back(queue_size_bytes.get_name_leafdata());
    if (queue_size_packets.is_set || is_set(queue_size_packets.operation)) leaf_name_data.push_back(queue_size_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-queue-size")
    {
        max_queue_size = value;
    }
    if(value_path == "queue-size-bytes")
    {
        queue_size_bytes = value;
    }
    if(value_path == "queue-size-packets")
    {
        queue_size_packets = value;
    }
}

Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::PacketQueueStats()
    :
    dequeued_packets{YType::uint32, "dequeued-packets"},
    enqueued_packets{YType::uint32, "enqueued-packets"},
    high_water_mark_bytes{YType::uint32, "high-water-mark-bytes"},
    high_water_mark_packets{YType::uint32, "high-water-mark-packets"},
    tail_drops{YType::uint32, "tail-drops"}
{
    yang_name = "packet-queue-stats"; yang_parent_name = "packet-queue";
}

Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::~PacketQueueStats()
{
}

bool Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::has_data() const
{
    return dequeued_packets.is_set
	|| enqueued_packets.is_set
	|| high_water_mark_bytes.is_set
	|| high_water_mark_packets.is_set
	|| tail_drops.is_set;
}

bool Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::has_operation() const
{
    return is_set(operation)
	|| is_set(dequeued_packets.operation)
	|| is_set(enqueued_packets.operation)
	|| is_set(high_water_mark_bytes.operation)
	|| is_set(high_water_mark_packets.operation)
	|| is_set(tail_drops.operation);
}

std::string Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-queue-stats";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/traffic-counters/packet-queue/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dequeued_packets.is_set || is_set(dequeued_packets.operation)) leaf_name_data.push_back(dequeued_packets.get_name_leafdata());
    if (enqueued_packets.is_set || is_set(enqueued_packets.operation)) leaf_name_data.push_back(enqueued_packets.get_name_leafdata());
    if (high_water_mark_bytes.is_set || is_set(high_water_mark_bytes.operation)) leaf_name_data.push_back(high_water_mark_bytes.get_name_leafdata());
    if (high_water_mark_packets.is_set || is_set(high_water_mark_packets.operation)) leaf_name_data.push_back(high_water_mark_packets.get_name_leafdata());
    if (tail_drops.is_set || is_set(tail_drops.operation)) leaf_name_data.push_back(tail_drops.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dequeued-packets")
    {
        dequeued_packets = value;
    }
    if(value_path == "enqueued-packets")
    {
        enqueued_packets = value;
    }
    if(value_path == "high-water-mark-bytes")
    {
        high_water_mark_bytes = value;
    }
    if(value_path == "high-water-mark-packets")
    {
        high_water_mark_packets = value;
    }
    if(value_path == "tail-drops")
    {
        tail_drops = value;
    }
}

Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpfs()
{
    yang_name = "group-map-rpfs"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::GroupMapRpfs::~GroupMapRpfs()
{
}

bool Pim::Active::DefaultContext::GroupMapRpfs::has_data() const
{
    for (std::size_t index=0; index<group_map_rpf.size(); index++)
    {
        if(group_map_rpf[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::GroupMapRpfs::has_operation() const
{
    for (std::size_t index=0; index<group_map_rpf.size(); index++)
    {
        if(group_map_rpf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::GroupMapRpfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-rpfs";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::GroupMapRpfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::GroupMapRpfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-map-rpf")
    {
        for(auto const & c : group_map_rpf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf>();
        c->parent = this;
        group_map_rpf.push_back(std::move(c));
        children[segment_path] = group_map_rpf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::GroupMapRpfs::get_children()
{
    for (auto const & c : group_map_rpf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::GroupMapRpfs::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapRpf()
    :
    are_we_rp{YType::boolean, "are-we-rp"},
    client{YType::enumeration, "client"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::int32, "prefix-length"},
    protocol{YType::enumeration, "protocol"},
    rp_address{YType::str, "rp-address"},
    rp_priority{YType::int32, "rp-priority"},
    rpf_interface_name{YType::str, "rpf-interface-name"},
    rpf_vrf_name{YType::str, "rpf-vrf-name"}
    	,
    group_map_information(std::make_shared<Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation>())
	,rpf_neighbor(std::make_shared<Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor>())
{
    group_map_information->parent = this;
    children["group-map-information"] = group_map_information;

    rpf_neighbor->parent = this;
    children["rpf-neighbor"] = rpf_neighbor;

    yang_name = "group-map-rpf"; yang_parent_name = "group-map-rpfs";
}

Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::~GroupMapRpf()
{
}

bool Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::has_data() const
{
    return are_we_rp.is_set
	|| client.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| protocol.is_set
	|| rp_address.is_set
	|| rp_priority.is_set
	|| rpf_interface_name.is_set
	|| rpf_vrf_name.is_set
	|| (group_map_information !=  nullptr && group_map_information->has_data())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data());
}

bool Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::has_operation() const
{
    return is_set(operation)
	|| is_set(are_we_rp.operation)
	|| is_set(client.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(protocol.operation)
	|| is_set(rp_address.operation)
	|| is_set(rp_priority.operation)
	|| is_set(rpf_interface_name.operation)
	|| is_set(rpf_vrf_name.operation)
	|| (group_map_information !=  nullptr && group_map_information->has_operation())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation());
}

std::string Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-rpf";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/group-map-rpfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (are_we_rp.is_set || is_set(are_we_rp.operation)) leaf_name_data.push_back(are_we_rp.get_name_leafdata());
    if (client.is_set || is_set(client.operation)) leaf_name_data.push_back(client.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (rp_priority.is_set || is_set(rp_priority.operation)) leaf_name_data.push_back(rp_priority.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.operation)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());
    if (rpf_vrf_name.is_set || is_set(rpf_vrf_name.operation)) leaf_name_data.push_back(rpf_vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-map-information")
    {
        if(group_map_information != nullptr)
        {
            children["group-map-information"] = group_map_information;
        }
        else
        {
            group_map_information = std::make_shared<Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation>();
            group_map_information->parent = this;
            children["group-map-information"] = group_map_information;
        }
        return children.at("group-map-information");
    }

    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor != nullptr)
        {
            children["rpf-neighbor"] = rpf_neighbor;
        }
        else
        {
            rpf_neighbor = std::make_shared<Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor>();
            rpf_neighbor->parent = this;
            children["rpf-neighbor"] = rpf_neighbor;
        }
        return children.at("rpf-neighbor");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::get_children()
{
    if(children.find("group-map-information") == children.end())
    {
        if(group_map_information != nullptr)
        {
            children["group-map-information"] = group_map_information;
        }
    }

    if(children.find("rpf-neighbor") == children.end())
    {
        if(rpf_neighbor != nullptr)
        {
            children["rpf-neighbor"] = rpf_neighbor;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "are-we-rp")
    {
        are_we_rp = value;
    }
    if(value_path == "client")
    {
        client = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
    if(value_path == "rp-priority")
    {
        rp_priority = value;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name = value;
    }
}

Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-neighbor"; yang_parent_name = "group-map-rpf";
}

Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/group-map-rpfs/group-map-rpf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::GroupMapInformation()
    :
    client{YType::enumeration, "client"},
    group_count{YType::uint32, "group-count"},
    is_override{YType::boolean, "is-override"},
    is_used{YType::boolean, "is-used"},
    mrib_active{YType::boolean, "mrib-active"},
    prefix_length{YType::int32, "prefix-length"},
    priority{YType::uint32, "priority"},
    protocol{YType::enumeration, "protocol"}
    	,
    prefix(std::make_shared<Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix>())
	,rp_address(std::make_shared<Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress>())
{
    prefix->parent = this;
    children["prefix"] = prefix;

    rp_address->parent = this;
    children["rp-address"] = rp_address;

    yang_name = "group-map-information"; yang_parent_name = "group-map-rpf";
}

Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::~GroupMapInformation()
{
}

bool Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::has_data() const
{
    return client.is_set
	|| group_count.is_set
	|| is_override.is_set
	|| is_used.is_set
	|| mrib_active.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| protocol.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data());
}

bool Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(client.operation)
	|| is_set(group_count.operation)
	|| is_set(is_override.operation)
	|| is_set(is_used.operation)
	|| is_set(mrib_active.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation)
	|| is_set(protocol.operation)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation());
}

std::string Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-information";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/group-map-rpfs/group-map-rpf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.operation)) leaf_name_data.push_back(client.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (is_override.is_set || is_set(is_override.operation)) leaf_name_data.push_back(is_override.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (mrib_active.is_set || is_set(mrib_active.operation)) leaf_name_data.push_back(mrib_active.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix")
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix;
        }
        else
        {
            prefix = std::make_shared<Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix>();
            prefix->parent = this;
            children["prefix"] = prefix;
        }
        return children.at("prefix");
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
        else
        {
            rp_address = std::make_shared<Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress>();
            rp_address->parent = this;
            children["rp-address"] = rp_address;
        }
        return children.at("rp-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_children()
{
    if(children.find("prefix") == children.end())
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix;
        }
    }

    if(children.find("rp-address") == children.end())
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client")
    {
        client = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "is-override")
    {
        is_override = value;
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
    if(value_path == "mrib-active")
    {
        mrib_active = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "prefix"; yang_parent_name = "group-map-information";
}

Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::~Prefix()
{
}

bool Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/group-map-rpfs/group-map-rpf/group-map-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "group-map-information";
}

Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::~RpAddress()
{
}

bool Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/group-map-rpfs/group-map-rpf/group-map-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Summary::Summary()
    :
    bsr_candidate_rp_set_count{YType::uint32, "bsr-candidate-rp-set-count"},
    bsr_candidate_rp_set_limit{YType::uint32, "bsr-candidate-rp-set-limit"},
    bsr_candidate_rp_set_threshold{YType::uint32, "bsr-candidate-rp-set-threshold"},
    bsr_range_threshold{YType::uint32, "bsr-range-threshold"},
    bsr_ranges_count{YType::uint32, "bsr-ranges-count"},
    bsr_ranges_limit{YType::uint32, "bsr-ranges-limit"},
    global_auto_rp_ranges_limit{YType::uint32, "global-auto-rp-ranges-limit"},
    global_bsr_candidate_rp_set_count{YType::uint32, "global-bsr-candidate-rp-set-count"},
    global_bsr_candidate_rp_set_limit{YType::uint32, "global-bsr-candidate-rp-set-limit"},
    global_bsr_candidate_rp_set_threshold{YType::uint32, "global-bsr-candidate-rp-set-threshold"},
    global_bsr_ranges_count{YType::uint32, "global-bsr-ranges-count"},
    global_bsr_ranges_limit{YType::uint32, "global-bsr-ranges-limit"},
    global_bsr_ranges_threshold{YType::uint32, "global-bsr-ranges-threshold"},
    global_register_limit{YType::uint32, "global-register-limit"},
    is_bsr_ranges_threshold_reached{YType::boolean, "is-bsr-ranges-threshold-reached"},
    is_global_auto_rp_ranges_limit_reached{YType::boolean, "is-global-auto-rp-ranges-limit-reached"},
    is_global_bsr_ranges_limit_reached{YType::boolean, "is-global-bsr-ranges-limit-reached"},
    is_global_register_limit_reached{YType::boolean, "is-global-register-limit-reached"},
    is_global_route_limit_reached{YType::boolean, "is-global-route-limit-reached"},
    is_global_rxi_limit_reached{YType::boolean, "is-global-rxi-limit-reached"},
    is_maximum_enforcement_disabled{YType::boolean, "is-maximum-enforcement-disabled"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    is_ranges_limit_reached{YType::boolean, "is-ranges-limit-reached"},
    is_route_limit_reached{YType::boolean, "is-route-limit-reached"},
    ranges_count{YType::uint32, "ranges-count"},
    ranges_limit{YType::uint32, "ranges-limit"},
    ranges_threshold{YType::uint32, "ranges-threshold"},
    register_count{YType::uint32, "register-count"},
    register_limit{YType::uint32, "register-limit"},
    register_limit_reached{YType::boolean, "register-limit-reached"},
    register_threshold{YType::uint32, "register-threshold"},
    route_count{YType::uint32, "route-count"},
    route_limit{YType::uint32, "route-limit"},
    route_low_water_mark{YType::uint32, "route-low-water-mark"},
    route_threshold{YType::uint32, "route-threshold"},
    rxi_limit_reached{YType::boolean, "rxi-limit-reached"},
    rxi_low_water_mark{YType::uint32, "rxi-low-water-mark"},
    topology_interface_state_count{YType::uint32, "topology-interface-state-count"},
    topology_interface_state_limit{YType::uint32, "topology-interface-state-limit"},
    topology_interface_state_threshold{YType::uint32, "topology-interface-state-threshold"}
{
    yang_name = "summary"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::Summary::~Summary()
{
}

bool Pim::Active::DefaultContext::Summary::has_data() const
{
    return bsr_candidate_rp_set_count.is_set
	|| bsr_candidate_rp_set_limit.is_set
	|| bsr_candidate_rp_set_threshold.is_set
	|| bsr_range_threshold.is_set
	|| bsr_ranges_count.is_set
	|| bsr_ranges_limit.is_set
	|| global_auto_rp_ranges_limit.is_set
	|| global_bsr_candidate_rp_set_count.is_set
	|| global_bsr_candidate_rp_set_limit.is_set
	|| global_bsr_candidate_rp_set_threshold.is_set
	|| global_bsr_ranges_count.is_set
	|| global_bsr_ranges_limit.is_set
	|| global_bsr_ranges_threshold.is_set
	|| global_register_limit.is_set
	|| is_bsr_ranges_threshold_reached.is_set
	|| is_global_auto_rp_ranges_limit_reached.is_set
	|| is_global_bsr_ranges_limit_reached.is_set
	|| is_global_register_limit_reached.is_set
	|| is_global_route_limit_reached.is_set
	|| is_global_rxi_limit_reached.is_set
	|| is_maximum_enforcement_disabled.is_set
	|| is_node_low_memory.is_set
	|| is_ranges_limit_reached.is_set
	|| is_route_limit_reached.is_set
	|| ranges_count.is_set
	|| ranges_limit.is_set
	|| ranges_threshold.is_set
	|| register_count.is_set
	|| register_limit.is_set
	|| register_limit_reached.is_set
	|| register_threshold.is_set
	|| route_count.is_set
	|| route_limit.is_set
	|| route_low_water_mark.is_set
	|| route_threshold.is_set
	|| rxi_limit_reached.is_set
	|| rxi_low_water_mark.is_set
	|| topology_interface_state_count.is_set
	|| topology_interface_state_limit.is_set
	|| topology_interface_state_threshold.is_set;
}

bool Pim::Active::DefaultContext::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(bsr_candidate_rp_set_count.operation)
	|| is_set(bsr_candidate_rp_set_limit.operation)
	|| is_set(bsr_candidate_rp_set_threshold.operation)
	|| is_set(bsr_range_threshold.operation)
	|| is_set(bsr_ranges_count.operation)
	|| is_set(bsr_ranges_limit.operation)
	|| is_set(global_auto_rp_ranges_limit.operation)
	|| is_set(global_bsr_candidate_rp_set_count.operation)
	|| is_set(global_bsr_candidate_rp_set_limit.operation)
	|| is_set(global_bsr_candidate_rp_set_threshold.operation)
	|| is_set(global_bsr_ranges_count.operation)
	|| is_set(global_bsr_ranges_limit.operation)
	|| is_set(global_bsr_ranges_threshold.operation)
	|| is_set(global_register_limit.operation)
	|| is_set(is_bsr_ranges_threshold_reached.operation)
	|| is_set(is_global_auto_rp_ranges_limit_reached.operation)
	|| is_set(is_global_bsr_ranges_limit_reached.operation)
	|| is_set(is_global_register_limit_reached.operation)
	|| is_set(is_global_route_limit_reached.operation)
	|| is_set(is_global_rxi_limit_reached.operation)
	|| is_set(is_maximum_enforcement_disabled.operation)
	|| is_set(is_node_low_memory.operation)
	|| is_set(is_ranges_limit_reached.operation)
	|| is_set(is_route_limit_reached.operation)
	|| is_set(ranges_count.operation)
	|| is_set(ranges_limit.operation)
	|| is_set(ranges_threshold.operation)
	|| is_set(register_count.operation)
	|| is_set(register_limit.operation)
	|| is_set(register_limit_reached.operation)
	|| is_set(register_threshold.operation)
	|| is_set(route_count.operation)
	|| is_set(route_limit.operation)
	|| is_set(route_low_water_mark.operation)
	|| is_set(route_threshold.operation)
	|| is_set(rxi_limit_reached.operation)
	|| is_set(rxi_low_water_mark.operation)
	|| is_set(topology_interface_state_count.operation)
	|| is_set(topology_interface_state_limit.operation)
	|| is_set(topology_interface_state_threshold.operation);
}

std::string Pim::Active::DefaultContext::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_candidate_rp_set_count.is_set || is_set(bsr_candidate_rp_set_count.operation)) leaf_name_data.push_back(bsr_candidate_rp_set_count.get_name_leafdata());
    if (bsr_candidate_rp_set_limit.is_set || is_set(bsr_candidate_rp_set_limit.operation)) leaf_name_data.push_back(bsr_candidate_rp_set_limit.get_name_leafdata());
    if (bsr_candidate_rp_set_threshold.is_set || is_set(bsr_candidate_rp_set_threshold.operation)) leaf_name_data.push_back(bsr_candidate_rp_set_threshold.get_name_leafdata());
    if (bsr_range_threshold.is_set || is_set(bsr_range_threshold.operation)) leaf_name_data.push_back(bsr_range_threshold.get_name_leafdata());
    if (bsr_ranges_count.is_set || is_set(bsr_ranges_count.operation)) leaf_name_data.push_back(bsr_ranges_count.get_name_leafdata());
    if (bsr_ranges_limit.is_set || is_set(bsr_ranges_limit.operation)) leaf_name_data.push_back(bsr_ranges_limit.get_name_leafdata());
    if (global_auto_rp_ranges_limit.is_set || is_set(global_auto_rp_ranges_limit.operation)) leaf_name_data.push_back(global_auto_rp_ranges_limit.get_name_leafdata());
    if (global_bsr_candidate_rp_set_count.is_set || is_set(global_bsr_candidate_rp_set_count.operation)) leaf_name_data.push_back(global_bsr_candidate_rp_set_count.get_name_leafdata());
    if (global_bsr_candidate_rp_set_limit.is_set || is_set(global_bsr_candidate_rp_set_limit.operation)) leaf_name_data.push_back(global_bsr_candidate_rp_set_limit.get_name_leafdata());
    if (global_bsr_candidate_rp_set_threshold.is_set || is_set(global_bsr_candidate_rp_set_threshold.operation)) leaf_name_data.push_back(global_bsr_candidate_rp_set_threshold.get_name_leafdata());
    if (global_bsr_ranges_count.is_set || is_set(global_bsr_ranges_count.operation)) leaf_name_data.push_back(global_bsr_ranges_count.get_name_leafdata());
    if (global_bsr_ranges_limit.is_set || is_set(global_bsr_ranges_limit.operation)) leaf_name_data.push_back(global_bsr_ranges_limit.get_name_leafdata());
    if (global_bsr_ranges_threshold.is_set || is_set(global_bsr_ranges_threshold.operation)) leaf_name_data.push_back(global_bsr_ranges_threshold.get_name_leafdata());
    if (global_register_limit.is_set || is_set(global_register_limit.operation)) leaf_name_data.push_back(global_register_limit.get_name_leafdata());
    if (is_bsr_ranges_threshold_reached.is_set || is_set(is_bsr_ranges_threshold_reached.operation)) leaf_name_data.push_back(is_bsr_ranges_threshold_reached.get_name_leafdata());
    if (is_global_auto_rp_ranges_limit_reached.is_set || is_set(is_global_auto_rp_ranges_limit_reached.operation)) leaf_name_data.push_back(is_global_auto_rp_ranges_limit_reached.get_name_leafdata());
    if (is_global_bsr_ranges_limit_reached.is_set || is_set(is_global_bsr_ranges_limit_reached.operation)) leaf_name_data.push_back(is_global_bsr_ranges_limit_reached.get_name_leafdata());
    if (is_global_register_limit_reached.is_set || is_set(is_global_register_limit_reached.operation)) leaf_name_data.push_back(is_global_register_limit_reached.get_name_leafdata());
    if (is_global_route_limit_reached.is_set || is_set(is_global_route_limit_reached.operation)) leaf_name_data.push_back(is_global_route_limit_reached.get_name_leafdata());
    if (is_global_rxi_limit_reached.is_set || is_set(is_global_rxi_limit_reached.operation)) leaf_name_data.push_back(is_global_rxi_limit_reached.get_name_leafdata());
    if (is_maximum_enforcement_disabled.is_set || is_set(is_maximum_enforcement_disabled.operation)) leaf_name_data.push_back(is_maximum_enforcement_disabled.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.operation)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());
    if (is_ranges_limit_reached.is_set || is_set(is_ranges_limit_reached.operation)) leaf_name_data.push_back(is_ranges_limit_reached.get_name_leafdata());
    if (is_route_limit_reached.is_set || is_set(is_route_limit_reached.operation)) leaf_name_data.push_back(is_route_limit_reached.get_name_leafdata());
    if (ranges_count.is_set || is_set(ranges_count.operation)) leaf_name_data.push_back(ranges_count.get_name_leafdata());
    if (ranges_limit.is_set || is_set(ranges_limit.operation)) leaf_name_data.push_back(ranges_limit.get_name_leafdata());
    if (ranges_threshold.is_set || is_set(ranges_threshold.operation)) leaf_name_data.push_back(ranges_threshold.get_name_leafdata());
    if (register_count.is_set || is_set(register_count.operation)) leaf_name_data.push_back(register_count.get_name_leafdata());
    if (register_limit.is_set || is_set(register_limit.operation)) leaf_name_data.push_back(register_limit.get_name_leafdata());
    if (register_limit_reached.is_set || is_set(register_limit_reached.operation)) leaf_name_data.push_back(register_limit_reached.get_name_leafdata());
    if (register_threshold.is_set || is_set(register_threshold.operation)) leaf_name_data.push_back(register_threshold.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.operation)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (route_limit.is_set || is_set(route_limit.operation)) leaf_name_data.push_back(route_limit.get_name_leafdata());
    if (route_low_water_mark.is_set || is_set(route_low_water_mark.operation)) leaf_name_data.push_back(route_low_water_mark.get_name_leafdata());
    if (route_threshold.is_set || is_set(route_threshold.operation)) leaf_name_data.push_back(route_threshold.get_name_leafdata());
    if (rxi_limit_reached.is_set || is_set(rxi_limit_reached.operation)) leaf_name_data.push_back(rxi_limit_reached.get_name_leafdata());
    if (rxi_low_water_mark.is_set || is_set(rxi_low_water_mark.operation)) leaf_name_data.push_back(rxi_low_water_mark.get_name_leafdata());
    if (topology_interface_state_count.is_set || is_set(topology_interface_state_count.operation)) leaf_name_data.push_back(topology_interface_state_count.get_name_leafdata());
    if (topology_interface_state_limit.is_set || is_set(topology_interface_state_limit.operation)) leaf_name_data.push_back(topology_interface_state_limit.get_name_leafdata());
    if (topology_interface_state_threshold.is_set || is_set(topology_interface_state_threshold.operation)) leaf_name_data.push_back(topology_interface_state_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Summary::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bsr-candidate-rp-set-count")
    {
        bsr_candidate_rp_set_count = value;
    }
    if(value_path == "bsr-candidate-rp-set-limit")
    {
        bsr_candidate_rp_set_limit = value;
    }
    if(value_path == "bsr-candidate-rp-set-threshold")
    {
        bsr_candidate_rp_set_threshold = value;
    }
    if(value_path == "bsr-range-threshold")
    {
        bsr_range_threshold = value;
    }
    if(value_path == "bsr-ranges-count")
    {
        bsr_ranges_count = value;
    }
    if(value_path == "bsr-ranges-limit")
    {
        bsr_ranges_limit = value;
    }
    if(value_path == "global-auto-rp-ranges-limit")
    {
        global_auto_rp_ranges_limit = value;
    }
    if(value_path == "global-bsr-candidate-rp-set-count")
    {
        global_bsr_candidate_rp_set_count = value;
    }
    if(value_path == "global-bsr-candidate-rp-set-limit")
    {
        global_bsr_candidate_rp_set_limit = value;
    }
    if(value_path == "global-bsr-candidate-rp-set-threshold")
    {
        global_bsr_candidate_rp_set_threshold = value;
    }
    if(value_path == "global-bsr-ranges-count")
    {
        global_bsr_ranges_count = value;
    }
    if(value_path == "global-bsr-ranges-limit")
    {
        global_bsr_ranges_limit = value;
    }
    if(value_path == "global-bsr-ranges-threshold")
    {
        global_bsr_ranges_threshold = value;
    }
    if(value_path == "global-register-limit")
    {
        global_register_limit = value;
    }
    if(value_path == "is-bsr-ranges-threshold-reached")
    {
        is_bsr_ranges_threshold_reached = value;
    }
    if(value_path == "is-global-auto-rp-ranges-limit-reached")
    {
        is_global_auto_rp_ranges_limit_reached = value;
    }
    if(value_path == "is-global-bsr-ranges-limit-reached")
    {
        is_global_bsr_ranges_limit_reached = value;
    }
    if(value_path == "is-global-register-limit-reached")
    {
        is_global_register_limit_reached = value;
    }
    if(value_path == "is-global-route-limit-reached")
    {
        is_global_route_limit_reached = value;
    }
    if(value_path == "is-global-rxi-limit-reached")
    {
        is_global_rxi_limit_reached = value;
    }
    if(value_path == "is-maximum-enforcement-disabled")
    {
        is_maximum_enforcement_disabled = value;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
    }
    if(value_path == "is-ranges-limit-reached")
    {
        is_ranges_limit_reached = value;
    }
    if(value_path == "is-route-limit-reached")
    {
        is_route_limit_reached = value;
    }
    if(value_path == "ranges-count")
    {
        ranges_count = value;
    }
    if(value_path == "ranges-limit")
    {
        ranges_limit = value;
    }
    if(value_path == "ranges-threshold")
    {
        ranges_threshold = value;
    }
    if(value_path == "register-count")
    {
        register_count = value;
    }
    if(value_path == "register-limit")
    {
        register_limit = value;
    }
    if(value_path == "register-limit-reached")
    {
        register_limit_reached = value;
    }
    if(value_path == "register-threshold")
    {
        register_threshold = value;
    }
    if(value_path == "route-count")
    {
        route_count = value;
    }
    if(value_path == "route-limit")
    {
        route_limit = value;
    }
    if(value_path == "route-low-water-mark")
    {
        route_low_water_mark = value;
    }
    if(value_path == "route-threshold")
    {
        route_threshold = value;
    }
    if(value_path == "rxi-limit-reached")
    {
        rxi_limit_reached = value;
    }
    if(value_path == "rxi-low-water-mark")
    {
        rxi_low_water_mark = value;
    }
    if(value_path == "topology-interface-state-count")
    {
        topology_interface_state_count = value;
    }
    if(value_path == "topology-interface-state-limit")
    {
        topology_interface_state_limit = value;
    }
    if(value_path == "topology-interface-state-threshold")
    {
        topology_interface_state_threshold = value;
    }
}

Pim::Active::DefaultContext::Gre::Gre()
    :
    gre_hashes(std::make_shared<Pim::Active::DefaultContext::Gre::GreHashes>())
	,gre_next_hops(std::make_shared<Pim::Active::DefaultContext::Gre::GreNextHops>())
{
    gre_hashes->parent = this;
    children["gre-hashes"] = gre_hashes;

    gre_next_hops->parent = this;
    children["gre-next-hops"] = gre_next_hops;

    yang_name = "gre"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::Gre::~Gre()
{
}

bool Pim::Active::DefaultContext::Gre::has_data() const
{
    return (gre_hashes !=  nullptr && gre_hashes->has_data())
	|| (gre_next_hops !=  nullptr && gre_next_hops->has_data());
}

bool Pim::Active::DefaultContext::Gre::has_operation() const
{
    return is_set(operation)
	|| (gre_hashes !=  nullptr && gre_hashes->has_operation())
	|| (gre_next_hops !=  nullptr && gre_next_hops->has_operation());
}

std::string Pim::Active::DefaultContext::Gre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Gre::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Gre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "gre-hashes")
    {
        if(gre_hashes != nullptr)
        {
            children["gre-hashes"] = gre_hashes;
        }
        else
        {
            gre_hashes = std::make_shared<Pim::Active::DefaultContext::Gre::GreHashes>();
            gre_hashes->parent = this;
            children["gre-hashes"] = gre_hashes;
        }
        return children.at("gre-hashes");
    }

    if(child_yang_name == "gre-next-hops")
    {
        if(gre_next_hops != nullptr)
        {
            children["gre-next-hops"] = gre_next_hops;
        }
        else
        {
            gre_next_hops = std::make_shared<Pim::Active::DefaultContext::Gre::GreNextHops>();
            gre_next_hops->parent = this;
            children["gre-next-hops"] = gre_next_hops;
        }
        return children.at("gre-next-hops");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Gre::get_children()
{
    if(children.find("gre-hashes") == children.end())
    {
        if(gre_hashes != nullptr)
        {
            children["gre-hashes"] = gre_hashes;
        }
    }

    if(children.find("gre-next-hops") == children.end())
    {
        if(gre_next_hops != nullptr)
        {
            children["gre-next-hops"] = gre_next_hops;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Gre::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::Gre::GreHashes::GreHashes()
{
    yang_name = "gre-hashes"; yang_parent_name = "gre";
}

Pim::Active::DefaultContext::Gre::GreHashes::~GreHashes()
{
}

bool Pim::Active::DefaultContext::Gre::GreHashes::has_data() const
{
    for (std::size_t index=0; index<gre_hash.size(); index++)
    {
        if(gre_hash[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::Gre::GreHashes::has_operation() const
{
    for (std::size_t index=0; index<gre_hash.size(); index++)
    {
        if(gre_hash[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::Gre::GreHashes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-hashes";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Gre::GreHashes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/gre/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Gre::GreHashes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "gre-hash")
    {
        for(auto const & c : gre_hash)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::Gre::GreHashes::GreHash>();
        c->parent = this;
        gre_hash.push_back(std::move(c));
        children[segment_path] = gre_hash.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Gre::GreHashes::get_children()
{
    for (auto const & c : gre_hash)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Gre::GreHashes::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::Gre::GreHashes::GreHash::GreHash()
    :
    destination_address{YType::str, "destination-address"},
    ifname{YType::str, "ifname"},
    source_address{YType::str, "source-address"},
    next_hop_interface{YType::str, "next-hop-interface"}
{
    yang_name = "gre-hash"; yang_parent_name = "gre-hashes";
}

Pim::Active::DefaultContext::Gre::GreHashes::GreHash::~GreHash()
{
}

bool Pim::Active::DefaultContext::Gre::GreHashes::GreHash::has_data() const
{
    return destination_address.is_set
	|| ifname.is_set
	|| source_address.is_set
	|| next_hop_interface.is_set;
}

bool Pim::Active::DefaultContext::Gre::GreHashes::GreHash::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(ifname.operation)
	|| is_set(source_address.operation)
	|| is_set(next_hop_interface.operation);
}

std::string Pim::Active::DefaultContext::Gre::GreHashes::GreHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-hash" <<"[destination-address='" <<destination_address <<"']" <<"[ifname='" <<ifname <<"']" <<"[source-address='" <<source_address <<"']";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Gre::GreHashes::GreHash::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/gre/gre-hashes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (ifname.is_set || is_set(ifname.operation)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.operation)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Gre::GreHashes::GreHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Gre::GreHashes::GreHash::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Gre::GreHashes::GreHash::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "ifname")
    {
        ifname = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
    }
}

Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHops()
{
    yang_name = "gre-next-hops"; yang_parent_name = "gre";
}

Pim::Active::DefaultContext::Gre::GreNextHops::~GreNextHops()
{
}

bool Pim::Active::DefaultContext::Gre::GreNextHops::has_data() const
{
    for (std::size_t index=0; index<gre_next_hop.size(); index++)
    {
        if(gre_next_hop[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::Gre::GreNextHops::has_operation() const
{
    for (std::size_t index=0; index<gre_next_hop.size(); index++)
    {
        if(gre_next_hop[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::Gre::GreNextHops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-next-hops";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Gre::GreNextHops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/gre/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Gre::GreNextHops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "gre-next-hop")
    {
        for(auto const & c : gre_next_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop>();
        c->parent = this;
        gre_next_hop.push_back(std::move(c));
        children[segment_path] = gre_next_hop.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Gre::GreNextHops::get_children()
{
    for (auto const & c : gre_next_hop)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Gre::GreNextHops::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GreNextHop()
    :
    destination_address{YType::str, "destination-address"},
    is_connected{YType::uint8, "is-connected"},
    metric{YType::uint32, "metric"},
    metric_preference{YType::uint32, "metric-preference"}
    	,
    registered_address(std::make_shared<Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress>())
{
    registered_address->parent = this;
    children["registered-address"] = registered_address;

    yang_name = "gre-next-hop"; yang_parent_name = "gre-next-hops";
}

Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::~GreNextHop()
{
}

bool Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::has_data() const
{
    for (std::size_t index=0; index<gre_path.size(); index++)
    {
        if(gre_path[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| is_connected.is_set
	|| metric.is_set
	|| metric_preference.is_set
	|| (registered_address !=  nullptr && registered_address->has_data());
}

bool Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::has_operation() const
{
    for (std::size_t index=0; index<gre_path.size(); index++)
    {
        if(gre_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(is_connected.operation)
	|| is_set(metric.operation)
	|| is_set(metric_preference.operation)
	|| (registered_address !=  nullptr && registered_address->has_operation());
}

std::string Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-next-hop" <<"[destination-address='" <<destination_address <<"']";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/gre/gre-next-hops/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (is_connected.is_set || is_set(is_connected.operation)) leaf_name_data.push_back(is_connected.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_preference.is_set || is_set(metric_preference.operation)) leaf_name_data.push_back(metric_preference.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "gre-path")
    {
        for(auto const & c : gre_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath>();
        c->parent = this;
        gre_path.push_back(std::move(c));
        children[segment_path] = gre_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "registered-address")
    {
        if(registered_address != nullptr)
        {
            children["registered-address"] = registered_address;
        }
        else
        {
            registered_address = std::make_shared<Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress>();
            registered_address->parent = this;
            children["registered-address"] = registered_address;
        }
        return children.at("registered-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::get_children()
{
    for (auto const & c : gre_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("registered-address") == children.end())
    {
        if(registered_address != nullptr)
        {
            children["registered-address"] = registered_address;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "is-connected")
    {
        is_connected = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-preference")
    {
        metric_preference = value;
    }
}

Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress::RegisteredAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "registered-address"; yang_parent_name = "gre-next-hop";
}

Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress::~RegisteredAddress()
{
}

bool Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered-address";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RegisteredAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GrePath()
    :
    extranet_vrf_name{YType::str, "extranet-vrf-name"},
    gre_interface_name{YType::str, "gre-interface-name"},
    is_connector_attribute_present{YType::boolean, "is-connector-attribute-present"},
    is_gre_interface_disabled{YType::boolean, "is-gre-interface-disabled"},
    is_via_lsm{YType::boolean, "is-via-lsm"}
    	,
    gre_neighbor(std::make_shared<Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor>())
	,gre_next_hop(std::make_shared<Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_>())
{
    gre_neighbor->parent = this;
    children["gre-neighbor"] = gre_neighbor;

    gre_next_hop->parent = this;
    children["gre-next-hop"] = gre_next_hop;

    yang_name = "gre-path"; yang_parent_name = "gre-next-hop";
}

Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::~GrePath()
{
}

bool Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::has_data() const
{
    return extranet_vrf_name.is_set
	|| gre_interface_name.is_set
	|| is_connector_attribute_present.is_set
	|| is_gre_interface_disabled.is_set
	|| is_via_lsm.is_set
	|| (gre_neighbor !=  nullptr && gre_neighbor->has_data())
	|| (gre_next_hop !=  nullptr && gre_next_hop->has_data());
}

bool Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::has_operation() const
{
    return is_set(operation)
	|| is_set(extranet_vrf_name.operation)
	|| is_set(gre_interface_name.operation)
	|| is_set(is_connector_attribute_present.operation)
	|| is_set(is_gre_interface_disabled.operation)
	|| is_set(is_via_lsm.operation)
	|| (gre_neighbor !=  nullptr && gre_neighbor->has_operation())
	|| (gre_next_hop !=  nullptr && gre_next_hop->has_operation());
}

std::string Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-path";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GrePath' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extranet_vrf_name.is_set || is_set(extranet_vrf_name.operation)) leaf_name_data.push_back(extranet_vrf_name.get_name_leafdata());
    if (gre_interface_name.is_set || is_set(gre_interface_name.operation)) leaf_name_data.push_back(gre_interface_name.get_name_leafdata());
    if (is_connector_attribute_present.is_set || is_set(is_connector_attribute_present.operation)) leaf_name_data.push_back(is_connector_attribute_present.get_name_leafdata());
    if (is_gre_interface_disabled.is_set || is_set(is_gre_interface_disabled.operation)) leaf_name_data.push_back(is_gre_interface_disabled.get_name_leafdata());
    if (is_via_lsm.is_set || is_set(is_via_lsm.operation)) leaf_name_data.push_back(is_via_lsm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "gre-neighbor")
    {
        if(gre_neighbor != nullptr)
        {
            children["gre-neighbor"] = gre_neighbor;
        }
        else
        {
            gre_neighbor = std::make_shared<Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor>();
            gre_neighbor->parent = this;
            children["gre-neighbor"] = gre_neighbor;
        }
        return children.at("gre-neighbor");
    }

    if(child_yang_name == "gre-next-hop")
    {
        if(gre_next_hop != nullptr)
        {
            children["gre-next-hop"] = gre_next_hop;
        }
        else
        {
            gre_next_hop = std::make_shared<Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_>();
            gre_next_hop->parent = this;
            children["gre-next-hop"] = gre_next_hop;
        }
        return children.at("gre-next-hop");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::get_children()
{
    if(children.find("gre-neighbor") == children.end())
    {
        if(gre_neighbor != nullptr)
        {
            children["gre-neighbor"] = gre_neighbor;
        }
    }

    if(children.find("gre-next-hop") == children.end())
    {
        if(gre_next_hop != nullptr)
        {
            children["gre-next-hop"] = gre_next_hop;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extranet-vrf-name")
    {
        extranet_vrf_name = value;
    }
    if(value_path == "gre-interface-name")
    {
        gre_interface_name = value;
    }
    if(value_path == "is-connector-attribute-present")
    {
        is_connector_attribute_present = value;
    }
    if(value_path == "is-gre-interface-disabled")
    {
        is_gre_interface_disabled = value;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm = value;
    }
}

Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::GreNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "gre-neighbor"; yang_parent_name = "gre-path";
}

Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::~GreNeighbor()
{
}

bool Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-neighbor";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GreNeighbor' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::GreNextHop_()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "gre-next-hop"; yang_parent_name = "gre-path";
}

Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::~GreNextHop_()
{
}

bool Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-next-hop";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GreNextHop_' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinners()
{
    yang_name = "bidir-df-winners"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::BidirDfWinners::~BidirDfWinners()
{
}

bool Pim::Active::DefaultContext::BidirDfWinners::has_data() const
{
    for (std::size_t index=0; index<bidir_df_winner.size(); index++)
    {
        if(bidir_df_winner[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::BidirDfWinners::has_operation() const
{
    for (std::size_t index=0; index<bidir_df_winner.size(); index++)
    {
        if(bidir_df_winner[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::BidirDfWinners::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-df-winners";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::BidirDfWinners::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::BidirDfWinners::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bidir-df-winner")
    {
        for(auto const & c : bidir_df_winner)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner>();
        c->parent = this;
        bidir_df_winner.push_back(std::move(c));
        children[segment_path] = bidir_df_winner.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::BidirDfWinners::get_children()
{
    for (auto const & c : bidir_df_winner)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::BidirDfWinners::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::BidirDfWinner()
    :
    are_we_df{YType::boolean, "are-we-df"},
    interface_name{YType::str, "interface-name"},
    metric{YType::uint32, "metric"},
    metric_preference{YType::uint32, "metric-preference"},
    pim_interface_name{YType::str, "pim-interface-name"},
    rp_address{YType::str, "rp-address"},
    rp_lan{YType::boolean, "rp-lan"},
    uptime{YType::uint64, "uptime"}
    	,
    df_winner(std::make_shared<Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner>())
	,rp_address_xr(std::make_shared<Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr>())
{
    df_winner->parent = this;
    children["df-winner"] = df_winner;

    rp_address_xr->parent = this;
    children["rp-address-xr"] = rp_address_xr;

    yang_name = "bidir-df-winner"; yang_parent_name = "bidir-df-winners";
}

Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::~BidirDfWinner()
{
}

bool Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::has_data() const
{
    return are_we_df.is_set
	|| interface_name.is_set
	|| metric.is_set
	|| metric_preference.is_set
	|| pim_interface_name.is_set
	|| rp_address.is_set
	|| rp_lan.is_set
	|| uptime.is_set
	|| (df_winner !=  nullptr && df_winner->has_data())
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_data());
}

bool Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::has_operation() const
{
    return is_set(operation)
	|| is_set(are_we_df.operation)
	|| is_set(interface_name.operation)
	|| is_set(metric.operation)
	|| is_set(metric_preference.operation)
	|| is_set(pim_interface_name.operation)
	|| is_set(rp_address.operation)
	|| is_set(rp_lan.operation)
	|| is_set(uptime.operation)
	|| (df_winner !=  nullptr && df_winner->has_operation())
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_operation());
}

std::string Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-df-winner";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/bidir-df-winners/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (are_we_df.is_set || is_set(are_we_df.operation)) leaf_name_data.push_back(are_we_df.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_preference.is_set || is_set(metric_preference.operation)) leaf_name_data.push_back(metric_preference.get_name_leafdata());
    if (pim_interface_name.is_set || is_set(pim_interface_name.operation)) leaf_name_data.push_back(pim_interface_name.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (rp_lan.is_set || is_set(rp_lan.operation)) leaf_name_data.push_back(rp_lan.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "df-winner")
    {
        if(df_winner != nullptr)
        {
            children["df-winner"] = df_winner;
        }
        else
        {
            df_winner = std::make_shared<Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner>();
            df_winner->parent = this;
            children["df-winner"] = df_winner;
        }
        return children.at("df-winner");
    }

    if(child_yang_name == "rp-address-xr")
    {
        if(rp_address_xr != nullptr)
        {
            children["rp-address-xr"] = rp_address_xr;
        }
        else
        {
            rp_address_xr = std::make_shared<Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr>();
            rp_address_xr->parent = this;
            children["rp-address-xr"] = rp_address_xr;
        }
        return children.at("rp-address-xr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::get_children()
{
    if(children.find("df-winner") == children.end())
    {
        if(df_winner != nullptr)
        {
            children["df-winner"] = df_winner;
        }
    }

    if(children.find("rp-address-xr") == children.end())
    {
        if(rp_address_xr != nullptr)
        {
            children["rp-address-xr"] = rp_address_xr;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "are-we-df")
    {
        are_we_df = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-preference")
    {
        metric_preference = value;
    }
    if(value_path == "pim-interface-name")
    {
        pim_interface_name = value;
    }
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
    if(value_path == "rp-lan")
    {
        rp_lan = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr::RpAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address-xr"; yang_parent_name = "bidir-df-winner";
}

Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr::~RpAddressXr()
{
}

bool Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address-xr";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/bidir-df-winners/bidir-df-winner/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner::DfWinner()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "df-winner"; yang_parent_name = "bidir-df-winner";
}

Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner::~DfWinner()
{
}

bool Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "df-winner";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/bidir-df-winners/bidir-df-winner/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::TableContexts::TableContexts()
{
    yang_name = "table-contexts"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::TableContexts::~TableContexts()
{
}

bool Pim::Active::DefaultContext::TableContexts::has_data() const
{
    for (std::size_t index=0; index<table_context.size(); index++)
    {
        if(table_context[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::TableContexts::has_operation() const
{
    for (std::size_t index=0; index<table_context.size(); index++)
    {
        if(table_context[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::TableContexts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-contexts";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::TableContexts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::TableContexts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "table-context")
    {
        for(auto const & c : table_context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::TableContexts::TableContext>();
        c->parent = this;
        table_context.push_back(std::move(c));
        children[segment_path] = table_context.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::TableContexts::get_children()
{
    for (auto const & c : table_context)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::TableContexts::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::TableContexts::TableContext::TableContext()
    :
    afi{YType::uint32, "afi"},
    is_active{YType::boolean, "is-active"},
    is_ital_registration_done{YType::boolean, "is-ital-registration-done"},
    is_rib_convergence{YType::boolean, "is-rib-convergence"},
    is_rib_convergence_received{YType::boolean, "is-rib-convergence-received"},
    is_rib_registration_done{YType::boolean, "is-rib-registration-done"},
    rpf_registrations{YType::uint32, "rpf-registrations"},
    saf_name{YType::enumeration, "saf-name"},
    safi{YType::uint32, "safi"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    topology_name{YType::str, "topology-name"},
    vrf_id{YType::uint32, "vrf-id"}
{
    yang_name = "table-context"; yang_parent_name = "table-contexts";
}

Pim::Active::DefaultContext::TableContexts::TableContext::~TableContext()
{
}

bool Pim::Active::DefaultContext::TableContexts::TableContext::has_data() const
{
    return afi.is_set
	|| is_active.is_set
	|| is_ital_registration_done.is_set
	|| is_rib_convergence.is_set
	|| is_rib_convergence_received.is_set
	|| is_rib_registration_done.is_set
	|| rpf_registrations.is_set
	|| saf_name.is_set
	|| safi.is_set
	|| table_id.is_set
	|| table_name.is_set
	|| topology_name.is_set
	|| vrf_id.is_set;
}

bool Pim::Active::DefaultContext::TableContexts::TableContext::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(is_active.operation)
	|| is_set(is_ital_registration_done.operation)
	|| is_set(is_rib_convergence.operation)
	|| is_set(is_rib_convergence_received.operation)
	|| is_set(is_rib_registration_done.operation)
	|| is_set(rpf_registrations.operation)
	|| is_set(saf_name.operation)
	|| is_set(safi.operation)
	|| is_set(table_id.operation)
	|| is_set(table_name.operation)
	|| is_set(topology_name.operation)
	|| is_set(vrf_id.operation);
}

std::string Pim::Active::DefaultContext::TableContexts::TableContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-context";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::TableContexts::TableContext::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/table-contexts/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.operation)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (is_ital_registration_done.is_set || is_set(is_ital_registration_done.operation)) leaf_name_data.push_back(is_ital_registration_done.get_name_leafdata());
    if (is_rib_convergence.is_set || is_set(is_rib_convergence.operation)) leaf_name_data.push_back(is_rib_convergence.get_name_leafdata());
    if (is_rib_convergence_received.is_set || is_set(is_rib_convergence_received.operation)) leaf_name_data.push_back(is_rib_convergence_received.get_name_leafdata());
    if (is_rib_registration_done.is_set || is_set(is_rib_registration_done.operation)) leaf_name_data.push_back(is_rib_registration_done.get_name_leafdata());
    if (rpf_registrations.is_set || is_set(rpf_registrations.operation)) leaf_name_data.push_back(rpf_registrations.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (safi.is_set || is_set(safi.operation)) leaf_name_data.push_back(safi.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.operation)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.operation)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::TableContexts::TableContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::TableContexts::TableContext::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::TableContexts::TableContext::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "is-active")
    {
        is_active = value;
    }
    if(value_path == "is-ital-registration-done")
    {
        is_ital_registration_done = value;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence = value;
    }
    if(value_path == "is-rib-convergence-received")
    {
        is_rib_convergence_received = value;
    }
    if(value_path == "is-rib-registration-done")
    {
        is_rib_registration_done = value;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "safi")
    {
        safi = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "table-name")
    {
        table_name = value;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
}

Pim::Active::DefaultContext::NeighborSummaries::NeighborSummaries()
{
    yang_name = "neighbor-summaries"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::NeighborSummaries::~NeighborSummaries()
{
}

bool Pim::Active::DefaultContext::NeighborSummaries::has_data() const
{
    for (std::size_t index=0; index<neighbor_summary.size(); index++)
    {
        if(neighbor_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::NeighborSummaries::has_operation() const
{
    for (std::size_t index=0; index<neighbor_summary.size(); index++)
    {
        if(neighbor_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::NeighborSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summaries";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::NeighborSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::NeighborSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-summary")
    {
        for(auto const & c : neighbor_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::NeighborSummaries::NeighborSummary>();
        c->parent = this;
        neighbor_summary.push_back(std::move(c));
        children[segment_path] = neighbor_summary.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::NeighborSummaries::get_children()
{
    for (auto const & c : neighbor_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::NeighborSummaries::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::NeighborSummaries::NeighborSummary::NeighborSummary()
    :
    interface_name{YType::str, "interface-name"},
    number_of_external_neighbors{YType::int32, "number-of-external-neighbors"},
    number_of_neighbors{YType::int32, "number-of-neighbors"}
{
    yang_name = "neighbor-summary"; yang_parent_name = "neighbor-summaries";
}

Pim::Active::DefaultContext::NeighborSummaries::NeighborSummary::~NeighborSummary()
{
}

bool Pim::Active::DefaultContext::NeighborSummaries::NeighborSummary::has_data() const
{
    return interface_name.is_set
	|| number_of_external_neighbors.is_set
	|| number_of_neighbors.is_set;
}

bool Pim::Active::DefaultContext::NeighborSummaries::NeighborSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(number_of_external_neighbors.operation)
	|| is_set(number_of_neighbors.operation);
}

std::string Pim::Active::DefaultContext::NeighborSummaries::NeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summary" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::NeighborSummaries::NeighborSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/neighbor-summaries/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (number_of_external_neighbors.is_set || is_set(number_of_external_neighbors.operation)) leaf_name_data.push_back(number_of_external_neighbors.get_name_leafdata());
    if (number_of_neighbors.is_set || is_set(number_of_neighbors.operation)) leaf_name_data.push_back(number_of_neighbors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::NeighborSummaries::NeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::NeighborSummaries::NeighborSummary::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::NeighborSummaries::NeighborSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "number-of-external-neighbors")
    {
        number_of_external_neighbors = value;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors = value;
    }
}

Pim::Active::DefaultContext::Context::Context()
    :
    active_table_count{YType::uint32, "active-table-count"},
    allow_rp_configured{YType::boolean, "allow-rp-configured"},
    allow_rp_group_list{YType::str, "allow-rp-group-list"},
    allow_rp_rp_list{YType::str, "allow-rp-rp-list"},
    anycast_rp_configured{YType::boolean, "anycast-rp-configured"},
    anycast_rp_policy_name{YType::str, "anycast-rp-policy-name"},
    bgp_auto_discovery_configured{YType::boolean, "bgp-auto-discovery-configured"},
    bgp_auto_discovery_type{YType::uint32, "bgp-auto-discovery-type"},
    bgp_i_pmsi_added{YType::boolean, "bgp-i-pmsi-added"},
    bgp_remote_address{YType::str, "bgp-remote-address"},
    bgp_remote_interface{YType::str, "bgp-remote-interface"},
    bgp_remote_interface_name{YType::str, "bgp-remote-interface-name"},
    bgp_remote_on{YType::boolean, "bgp-remote-on"},
    bgp_remote_state{YType::uint32, "bgp-remote-state"},
    bgp_source_active_announce{YType::boolean, "bgp-source-active-announce"},
    gin_b_and_mdt_data_announce_interval{YType::uint32, "gin-b-and-mdt-data-announce-interval"},
    gin_b_and_mdt_data_switchover_interval{YType::uint32, "gin-b-and-mdt-data-switchover-interval"},
    gin_b_and_mdt_interface{YType::str, "gin-b-and-mdt-interface"},
    gin_b_and_mdt_mtu{YType::uint32, "gin-b-and-mdt-mtu"},
    gin_b_and_mdt_name{YType::str, "gin-b-and-mdt-name"},
    gin_b_and_mdt_rpf_identifier{YType::uint32, "gin-b-and-mdt-rpf-identifier"},
    gin_band_maximum_mdt_aggregation{YType::uint32, "gin-band-maximum-mdt-aggregation"},
    in_b_and_mdt_data_announce_interval{YType::uint32, "in-b-and-mdt-data-announce-interval"},
    in_b_and_mdt_data_switchover_interval{YType::uint32, "in-b-and-mdt-data-switchover-interval"},
    in_b_and_mdt_interface{YType::str, "in-b-and-mdt-interface"},
    in_b_and_mdt_mtu{YType::uint32, "in-b-and-mdt-mtu"},
    in_b_and_mdt_name{YType::str, "in-b-and-mdt-name"},
    in_b_and_mdt_rpf_identifier{YType::uint32, "in-b-and-mdt-rpf-identifier"},
    in_band_maximum_mdt_aggregation{YType::uint32, "in-band-maximum-mdt-aggregation"},
    in_band_signaling_local_enabled{YType::boolean, "in-band-signaling-local-enabled"},
    in_band_signaling_remote_enabled{YType::boolean, "in-band-signaling-remote-enabled"},
    inter_autonomous_system_enabled{YType::boolean, "inter-autonomous-system-enabled"},
    ir_maximum_mdt_aggregation{YType::uint32, "ir-maximum-mdt-aggregation"},
    ir_mdt_data_announce_interval{YType::uint32, "ir-mdt-data-announce-interval"},
    ir_mdt_data_switchover_interval{YType::uint32, "ir-mdt-data-switchover-interval"},
    ir_mdt_interface{YType::str, "ir-mdt-interface"},
    ir_mdt_mtu{YType::uint32, "ir-mdt-mtu"},
    ir_mdt_name{YType::str, "ir-mdt-name"},
    ir_mdt_rpf_identifier{YType::uint32, "ir-mdt-rpf-identifier"},
    ir_mdt_tail_label{YType::uint32, "ir-mdt-tail-label"},
    is_active{YType::boolean, "is-active"},
    is_active_ital{YType::boolean, "is-active-ital"},
    is_all_interface_disable_operation{YType::boolean, "is-all-interface-disable-operation"},
    is_auto_rp_listen_enabled{YType::boolean, "is-auto-rp-listen-enabled"},
    is_auto_rp_listen_sock_add{YType::boolean, "is-auto-rp-listen-sock-add"},
    is_create_gin_b_and_mdt_interface{YType::boolean, "is-create-gin-b-and-mdt-interface"},
    is_create_in_b_and_mdt_interface{YType::boolean, "is-create-in-b-and-mdt-interface"},
    is_create_ir_mdt_interface{YType::boolean, "is-create-ir-mdt-interface"},
    is_create_mdt_interface{YType::boolean, "is-create-mdt-interface"},
    is_create_mldp_mdt_interface{YType::boolean, "is-create-mldp-mdt-interface"},
    is_create_rsvp_te_mdt_interface{YType::boolean, "is-create-rsvp-te-mdt-interface"},
    is_default_granges{YType::boolean, "is-default-granges"},
    is_gin_b_and_mdt_owner{YType::boolean, "is-gin-b-and-mdt-owner"},
    is_in_b_and_mdt_owner{YType::boolean, "is-in-b-and-mdt-owner"},
    is_ir_mdt_owner{YType::boolean, "is-ir-mdt-owner"},
    is_lpts_socket_add_required{YType::boolean, "is-lpts-socket-add-required"},
    is_lpts_socket_added{YType::boolean, "is-lpts-socket-added"},
    is_m_host_publish_pending{YType::boolean, "is-m-host-publish-pending"},
    is_mdt_owner{YType::boolean, "is-mdt-owner"},
    is_mldp_mdt_owner{YType::boolean, "is-mldp-mdt-owner"},
    is_mrib_register{YType::boolean, "is-mrib-register"},
    is_multicast_rib_registration{YType::boolean, "is-multicast-rib-registration"},
    is_pim_nsf_rib_converge_received{YType::boolean, "is-pim-nsf-rib-converge-received"},
    is_pim_nsf_rib_converged{YType::boolean, "is-pim-nsf-rib-converged"},
    is_redistribution_reset{YType::boolean, "is-redistribution-reset"},
    is_register_injection_lpts_socket_add_required{YType::boolean, "is-register-injection-lpts-socket-add-required"},
    is_register_injection_lpts_socket_added{YType::boolean, "is-register-injection-lpts-socket-added"},
    is_register_injection_socket_add_required{YType::boolean, "is-register-injection-socket-add-required"},
    is_register_injection_socket_added{YType::boolean, "is-register-injection-socket-added"},
    is_rib_multipath_enabled{YType::boolean, "is-rib-multipath-enabled"},
    is_rib_multipath_interface_hash{YType::boolean, "is-rib-multipath-interface-hash"},
    is_rib_multipath_source_hash{YType::boolean, "is-rib-multipath-source-hash"},
    is_rib_multipath_source_next_hop_hash{YType::boolean, "is-rib-multipath-source-next-hop-hash"},
    is_routing_enabled{YType::boolean, "is-routing-enabled"},
    is_rsvp_te_mdt_owner{YType::boolean, "is-rsvp-te-mdt-owner"},
    is_socket_add_required{YType::boolean, "is-socket-add-required"},
    is_socket_added{YType::boolean, "is-socket-added"},
    is_udp_socket_add_required{YType::boolean, "is-udp-socket-add-required"},
    is_udp_socket_added{YType::boolean, "is-udp-socket-added"},
    is_udp_socket_bind{YType::boolean, "is-udp-socket-bind"},
    is_udp_socket_bind_required{YType::boolean, "is-udp-socket-bind-required"},
    is_unicast_rib_registration{YType::boolean, "is-unicast-rib-registration"},
    maximum_mdt_aggregation{YType::uint32, "maximum-mdt-aggregation"},
    mdt_data_announce_interval{YType::uint32, "mdt-data-announce-interval"},
    mdt_data_switchover_interval{YType::uint32, "mdt-data-switchover-interval"},
    mdt_default_group{YType::str, "mdt-default-group"},
    mdt_gre_remote_rpf_identifier{YType::uint32, "mdt-gre-remote-rpf-identifier"},
    mdt_gre_rpf_identifier{YType::uint32, "mdt-gre-rpf-identifier"},
    mdt_interface{YType::str, "mdt-interface"},
    mdt_mtu{YType::uint32, "mdt-mtu"},
    mdt_neighbor_filter_name{YType::str, "mdt-neighbor-filter-name"},
    mdt_partitioned_ir_control_identifier{YType::uint32, "mdt-partitioned-ir-control-identifier"},
    mdt_partitioned_mdt_control_identifier{YType::uint32, "mdt-partitioned-mdt-control-identifier"},
    mhost_default_interface_config{YType::str, "mhost-default-interface-config"},
    mhost_interface{YType::str, "mhost-interface"},
    mldp_auto_rp_announce_tree_added{YType::boolean, "mldp-auto-rp-announce-tree-added"},
    mldp_auto_rp_discovery_tree_added{YType::boolean, "mldp-auto-rp-discovery-tree-added"},
    mldp_bsr_control_tree_added{YType::boolean, "mldp-bsr-control-tree-added"},
    mldp_control_head_lsm_identifier{YType::uint32, "mldp-control-head-lsm-identifier"},
    mldp_head_local_label{YType::uint32, "mldp-head-local-label"},
    mldp_head_lsm_identifier{YType::uint32, "mldp-head-lsm-identifier"},
    mldp_maximum_mdt_aggregation{YType::uint32, "mldp-maximum-mdt-aggregation"},
    mldp_mdt_data_announce_interval{YType::uint32, "mldp-mdt-data-announce-interval"},
    mldp_mdt_data_switchover_interval{YType::uint32, "mldp-mdt-data-switchover-interval"},
    mldp_mdt_interface{YType::str, "mldp-mdt-interface"},
    mldp_mdt_mtu{YType::uint32, "mldp-mdt-mtu"},
    mldp_mdt_name{YType::str, "mldp-mdt-name"},
    mldp_mdt_remote_rpf_identifier{YType::uint32, "mldp-mdt-remote-rpf-identifier"},
    mldp_mdt_rpf_identifier{YType::uint32, "mldp-mdt-rpf-identifier"},
    mldp_partioned_mp2m_ptree{YType::boolean, "mldp-partioned-mp2m-ptree"},
    mldp_partitioned_head_lsm_identifier{YType::uint32, "mldp-partitioned-head-lsm-identifier"},
    mldp_partitioned_mdt_configured{YType::boolean, "mldp-partitioned-mdt-configured"},
    mldp_partitioned_mdt_identifier{YType::uint32, "mldp-partitioned-mdt-identifier"},
    mldp_remote_head_lsm_identifier{YType::uint32, "mldp-remote-head-lsm-identifier"},
    mldp_remote_partitioned_mdt_configured{YType::boolean, "mldp-remote-partitioned-mdt-configured"},
    mldp_root_address{YType::uint32, "mldp-root-address"},
    mldp_root_count{YType::uint32, "mldp-root-count"},
    murib_id{YType::uint32, "murib-id"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    non_default_vrf_count_on_socket{YType::uint32, "non-default-vrf-count-on-socket"},
    organization_unique_identifier{YType::uint32, "organization-unique-identifier"},
    p2mpte_li_drop{YType::uint32, "p2mpte-li-drop"},
    redistribution_reset_count{YType::uint32, "redistribution-reset-count"},
    remote_table_id{YType::uint32, "remote-table-id"},
    route_distinguisher{YType::str, "route-distinguisher"},
    rpf_id{YType::uint32, "rpf-id"},
    rpf_policy_name{YType::str, "rpf-policy-name"},
    rsvp_te_maximum_mdt_aggregation{YType::uint32, "rsvp-te-maximum-mdt-aggregation"},
    rsvp_te_mdt_data_announce_interval{YType::uint32, "rsvp-te-mdt-data-announce-interval"},
    rsvp_te_mdt_data_switchover_interval{YType::uint32, "rsvp-te-mdt-data-switchover-interval"},
    rsvp_te_mdt_interface{YType::str, "rsvp-te-mdt-interface"},
    rsvp_te_mdt_mtu{YType::uint32, "rsvp-te-mdt-mtu"},
    rsvp_te_mdt_name{YType::str, "rsvp-te-mdt-name"},
    rsvp_te_mdt_rpf_identifier{YType::uint32, "rsvp-te-mdt-rpf-identifier"},
    rsvp_te_mdt_static_p2mp_count{YType::uint32, "rsvp-te-mdt-static-p2mp-count"},
    rump_enabled{YType::boolean, "rump-enabled"},
    sg_expiry_time{YType::uint16, "sg-expiry-time"},
    sg_expiry_timer_configured{YType::boolean, "sg-expiry-timer-configured"},
    sg_expiry_timer_sg_list{YType::str, "sg-expiry-timer-sg-list"},
    stale_rd_present{YType::boolean, "stale-rd-present"},
    suppress_pim_data_mdt_tlv{YType::boolean, "suppress-pim-data-mdt-tlv"},
    suppress_shared_tree_join{YType::boolean, "suppress-shared-tree-join"},
    table_count{YType::uint32, "table-count"},
    table_id{YType::uint32, "table-id"},
    umh{YType::boolean, "umh"},
    valid_rd_present{YType::boolean, "valid-rd-present"},
    vpn_index{YType::uint32, "vpn-index"},
    vrf_id{YType::uint32, "vrf-id"}
    	,
    remote_default_group(std::make_shared<Pim::Active::DefaultContext::Context::RemoteDefaultGroup>())
	,rpf_default_table(std::make_shared<Pim::Active::DefaultContext::Context::RpfDefaultTable>())
{
    remote_default_group->parent = this;
    children["remote-default-group"] = remote_default_group;

    rpf_default_table->parent = this;
    children["rpf-default-table"] = rpf_default_table;

    yang_name = "context"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::Context::~Context()
{
}

bool Pim::Active::DefaultContext::Context::has_data() const
{
    for (std::size_t index=0; index<anycast_rp_range.size(); index++)
    {
        if(anycast_rp_range[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<export_route_target.size(); index++)
    {
        if(export_route_target[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<import_route_target.size(); index++)
    {
        if(import_route_target[index]->has_data())
            return true;
    }
    for (auto const & leaf : mldp_root_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return active_table_count.is_set
	|| allow_rp_configured.is_set
	|| allow_rp_group_list.is_set
	|| allow_rp_rp_list.is_set
	|| anycast_rp_configured.is_set
	|| anycast_rp_policy_name.is_set
	|| bgp_auto_discovery_configured.is_set
	|| bgp_auto_discovery_type.is_set
	|| bgp_i_pmsi_added.is_set
	|| bgp_remote_address.is_set
	|| bgp_remote_interface.is_set
	|| bgp_remote_interface_name.is_set
	|| bgp_remote_on.is_set
	|| bgp_remote_state.is_set
	|| bgp_source_active_announce.is_set
	|| gin_b_and_mdt_data_announce_interval.is_set
	|| gin_b_and_mdt_data_switchover_interval.is_set
	|| gin_b_and_mdt_interface.is_set
	|| gin_b_and_mdt_mtu.is_set
	|| gin_b_and_mdt_name.is_set
	|| gin_b_and_mdt_rpf_identifier.is_set
	|| gin_band_maximum_mdt_aggregation.is_set
	|| in_b_and_mdt_data_announce_interval.is_set
	|| in_b_and_mdt_data_switchover_interval.is_set
	|| in_b_and_mdt_interface.is_set
	|| in_b_and_mdt_mtu.is_set
	|| in_b_and_mdt_name.is_set
	|| in_b_and_mdt_rpf_identifier.is_set
	|| in_band_maximum_mdt_aggregation.is_set
	|| in_band_signaling_local_enabled.is_set
	|| in_band_signaling_remote_enabled.is_set
	|| inter_autonomous_system_enabled.is_set
	|| ir_maximum_mdt_aggregation.is_set
	|| ir_mdt_data_announce_interval.is_set
	|| ir_mdt_data_switchover_interval.is_set
	|| ir_mdt_interface.is_set
	|| ir_mdt_mtu.is_set
	|| ir_mdt_name.is_set
	|| ir_mdt_rpf_identifier.is_set
	|| ir_mdt_tail_label.is_set
	|| is_active.is_set
	|| is_active_ital.is_set
	|| is_all_interface_disable_operation.is_set
	|| is_auto_rp_listen_enabled.is_set
	|| is_auto_rp_listen_sock_add.is_set
	|| is_create_gin_b_and_mdt_interface.is_set
	|| is_create_in_b_and_mdt_interface.is_set
	|| is_create_ir_mdt_interface.is_set
	|| is_create_mdt_interface.is_set
	|| is_create_mldp_mdt_interface.is_set
	|| is_create_rsvp_te_mdt_interface.is_set
	|| is_default_granges.is_set
	|| is_gin_b_and_mdt_owner.is_set
	|| is_in_b_and_mdt_owner.is_set
	|| is_ir_mdt_owner.is_set
	|| is_lpts_socket_add_required.is_set
	|| is_lpts_socket_added.is_set
	|| is_m_host_publish_pending.is_set
	|| is_mdt_owner.is_set
	|| is_mldp_mdt_owner.is_set
	|| is_mrib_register.is_set
	|| is_multicast_rib_registration.is_set
	|| is_pim_nsf_rib_converge_received.is_set
	|| is_pim_nsf_rib_converged.is_set
	|| is_redistribution_reset.is_set
	|| is_register_injection_lpts_socket_add_required.is_set
	|| is_register_injection_lpts_socket_added.is_set
	|| is_register_injection_socket_add_required.is_set
	|| is_register_injection_socket_added.is_set
	|| is_rib_multipath_enabled.is_set
	|| is_rib_multipath_interface_hash.is_set
	|| is_rib_multipath_source_hash.is_set
	|| is_rib_multipath_source_next_hop_hash.is_set
	|| is_routing_enabled.is_set
	|| is_rsvp_te_mdt_owner.is_set
	|| is_socket_add_required.is_set
	|| is_socket_added.is_set
	|| is_udp_socket_add_required.is_set
	|| is_udp_socket_added.is_set
	|| is_udp_socket_bind.is_set
	|| is_udp_socket_bind_required.is_set
	|| is_unicast_rib_registration.is_set
	|| maximum_mdt_aggregation.is_set
	|| mdt_data_announce_interval.is_set
	|| mdt_data_switchover_interval.is_set
	|| mdt_default_group.is_set
	|| mdt_gre_remote_rpf_identifier.is_set
	|| mdt_gre_rpf_identifier.is_set
	|| mdt_interface.is_set
	|| mdt_mtu.is_set
	|| mdt_neighbor_filter_name.is_set
	|| mdt_partitioned_ir_control_identifier.is_set
	|| mdt_partitioned_mdt_control_identifier.is_set
	|| mhost_default_interface_config.is_set
	|| mhost_interface.is_set
	|| mldp_auto_rp_announce_tree_added.is_set
	|| mldp_auto_rp_discovery_tree_added.is_set
	|| mldp_bsr_control_tree_added.is_set
	|| mldp_control_head_lsm_identifier.is_set
	|| mldp_head_local_label.is_set
	|| mldp_head_lsm_identifier.is_set
	|| mldp_maximum_mdt_aggregation.is_set
	|| mldp_mdt_data_announce_interval.is_set
	|| mldp_mdt_data_switchover_interval.is_set
	|| mldp_mdt_interface.is_set
	|| mldp_mdt_mtu.is_set
	|| mldp_mdt_name.is_set
	|| mldp_mdt_remote_rpf_identifier.is_set
	|| mldp_mdt_rpf_identifier.is_set
	|| mldp_partioned_mp2m_ptree.is_set
	|| mldp_partitioned_head_lsm_identifier.is_set
	|| mldp_partitioned_mdt_configured.is_set
	|| mldp_partitioned_mdt_identifier.is_set
	|| mldp_remote_head_lsm_identifier.is_set
	|| mldp_remote_partitioned_mdt_configured.is_set
	|| mldp_root_count.is_set
	|| murib_id.is_set
	|| neighbor_filter_name.is_set
	|| non_default_vrf_count_on_socket.is_set
	|| organization_unique_identifier.is_set
	|| p2mpte_li_drop.is_set
	|| redistribution_reset_count.is_set
	|| remote_table_id.is_set
	|| route_distinguisher.is_set
	|| rpf_id.is_set
	|| rpf_policy_name.is_set
	|| rsvp_te_maximum_mdt_aggregation.is_set
	|| rsvp_te_mdt_data_announce_interval.is_set
	|| rsvp_te_mdt_data_switchover_interval.is_set
	|| rsvp_te_mdt_interface.is_set
	|| rsvp_te_mdt_mtu.is_set
	|| rsvp_te_mdt_name.is_set
	|| rsvp_te_mdt_rpf_identifier.is_set
	|| rsvp_te_mdt_static_p2mp_count.is_set
	|| rump_enabled.is_set
	|| sg_expiry_time.is_set
	|| sg_expiry_timer_configured.is_set
	|| sg_expiry_timer_sg_list.is_set
	|| stale_rd_present.is_set
	|| suppress_pim_data_mdt_tlv.is_set
	|| suppress_shared_tree_join.is_set
	|| table_count.is_set
	|| table_id.is_set
	|| umh.is_set
	|| valid_rd_present.is_set
	|| vpn_index.is_set
	|| vrf_id.is_set
	|| (remote_default_group !=  nullptr && remote_default_group->has_data())
	|| (rpf_default_table !=  nullptr && rpf_default_table->has_data());
}

bool Pim::Active::DefaultContext::Context::has_operation() const
{
    for (std::size_t index=0; index<anycast_rp_range.size(); index++)
    {
        if(anycast_rp_range[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<export_route_target.size(); index++)
    {
        if(export_route_target[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<import_route_target.size(); index++)
    {
        if(import_route_target[index]->has_operation())
            return true;
    }
    for (auto const & leaf : mldp_root_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(active_table_count.operation)
	|| is_set(allow_rp_configured.operation)
	|| is_set(allow_rp_group_list.operation)
	|| is_set(allow_rp_rp_list.operation)
	|| is_set(anycast_rp_configured.operation)
	|| is_set(anycast_rp_policy_name.operation)
	|| is_set(bgp_auto_discovery_configured.operation)
	|| is_set(bgp_auto_discovery_type.operation)
	|| is_set(bgp_i_pmsi_added.operation)
	|| is_set(bgp_remote_address.operation)
	|| is_set(bgp_remote_interface.operation)
	|| is_set(bgp_remote_interface_name.operation)
	|| is_set(bgp_remote_on.operation)
	|| is_set(bgp_remote_state.operation)
	|| is_set(bgp_source_active_announce.operation)
	|| is_set(gin_b_and_mdt_data_announce_interval.operation)
	|| is_set(gin_b_and_mdt_data_switchover_interval.operation)
	|| is_set(gin_b_and_mdt_interface.operation)
	|| is_set(gin_b_and_mdt_mtu.operation)
	|| is_set(gin_b_and_mdt_name.operation)
	|| is_set(gin_b_and_mdt_rpf_identifier.operation)
	|| is_set(gin_band_maximum_mdt_aggregation.operation)
	|| is_set(in_b_and_mdt_data_announce_interval.operation)
	|| is_set(in_b_and_mdt_data_switchover_interval.operation)
	|| is_set(in_b_and_mdt_interface.operation)
	|| is_set(in_b_and_mdt_mtu.operation)
	|| is_set(in_b_and_mdt_name.operation)
	|| is_set(in_b_and_mdt_rpf_identifier.operation)
	|| is_set(in_band_maximum_mdt_aggregation.operation)
	|| is_set(in_band_signaling_local_enabled.operation)
	|| is_set(in_band_signaling_remote_enabled.operation)
	|| is_set(inter_autonomous_system_enabled.operation)
	|| is_set(ir_maximum_mdt_aggregation.operation)
	|| is_set(ir_mdt_data_announce_interval.operation)
	|| is_set(ir_mdt_data_switchover_interval.operation)
	|| is_set(ir_mdt_interface.operation)
	|| is_set(ir_mdt_mtu.operation)
	|| is_set(ir_mdt_name.operation)
	|| is_set(ir_mdt_rpf_identifier.operation)
	|| is_set(ir_mdt_tail_label.operation)
	|| is_set(is_active.operation)
	|| is_set(is_active_ital.operation)
	|| is_set(is_all_interface_disable_operation.operation)
	|| is_set(is_auto_rp_listen_enabled.operation)
	|| is_set(is_auto_rp_listen_sock_add.operation)
	|| is_set(is_create_gin_b_and_mdt_interface.operation)
	|| is_set(is_create_in_b_and_mdt_interface.operation)
	|| is_set(is_create_ir_mdt_interface.operation)
	|| is_set(is_create_mdt_interface.operation)
	|| is_set(is_create_mldp_mdt_interface.operation)
	|| is_set(is_create_rsvp_te_mdt_interface.operation)
	|| is_set(is_default_granges.operation)
	|| is_set(is_gin_b_and_mdt_owner.operation)
	|| is_set(is_in_b_and_mdt_owner.operation)
	|| is_set(is_ir_mdt_owner.operation)
	|| is_set(is_lpts_socket_add_required.operation)
	|| is_set(is_lpts_socket_added.operation)
	|| is_set(is_m_host_publish_pending.operation)
	|| is_set(is_mdt_owner.operation)
	|| is_set(is_mldp_mdt_owner.operation)
	|| is_set(is_mrib_register.operation)
	|| is_set(is_multicast_rib_registration.operation)
	|| is_set(is_pim_nsf_rib_converge_received.operation)
	|| is_set(is_pim_nsf_rib_converged.operation)
	|| is_set(is_redistribution_reset.operation)
	|| is_set(is_register_injection_lpts_socket_add_required.operation)
	|| is_set(is_register_injection_lpts_socket_added.operation)
	|| is_set(is_register_injection_socket_add_required.operation)
	|| is_set(is_register_injection_socket_added.operation)
	|| is_set(is_rib_multipath_enabled.operation)
	|| is_set(is_rib_multipath_interface_hash.operation)
	|| is_set(is_rib_multipath_source_hash.operation)
	|| is_set(is_rib_multipath_source_next_hop_hash.operation)
	|| is_set(is_routing_enabled.operation)
	|| is_set(is_rsvp_te_mdt_owner.operation)
	|| is_set(is_socket_add_required.operation)
	|| is_set(is_socket_added.operation)
	|| is_set(is_udp_socket_add_required.operation)
	|| is_set(is_udp_socket_added.operation)
	|| is_set(is_udp_socket_bind.operation)
	|| is_set(is_udp_socket_bind_required.operation)
	|| is_set(is_unicast_rib_registration.operation)
	|| is_set(maximum_mdt_aggregation.operation)
	|| is_set(mdt_data_announce_interval.operation)
	|| is_set(mdt_data_switchover_interval.operation)
	|| is_set(mdt_default_group.operation)
	|| is_set(mdt_gre_remote_rpf_identifier.operation)
	|| is_set(mdt_gre_rpf_identifier.operation)
	|| is_set(mdt_interface.operation)
	|| is_set(mdt_mtu.operation)
	|| is_set(mdt_neighbor_filter_name.operation)
	|| is_set(mdt_partitioned_ir_control_identifier.operation)
	|| is_set(mdt_partitioned_mdt_control_identifier.operation)
	|| is_set(mhost_default_interface_config.operation)
	|| is_set(mhost_interface.operation)
	|| is_set(mldp_auto_rp_announce_tree_added.operation)
	|| is_set(mldp_auto_rp_discovery_tree_added.operation)
	|| is_set(mldp_bsr_control_tree_added.operation)
	|| is_set(mldp_control_head_lsm_identifier.operation)
	|| is_set(mldp_head_local_label.operation)
	|| is_set(mldp_head_lsm_identifier.operation)
	|| is_set(mldp_maximum_mdt_aggregation.operation)
	|| is_set(mldp_mdt_data_announce_interval.operation)
	|| is_set(mldp_mdt_data_switchover_interval.operation)
	|| is_set(mldp_mdt_interface.operation)
	|| is_set(mldp_mdt_mtu.operation)
	|| is_set(mldp_mdt_name.operation)
	|| is_set(mldp_mdt_remote_rpf_identifier.operation)
	|| is_set(mldp_mdt_rpf_identifier.operation)
	|| is_set(mldp_partioned_mp2m_ptree.operation)
	|| is_set(mldp_partitioned_head_lsm_identifier.operation)
	|| is_set(mldp_partitioned_mdt_configured.operation)
	|| is_set(mldp_partitioned_mdt_identifier.operation)
	|| is_set(mldp_remote_head_lsm_identifier.operation)
	|| is_set(mldp_remote_partitioned_mdt_configured.operation)
	|| is_set(mldp_root_address.operation)
	|| is_set(mldp_root_count.operation)
	|| is_set(murib_id.operation)
	|| is_set(neighbor_filter_name.operation)
	|| is_set(non_default_vrf_count_on_socket.operation)
	|| is_set(organization_unique_identifier.operation)
	|| is_set(p2mpte_li_drop.operation)
	|| is_set(redistribution_reset_count.operation)
	|| is_set(remote_table_id.operation)
	|| is_set(route_distinguisher.operation)
	|| is_set(rpf_id.operation)
	|| is_set(rpf_policy_name.operation)
	|| is_set(rsvp_te_maximum_mdt_aggregation.operation)
	|| is_set(rsvp_te_mdt_data_announce_interval.operation)
	|| is_set(rsvp_te_mdt_data_switchover_interval.operation)
	|| is_set(rsvp_te_mdt_interface.operation)
	|| is_set(rsvp_te_mdt_mtu.operation)
	|| is_set(rsvp_te_mdt_name.operation)
	|| is_set(rsvp_te_mdt_rpf_identifier.operation)
	|| is_set(rsvp_te_mdt_static_p2mp_count.operation)
	|| is_set(rump_enabled.operation)
	|| is_set(sg_expiry_time.operation)
	|| is_set(sg_expiry_timer_configured.operation)
	|| is_set(sg_expiry_timer_sg_list.operation)
	|| is_set(stale_rd_present.operation)
	|| is_set(suppress_pim_data_mdt_tlv.operation)
	|| is_set(suppress_shared_tree_join.operation)
	|| is_set(table_count.operation)
	|| is_set(table_id.operation)
	|| is_set(umh.operation)
	|| is_set(valid_rd_present.operation)
	|| is_set(vpn_index.operation)
	|| is_set(vrf_id.operation)
	|| (remote_default_group !=  nullptr && remote_default_group->has_operation())
	|| (rpf_default_table !=  nullptr && rpf_default_table->has_operation());
}

std::string Pim::Active::DefaultContext::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Context::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_table_count.is_set || is_set(active_table_count.operation)) leaf_name_data.push_back(active_table_count.get_name_leafdata());
    if (allow_rp_configured.is_set || is_set(allow_rp_configured.operation)) leaf_name_data.push_back(allow_rp_configured.get_name_leafdata());
    if (allow_rp_group_list.is_set || is_set(allow_rp_group_list.operation)) leaf_name_data.push_back(allow_rp_group_list.get_name_leafdata());
    if (allow_rp_rp_list.is_set || is_set(allow_rp_rp_list.operation)) leaf_name_data.push_back(allow_rp_rp_list.get_name_leafdata());
    if (anycast_rp_configured.is_set || is_set(anycast_rp_configured.operation)) leaf_name_data.push_back(anycast_rp_configured.get_name_leafdata());
    if (anycast_rp_policy_name.is_set || is_set(anycast_rp_policy_name.operation)) leaf_name_data.push_back(anycast_rp_policy_name.get_name_leafdata());
    if (bgp_auto_discovery_configured.is_set || is_set(bgp_auto_discovery_configured.operation)) leaf_name_data.push_back(bgp_auto_discovery_configured.get_name_leafdata());
    if (bgp_auto_discovery_type.is_set || is_set(bgp_auto_discovery_type.operation)) leaf_name_data.push_back(bgp_auto_discovery_type.get_name_leafdata());
    if (bgp_i_pmsi_added.is_set || is_set(bgp_i_pmsi_added.operation)) leaf_name_data.push_back(bgp_i_pmsi_added.get_name_leafdata());
    if (bgp_remote_address.is_set || is_set(bgp_remote_address.operation)) leaf_name_data.push_back(bgp_remote_address.get_name_leafdata());
    if (bgp_remote_interface.is_set || is_set(bgp_remote_interface.operation)) leaf_name_data.push_back(bgp_remote_interface.get_name_leafdata());
    if (bgp_remote_interface_name.is_set || is_set(bgp_remote_interface_name.operation)) leaf_name_data.push_back(bgp_remote_interface_name.get_name_leafdata());
    if (bgp_remote_on.is_set || is_set(bgp_remote_on.operation)) leaf_name_data.push_back(bgp_remote_on.get_name_leafdata());
    if (bgp_remote_state.is_set || is_set(bgp_remote_state.operation)) leaf_name_data.push_back(bgp_remote_state.get_name_leafdata());
    if (bgp_source_active_announce.is_set || is_set(bgp_source_active_announce.operation)) leaf_name_data.push_back(bgp_source_active_announce.get_name_leafdata());
    if (gin_b_and_mdt_data_announce_interval.is_set || is_set(gin_b_and_mdt_data_announce_interval.operation)) leaf_name_data.push_back(gin_b_and_mdt_data_announce_interval.get_name_leafdata());
    if (gin_b_and_mdt_data_switchover_interval.is_set || is_set(gin_b_and_mdt_data_switchover_interval.operation)) leaf_name_data.push_back(gin_b_and_mdt_data_switchover_interval.get_name_leafdata());
    if (gin_b_and_mdt_interface.is_set || is_set(gin_b_and_mdt_interface.operation)) leaf_name_data.push_back(gin_b_and_mdt_interface.get_name_leafdata());
    if (gin_b_and_mdt_mtu.is_set || is_set(gin_b_and_mdt_mtu.operation)) leaf_name_data.push_back(gin_b_and_mdt_mtu.get_name_leafdata());
    if (gin_b_and_mdt_name.is_set || is_set(gin_b_and_mdt_name.operation)) leaf_name_data.push_back(gin_b_and_mdt_name.get_name_leafdata());
    if (gin_b_and_mdt_rpf_identifier.is_set || is_set(gin_b_and_mdt_rpf_identifier.operation)) leaf_name_data.push_back(gin_b_and_mdt_rpf_identifier.get_name_leafdata());
    if (gin_band_maximum_mdt_aggregation.is_set || is_set(gin_band_maximum_mdt_aggregation.operation)) leaf_name_data.push_back(gin_band_maximum_mdt_aggregation.get_name_leafdata());
    if (in_b_and_mdt_data_announce_interval.is_set || is_set(in_b_and_mdt_data_announce_interval.operation)) leaf_name_data.push_back(in_b_and_mdt_data_announce_interval.get_name_leafdata());
    if (in_b_and_mdt_data_switchover_interval.is_set || is_set(in_b_and_mdt_data_switchover_interval.operation)) leaf_name_data.push_back(in_b_and_mdt_data_switchover_interval.get_name_leafdata());
    if (in_b_and_mdt_interface.is_set || is_set(in_b_and_mdt_interface.operation)) leaf_name_data.push_back(in_b_and_mdt_interface.get_name_leafdata());
    if (in_b_and_mdt_mtu.is_set || is_set(in_b_and_mdt_mtu.operation)) leaf_name_data.push_back(in_b_and_mdt_mtu.get_name_leafdata());
    if (in_b_and_mdt_name.is_set || is_set(in_b_and_mdt_name.operation)) leaf_name_data.push_back(in_b_and_mdt_name.get_name_leafdata());
    if (in_b_and_mdt_rpf_identifier.is_set || is_set(in_b_and_mdt_rpf_identifier.operation)) leaf_name_data.push_back(in_b_and_mdt_rpf_identifier.get_name_leafdata());
    if (in_band_maximum_mdt_aggregation.is_set || is_set(in_band_maximum_mdt_aggregation.operation)) leaf_name_data.push_back(in_band_maximum_mdt_aggregation.get_name_leafdata());
    if (in_band_signaling_local_enabled.is_set || is_set(in_band_signaling_local_enabled.operation)) leaf_name_data.push_back(in_band_signaling_local_enabled.get_name_leafdata());
    if (in_band_signaling_remote_enabled.is_set || is_set(in_band_signaling_remote_enabled.operation)) leaf_name_data.push_back(in_band_signaling_remote_enabled.get_name_leafdata());
    if (inter_autonomous_system_enabled.is_set || is_set(inter_autonomous_system_enabled.operation)) leaf_name_data.push_back(inter_autonomous_system_enabled.get_name_leafdata());
    if (ir_maximum_mdt_aggregation.is_set || is_set(ir_maximum_mdt_aggregation.operation)) leaf_name_data.push_back(ir_maximum_mdt_aggregation.get_name_leafdata());
    if (ir_mdt_data_announce_interval.is_set || is_set(ir_mdt_data_announce_interval.operation)) leaf_name_data.push_back(ir_mdt_data_announce_interval.get_name_leafdata());
    if (ir_mdt_data_switchover_interval.is_set || is_set(ir_mdt_data_switchover_interval.operation)) leaf_name_data.push_back(ir_mdt_data_switchover_interval.get_name_leafdata());
    if (ir_mdt_interface.is_set || is_set(ir_mdt_interface.operation)) leaf_name_data.push_back(ir_mdt_interface.get_name_leafdata());
    if (ir_mdt_mtu.is_set || is_set(ir_mdt_mtu.operation)) leaf_name_data.push_back(ir_mdt_mtu.get_name_leafdata());
    if (ir_mdt_name.is_set || is_set(ir_mdt_name.operation)) leaf_name_data.push_back(ir_mdt_name.get_name_leafdata());
    if (ir_mdt_rpf_identifier.is_set || is_set(ir_mdt_rpf_identifier.operation)) leaf_name_data.push_back(ir_mdt_rpf_identifier.get_name_leafdata());
    if (ir_mdt_tail_label.is_set || is_set(ir_mdt_tail_label.operation)) leaf_name_data.push_back(ir_mdt_tail_label.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.operation)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (is_active_ital.is_set || is_set(is_active_ital.operation)) leaf_name_data.push_back(is_active_ital.get_name_leafdata());
    if (is_all_interface_disable_operation.is_set || is_set(is_all_interface_disable_operation.operation)) leaf_name_data.push_back(is_all_interface_disable_operation.get_name_leafdata());
    if (is_auto_rp_listen_enabled.is_set || is_set(is_auto_rp_listen_enabled.operation)) leaf_name_data.push_back(is_auto_rp_listen_enabled.get_name_leafdata());
    if (is_auto_rp_listen_sock_add.is_set || is_set(is_auto_rp_listen_sock_add.operation)) leaf_name_data.push_back(is_auto_rp_listen_sock_add.get_name_leafdata());
    if (is_create_gin_b_and_mdt_interface.is_set || is_set(is_create_gin_b_and_mdt_interface.operation)) leaf_name_data.push_back(is_create_gin_b_and_mdt_interface.get_name_leafdata());
    if (is_create_in_b_and_mdt_interface.is_set || is_set(is_create_in_b_and_mdt_interface.operation)) leaf_name_data.push_back(is_create_in_b_and_mdt_interface.get_name_leafdata());
    if (is_create_ir_mdt_interface.is_set || is_set(is_create_ir_mdt_interface.operation)) leaf_name_data.push_back(is_create_ir_mdt_interface.get_name_leafdata());
    if (is_create_mdt_interface.is_set || is_set(is_create_mdt_interface.operation)) leaf_name_data.push_back(is_create_mdt_interface.get_name_leafdata());
    if (is_create_mldp_mdt_interface.is_set || is_set(is_create_mldp_mdt_interface.operation)) leaf_name_data.push_back(is_create_mldp_mdt_interface.get_name_leafdata());
    if (is_create_rsvp_te_mdt_interface.is_set || is_set(is_create_rsvp_te_mdt_interface.operation)) leaf_name_data.push_back(is_create_rsvp_te_mdt_interface.get_name_leafdata());
    if (is_default_granges.is_set || is_set(is_default_granges.operation)) leaf_name_data.push_back(is_default_granges.get_name_leafdata());
    if (is_gin_b_and_mdt_owner.is_set || is_set(is_gin_b_and_mdt_owner.operation)) leaf_name_data.push_back(is_gin_b_and_mdt_owner.get_name_leafdata());
    if (is_in_b_and_mdt_owner.is_set || is_set(is_in_b_and_mdt_owner.operation)) leaf_name_data.push_back(is_in_b_and_mdt_owner.get_name_leafdata());
    if (is_ir_mdt_owner.is_set || is_set(is_ir_mdt_owner.operation)) leaf_name_data.push_back(is_ir_mdt_owner.get_name_leafdata());
    if (is_lpts_socket_add_required.is_set || is_set(is_lpts_socket_add_required.operation)) leaf_name_data.push_back(is_lpts_socket_add_required.get_name_leafdata());
    if (is_lpts_socket_added.is_set || is_set(is_lpts_socket_added.operation)) leaf_name_data.push_back(is_lpts_socket_added.get_name_leafdata());
    if (is_m_host_publish_pending.is_set || is_set(is_m_host_publish_pending.operation)) leaf_name_data.push_back(is_m_host_publish_pending.get_name_leafdata());
    if (is_mdt_owner.is_set || is_set(is_mdt_owner.operation)) leaf_name_data.push_back(is_mdt_owner.get_name_leafdata());
    if (is_mldp_mdt_owner.is_set || is_set(is_mldp_mdt_owner.operation)) leaf_name_data.push_back(is_mldp_mdt_owner.get_name_leafdata());
    if (is_mrib_register.is_set || is_set(is_mrib_register.operation)) leaf_name_data.push_back(is_mrib_register.get_name_leafdata());
    if (is_multicast_rib_registration.is_set || is_set(is_multicast_rib_registration.operation)) leaf_name_data.push_back(is_multicast_rib_registration.get_name_leafdata());
    if (is_pim_nsf_rib_converge_received.is_set || is_set(is_pim_nsf_rib_converge_received.operation)) leaf_name_data.push_back(is_pim_nsf_rib_converge_received.get_name_leafdata());
    if (is_pim_nsf_rib_converged.is_set || is_set(is_pim_nsf_rib_converged.operation)) leaf_name_data.push_back(is_pim_nsf_rib_converged.get_name_leafdata());
    if (is_redistribution_reset.is_set || is_set(is_redistribution_reset.operation)) leaf_name_data.push_back(is_redistribution_reset.get_name_leafdata());
    if (is_register_injection_lpts_socket_add_required.is_set || is_set(is_register_injection_lpts_socket_add_required.operation)) leaf_name_data.push_back(is_register_injection_lpts_socket_add_required.get_name_leafdata());
    if (is_register_injection_lpts_socket_added.is_set || is_set(is_register_injection_lpts_socket_added.operation)) leaf_name_data.push_back(is_register_injection_lpts_socket_added.get_name_leafdata());
    if (is_register_injection_socket_add_required.is_set || is_set(is_register_injection_socket_add_required.operation)) leaf_name_data.push_back(is_register_injection_socket_add_required.get_name_leafdata());
    if (is_register_injection_socket_added.is_set || is_set(is_register_injection_socket_added.operation)) leaf_name_data.push_back(is_register_injection_socket_added.get_name_leafdata());
    if (is_rib_multipath_enabled.is_set || is_set(is_rib_multipath_enabled.operation)) leaf_name_data.push_back(is_rib_multipath_enabled.get_name_leafdata());
    if (is_rib_multipath_interface_hash.is_set || is_set(is_rib_multipath_interface_hash.operation)) leaf_name_data.push_back(is_rib_multipath_interface_hash.get_name_leafdata());
    if (is_rib_multipath_source_hash.is_set || is_set(is_rib_multipath_source_hash.operation)) leaf_name_data.push_back(is_rib_multipath_source_hash.get_name_leafdata());
    if (is_rib_multipath_source_next_hop_hash.is_set || is_set(is_rib_multipath_source_next_hop_hash.operation)) leaf_name_data.push_back(is_rib_multipath_source_next_hop_hash.get_name_leafdata());
    if (is_routing_enabled.is_set || is_set(is_routing_enabled.operation)) leaf_name_data.push_back(is_routing_enabled.get_name_leafdata());
    if (is_rsvp_te_mdt_owner.is_set || is_set(is_rsvp_te_mdt_owner.operation)) leaf_name_data.push_back(is_rsvp_te_mdt_owner.get_name_leafdata());
    if (is_socket_add_required.is_set || is_set(is_socket_add_required.operation)) leaf_name_data.push_back(is_socket_add_required.get_name_leafdata());
    if (is_socket_added.is_set || is_set(is_socket_added.operation)) leaf_name_data.push_back(is_socket_added.get_name_leafdata());
    if (is_udp_socket_add_required.is_set || is_set(is_udp_socket_add_required.operation)) leaf_name_data.push_back(is_udp_socket_add_required.get_name_leafdata());
    if (is_udp_socket_added.is_set || is_set(is_udp_socket_added.operation)) leaf_name_data.push_back(is_udp_socket_added.get_name_leafdata());
    if (is_udp_socket_bind.is_set || is_set(is_udp_socket_bind.operation)) leaf_name_data.push_back(is_udp_socket_bind.get_name_leafdata());
    if (is_udp_socket_bind_required.is_set || is_set(is_udp_socket_bind_required.operation)) leaf_name_data.push_back(is_udp_socket_bind_required.get_name_leafdata());
    if (is_unicast_rib_registration.is_set || is_set(is_unicast_rib_registration.operation)) leaf_name_data.push_back(is_unicast_rib_registration.get_name_leafdata());
    if (maximum_mdt_aggregation.is_set || is_set(maximum_mdt_aggregation.operation)) leaf_name_data.push_back(maximum_mdt_aggregation.get_name_leafdata());
    if (mdt_data_announce_interval.is_set || is_set(mdt_data_announce_interval.operation)) leaf_name_data.push_back(mdt_data_announce_interval.get_name_leafdata());
    if (mdt_data_switchover_interval.is_set || is_set(mdt_data_switchover_interval.operation)) leaf_name_data.push_back(mdt_data_switchover_interval.get_name_leafdata());
    if (mdt_default_group.is_set || is_set(mdt_default_group.operation)) leaf_name_data.push_back(mdt_default_group.get_name_leafdata());
    if (mdt_gre_remote_rpf_identifier.is_set || is_set(mdt_gre_remote_rpf_identifier.operation)) leaf_name_data.push_back(mdt_gre_remote_rpf_identifier.get_name_leafdata());
    if (mdt_gre_rpf_identifier.is_set || is_set(mdt_gre_rpf_identifier.operation)) leaf_name_data.push_back(mdt_gre_rpf_identifier.get_name_leafdata());
    if (mdt_interface.is_set || is_set(mdt_interface.operation)) leaf_name_data.push_back(mdt_interface.get_name_leafdata());
    if (mdt_mtu.is_set || is_set(mdt_mtu.operation)) leaf_name_data.push_back(mdt_mtu.get_name_leafdata());
    if (mdt_neighbor_filter_name.is_set || is_set(mdt_neighbor_filter_name.operation)) leaf_name_data.push_back(mdt_neighbor_filter_name.get_name_leafdata());
    if (mdt_partitioned_ir_control_identifier.is_set || is_set(mdt_partitioned_ir_control_identifier.operation)) leaf_name_data.push_back(mdt_partitioned_ir_control_identifier.get_name_leafdata());
    if (mdt_partitioned_mdt_control_identifier.is_set || is_set(mdt_partitioned_mdt_control_identifier.operation)) leaf_name_data.push_back(mdt_partitioned_mdt_control_identifier.get_name_leafdata());
    if (mhost_default_interface_config.is_set || is_set(mhost_default_interface_config.operation)) leaf_name_data.push_back(mhost_default_interface_config.get_name_leafdata());
    if (mhost_interface.is_set || is_set(mhost_interface.operation)) leaf_name_data.push_back(mhost_interface.get_name_leafdata());
    if (mldp_auto_rp_announce_tree_added.is_set || is_set(mldp_auto_rp_announce_tree_added.operation)) leaf_name_data.push_back(mldp_auto_rp_announce_tree_added.get_name_leafdata());
    if (mldp_auto_rp_discovery_tree_added.is_set || is_set(mldp_auto_rp_discovery_tree_added.operation)) leaf_name_data.push_back(mldp_auto_rp_discovery_tree_added.get_name_leafdata());
    if (mldp_bsr_control_tree_added.is_set || is_set(mldp_bsr_control_tree_added.operation)) leaf_name_data.push_back(mldp_bsr_control_tree_added.get_name_leafdata());
    if (mldp_control_head_lsm_identifier.is_set || is_set(mldp_control_head_lsm_identifier.operation)) leaf_name_data.push_back(mldp_control_head_lsm_identifier.get_name_leafdata());
    if (mldp_head_local_label.is_set || is_set(mldp_head_local_label.operation)) leaf_name_data.push_back(mldp_head_local_label.get_name_leafdata());
    if (mldp_head_lsm_identifier.is_set || is_set(mldp_head_lsm_identifier.operation)) leaf_name_data.push_back(mldp_head_lsm_identifier.get_name_leafdata());
    if (mldp_maximum_mdt_aggregation.is_set || is_set(mldp_maximum_mdt_aggregation.operation)) leaf_name_data.push_back(mldp_maximum_mdt_aggregation.get_name_leafdata());
    if (mldp_mdt_data_announce_interval.is_set || is_set(mldp_mdt_data_announce_interval.operation)) leaf_name_data.push_back(mldp_mdt_data_announce_interval.get_name_leafdata());
    if (mldp_mdt_data_switchover_interval.is_set || is_set(mldp_mdt_data_switchover_interval.operation)) leaf_name_data.push_back(mldp_mdt_data_switchover_interval.get_name_leafdata());
    if (mldp_mdt_interface.is_set || is_set(mldp_mdt_interface.operation)) leaf_name_data.push_back(mldp_mdt_interface.get_name_leafdata());
    if (mldp_mdt_mtu.is_set || is_set(mldp_mdt_mtu.operation)) leaf_name_data.push_back(mldp_mdt_mtu.get_name_leafdata());
    if (mldp_mdt_name.is_set || is_set(mldp_mdt_name.operation)) leaf_name_data.push_back(mldp_mdt_name.get_name_leafdata());
    if (mldp_mdt_remote_rpf_identifier.is_set || is_set(mldp_mdt_remote_rpf_identifier.operation)) leaf_name_data.push_back(mldp_mdt_remote_rpf_identifier.get_name_leafdata());
    if (mldp_mdt_rpf_identifier.is_set || is_set(mldp_mdt_rpf_identifier.operation)) leaf_name_data.push_back(mldp_mdt_rpf_identifier.get_name_leafdata());
    if (mldp_partioned_mp2m_ptree.is_set || is_set(mldp_partioned_mp2m_ptree.operation)) leaf_name_data.push_back(mldp_partioned_mp2m_ptree.get_name_leafdata());
    if (mldp_partitioned_head_lsm_identifier.is_set || is_set(mldp_partitioned_head_lsm_identifier.operation)) leaf_name_data.push_back(mldp_partitioned_head_lsm_identifier.get_name_leafdata());
    if (mldp_partitioned_mdt_configured.is_set || is_set(mldp_partitioned_mdt_configured.operation)) leaf_name_data.push_back(mldp_partitioned_mdt_configured.get_name_leafdata());
    if (mldp_partitioned_mdt_identifier.is_set || is_set(mldp_partitioned_mdt_identifier.operation)) leaf_name_data.push_back(mldp_partitioned_mdt_identifier.get_name_leafdata());
    if (mldp_remote_head_lsm_identifier.is_set || is_set(mldp_remote_head_lsm_identifier.operation)) leaf_name_data.push_back(mldp_remote_head_lsm_identifier.get_name_leafdata());
    if (mldp_remote_partitioned_mdt_configured.is_set || is_set(mldp_remote_partitioned_mdt_configured.operation)) leaf_name_data.push_back(mldp_remote_partitioned_mdt_configured.get_name_leafdata());
    if (mldp_root_count.is_set || is_set(mldp_root_count.operation)) leaf_name_data.push_back(mldp_root_count.get_name_leafdata());
    if (murib_id.is_set || is_set(murib_id.operation)) leaf_name_data.push_back(murib_id.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.operation)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (non_default_vrf_count_on_socket.is_set || is_set(non_default_vrf_count_on_socket.operation)) leaf_name_data.push_back(non_default_vrf_count_on_socket.get_name_leafdata());
    if (organization_unique_identifier.is_set || is_set(organization_unique_identifier.operation)) leaf_name_data.push_back(organization_unique_identifier.get_name_leafdata());
    if (p2mpte_li_drop.is_set || is_set(p2mpte_li_drop.operation)) leaf_name_data.push_back(p2mpte_li_drop.get_name_leafdata());
    if (redistribution_reset_count.is_set || is_set(redistribution_reset_count.operation)) leaf_name_data.push_back(redistribution_reset_count.get_name_leafdata());
    if (remote_table_id.is_set || is_set(remote_table_id.operation)) leaf_name_data.push_back(remote_table_id.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.operation)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (rpf_id.is_set || is_set(rpf_id.operation)) leaf_name_data.push_back(rpf_id.get_name_leafdata());
    if (rpf_policy_name.is_set || is_set(rpf_policy_name.operation)) leaf_name_data.push_back(rpf_policy_name.get_name_leafdata());
    if (rsvp_te_maximum_mdt_aggregation.is_set || is_set(rsvp_te_maximum_mdt_aggregation.operation)) leaf_name_data.push_back(rsvp_te_maximum_mdt_aggregation.get_name_leafdata());
    if (rsvp_te_mdt_data_announce_interval.is_set || is_set(rsvp_te_mdt_data_announce_interval.operation)) leaf_name_data.push_back(rsvp_te_mdt_data_announce_interval.get_name_leafdata());
    if (rsvp_te_mdt_data_switchover_interval.is_set || is_set(rsvp_te_mdt_data_switchover_interval.operation)) leaf_name_data.push_back(rsvp_te_mdt_data_switchover_interval.get_name_leafdata());
    if (rsvp_te_mdt_interface.is_set || is_set(rsvp_te_mdt_interface.operation)) leaf_name_data.push_back(rsvp_te_mdt_interface.get_name_leafdata());
    if (rsvp_te_mdt_mtu.is_set || is_set(rsvp_te_mdt_mtu.operation)) leaf_name_data.push_back(rsvp_te_mdt_mtu.get_name_leafdata());
    if (rsvp_te_mdt_name.is_set || is_set(rsvp_te_mdt_name.operation)) leaf_name_data.push_back(rsvp_te_mdt_name.get_name_leafdata());
    if (rsvp_te_mdt_rpf_identifier.is_set || is_set(rsvp_te_mdt_rpf_identifier.operation)) leaf_name_data.push_back(rsvp_te_mdt_rpf_identifier.get_name_leafdata());
    if (rsvp_te_mdt_static_p2mp_count.is_set || is_set(rsvp_te_mdt_static_p2mp_count.operation)) leaf_name_data.push_back(rsvp_te_mdt_static_p2mp_count.get_name_leafdata());
    if (rump_enabled.is_set || is_set(rump_enabled.operation)) leaf_name_data.push_back(rump_enabled.get_name_leafdata());
    if (sg_expiry_time.is_set || is_set(sg_expiry_time.operation)) leaf_name_data.push_back(sg_expiry_time.get_name_leafdata());
    if (sg_expiry_timer_configured.is_set || is_set(sg_expiry_timer_configured.operation)) leaf_name_data.push_back(sg_expiry_timer_configured.get_name_leafdata());
    if (sg_expiry_timer_sg_list.is_set || is_set(sg_expiry_timer_sg_list.operation)) leaf_name_data.push_back(sg_expiry_timer_sg_list.get_name_leafdata());
    if (stale_rd_present.is_set || is_set(stale_rd_present.operation)) leaf_name_data.push_back(stale_rd_present.get_name_leafdata());
    if (suppress_pim_data_mdt_tlv.is_set || is_set(suppress_pim_data_mdt_tlv.operation)) leaf_name_data.push_back(suppress_pim_data_mdt_tlv.get_name_leafdata());
    if (suppress_shared_tree_join.is_set || is_set(suppress_shared_tree_join.operation)) leaf_name_data.push_back(suppress_shared_tree_join.get_name_leafdata());
    if (table_count.is_set || is_set(table_count.operation)) leaf_name_data.push_back(table_count.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (umh.is_set || is_set(umh.operation)) leaf_name_data.push_back(umh.get_name_leafdata());
    if (valid_rd_present.is_set || is_set(valid_rd_present.operation)) leaf_name_data.push_back(valid_rd_present.get_name_leafdata());
    if (vpn_index.is_set || is_set(vpn_index.operation)) leaf_name_data.push_back(vpn_index.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());

    auto mldp_root_address_name_datas = mldp_root_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mldp_root_address_name_datas.begin(), mldp_root_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "anycast-rp-range")
    {
        for(auto const & c : anycast_rp_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::Context::AnycastRpRange>();
        c->parent = this;
        anycast_rp_range.push_back(std::move(c));
        children[segment_path] = anycast_rp_range.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "export-route-target")
    {
        for(auto const & c : export_route_target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::Context::ExportRouteTarget>();
        c->parent = this;
        export_route_target.push_back(std::move(c));
        children[segment_path] = export_route_target.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "import-route-target")
    {
        for(auto const & c : import_route_target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::Context::ImportRouteTarget>();
        c->parent = this;
        import_route_target.push_back(std::move(c));
        children[segment_path] = import_route_target.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "remote-default-group")
    {
        if(remote_default_group != nullptr)
        {
            children["remote-default-group"] = remote_default_group;
        }
        else
        {
            remote_default_group = std::make_shared<Pim::Active::DefaultContext::Context::RemoteDefaultGroup>();
            remote_default_group->parent = this;
            children["remote-default-group"] = remote_default_group;
        }
        return children.at("remote-default-group");
    }

    if(child_yang_name == "rpf-default-table")
    {
        if(rpf_default_table != nullptr)
        {
            children["rpf-default-table"] = rpf_default_table;
        }
        else
        {
            rpf_default_table = std::make_shared<Pim::Active::DefaultContext::Context::RpfDefaultTable>();
            rpf_default_table->parent = this;
            children["rpf-default-table"] = rpf_default_table;
        }
        return children.at("rpf-default-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Context::get_children()
{
    for (auto const & c : anycast_rp_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : export_route_target)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : import_route_target)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("remote-default-group") == children.end())
    {
        if(remote_default_group != nullptr)
        {
            children["remote-default-group"] = remote_default_group;
        }
    }

    if(children.find("rpf-default-table") == children.end())
    {
        if(rpf_default_table != nullptr)
        {
            children["rpf-default-table"] = rpf_default_table;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Context::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-table-count")
    {
        active_table_count = value;
    }
    if(value_path == "allow-rp-configured")
    {
        allow_rp_configured = value;
    }
    if(value_path == "allow-rp-group-list")
    {
        allow_rp_group_list = value;
    }
    if(value_path == "allow-rp-rp-list")
    {
        allow_rp_rp_list = value;
    }
    if(value_path == "anycast-rp-configured")
    {
        anycast_rp_configured = value;
    }
    if(value_path == "anycast-rp-policy-name")
    {
        anycast_rp_policy_name = value;
    }
    if(value_path == "bgp-auto-discovery-configured")
    {
        bgp_auto_discovery_configured = value;
    }
    if(value_path == "bgp-auto-discovery-type")
    {
        bgp_auto_discovery_type = value;
    }
    if(value_path == "bgp-i-pmsi-added")
    {
        bgp_i_pmsi_added = value;
    }
    if(value_path == "bgp-remote-address")
    {
        bgp_remote_address = value;
    }
    if(value_path == "bgp-remote-interface")
    {
        bgp_remote_interface = value;
    }
    if(value_path == "bgp-remote-interface-name")
    {
        bgp_remote_interface_name = value;
    }
    if(value_path == "bgp-remote-on")
    {
        bgp_remote_on = value;
    }
    if(value_path == "bgp-remote-state")
    {
        bgp_remote_state = value;
    }
    if(value_path == "bgp-source-active-announce")
    {
        bgp_source_active_announce = value;
    }
    if(value_path == "gin-b-and-mdt-data-announce-interval")
    {
        gin_b_and_mdt_data_announce_interval = value;
    }
    if(value_path == "gin-b-and-mdt-data-switchover-interval")
    {
        gin_b_and_mdt_data_switchover_interval = value;
    }
    if(value_path == "gin-b-and-mdt-interface")
    {
        gin_b_and_mdt_interface = value;
    }
    if(value_path == "gin-b-and-mdt-mtu")
    {
        gin_b_and_mdt_mtu = value;
    }
    if(value_path == "gin-b-and-mdt-name")
    {
        gin_b_and_mdt_name = value;
    }
    if(value_path == "gin-b-and-mdt-rpf-identifier")
    {
        gin_b_and_mdt_rpf_identifier = value;
    }
    if(value_path == "gin-band-maximum-mdt-aggregation")
    {
        gin_band_maximum_mdt_aggregation = value;
    }
    if(value_path == "in-b-and-mdt-data-announce-interval")
    {
        in_b_and_mdt_data_announce_interval = value;
    }
    if(value_path == "in-b-and-mdt-data-switchover-interval")
    {
        in_b_and_mdt_data_switchover_interval = value;
    }
    if(value_path == "in-b-and-mdt-interface")
    {
        in_b_and_mdt_interface = value;
    }
    if(value_path == "in-b-and-mdt-mtu")
    {
        in_b_and_mdt_mtu = value;
    }
    if(value_path == "in-b-and-mdt-name")
    {
        in_b_and_mdt_name = value;
    }
    if(value_path == "in-b-and-mdt-rpf-identifier")
    {
        in_b_and_mdt_rpf_identifier = value;
    }
    if(value_path == "in-band-maximum-mdt-aggregation")
    {
        in_band_maximum_mdt_aggregation = value;
    }
    if(value_path == "in-band-signaling-local-enabled")
    {
        in_band_signaling_local_enabled = value;
    }
    if(value_path == "in-band-signaling-remote-enabled")
    {
        in_band_signaling_remote_enabled = value;
    }
    if(value_path == "inter-autonomous-system-enabled")
    {
        inter_autonomous_system_enabled = value;
    }
    if(value_path == "ir-maximum-mdt-aggregation")
    {
        ir_maximum_mdt_aggregation = value;
    }
    if(value_path == "ir-mdt-data-announce-interval")
    {
        ir_mdt_data_announce_interval = value;
    }
    if(value_path == "ir-mdt-data-switchover-interval")
    {
        ir_mdt_data_switchover_interval = value;
    }
    if(value_path == "ir-mdt-interface")
    {
        ir_mdt_interface = value;
    }
    if(value_path == "ir-mdt-mtu")
    {
        ir_mdt_mtu = value;
    }
    if(value_path == "ir-mdt-name")
    {
        ir_mdt_name = value;
    }
    if(value_path == "ir-mdt-rpf-identifier")
    {
        ir_mdt_rpf_identifier = value;
    }
    if(value_path == "ir-mdt-tail-label")
    {
        ir_mdt_tail_label = value;
    }
    if(value_path == "is-active")
    {
        is_active = value;
    }
    if(value_path == "is-active-ital")
    {
        is_active_ital = value;
    }
    if(value_path == "is-all-interface-disable-operation")
    {
        is_all_interface_disable_operation = value;
    }
    if(value_path == "is-auto-rp-listen-enabled")
    {
        is_auto_rp_listen_enabled = value;
    }
    if(value_path == "is-auto-rp-listen-sock-add")
    {
        is_auto_rp_listen_sock_add = value;
    }
    if(value_path == "is-create-gin-b-and-mdt-interface")
    {
        is_create_gin_b_and_mdt_interface = value;
    }
    if(value_path == "is-create-in-b-and-mdt-interface")
    {
        is_create_in_b_and_mdt_interface = value;
    }
    if(value_path == "is-create-ir-mdt-interface")
    {
        is_create_ir_mdt_interface = value;
    }
    if(value_path == "is-create-mdt-interface")
    {
        is_create_mdt_interface = value;
    }
    if(value_path == "is-create-mldp-mdt-interface")
    {
        is_create_mldp_mdt_interface = value;
    }
    if(value_path == "is-create-rsvp-te-mdt-interface")
    {
        is_create_rsvp_te_mdt_interface = value;
    }
    if(value_path == "is-default-granges")
    {
        is_default_granges = value;
    }
    if(value_path == "is-gin-b-and-mdt-owner")
    {
        is_gin_b_and_mdt_owner = value;
    }
    if(value_path == "is-in-b-and-mdt-owner")
    {
        is_in_b_and_mdt_owner = value;
    }
    if(value_path == "is-ir-mdt-owner")
    {
        is_ir_mdt_owner = value;
    }
    if(value_path == "is-lpts-socket-add-required")
    {
        is_lpts_socket_add_required = value;
    }
    if(value_path == "is-lpts-socket-added")
    {
        is_lpts_socket_added = value;
    }
    if(value_path == "is-m-host-publish-pending")
    {
        is_m_host_publish_pending = value;
    }
    if(value_path == "is-mdt-owner")
    {
        is_mdt_owner = value;
    }
    if(value_path == "is-mldp-mdt-owner")
    {
        is_mldp_mdt_owner = value;
    }
    if(value_path == "is-mrib-register")
    {
        is_mrib_register = value;
    }
    if(value_path == "is-multicast-rib-registration")
    {
        is_multicast_rib_registration = value;
    }
    if(value_path == "is-pim-nsf-rib-converge-received")
    {
        is_pim_nsf_rib_converge_received = value;
    }
    if(value_path == "is-pim-nsf-rib-converged")
    {
        is_pim_nsf_rib_converged = value;
    }
    if(value_path == "is-redistribution-reset")
    {
        is_redistribution_reset = value;
    }
    if(value_path == "is-register-injection-lpts-socket-add-required")
    {
        is_register_injection_lpts_socket_add_required = value;
    }
    if(value_path == "is-register-injection-lpts-socket-added")
    {
        is_register_injection_lpts_socket_added = value;
    }
    if(value_path == "is-register-injection-socket-add-required")
    {
        is_register_injection_socket_add_required = value;
    }
    if(value_path == "is-register-injection-socket-added")
    {
        is_register_injection_socket_added = value;
    }
    if(value_path == "is-rib-multipath-enabled")
    {
        is_rib_multipath_enabled = value;
    }
    if(value_path == "is-rib-multipath-interface-hash")
    {
        is_rib_multipath_interface_hash = value;
    }
    if(value_path == "is-rib-multipath-source-hash")
    {
        is_rib_multipath_source_hash = value;
    }
    if(value_path == "is-rib-multipath-source-next-hop-hash")
    {
        is_rib_multipath_source_next_hop_hash = value;
    }
    if(value_path == "is-routing-enabled")
    {
        is_routing_enabled = value;
    }
    if(value_path == "is-rsvp-te-mdt-owner")
    {
        is_rsvp_te_mdt_owner = value;
    }
    if(value_path == "is-socket-add-required")
    {
        is_socket_add_required = value;
    }
    if(value_path == "is-socket-added")
    {
        is_socket_added = value;
    }
    if(value_path == "is-udp-socket-add-required")
    {
        is_udp_socket_add_required = value;
    }
    if(value_path == "is-udp-socket-added")
    {
        is_udp_socket_added = value;
    }
    if(value_path == "is-udp-socket-bind")
    {
        is_udp_socket_bind = value;
    }
    if(value_path == "is-udp-socket-bind-required")
    {
        is_udp_socket_bind_required = value;
    }
    if(value_path == "is-unicast-rib-registration")
    {
        is_unicast_rib_registration = value;
    }
    if(value_path == "maximum-mdt-aggregation")
    {
        maximum_mdt_aggregation = value;
    }
    if(value_path == "mdt-data-announce-interval")
    {
        mdt_data_announce_interval = value;
    }
    if(value_path == "mdt-data-switchover-interval")
    {
        mdt_data_switchover_interval = value;
    }
    if(value_path == "mdt-default-group")
    {
        mdt_default_group = value;
    }
    if(value_path == "mdt-gre-remote-rpf-identifier")
    {
        mdt_gre_remote_rpf_identifier = value;
    }
    if(value_path == "mdt-gre-rpf-identifier")
    {
        mdt_gre_rpf_identifier = value;
    }
    if(value_path == "mdt-interface")
    {
        mdt_interface = value;
    }
    if(value_path == "mdt-mtu")
    {
        mdt_mtu = value;
    }
    if(value_path == "mdt-neighbor-filter-name")
    {
        mdt_neighbor_filter_name = value;
    }
    if(value_path == "mdt-partitioned-ir-control-identifier")
    {
        mdt_partitioned_ir_control_identifier = value;
    }
    if(value_path == "mdt-partitioned-mdt-control-identifier")
    {
        mdt_partitioned_mdt_control_identifier = value;
    }
    if(value_path == "mhost-default-interface-config")
    {
        mhost_default_interface_config = value;
    }
    if(value_path == "mhost-interface")
    {
        mhost_interface = value;
    }
    if(value_path == "mldp-auto-rp-announce-tree-added")
    {
        mldp_auto_rp_announce_tree_added = value;
    }
    if(value_path == "mldp-auto-rp-discovery-tree-added")
    {
        mldp_auto_rp_discovery_tree_added = value;
    }
    if(value_path == "mldp-bsr-control-tree-added")
    {
        mldp_bsr_control_tree_added = value;
    }
    if(value_path == "mldp-control-head-lsm-identifier")
    {
        mldp_control_head_lsm_identifier = value;
    }
    if(value_path == "mldp-head-local-label")
    {
        mldp_head_local_label = value;
    }
    if(value_path == "mldp-head-lsm-identifier")
    {
        mldp_head_lsm_identifier = value;
    }
    if(value_path == "mldp-maximum-mdt-aggregation")
    {
        mldp_maximum_mdt_aggregation = value;
    }
    if(value_path == "mldp-mdt-data-announce-interval")
    {
        mldp_mdt_data_announce_interval = value;
    }
    if(value_path == "mldp-mdt-data-switchover-interval")
    {
        mldp_mdt_data_switchover_interval = value;
    }
    if(value_path == "mldp-mdt-interface")
    {
        mldp_mdt_interface = value;
    }
    if(value_path == "mldp-mdt-mtu")
    {
        mldp_mdt_mtu = value;
    }
    if(value_path == "mldp-mdt-name")
    {
        mldp_mdt_name = value;
    }
    if(value_path == "mldp-mdt-remote-rpf-identifier")
    {
        mldp_mdt_remote_rpf_identifier = value;
    }
    if(value_path == "mldp-mdt-rpf-identifier")
    {
        mldp_mdt_rpf_identifier = value;
    }
    if(value_path == "mldp-partioned-mp2m-ptree")
    {
        mldp_partioned_mp2m_ptree = value;
    }
    if(value_path == "mldp-partitioned-head-lsm-identifier")
    {
        mldp_partitioned_head_lsm_identifier = value;
    }
    if(value_path == "mldp-partitioned-mdt-configured")
    {
        mldp_partitioned_mdt_configured = value;
    }
    if(value_path == "mldp-partitioned-mdt-identifier")
    {
        mldp_partitioned_mdt_identifier = value;
    }
    if(value_path == "mldp-remote-head-lsm-identifier")
    {
        mldp_remote_head_lsm_identifier = value;
    }
    if(value_path == "mldp-remote-partitioned-mdt-configured")
    {
        mldp_remote_partitioned_mdt_configured = value;
    }
    if(value_path == "mldp-root-address")
    {
        mldp_root_address.append(value);
    }
    if(value_path == "mldp-root-count")
    {
        mldp_root_count = value;
    }
    if(value_path == "murib-id")
    {
        murib_id = value;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
    }
    if(value_path == "non-default-vrf-count-on-socket")
    {
        non_default_vrf_count_on_socket = value;
    }
    if(value_path == "organization-unique-identifier")
    {
        organization_unique_identifier = value;
    }
    if(value_path == "p2mpte-li-drop")
    {
        p2mpte_li_drop = value;
    }
    if(value_path == "redistribution-reset-count")
    {
        redistribution_reset_count = value;
    }
    if(value_path == "remote-table-id")
    {
        remote_table_id = value;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
    }
    if(value_path == "rpf-id")
    {
        rpf_id = value;
    }
    if(value_path == "rpf-policy-name")
    {
        rpf_policy_name = value;
    }
    if(value_path == "rsvp-te-maximum-mdt-aggregation")
    {
        rsvp_te_maximum_mdt_aggregation = value;
    }
    if(value_path == "rsvp-te-mdt-data-announce-interval")
    {
        rsvp_te_mdt_data_announce_interval = value;
    }
    if(value_path == "rsvp-te-mdt-data-switchover-interval")
    {
        rsvp_te_mdt_data_switchover_interval = value;
    }
    if(value_path == "rsvp-te-mdt-interface")
    {
        rsvp_te_mdt_interface = value;
    }
    if(value_path == "rsvp-te-mdt-mtu")
    {
        rsvp_te_mdt_mtu = value;
    }
    if(value_path == "rsvp-te-mdt-name")
    {
        rsvp_te_mdt_name = value;
    }
    if(value_path == "rsvp-te-mdt-rpf-identifier")
    {
        rsvp_te_mdt_rpf_identifier = value;
    }
    if(value_path == "rsvp-te-mdt-static-p2mp-count")
    {
        rsvp_te_mdt_static_p2mp_count = value;
    }
    if(value_path == "rump-enabled")
    {
        rump_enabled = value;
    }
    if(value_path == "sg-expiry-time")
    {
        sg_expiry_time = value;
    }
    if(value_path == "sg-expiry-timer-configured")
    {
        sg_expiry_timer_configured = value;
    }
    if(value_path == "sg-expiry-timer-sg-list")
    {
        sg_expiry_timer_sg_list = value;
    }
    if(value_path == "stale-rd-present")
    {
        stale_rd_present = value;
    }
    if(value_path == "suppress-pim-data-mdt-tlv")
    {
        suppress_pim_data_mdt_tlv = value;
    }
    if(value_path == "suppress-shared-tree-join")
    {
        suppress_shared_tree_join = value;
    }
    if(value_path == "table-count")
    {
        table_count = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "umh")
    {
        umh = value;
    }
    if(value_path == "valid-rd-present")
    {
        valid_rd_present = value;
    }
    if(value_path == "vpn-index")
    {
        vpn_index = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
}

Pim::Active::DefaultContext::Context::RemoteDefaultGroup::RemoteDefaultGroup()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "remote-default-group"; yang_parent_name = "context";
}

Pim::Active::DefaultContext::Context::RemoteDefaultGroup::~RemoteDefaultGroup()
{
}

bool Pim::Active::DefaultContext::Context::RemoteDefaultGroup::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Context::RemoteDefaultGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Context::RemoteDefaultGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-default-group";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Context::RemoteDefaultGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Context::RemoteDefaultGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Context::RemoteDefaultGroup::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Context::RemoteDefaultGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Context::RpfDefaultTable::RpfDefaultTable()
    :
    afi{YType::uint32, "afi"},
    is_active{YType::boolean, "is-active"},
    is_ital_registration_done{YType::boolean, "is-ital-registration-done"},
    is_rib_convergence{YType::boolean, "is-rib-convergence"},
    is_rib_convergence_received{YType::boolean, "is-rib-convergence-received"},
    is_rib_registration_done{YType::boolean, "is-rib-registration-done"},
    rpf_registrations{YType::uint32, "rpf-registrations"},
    safi{YType::uint32, "safi"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    vrf_id{YType::uint32, "vrf-id"}
{
    yang_name = "rpf-default-table"; yang_parent_name = "context";
}

Pim::Active::DefaultContext::Context::RpfDefaultTable::~RpfDefaultTable()
{
}

bool Pim::Active::DefaultContext::Context::RpfDefaultTable::has_data() const
{
    return afi.is_set
	|| is_active.is_set
	|| is_ital_registration_done.is_set
	|| is_rib_convergence.is_set
	|| is_rib_convergence_received.is_set
	|| is_rib_registration_done.is_set
	|| rpf_registrations.is_set
	|| safi.is_set
	|| table_id.is_set
	|| table_name.is_set
	|| vrf_id.is_set;
}

bool Pim::Active::DefaultContext::Context::RpfDefaultTable::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(is_active.operation)
	|| is_set(is_ital_registration_done.operation)
	|| is_set(is_rib_convergence.operation)
	|| is_set(is_rib_convergence_received.operation)
	|| is_set(is_rib_registration_done.operation)
	|| is_set(rpf_registrations.operation)
	|| is_set(safi.operation)
	|| is_set(table_id.operation)
	|| is_set(table_name.operation)
	|| is_set(vrf_id.operation);
}

std::string Pim::Active::DefaultContext::Context::RpfDefaultTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-default-table";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Context::RpfDefaultTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.operation)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (is_ital_registration_done.is_set || is_set(is_ital_registration_done.operation)) leaf_name_data.push_back(is_ital_registration_done.get_name_leafdata());
    if (is_rib_convergence.is_set || is_set(is_rib_convergence.operation)) leaf_name_data.push_back(is_rib_convergence.get_name_leafdata());
    if (is_rib_convergence_received.is_set || is_set(is_rib_convergence_received.operation)) leaf_name_data.push_back(is_rib_convergence_received.get_name_leafdata());
    if (is_rib_registration_done.is_set || is_set(is_rib_registration_done.operation)) leaf_name_data.push_back(is_rib_registration_done.get_name_leafdata());
    if (rpf_registrations.is_set || is_set(rpf_registrations.operation)) leaf_name_data.push_back(rpf_registrations.get_name_leafdata());
    if (safi.is_set || is_set(safi.operation)) leaf_name_data.push_back(safi.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.operation)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Context::RpfDefaultTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Context::RpfDefaultTable::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Context::RpfDefaultTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "is-active")
    {
        is_active = value;
    }
    if(value_path == "is-ital-registration-done")
    {
        is_ital_registration_done = value;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence = value;
    }
    if(value_path == "is-rib-convergence-received")
    {
        is_rib_convergence_received = value;
    }
    if(value_path == "is-rib-registration-done")
    {
        is_rib_registration_done = value;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations = value;
    }
    if(value_path == "safi")
    {
        safi = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "table-name")
    {
        table_name = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
}

Pim::Active::DefaultContext::Context::ExportRouteTarget::ExportRouteTarget()
    :
    anycast_rp{YType::boolean, "anycast-rp"},
    anycast_rp_marked{YType::boolean, "anycast-rp-marked"},
    bgp_auto_discovery{YType::boolean, "bgp-auto-discovery"},
    configured{YType::boolean, "configured"},
    route_target{YType::str, "route-target"},
    segment_border{YType::boolean, "segment-border"},
    update_pending{YType::boolean, "update-pending"}
{
    yang_name = "export-route-target"; yang_parent_name = "context";
}

Pim::Active::DefaultContext::Context::ExportRouteTarget::~ExportRouteTarget()
{
}

bool Pim::Active::DefaultContext::Context::ExportRouteTarget::has_data() const
{
    return anycast_rp.is_set
	|| anycast_rp_marked.is_set
	|| bgp_auto_discovery.is_set
	|| configured.is_set
	|| route_target.is_set
	|| segment_border.is_set
	|| update_pending.is_set;
}

bool Pim::Active::DefaultContext::Context::ExportRouteTarget::has_operation() const
{
    return is_set(operation)
	|| is_set(anycast_rp.operation)
	|| is_set(anycast_rp_marked.operation)
	|| is_set(bgp_auto_discovery.operation)
	|| is_set(configured.operation)
	|| is_set(route_target.operation)
	|| is_set(segment_border.operation)
	|| is_set(update_pending.operation);
}

std::string Pim::Active::DefaultContext::Context::ExportRouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export-route-target";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Context::ExportRouteTarget::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anycast_rp.is_set || is_set(anycast_rp.operation)) leaf_name_data.push_back(anycast_rp.get_name_leafdata());
    if (anycast_rp_marked.is_set || is_set(anycast_rp_marked.operation)) leaf_name_data.push_back(anycast_rp_marked.get_name_leafdata());
    if (bgp_auto_discovery.is_set || is_set(bgp_auto_discovery.operation)) leaf_name_data.push_back(bgp_auto_discovery.get_name_leafdata());
    if (configured.is_set || is_set(configured.operation)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (route_target.is_set || is_set(route_target.operation)) leaf_name_data.push_back(route_target.get_name_leafdata());
    if (segment_border.is_set || is_set(segment_border.operation)) leaf_name_data.push_back(segment_border.get_name_leafdata());
    if (update_pending.is_set || is_set(update_pending.operation)) leaf_name_data.push_back(update_pending.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Context::ExportRouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Context::ExportRouteTarget::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Context::ExportRouteTarget::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "anycast-rp")
    {
        anycast_rp = value;
    }
    if(value_path == "anycast-rp-marked")
    {
        anycast_rp_marked = value;
    }
    if(value_path == "bgp-auto-discovery")
    {
        bgp_auto_discovery = value;
    }
    if(value_path == "configured")
    {
        configured = value;
    }
    if(value_path == "route-target")
    {
        route_target = value;
    }
    if(value_path == "segment-border")
    {
        segment_border = value;
    }
    if(value_path == "update-pending")
    {
        update_pending = value;
    }
}

Pim::Active::DefaultContext::Context::ImportRouteTarget::ImportRouteTarget()
    :
    anycast_rp{YType::boolean, "anycast-rp"},
    anycast_rp_marked{YType::boolean, "anycast-rp-marked"},
    bgp_auto_discovery{YType::boolean, "bgp-auto-discovery"},
    configured{YType::boolean, "configured"},
    route_target{YType::str, "route-target"},
    segment_border{YType::boolean, "segment-border"},
    update_pending{YType::boolean, "update-pending"}
{
    yang_name = "import-route-target"; yang_parent_name = "context";
}

Pim::Active::DefaultContext::Context::ImportRouteTarget::~ImportRouteTarget()
{
}

bool Pim::Active::DefaultContext::Context::ImportRouteTarget::has_data() const
{
    return anycast_rp.is_set
	|| anycast_rp_marked.is_set
	|| bgp_auto_discovery.is_set
	|| configured.is_set
	|| route_target.is_set
	|| segment_border.is_set
	|| update_pending.is_set;
}

bool Pim::Active::DefaultContext::Context::ImportRouteTarget::has_operation() const
{
    return is_set(operation)
	|| is_set(anycast_rp.operation)
	|| is_set(anycast_rp_marked.operation)
	|| is_set(bgp_auto_discovery.operation)
	|| is_set(configured.operation)
	|| is_set(route_target.operation)
	|| is_set(segment_border.operation)
	|| is_set(update_pending.operation);
}

std::string Pim::Active::DefaultContext::Context::ImportRouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import-route-target";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Context::ImportRouteTarget::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anycast_rp.is_set || is_set(anycast_rp.operation)) leaf_name_data.push_back(anycast_rp.get_name_leafdata());
    if (anycast_rp_marked.is_set || is_set(anycast_rp_marked.operation)) leaf_name_data.push_back(anycast_rp_marked.get_name_leafdata());
    if (bgp_auto_discovery.is_set || is_set(bgp_auto_discovery.operation)) leaf_name_data.push_back(bgp_auto_discovery.get_name_leafdata());
    if (configured.is_set || is_set(configured.operation)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (route_target.is_set || is_set(route_target.operation)) leaf_name_data.push_back(route_target.get_name_leafdata());
    if (segment_border.is_set || is_set(segment_border.operation)) leaf_name_data.push_back(segment_border.get_name_leafdata());
    if (update_pending.is_set || is_set(update_pending.operation)) leaf_name_data.push_back(update_pending.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Context::ImportRouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Context::ImportRouteTarget::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Context::ImportRouteTarget::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "anycast-rp")
    {
        anycast_rp = value;
    }
    if(value_path == "anycast-rp-marked")
    {
        anycast_rp_marked = value;
    }
    if(value_path == "bgp-auto-discovery")
    {
        bgp_auto_discovery = value;
    }
    if(value_path == "configured")
    {
        configured = value;
    }
    if(value_path == "route-target")
    {
        route_target = value;
    }
    if(value_path == "segment-border")
    {
        segment_border = value;
    }
    if(value_path == "update-pending")
    {
        update_pending = value;
    }
}

Pim::Active::DefaultContext::Context::AnycastRpRange::AnycastRpRange()
    :
    ancast_rp_marked{YType::boolean, "ancast-rp-marked"},
    prefix_length{YType::uint8, "prefix-length"}
    	,
    prefix(std::make_shared<Pim::Active::DefaultContext::Context::AnycastRpRange::Prefix>())
{
    prefix->parent = this;
    children["prefix"] = prefix;

    yang_name = "anycast-rp-range"; yang_parent_name = "context";
}

Pim::Active::DefaultContext::Context::AnycastRpRange::~AnycastRpRange()
{
}

bool Pim::Active::DefaultContext::Context::AnycastRpRange::has_data() const
{
    return ancast_rp_marked.is_set
	|| prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Pim::Active::DefaultContext::Context::AnycastRpRange::has_operation() const
{
    return is_set(operation)
	|| is_set(ancast_rp_marked.operation)
	|| is_set(prefix_length.operation)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Pim::Active::DefaultContext::Context::AnycastRpRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "anycast-rp-range";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Context::AnycastRpRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ancast_rp_marked.is_set || is_set(ancast_rp_marked.operation)) leaf_name_data.push_back(ancast_rp_marked.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Context::AnycastRpRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix")
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix;
        }
        else
        {
            prefix = std::make_shared<Pim::Active::DefaultContext::Context::AnycastRpRange::Prefix>();
            prefix->parent = this;
            children["prefix"] = prefix;
        }
        return children.at("prefix");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Context::AnycastRpRange::get_children()
{
    if(children.find("prefix") == children.end())
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Context::AnycastRpRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ancast-rp-marked")
    {
        ancast_rp_marked = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Pim::Active::DefaultContext::Context::AnycastRpRange::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "prefix"; yang_parent_name = "anycast-rp-range";
}

Pim::Active::DefaultContext::Context::AnycastRpRange::Prefix::~Prefix()
{
}

bool Pim::Active::DefaultContext::Context::AnycastRpRange::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Context::AnycastRpRange::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Context::AnycastRpRange::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Context::AnycastRpRange::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/context/anycast-rp-range/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Context::AnycastRpRange::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Context::AnycastRpRange::Prefix::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Context::AnycastRpRange::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCounts()
{
    yang_name = "topology-entry-flag-route-counts"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::~TopologyEntryFlagRouteCounts()
{
}

bool Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::has_data() const
{
    for (std::size_t index=0; index<topology_entry_flag_route_count.size(); index++)
    {
        if(topology_entry_flag_route_count[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::has_operation() const
{
    for (std::size_t index=0; index<topology_entry_flag_route_count.size(); index++)
    {
        if(topology_entry_flag_route_count[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-entry-flag-route-counts";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "topology-entry-flag-route-count")
    {
        for(auto const & c : topology_entry_flag_route_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount>();
        c->parent = this;
        topology_entry_flag_route_count.push_back(std::move(c));
        children[segment_path] = topology_entry_flag_route_count.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::get_children()
{
    for (auto const & c : topology_entry_flag_route_count)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::TopologyEntryFlagRouteCount()
    :
    entry_flag{YType::enumeration, "entry-flag"},
    active_group_ranges{YType::uint32, "active-group-ranges"},
    group_ranges{YType::uint32, "group-ranges"},
    groute_count{YType::uint32, "groute-count"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    sg_route_count{YType::uint32, "sg-route-count"},
    sgr_route_count{YType::uint32, "sgr-route-count"}
    	,
    group_address(std::make_shared<Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress>())
{
    group_address->parent = this;
    children["group-address"] = group_address;

    yang_name = "topology-entry-flag-route-count"; yang_parent_name = "topology-entry-flag-route-counts";
}

Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::~TopologyEntryFlagRouteCount()
{
}

bool Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::has_data() const
{
    return entry_flag.is_set
	|| active_group_ranges.is_set
	|| group_ranges.is_set
	|| groute_count.is_set
	|| is_node_low_memory.is_set
	|| sg_route_count.is_set
	|| sgr_route_count.is_set
	|| (group_address !=  nullptr && group_address->has_data());
}

bool Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::has_operation() const
{
    return is_set(operation)
	|| is_set(entry_flag.operation)
	|| is_set(active_group_ranges.operation)
	|| is_set(group_ranges.operation)
	|| is_set(groute_count.operation)
	|| is_set(is_node_low_memory.operation)
	|| is_set(sg_route_count.operation)
	|| is_set(sgr_route_count.operation)
	|| (group_address !=  nullptr && group_address->has_operation());
}

std::string Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-entry-flag-route-count" <<"[entry-flag='" <<entry_flag <<"']";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/topology-entry-flag-route-counts/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_flag.is_set || is_set(entry_flag.operation)) leaf_name_data.push_back(entry_flag.get_name_leafdata());
    if (active_group_ranges.is_set || is_set(active_group_ranges.operation)) leaf_name_data.push_back(active_group_ranges.get_name_leafdata());
    if (group_ranges.is_set || is_set(group_ranges.operation)) leaf_name_data.push_back(group_ranges.get_name_leafdata());
    if (groute_count.is_set || is_set(groute_count.operation)) leaf_name_data.push_back(groute_count.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.operation)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());
    if (sg_route_count.is_set || is_set(sg_route_count.operation)) leaf_name_data.push_back(sg_route_count.get_name_leafdata());
    if (sgr_route_count.is_set || is_set(sgr_route_count.operation)) leaf_name_data.push_back(sgr_route_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address")
    {
        if(group_address != nullptr)
        {
            children["group-address"] = group_address;
        }
        else
        {
            group_address = std::make_shared<Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress>();
            group_address->parent = this;
            children["group-address"] = group_address;
        }
        return children.at("group-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_children()
{
    if(children.find("group-address") == children.end())
    {
        if(group_address != nullptr)
        {
            children["group-address"] = group_address;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry-flag")
    {
        entry_flag = value;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges = value;
    }
    if(value_path == "group-ranges")
    {
        group_ranges = value;
    }
    if(value_path == "groute-count")
    {
        groute_count = value;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count = value;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count = value;
    }
}

Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address"; yang_parent_name = "topology-entry-flag-route-count";
}

Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::~GroupAddress()
{
}

bool Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::RpfRedirect::RpfRedirect()
    :
    bundle_interfaces(std::make_shared<Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces>())
	,redirect_route_databases(std::make_shared<Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases>())
{
    bundle_interfaces->parent = this;
    children["bundle-interfaces"] = bundle_interfaces;

    redirect_route_databases->parent = this;
    children["redirect-route-databases"] = redirect_route_databases;

    yang_name = "rpf-redirect"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::RpfRedirect::~RpfRedirect()
{
}

bool Pim::Active::DefaultContext::RpfRedirect::has_data() const
{
    return (bundle_interfaces !=  nullptr && bundle_interfaces->has_data())
	|| (redirect_route_databases !=  nullptr && redirect_route_databases->has_data());
}

bool Pim::Active::DefaultContext::RpfRedirect::has_operation() const
{
    return is_set(operation)
	|| (bundle_interfaces !=  nullptr && bundle_interfaces->has_operation())
	|| (redirect_route_databases !=  nullptr && redirect_route_databases->has_operation());
}

std::string Pim::Active::DefaultContext::RpfRedirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-redirect";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::RpfRedirect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::RpfRedirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-interfaces")
    {
        if(bundle_interfaces != nullptr)
        {
            children["bundle-interfaces"] = bundle_interfaces;
        }
        else
        {
            bundle_interfaces = std::make_shared<Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces>();
            bundle_interfaces->parent = this;
            children["bundle-interfaces"] = bundle_interfaces;
        }
        return children.at("bundle-interfaces");
    }

    if(child_yang_name == "redirect-route-databases")
    {
        if(redirect_route_databases != nullptr)
        {
            children["redirect-route-databases"] = redirect_route_databases;
        }
        else
        {
            redirect_route_databases = std::make_shared<Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases>();
            redirect_route_databases->parent = this;
            children["redirect-route-databases"] = redirect_route_databases;
        }
        return children.at("redirect-route-databases");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::RpfRedirect::get_children()
{
    if(children.find("bundle-interfaces") == children.end())
    {
        if(bundle_interfaces != nullptr)
        {
            children["bundle-interfaces"] = bundle_interfaces;
        }
    }

    if(children.find("redirect-route-databases") == children.end())
    {
        if(redirect_route_databases != nullptr)
        {
            children["redirect-route-databases"] = redirect_route_databases;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::RpfRedirect::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabases()
{
    yang_name = "redirect-route-databases"; yang_parent_name = "rpf-redirect";
}

Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::~RedirectRouteDatabases()
{
}

bool Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::has_data() const
{
    for (std::size_t index=0; index<redirect_route_database.size(); index++)
    {
        if(redirect_route_database[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::has_operation() const
{
    for (std::size_t index=0; index<redirect_route_database.size(); index++)
    {
        if(redirect_route_database[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect-route-databases";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/rpf-redirect/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "redirect-route-database")
    {
        for(auto const & c : redirect_route_database)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase>();
        c->parent = this;
        redirect_route_database.push_back(std::move(c));
        children[segment_path] = redirect_route_database.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::get_children()
{
    for (auto const & c : redirect_route_database)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::RedirectRouteDatabase()
    :
    bandwidth{YType::uint32, "bandwidth"},
    group_address{YType::str, "group-address"},
    source_address{YType::str, "source-address"},
    uptime{YType::uint64, "uptime"}
    	,
    group_address_xr(std::make_shared<Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr>())
	,source_address_xr(std::make_shared<Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr>())
{
    group_address_xr->parent = this;
    children["group-address-xr"] = group_address_xr;

    source_address_xr->parent = this;
    children["source-address-xr"] = source_address_xr;

    yang_name = "redirect-route-database"; yang_parent_name = "redirect-route-databases";
}

Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::~RedirectRouteDatabase()
{
}

bool Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return bandwidth.is_set
	|| group_address.is_set
	|| source_address.is_set
	|| uptime.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (source_address_xr !=  nullptr && source_address_xr->has_data());
}

bool Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(group_address.operation)
	|| is_set(source_address.operation)
	|| is_set(uptime.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (source_address_xr !=  nullptr && source_address_xr->has_operation());
}

std::string Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect-route-database";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/rpf-redirect/redirect-route-databases/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
        else
        {
            group_address_xr = std::make_shared<Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr>();
            group_address_xr->parent = this;
            children["group-address-xr"] = group_address_xr;
        }
        return children.at("group-address-xr");
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "source-address-xr")
    {
        if(source_address_xr != nullptr)
        {
            children["source-address-xr"] = source_address_xr;
        }
        else
        {
            source_address_xr = std::make_shared<Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr>();
            source_address_xr->parent = this;
            children["source-address-xr"] = source_address_xr;
        }
        return children.at("source-address-xr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::get_children()
{
    if(children.find("group-address-xr") == children.end())
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
    }

    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("source-address-xr") == children.end())
    {
        if(source_address_xr != nullptr)
        {
            children["source-address-xr"] = source_address_xr;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "redirect-route-database";
}

Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::~GroupAddressXr()
{
}

bool Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/rpf-redirect/redirect-route-databases/redirect-route-database/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::SourceAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address-xr"; yang_parent_name = "redirect-route-database";
}

Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::~SourceAddressXr()
{
}

bool Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-xr";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/rpf-redirect/redirect-route-databases/redirect-route-database/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::Interface()
    :
    expiry{YType::uint64, "expiry"},
    interface_name{YType::str, "interface-name"},
    is_outgoing_interface{YType::boolean, "is-outgoing-interface"},
    is_rpf_interface{YType::boolean, "is-rpf-interface"},
    is_snoop_interface{YType::boolean, "is-snoop-interface"},
    uptime{YType::uint64, "uptime"}
    	,
    rpf_address(std::make_shared<Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress>())
{
    rpf_address->parent = this;
    children["rpf-address"] = rpf_address;

    yang_name = "interface"; yang_parent_name = "redirect-route-database";
}

Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::~Interface()
{
}

bool Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::has_data() const
{
    return expiry.is_set
	|| interface_name.is_set
	|| is_outgoing_interface.is_set
	|| is_rpf_interface.is_set
	|| is_snoop_interface.is_set
	|| uptime.is_set
	|| (rpf_address !=  nullptr && rpf_address->has_data());
}

bool Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(expiry.operation)
	|| is_set(interface_name.operation)
	|| is_set(is_outgoing_interface.operation)
	|| is_set(is_rpf_interface.operation)
	|| is_set(is_snoop_interface.operation)
	|| is_set(uptime.operation)
	|| (rpf_address !=  nullptr && rpf_address->has_operation());
}

std::string Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/rpf-redirect/redirect-route-databases/redirect-route-database/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiry.is_set || is_set(expiry.operation)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_outgoing_interface.is_set || is_set(is_outgoing_interface.operation)) leaf_name_data.push_back(is_outgoing_interface.get_name_leafdata());
    if (is_rpf_interface.is_set || is_set(is_rpf_interface.operation)) leaf_name_data.push_back(is_rpf_interface.get_name_leafdata());
    if (is_snoop_interface.is_set || is_set(is_snoop_interface.operation)) leaf_name_data.push_back(is_snoop_interface.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rpf-address")
    {
        if(rpf_address != nullptr)
        {
            children["rpf-address"] = rpf_address;
        }
        else
        {
            rpf_address = std::make_shared<Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress>();
            rpf_address->parent = this;
            children["rpf-address"] = rpf_address;
        }
        return children.at("rpf-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::get_children()
{
    if(children.find("rpf-address") == children.end())
    {
        if(rpf_address != nullptr)
        {
            children["rpf-address"] = rpf_address;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiry")
    {
        expiry = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-outgoing-interface")
    {
        is_outgoing_interface = value;
    }
    if(value_path == "is-rpf-interface")
    {
        is_rpf_interface = value;
    }
    if(value_path == "is-snoop-interface")
    {
        is_snoop_interface = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::RpfAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-address"; yang_parent_name = "interface";
}

Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::~RpfAddress()
{
}

bool Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-address";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/rpf-redirect/redirect-route-databases/redirect-route-database/interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterfaces()
{
    yang_name = "bundle-interfaces"; yang_parent_name = "rpf-redirect";
}

Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::~BundleInterfaces()
{
}

bool Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::has_data() const
{
    for (std::size_t index=0; index<bundle_interface.size(); index++)
    {
        if(bundle_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::has_operation() const
{
    for (std::size_t index=0; index<bundle_interface.size(); index++)
    {
        if(bundle_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interfaces";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/rpf-redirect/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-interface")
    {
        for(auto const & c : bundle_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface>();
        c->parent = this;
        bundle_interface.push_back(std::move(c));
        children[segment_path] = bundle_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::get_children()
{
    for (auto const & c : bundle_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface::BundleInterface()
    :
    allocated_bandwidth{YType::int32, "allocated-bandwidth"},
    allocated_threshold_bandwidth{YType::int32, "allocated-threshold-bandwidth"},
    available_bandwidth{YType::int32, "available-bandwidth"},
    available_threshold_bandwidth{YType::int32, "available-threshold-bandwidth"},
    bundle_name{YType::str, "bundle-name"},
    interface_name{YType::str, "interface-name"},
    rpf_redirect_bundle_name{YType::str, "rpf-redirect-bundle-name"},
    rpf_redirect_interface_name{YType::str, "rpf-redirect-interface-name"},
    snooping_bandwidth_used{YType::int32, "snooping-bandwidth-used"},
    topology_bandwidth_used{YType::int32, "topology-bandwidth-used"},
    total_bandwidth{YType::int32, "total-bandwidth"}
{
    yang_name = "bundle-interface"; yang_parent_name = "bundle-interfaces";
}

Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface::~BundleInterface()
{
}

bool Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface::has_data() const
{
    return allocated_bandwidth.is_set
	|| allocated_threshold_bandwidth.is_set
	|| available_bandwidth.is_set
	|| available_threshold_bandwidth.is_set
	|| bundle_name.is_set
	|| interface_name.is_set
	|| rpf_redirect_bundle_name.is_set
	|| rpf_redirect_interface_name.is_set
	|| snooping_bandwidth_used.is_set
	|| topology_bandwidth_used.is_set
	|| total_bandwidth.is_set;
}

bool Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(allocated_bandwidth.operation)
	|| is_set(allocated_threshold_bandwidth.operation)
	|| is_set(available_bandwidth.operation)
	|| is_set(available_threshold_bandwidth.operation)
	|| is_set(bundle_name.operation)
	|| is_set(interface_name.operation)
	|| is_set(rpf_redirect_bundle_name.operation)
	|| is_set(rpf_redirect_interface_name.operation)
	|| is_set(snooping_bandwidth_used.operation)
	|| is_set(topology_bandwidth_used.operation)
	|| is_set(total_bandwidth.operation);
}

std::string Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interface";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/rpf-redirect/bundle-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bandwidth.is_set || is_set(allocated_bandwidth.operation)) leaf_name_data.push_back(allocated_bandwidth.get_name_leafdata());
    if (allocated_threshold_bandwidth.is_set || is_set(allocated_threshold_bandwidth.operation)) leaf_name_data.push_back(allocated_threshold_bandwidth.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.operation)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (available_threshold_bandwidth.is_set || is_set(available_threshold_bandwidth.operation)) leaf_name_data.push_back(available_threshold_bandwidth.get_name_leafdata());
    if (bundle_name.is_set || is_set(bundle_name.operation)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (rpf_redirect_bundle_name.is_set || is_set(rpf_redirect_bundle_name.operation)) leaf_name_data.push_back(rpf_redirect_bundle_name.get_name_leafdata());
    if (rpf_redirect_interface_name.is_set || is_set(rpf_redirect_interface_name.operation)) leaf_name_data.push_back(rpf_redirect_interface_name.get_name_leafdata());
    if (snooping_bandwidth_used.is_set || is_set(snooping_bandwidth_used.operation)) leaf_name_data.push_back(snooping_bandwidth_used.get_name_leafdata());
    if (topology_bandwidth_used.is_set || is_set(topology_bandwidth_used.operation)) leaf_name_data.push_back(topology_bandwidth_used.get_name_leafdata());
    if (total_bandwidth.is_set || is_set(total_bandwidth.operation)) leaf_name_data.push_back(total_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allocated-bandwidth")
    {
        allocated_bandwidth = value;
    }
    if(value_path == "allocated-threshold-bandwidth")
    {
        allocated_threshold_bandwidth = value;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
    }
    if(value_path == "available-threshold-bandwidth")
    {
        available_threshold_bandwidth = value;
    }
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "rpf-redirect-bundle-name")
    {
        rpf_redirect_bundle_name = value;
    }
    if(value_path == "rpf-redirect-interface-name")
    {
        rpf_redirect_interface_name = value;
    }
    if(value_path == "snooping-bandwidth-used")
    {
        snooping_bandwidth_used = value;
    }
    if(value_path == "topology-bandwidth-used")
    {
        topology_bandwidth_used = value;
    }
    if(value_path == "total-bandwidth")
    {
        total_bandwidth = value;
    }
}

Pim::Active::DefaultContext::Tunnels::Tunnels()
{
    yang_name = "tunnels"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::Tunnels::~Tunnels()
{
}

bool Pim::Active::DefaultContext::Tunnels::has_data() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Tunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.push_back(std::move(c));
        children[segment_path] = tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Tunnels::get_children()
{
    for (auto const & c : tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Tunnels::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::Tunnels::Tunnel::Tunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    vrf_name{YType::str, "vrf-name"}
    	,
    group_address_netio(std::make_shared<Pim::Active::DefaultContext::Tunnels::Tunnel::GroupAddressNetio>())
	,rp_address(std::make_shared<Pim::Active::DefaultContext::Tunnels::Tunnel::RpAddress>())
	,source_address(std::make_shared<Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddress>())
	,source_address_netio(std::make_shared<Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddressNetio>())
{
    group_address_netio->parent = this;
    children["group-address-netio"] = group_address_netio;

    rp_address->parent = this;
    children["rp-address"] = rp_address;

    source_address->parent = this;
    children["source-address"] = source_address;

    source_address_netio->parent = this;
    children["source-address-netio"] = source_address_netio;

    yang_name = "tunnel"; yang_parent_name = "tunnels";
}

Pim::Active::DefaultContext::Tunnels::Tunnel::~Tunnel()
{
}

bool Pim::Active::DefaultContext::Tunnels::Tunnel::has_data() const
{
    return tunnel_name.is_set
	|| vrf_name.is_set
	|| (group_address_netio !=  nullptr && group_address_netio->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (source_address_netio !=  nullptr && source_address_netio->has_data());
}

bool Pim::Active::DefaultContext::Tunnels::Tunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_name.operation)
	|| is_set(vrf_name.operation)
	|| (group_address_netio !=  nullptr && group_address_netio->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (source_address_netio !=  nullptr && source_address_netio->has_operation());
}

std::string Pim::Active::DefaultContext::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[tunnel-name='" <<tunnel_name <<"']";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Tunnels::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address-netio")
    {
        if(group_address_netio != nullptr)
        {
            children["group-address-netio"] = group_address_netio;
        }
        else
        {
            group_address_netio = std::make_shared<Pim::Active::DefaultContext::Tunnels::Tunnel::GroupAddressNetio>();
            group_address_netio->parent = this;
            children["group-address-netio"] = group_address_netio;
        }
        return children.at("group-address-netio");
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
        else
        {
            rp_address = std::make_shared<Pim::Active::DefaultContext::Tunnels::Tunnel::RpAddress>();
            rp_address->parent = this;
            children["rp-address"] = rp_address;
        }
        return children.at("rp-address");
    }

    if(child_yang_name == "source-address")
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
        else
        {
            source_address = std::make_shared<Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddress>();
            source_address->parent = this;
            children["source-address"] = source_address;
        }
        return children.at("source-address");
    }

    if(child_yang_name == "source-address-netio")
    {
        if(source_address_netio != nullptr)
        {
            children["source-address-netio"] = source_address_netio;
        }
        else
        {
            source_address_netio = std::make_shared<Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddressNetio>();
            source_address_netio->parent = this;
            children["source-address-netio"] = source_address_netio;
        }
        return children.at("source-address-netio");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Tunnels::Tunnel::get_children()
{
    if(children.find("group-address-netio") == children.end())
    {
        if(group_address_netio != nullptr)
        {
            children["group-address-netio"] = group_address_netio;
        }
    }

    if(children.find("rp-address") == children.end())
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
    }

    if(children.find("source-address") == children.end())
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
    }

    if(children.find("source-address-netio") == children.end())
    {
        if(source_address_netio != nullptr)
        {
            children["source-address-netio"] = source_address_netio;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Tunnels::Tunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "tunnel";
}

Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddress::~SourceAddress()
{
}

bool Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddress::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Tunnels::Tunnel::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "tunnel";
}

Pim::Active::DefaultContext::Tunnels::Tunnel::RpAddress::~RpAddress()
{
}

bool Pim::Active::DefaultContext::Tunnels::Tunnel::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Tunnels::Tunnel::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Tunnels::Tunnel::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Tunnels::Tunnel::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Tunnels::Tunnel::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Tunnels::Tunnel::RpAddress::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Tunnels::Tunnel::RpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddressNetio::SourceAddressNetio()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address-netio"; yang_parent_name = "tunnel";
}

Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddressNetio::~SourceAddressNetio()
{
}

bool Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddressNetio::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddressNetio::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddressNetio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-netio";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddressNetio::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddressNetio' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddressNetio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddressNetio::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddressNetio::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Tunnels::Tunnel::GroupAddressNetio::GroupAddressNetio()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-netio"; yang_parent_name = "tunnel";
}

Pim::Active::DefaultContext::Tunnels::Tunnel::GroupAddressNetio::~GroupAddressNetio()
{
}

bool Pim::Active::DefaultContext::Tunnels::Tunnel::GroupAddressNetio::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Tunnels::Tunnel::GroupAddressNetio::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Tunnels::Tunnel::GroupAddressNetio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-netio";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Tunnels::Tunnel::GroupAddressNetio::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddressNetio' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Tunnels::Tunnel::GroupAddressNetio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Tunnels::Tunnel::GroupAddressNetio::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Tunnels::Tunnel::GroupAddressNetio::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoutes()
{
    yang_name = "multicast-static-routes"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::MulticastStaticRoutes::~MulticastStaticRoutes()
{
}

bool Pim::Active::DefaultContext::MulticastStaticRoutes::has_data() const
{
    for (std::size_t index=0; index<multicast_static_route.size(); index++)
    {
        if(multicast_static_route[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::MulticastStaticRoutes::has_operation() const
{
    for (std::size_t index=0; index<multicast_static_route.size(); index++)
    {
        if(multicast_static_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::MulticastStaticRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-static-routes";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::MulticastStaticRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::MulticastStaticRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "multicast-static-route")
    {
        for(auto const & c : multicast_static_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute>();
        c->parent = this;
        multicast_static_route.push_back(std::move(c));
        children[segment_path] = multicast_static_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::MulticastStaticRoutes::get_children()
{
    for (auto const & c : multicast_static_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::MulticastStaticRoutes::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::MulticastStaticRoute()
    :
    address{YType::str, "address"},
    distance{YType::uint32, "distance"},
    interface_name{YType::str, "interface-name"},
    is_via_lsm{YType::boolean, "is-via-lsm"},
    prefix_length{YType::int32, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"}
    	,
    nexthop(std::make_shared<Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop>())
	,prefix(std::make_shared<Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix>())
{
    nexthop->parent = this;
    children["nexthop"] = nexthop;

    prefix->parent = this;
    children["prefix"] = prefix;

    yang_name = "multicast-static-route"; yang_parent_name = "multicast-static-routes";
}

Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::~MulticastStaticRoute()
{
}

bool Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::has_data() const
{
    return address.is_set
	|| distance.is_set
	|| interface_name.is_set
	|| is_via_lsm.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| (nexthop !=  nullptr && nexthop->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(distance.operation)
	|| is_set(interface_name.operation)
	|| is_set(is_via_lsm.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| (nexthop !=  nullptr && nexthop->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-static-route";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/multicast-static-routes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_via_lsm.is_set || is_set(is_via_lsm.operation)) leaf_name_data.push_back(is_via_lsm.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nexthop")
    {
        if(nexthop != nullptr)
        {
            children["nexthop"] = nexthop;
        }
        else
        {
            nexthop = std::make_shared<Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop>();
            nexthop->parent = this;
            children["nexthop"] = nexthop;
        }
        return children.at("nexthop");
    }

    if(child_yang_name == "prefix")
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix;
        }
        else
        {
            prefix = std::make_shared<Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix>();
            prefix->parent = this;
            children["prefix"] = prefix;
        }
        return children.at("prefix");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::get_children()
{
    if(children.find("nexthop") == children.end())
    {
        if(nexthop != nullptr)
        {
            children["nexthop"] = nexthop;
        }
    }

    if(children.find("prefix") == children.end())
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
}

Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "prefix"; yang_parent_name = "multicast-static-route";
}

Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix::~Prefix()
{
}

bool Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/multicast-static-routes/multicast-static-route/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::Nexthop()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "nexthop"; yang_parent_name = "multicast-static-route";
}

Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::~Nexthop()
{
}

bool Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/multicast-static-routes/multicast-static-route/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSources()
{
    yang_name = "group-map-match-sources"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::GroupMapMatchSources::~GroupMapMatchSources()
{
}

bool Pim::Active::DefaultContext::GroupMapMatchSources::has_data() const
{
    for (std::size_t index=0; index<group_map_match_source.size(); index++)
    {
        if(group_map_match_source[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::GroupMapMatchSources::has_operation() const
{
    for (std::size_t index=0; index<group_map_match_source.size(); index++)
    {
        if(group_map_match_source[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::GroupMapMatchSources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-match-sources";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::GroupMapMatchSources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::GroupMapMatchSources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-map-match-source")
    {
        for(auto const & c : group_map_match_source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource>();
        c->parent = this;
        group_map_match_source.push_back(std::move(c));
        children[segment_path] = group_map_match_source.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::GroupMapMatchSources::get_children()
{
    for (auto const & c : group_map_match_source)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::GroupMapMatchSources::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapMatchSource()
    :
    group_address{YType::str, "group-address"},
    expires{YType::uint64, "expires"},
    holdtime{YType::int32, "holdtime"},
    uptime{YType::uint64, "uptime"}
    	,
    group_map_information(std::make_shared<Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation>())
	,source_of_information(std::make_shared<Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation>())
{
    group_map_information->parent = this;
    children["group-map-information"] = group_map_information;

    source_of_information->parent = this;
    children["source-of-information"] = source_of_information;

    yang_name = "group-map-match-source"; yang_parent_name = "group-map-match-sources";
}

Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::~GroupMapMatchSource()
{
}

bool Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::has_data() const
{
    return group_address.is_set
	|| expires.is_set
	|| holdtime.is_set
	|| uptime.is_set
	|| (group_map_information !=  nullptr && group_map_information->has_data())
	|| (source_of_information !=  nullptr && source_of_information->has_data());
}

bool Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(expires.operation)
	|| is_set(holdtime.operation)
	|| is_set(uptime.operation)
	|| (group_map_information !=  nullptr && group_map_information->has_operation())
	|| (source_of_information !=  nullptr && source_of_information->has_operation());
}

std::string Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-match-source" <<"[group-address='" <<group_address <<"']";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/group-map-match-sources/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (expires.is_set || is_set(expires.operation)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (holdtime.is_set || is_set(holdtime.operation)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-map-information")
    {
        if(group_map_information != nullptr)
        {
            children["group-map-information"] = group_map_information;
        }
        else
        {
            group_map_information = std::make_shared<Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation>();
            group_map_information->parent = this;
            children["group-map-information"] = group_map_information;
        }
        return children.at("group-map-information");
    }

    if(child_yang_name == "source-of-information")
    {
        if(source_of_information != nullptr)
        {
            children["source-of-information"] = source_of_information;
        }
        else
        {
            source_of_information = std::make_shared<Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation>();
            source_of_information->parent = this;
            children["source-of-information"] = source_of_information;
        }
        return children.at("source-of-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::get_children()
{
    if(children.find("group-map-information") == children.end())
    {
        if(group_map_information != nullptr)
        {
            children["group-map-information"] = group_map_information;
        }
    }

    if(children.find("source-of-information") == children.end())
    {
        if(source_of_information != nullptr)
        {
            children["source-of-information"] = source_of_information;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "expires")
    {
        expires = value;
    }
    if(value_path == "holdtime")
    {
        holdtime = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::SourceOfInformation()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-of-information"; yang_parent_name = "group-map-match-source";
}

Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::~SourceOfInformation()
{
}

bool Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-of-information";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceOfInformation' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::GroupMapInformation()
    :
    client{YType::enumeration, "client"},
    group_count{YType::uint32, "group-count"},
    is_override{YType::boolean, "is-override"},
    is_used{YType::boolean, "is-used"},
    mrib_active{YType::boolean, "mrib-active"},
    prefix_length{YType::int32, "prefix-length"},
    priority{YType::uint32, "priority"},
    protocol{YType::enumeration, "protocol"}
    	,
    prefix(std::make_shared<Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix>())
	,rp_address(std::make_shared<Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress>())
{
    prefix->parent = this;
    children["prefix"] = prefix;

    rp_address->parent = this;
    children["rp-address"] = rp_address;

    yang_name = "group-map-information"; yang_parent_name = "group-map-match-source";
}

Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::~GroupMapInformation()
{
}

bool Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::has_data() const
{
    return client.is_set
	|| group_count.is_set
	|| is_override.is_set
	|| is_used.is_set
	|| mrib_active.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| protocol.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data());
}

bool Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(client.operation)
	|| is_set(group_count.operation)
	|| is_set(is_override.operation)
	|| is_set(is_used.operation)
	|| is_set(mrib_active.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation)
	|| is_set(protocol.operation)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation());
}

std::string Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-information";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupMapInformation' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.operation)) leaf_name_data.push_back(client.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (is_override.is_set || is_set(is_override.operation)) leaf_name_data.push_back(is_override.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (mrib_active.is_set || is_set(mrib_active.operation)) leaf_name_data.push_back(mrib_active.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix")
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix;
        }
        else
        {
            prefix = std::make_shared<Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix>();
            prefix->parent = this;
            children["prefix"] = prefix;
        }
        return children.at("prefix");
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
        else
        {
            rp_address = std::make_shared<Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress>();
            rp_address->parent = this;
            children["rp-address"] = rp_address;
        }
        return children.at("rp-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::get_children()
{
    if(children.find("prefix") == children.end())
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix;
        }
    }

    if(children.find("rp-address") == children.end())
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client")
    {
        client = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "is-override")
    {
        is_override = value;
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
    if(value_path == "mrib-active")
    {
        mrib_active = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "prefix"; yang_parent_name = "group-map-information";
}

Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::~Prefix()
{
}

bool Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "group-map-information";
}

Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::~RpAddress()
{
}

bool Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::DefaultContext::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "default-context";
}

Pim::Active::DefaultContext::Neighbors::~Neighbors()
{
}

bool Pim::Active::DefaultContext::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::DefaultContext::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Neighbors::get_children()
{
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::DefaultContext::Neighbors::Neighbor::Neighbor()
    :
    dr_priority{YType::uint32, "dr-priority"},
    expires{YType::uint64, "expires"},
    expiry_timer{YType::uint64, "expiry-timer"},
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_bfd_state{YType::boolean, "is-bfd-state"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_dr_priority_capable{YType::boolean, "is-dr-priority-capable"},
    is_ecmp_redirect_capable{YType::boolean, "is-ecmp-redirect-capable"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    is_this_neighbor_dr{YType::boolean, "is-this-neighbor-dr"},
    is_this_neighbor_us{YType::boolean, "is-this-neighbor-us"},
    neighbor_address{YType::str, "neighbor-address"},
    override_interval{YType::uint16, "override-interval"},
    propagation_delay{YType::uint16, "propagation-delay"},
    uptime{YType::uint64, "uptime"}
{
    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Pim::Active::DefaultContext::Neighbors::Neighbor::~Neighbor()
{
}

bool Pim::Active::DefaultContext::Neighbors::Neighbor::has_data() const
{
    for (std::size_t index=0; index<neighbor_address_xr.size(); index++)
    {
        if(neighbor_address_xr[index]->has_data())
            return true;
    }
    return dr_priority.is_set
	|| expires.is_set
	|| expiry_timer.is_set
	|| interface_name.is_set
	|| interface_name_xr.is_set
	|| is_batch_asserts_capable.is_set
	|| is_bfd_state.is_set
	|| is_bidirectional_capable.is_set
	|| is_dr_priority_capable.is_set
	|| is_ecmp_redirect_capable.is_set
	|| is_proxy_capable.is_set
	|| is_this_neighbor_dr.is_set
	|| is_this_neighbor_us.is_set
	|| neighbor_address.is_set
	|| override_interval.is_set
	|| propagation_delay.is_set
	|| uptime.is_set;
}

bool Pim::Active::DefaultContext::Neighbors::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<neighbor_address_xr.size(); index++)
    {
        if(neighbor_address_xr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(dr_priority.operation)
	|| is_set(expires.operation)
	|| is_set(expiry_timer.operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_batch_asserts_capable.operation)
	|| is_set(is_bfd_state.operation)
	|| is_set(is_bidirectional_capable.operation)
	|| is_set(is_dr_priority_capable.operation)
	|| is_set(is_ecmp_redirect_capable.operation)
	|| is_set(is_proxy_capable.operation)
	|| is_set(is_this_neighbor_dr.operation)
	|| is_set(is_this_neighbor_us.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(override_interval.operation)
	|| is_set(propagation_delay.operation)
	|| is_set(uptime.operation);
}

std::string Pim::Active::DefaultContext::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/neighbors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dr_priority.is_set || is_set(dr_priority.operation)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (expires.is_set || is_set(expires.operation)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (expiry_timer.is_set || is_set(expiry_timer.operation)) leaf_name_data.push_back(expiry_timer.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.operation)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_bfd_state.is_set || is_set(is_bfd_state.operation)) leaf_name_data.push_back(is_bfd_state.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.operation)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_dr_priority_capable.is_set || is_set(is_dr_priority_capable.operation)) leaf_name_data.push_back(is_dr_priority_capable.get_name_leafdata());
    if (is_ecmp_redirect_capable.is_set || is_set(is_ecmp_redirect_capable.operation)) leaf_name_data.push_back(is_ecmp_redirect_capable.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.operation)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (is_this_neighbor_dr.is_set || is_set(is_this_neighbor_dr.operation)) leaf_name_data.push_back(is_this_neighbor_dr.get_name_leafdata());
    if (is_this_neighbor_us.is_set || is_set(is_this_neighbor_us.operation)) leaf_name_data.push_back(is_this_neighbor_us.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.operation)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.operation)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address-xr")
    {
        for(auto const & c : neighbor_address_xr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::DefaultContext::Neighbors::Neighbor::NeighborAddressXr>();
        c->parent = this;
        neighbor_address_xr.push_back(std::move(c));
        children[segment_path] = neighbor_address_xr.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Neighbors::Neighbor::get_children()
{
    for (auto const & c : neighbor_address_xr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::DefaultContext::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dr-priority")
    {
        dr_priority = value;
    }
    if(value_path == "expires")
    {
        expires = value;
    }
    if(value_path == "expiry-timer")
    {
        expiry_timer = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
    }
    if(value_path == "is-bfd-state")
    {
        is_bfd_state = value;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
    }
    if(value_path == "is-dr-priority-capable")
    {
        is_dr_priority_capable = value;
    }
    if(value_path == "is-ecmp-redirect-capable")
    {
        is_ecmp_redirect_capable = value;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
    }
    if(value_path == "is-this-neighbor-dr")
    {
        is_this_neighbor_dr = value;
    }
    if(value_path == "is-this-neighbor-us")
    {
        is_this_neighbor_us = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Pim::Active::DefaultContext::Neighbors::Neighbor::NeighborAddressXr::NeighborAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "neighbor-address-xr"; yang_parent_name = "neighbor";
}

Pim::Active::DefaultContext::Neighbors::Neighbor::NeighborAddressXr::~NeighborAddressXr()
{
}

bool Pim::Active::DefaultContext::Neighbors::Neighbor::NeighborAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Neighbors::Neighbor::NeighborAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::DefaultContext::Neighbors::Neighbor::NeighborAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address-xr";

    return path_buffer.str();

}

EntityPath Pim::Active::DefaultContext::Neighbors::Neighbor::NeighborAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/neighbors/neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Neighbors::Neighbor::NeighborAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::DefaultContext::Neighbors::Neighbor::NeighborAddressXr::get_children()
{
    return children;
}

void Pim::Active::DefaultContext::Neighbors::Neighbor::NeighborAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Process::Process()
    :
    checkpoint_statistics(std::make_shared<Pim::Active::Process::CheckpointStatistics>())
	,issu(std::make_shared<Pim::Active::Process::Issu>())
	,nsf(std::make_shared<Pim::Active::Process::Nsf>())
	,nsr(std::make_shared<Pim::Active::Process::Nsr>())
	,summary(std::make_shared<Pim::Active::Process::Summary>())
{
    checkpoint_statistics->parent = this;
    children["checkpoint-statistics"] = checkpoint_statistics;

    issu->parent = this;
    children["issu"] = issu;

    nsf->parent = this;
    children["nsf"] = nsf;

    nsr->parent = this;
    children["nsr"] = nsr;

    summary->parent = this;
    children["summary"] = summary;

    yang_name = "process"; yang_parent_name = "active";
}

Pim::Active::Process::~Process()
{
}

bool Pim::Active::Process::has_data() const
{
    return (checkpoint_statistics !=  nullptr && checkpoint_statistics->has_data())
	|| (issu !=  nullptr && issu->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Pim::Active::Process::has_operation() const
{
    return is_set(operation)
	|| (checkpoint_statistics !=  nullptr && checkpoint_statistics->has_operation())
	|| (issu !=  nullptr && issu->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Pim::Active::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";

    return path_buffer.str();

}

EntityPath Pim::Active::Process::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "checkpoint-statistics")
    {
        if(checkpoint_statistics != nullptr)
        {
            children["checkpoint-statistics"] = checkpoint_statistics;
        }
        else
        {
            checkpoint_statistics = std::make_shared<Pim::Active::Process::CheckpointStatistics>();
            checkpoint_statistics->parent = this;
            children["checkpoint-statistics"] = checkpoint_statistics;
        }
        return children.at("checkpoint-statistics");
    }

    if(child_yang_name == "issu")
    {
        if(issu != nullptr)
        {
            children["issu"] = issu;
        }
        else
        {
            issu = std::make_shared<Pim::Active::Process::Issu>();
            issu->parent = this;
            children["issu"] = issu;
        }
        return children.at("issu");
    }

    if(child_yang_name == "nsf")
    {
        if(nsf != nullptr)
        {
            children["nsf"] = nsf;
        }
        else
        {
            nsf = std::make_shared<Pim::Active::Process::Nsf>();
            nsf->parent = this;
            children["nsf"] = nsf;
        }
        return children.at("nsf");
    }

    if(child_yang_name == "nsr")
    {
        if(nsr != nullptr)
        {
            children["nsr"] = nsr;
        }
        else
        {
            nsr = std::make_shared<Pim::Active::Process::Nsr>();
            nsr->parent = this;
            children["nsr"] = nsr;
        }
        return children.at("nsr");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<Pim::Active::Process::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::Process::get_children()
{
    if(children.find("checkpoint-statistics") == children.end())
    {
        if(checkpoint_statistics != nullptr)
        {
            children["checkpoint-statistics"] = checkpoint_statistics;
        }
    }

    if(children.find("issu") == children.end())
    {
        if(issu != nullptr)
        {
            children["issu"] = issu;
        }
    }

    if(children.find("nsf") == children.end())
    {
        if(nsf != nullptr)
        {
            children["nsf"] = nsf;
        }
    }

    if(children.find("nsr") == children.end())
    {
        if(nsr != nullptr)
        {
            children["nsr"] = nsr;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    return children;
}

void Pim::Active::Process::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Process::CheckpointStatistics::CheckpointStatistics()
{
    yang_name = "checkpoint-statistics"; yang_parent_name = "process";
}

Pim::Active::Process::CheckpointStatistics::~CheckpointStatistics()
{
}

bool Pim::Active::Process::CheckpointStatistics::has_data() const
{
    for (std::size_t index=0; index<checkpoint_table.size(); index++)
    {
        if(checkpoint_table[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Process::CheckpointStatistics::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_table.size(); index++)
    {
        if(checkpoint_table[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Process::CheckpointStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-statistics";

    return path_buffer.str();

}

EntityPath Pim::Active::Process::CheckpointStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Process::CheckpointStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "checkpoint-table")
    {
        for(auto const & c : checkpoint_table)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::Process::CheckpointStatistics::CheckpointTable>();
        c->parent = this;
        checkpoint_table.push_back(std::move(c));
        children[segment_path] = checkpoint_table.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::Process::CheckpointStatistics::get_children()
{
    for (auto const & c : checkpoint_table)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::Process::CheckpointStatistics::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Process::CheckpointStatistics::CheckpointTable::CheckpointTable()
    :
    is_mirrored{YType::boolean, "is-mirrored"},
    statistic{YType::uint32, "statistic"},
    table_description{YType::str, "table-description"},
    table_name{YType::uint32, "table-name"}
{
    yang_name = "checkpoint-table"; yang_parent_name = "checkpoint-statistics";
}

Pim::Active::Process::CheckpointStatistics::CheckpointTable::~CheckpointTable()
{
}

bool Pim::Active::Process::CheckpointStatistics::CheckpointTable::has_data() const
{
    for (auto const & leaf : statistic.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return is_mirrored.is_set
	|| table_description.is_set
	|| table_name.is_set;
}

bool Pim::Active::Process::CheckpointStatistics::CheckpointTable::has_operation() const
{
    for (auto const & leaf : statistic.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(is_mirrored.operation)
	|| is_set(statistic.operation)
	|| is_set(table_description.operation)
	|| is_set(table_name.operation);
}

std::string Pim::Active::Process::CheckpointStatistics::CheckpointTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-table";

    return path_buffer.str();

}

EntityPath Pim::Active::Process::CheckpointStatistics::CheckpointTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/process/checkpoint-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_mirrored.is_set || is_set(is_mirrored.operation)) leaf_name_data.push_back(is_mirrored.get_name_leafdata());
    if (table_description.is_set || is_set(table_description.operation)) leaf_name_data.push_back(table_description.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.operation)) leaf_name_data.push_back(table_name.get_name_leafdata());

    auto statistic_name_datas = statistic.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), statistic_name_datas.begin(), statistic_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Process::CheckpointStatistics::CheckpointTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::Process::CheckpointStatistics::CheckpointTable::get_children()
{
    return children;
}

void Pim::Active::Process::CheckpointStatistics::CheckpointTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-mirrored")
    {
        is_mirrored = value;
    }
    if(value_path == "statistic")
    {
        statistic.append(value);
    }
    if(value_path == "table-description")
    {
        table_description = value;
    }
    if(value_path == "table-name")
    {
        table_name = value;
    }
}

Pim::Active::Process::Nsr::Nsr()
    :
    count_connection_dn{YType::uint32, "count-connection-dn"},
    count_connection_up{YType::uint32, "count-connection-up"},
    count_rmf_not_ready{YType::uint32, "count-rmf-not-ready"},
    count_rmf_ready{YType::uint32, "count-rmf-ready"},
    last_connection_dn{YType::uint64, "last-connection-dn"},
    last_connection_up{YType::uint64, "last-connection-up"},
    last_rmf_not_ready{YType::uint64, "last-rmf-not-ready"},
    last_rmf_ready{YType::uint64, "last-rmf-ready"},
    partner_connected{YType::boolean, "partner-connected"},
    rmf_notification_done{YType::boolean, "rmf-notification-done"},
    rmf_timer_expiry{YType::uint64, "rmf-timer-expiry"},
    rmf_timer_valid{YType::boolean, "rmf-timer-valid"},
    state{YType::uint8, "state"}
{
    yang_name = "nsr"; yang_parent_name = "process";
}

Pim::Active::Process::Nsr::~Nsr()
{
}

bool Pim::Active::Process::Nsr::has_data() const
{
    return count_connection_dn.is_set
	|| count_connection_up.is_set
	|| count_rmf_not_ready.is_set
	|| count_rmf_ready.is_set
	|| last_connection_dn.is_set
	|| last_connection_up.is_set
	|| last_rmf_not_ready.is_set
	|| last_rmf_ready.is_set
	|| partner_connected.is_set
	|| rmf_notification_done.is_set
	|| rmf_timer_expiry.is_set
	|| rmf_timer_valid.is_set
	|| state.is_set;
}

bool Pim::Active::Process::Nsr::has_operation() const
{
    return is_set(operation)
	|| is_set(count_connection_dn.operation)
	|| is_set(count_connection_up.operation)
	|| is_set(count_rmf_not_ready.operation)
	|| is_set(count_rmf_ready.operation)
	|| is_set(last_connection_dn.operation)
	|| is_set(last_connection_up.operation)
	|| is_set(last_rmf_not_ready.operation)
	|| is_set(last_rmf_ready.operation)
	|| is_set(partner_connected.operation)
	|| is_set(rmf_notification_done.operation)
	|| is_set(rmf_timer_expiry.operation)
	|| is_set(rmf_timer_valid.operation)
	|| is_set(state.operation);
}

std::string Pim::Active::Process::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";

    return path_buffer.str();

}

EntityPath Pim::Active::Process::Nsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count_connection_dn.is_set || is_set(count_connection_dn.operation)) leaf_name_data.push_back(count_connection_dn.get_name_leafdata());
    if (count_connection_up.is_set || is_set(count_connection_up.operation)) leaf_name_data.push_back(count_connection_up.get_name_leafdata());
    if (count_rmf_not_ready.is_set || is_set(count_rmf_not_ready.operation)) leaf_name_data.push_back(count_rmf_not_ready.get_name_leafdata());
    if (count_rmf_ready.is_set || is_set(count_rmf_ready.operation)) leaf_name_data.push_back(count_rmf_ready.get_name_leafdata());
    if (last_connection_dn.is_set || is_set(last_connection_dn.operation)) leaf_name_data.push_back(last_connection_dn.get_name_leafdata());
    if (last_connection_up.is_set || is_set(last_connection_up.operation)) leaf_name_data.push_back(last_connection_up.get_name_leafdata());
    if (last_rmf_not_ready.is_set || is_set(last_rmf_not_ready.operation)) leaf_name_data.push_back(last_rmf_not_ready.get_name_leafdata());
    if (last_rmf_ready.is_set || is_set(last_rmf_ready.operation)) leaf_name_data.push_back(last_rmf_ready.get_name_leafdata());
    if (partner_connected.is_set || is_set(partner_connected.operation)) leaf_name_data.push_back(partner_connected.get_name_leafdata());
    if (rmf_notification_done.is_set || is_set(rmf_notification_done.operation)) leaf_name_data.push_back(rmf_notification_done.get_name_leafdata());
    if (rmf_timer_expiry.is_set || is_set(rmf_timer_expiry.operation)) leaf_name_data.push_back(rmf_timer_expiry.get_name_leafdata());
    if (rmf_timer_valid.is_set || is_set(rmf_timer_valid.operation)) leaf_name_data.push_back(rmf_timer_valid.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Process::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::Process::Nsr::get_children()
{
    return children;
}

void Pim::Active::Process::Nsr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count-connection-dn")
    {
        count_connection_dn = value;
    }
    if(value_path == "count-connection-up")
    {
        count_connection_up = value;
    }
    if(value_path == "count-rmf-not-ready")
    {
        count_rmf_not_ready = value;
    }
    if(value_path == "count-rmf-ready")
    {
        count_rmf_ready = value;
    }
    if(value_path == "last-connection-dn")
    {
        last_connection_dn = value;
    }
    if(value_path == "last-connection-up")
    {
        last_connection_up = value;
    }
    if(value_path == "last-rmf-not-ready")
    {
        last_rmf_not_ready = value;
    }
    if(value_path == "last-rmf-ready")
    {
        last_rmf_ready = value;
    }
    if(value_path == "partner-connected")
    {
        partner_connected = value;
    }
    if(value_path == "rmf-notification-done")
    {
        rmf_notification_done = value;
    }
    if(value_path == "rmf-timer-expiry")
    {
        rmf_timer_expiry = value;
    }
    if(value_path == "rmf-timer-valid")
    {
        rmf_timer_valid = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Pim::Active::Process::Summary::Summary()
    :
    bsr_candidate_rp_set_count{YType::uint32, "bsr-candidate-rp-set-count"},
    bsr_candidate_rp_set_limit{YType::uint32, "bsr-candidate-rp-set-limit"},
    bsr_candidate_rp_set_threshold{YType::uint32, "bsr-candidate-rp-set-threshold"},
    bsr_range_threshold{YType::uint32, "bsr-range-threshold"},
    bsr_ranges_count{YType::uint32, "bsr-ranges-count"},
    bsr_ranges_limit{YType::uint32, "bsr-ranges-limit"},
    global_auto_rp_ranges_limit{YType::uint32, "global-auto-rp-ranges-limit"},
    global_bsr_candidate_rp_set_count{YType::uint32, "global-bsr-candidate-rp-set-count"},
    global_bsr_candidate_rp_set_limit{YType::uint32, "global-bsr-candidate-rp-set-limit"},
    global_bsr_candidate_rp_set_threshold{YType::uint32, "global-bsr-candidate-rp-set-threshold"},
    global_bsr_ranges_count{YType::uint32, "global-bsr-ranges-count"},
    global_bsr_ranges_limit{YType::uint32, "global-bsr-ranges-limit"},
    global_bsr_ranges_threshold{YType::uint32, "global-bsr-ranges-threshold"},
    global_register_limit{YType::uint32, "global-register-limit"},
    is_bsr_ranges_threshold_reached{YType::boolean, "is-bsr-ranges-threshold-reached"},
    is_global_auto_rp_ranges_limit_reached{YType::boolean, "is-global-auto-rp-ranges-limit-reached"},
    is_global_bsr_ranges_limit_reached{YType::boolean, "is-global-bsr-ranges-limit-reached"},
    is_global_register_limit_reached{YType::boolean, "is-global-register-limit-reached"},
    is_global_route_limit_reached{YType::boolean, "is-global-route-limit-reached"},
    is_global_rxi_limit_reached{YType::boolean, "is-global-rxi-limit-reached"},
    is_maximum_enforcement_disabled{YType::boolean, "is-maximum-enforcement-disabled"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    is_ranges_limit_reached{YType::boolean, "is-ranges-limit-reached"},
    is_route_limit_reached{YType::boolean, "is-route-limit-reached"},
    ranges_count{YType::uint32, "ranges-count"},
    ranges_limit{YType::uint32, "ranges-limit"},
    ranges_threshold{YType::uint32, "ranges-threshold"},
    register_count{YType::uint32, "register-count"},
    register_limit{YType::uint32, "register-limit"},
    register_limit_reached{YType::boolean, "register-limit-reached"},
    register_threshold{YType::uint32, "register-threshold"},
    route_count{YType::uint32, "route-count"},
    route_limit{YType::uint32, "route-limit"},
    route_low_water_mark{YType::uint32, "route-low-water-mark"},
    route_threshold{YType::uint32, "route-threshold"},
    rxi_limit_reached{YType::boolean, "rxi-limit-reached"},
    rxi_low_water_mark{YType::uint32, "rxi-low-water-mark"},
    topology_interface_state_count{YType::uint32, "topology-interface-state-count"},
    topology_interface_state_limit{YType::uint32, "topology-interface-state-limit"},
    topology_interface_state_threshold{YType::uint32, "topology-interface-state-threshold"}
{
    yang_name = "summary"; yang_parent_name = "process";
}

Pim::Active::Process::Summary::~Summary()
{
}

bool Pim::Active::Process::Summary::has_data() const
{
    return bsr_candidate_rp_set_count.is_set
	|| bsr_candidate_rp_set_limit.is_set
	|| bsr_candidate_rp_set_threshold.is_set
	|| bsr_range_threshold.is_set
	|| bsr_ranges_count.is_set
	|| bsr_ranges_limit.is_set
	|| global_auto_rp_ranges_limit.is_set
	|| global_bsr_candidate_rp_set_count.is_set
	|| global_bsr_candidate_rp_set_limit.is_set
	|| global_bsr_candidate_rp_set_threshold.is_set
	|| global_bsr_ranges_count.is_set
	|| global_bsr_ranges_limit.is_set
	|| global_bsr_ranges_threshold.is_set
	|| global_register_limit.is_set
	|| is_bsr_ranges_threshold_reached.is_set
	|| is_global_auto_rp_ranges_limit_reached.is_set
	|| is_global_bsr_ranges_limit_reached.is_set
	|| is_global_register_limit_reached.is_set
	|| is_global_route_limit_reached.is_set
	|| is_global_rxi_limit_reached.is_set
	|| is_maximum_enforcement_disabled.is_set
	|| is_node_low_memory.is_set
	|| is_ranges_limit_reached.is_set
	|| is_route_limit_reached.is_set
	|| ranges_count.is_set
	|| ranges_limit.is_set
	|| ranges_threshold.is_set
	|| register_count.is_set
	|| register_limit.is_set
	|| register_limit_reached.is_set
	|| register_threshold.is_set
	|| route_count.is_set
	|| route_limit.is_set
	|| route_low_water_mark.is_set
	|| route_threshold.is_set
	|| rxi_limit_reached.is_set
	|| rxi_low_water_mark.is_set
	|| topology_interface_state_count.is_set
	|| topology_interface_state_limit.is_set
	|| topology_interface_state_threshold.is_set;
}

bool Pim::Active::Process::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(bsr_candidate_rp_set_count.operation)
	|| is_set(bsr_candidate_rp_set_limit.operation)
	|| is_set(bsr_candidate_rp_set_threshold.operation)
	|| is_set(bsr_range_threshold.operation)
	|| is_set(bsr_ranges_count.operation)
	|| is_set(bsr_ranges_limit.operation)
	|| is_set(global_auto_rp_ranges_limit.operation)
	|| is_set(global_bsr_candidate_rp_set_count.operation)
	|| is_set(global_bsr_candidate_rp_set_limit.operation)
	|| is_set(global_bsr_candidate_rp_set_threshold.operation)
	|| is_set(global_bsr_ranges_count.operation)
	|| is_set(global_bsr_ranges_limit.operation)
	|| is_set(global_bsr_ranges_threshold.operation)
	|| is_set(global_register_limit.operation)
	|| is_set(is_bsr_ranges_threshold_reached.operation)
	|| is_set(is_global_auto_rp_ranges_limit_reached.operation)
	|| is_set(is_global_bsr_ranges_limit_reached.operation)
	|| is_set(is_global_register_limit_reached.operation)
	|| is_set(is_global_route_limit_reached.operation)
	|| is_set(is_global_rxi_limit_reached.operation)
	|| is_set(is_maximum_enforcement_disabled.operation)
	|| is_set(is_node_low_memory.operation)
	|| is_set(is_ranges_limit_reached.operation)
	|| is_set(is_route_limit_reached.operation)
	|| is_set(ranges_count.operation)
	|| is_set(ranges_limit.operation)
	|| is_set(ranges_threshold.operation)
	|| is_set(register_count.operation)
	|| is_set(register_limit.operation)
	|| is_set(register_limit_reached.operation)
	|| is_set(register_threshold.operation)
	|| is_set(route_count.operation)
	|| is_set(route_limit.operation)
	|| is_set(route_low_water_mark.operation)
	|| is_set(route_threshold.operation)
	|| is_set(rxi_limit_reached.operation)
	|| is_set(rxi_low_water_mark.operation)
	|| is_set(topology_interface_state_count.operation)
	|| is_set(topology_interface_state_limit.operation)
	|| is_set(topology_interface_state_threshold.operation);
}

std::string Pim::Active::Process::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath Pim::Active::Process::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_candidate_rp_set_count.is_set || is_set(bsr_candidate_rp_set_count.operation)) leaf_name_data.push_back(bsr_candidate_rp_set_count.get_name_leafdata());
    if (bsr_candidate_rp_set_limit.is_set || is_set(bsr_candidate_rp_set_limit.operation)) leaf_name_data.push_back(bsr_candidate_rp_set_limit.get_name_leafdata());
    if (bsr_candidate_rp_set_threshold.is_set || is_set(bsr_candidate_rp_set_threshold.operation)) leaf_name_data.push_back(bsr_candidate_rp_set_threshold.get_name_leafdata());
    if (bsr_range_threshold.is_set || is_set(bsr_range_threshold.operation)) leaf_name_data.push_back(bsr_range_threshold.get_name_leafdata());
    if (bsr_ranges_count.is_set || is_set(bsr_ranges_count.operation)) leaf_name_data.push_back(bsr_ranges_count.get_name_leafdata());
    if (bsr_ranges_limit.is_set || is_set(bsr_ranges_limit.operation)) leaf_name_data.push_back(bsr_ranges_limit.get_name_leafdata());
    if (global_auto_rp_ranges_limit.is_set || is_set(global_auto_rp_ranges_limit.operation)) leaf_name_data.push_back(global_auto_rp_ranges_limit.get_name_leafdata());
    if (global_bsr_candidate_rp_set_count.is_set || is_set(global_bsr_candidate_rp_set_count.operation)) leaf_name_data.push_back(global_bsr_candidate_rp_set_count.get_name_leafdata());
    if (global_bsr_candidate_rp_set_limit.is_set || is_set(global_bsr_candidate_rp_set_limit.operation)) leaf_name_data.push_back(global_bsr_candidate_rp_set_limit.get_name_leafdata());
    if (global_bsr_candidate_rp_set_threshold.is_set || is_set(global_bsr_candidate_rp_set_threshold.operation)) leaf_name_data.push_back(global_bsr_candidate_rp_set_threshold.get_name_leafdata());
    if (global_bsr_ranges_count.is_set || is_set(global_bsr_ranges_count.operation)) leaf_name_data.push_back(global_bsr_ranges_count.get_name_leafdata());
    if (global_bsr_ranges_limit.is_set || is_set(global_bsr_ranges_limit.operation)) leaf_name_data.push_back(global_bsr_ranges_limit.get_name_leafdata());
    if (global_bsr_ranges_threshold.is_set || is_set(global_bsr_ranges_threshold.operation)) leaf_name_data.push_back(global_bsr_ranges_threshold.get_name_leafdata());
    if (global_register_limit.is_set || is_set(global_register_limit.operation)) leaf_name_data.push_back(global_register_limit.get_name_leafdata());
    if (is_bsr_ranges_threshold_reached.is_set || is_set(is_bsr_ranges_threshold_reached.operation)) leaf_name_data.push_back(is_bsr_ranges_threshold_reached.get_name_leafdata());
    if (is_global_auto_rp_ranges_limit_reached.is_set || is_set(is_global_auto_rp_ranges_limit_reached.operation)) leaf_name_data.push_back(is_global_auto_rp_ranges_limit_reached.get_name_leafdata());
    if (is_global_bsr_ranges_limit_reached.is_set || is_set(is_global_bsr_ranges_limit_reached.operation)) leaf_name_data.push_back(is_global_bsr_ranges_limit_reached.get_name_leafdata());
    if (is_global_register_limit_reached.is_set || is_set(is_global_register_limit_reached.operation)) leaf_name_data.push_back(is_global_register_limit_reached.get_name_leafdata());
    if (is_global_route_limit_reached.is_set || is_set(is_global_route_limit_reached.operation)) leaf_name_data.push_back(is_global_route_limit_reached.get_name_leafdata());
    if (is_global_rxi_limit_reached.is_set || is_set(is_global_rxi_limit_reached.operation)) leaf_name_data.push_back(is_global_rxi_limit_reached.get_name_leafdata());
    if (is_maximum_enforcement_disabled.is_set || is_set(is_maximum_enforcement_disabled.operation)) leaf_name_data.push_back(is_maximum_enforcement_disabled.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.operation)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());
    if (is_ranges_limit_reached.is_set || is_set(is_ranges_limit_reached.operation)) leaf_name_data.push_back(is_ranges_limit_reached.get_name_leafdata());
    if (is_route_limit_reached.is_set || is_set(is_route_limit_reached.operation)) leaf_name_data.push_back(is_route_limit_reached.get_name_leafdata());
    if (ranges_count.is_set || is_set(ranges_count.operation)) leaf_name_data.push_back(ranges_count.get_name_leafdata());
    if (ranges_limit.is_set || is_set(ranges_limit.operation)) leaf_name_data.push_back(ranges_limit.get_name_leafdata());
    if (ranges_threshold.is_set || is_set(ranges_threshold.operation)) leaf_name_data.push_back(ranges_threshold.get_name_leafdata());
    if (register_count.is_set || is_set(register_count.operation)) leaf_name_data.push_back(register_count.get_name_leafdata());
    if (register_limit.is_set || is_set(register_limit.operation)) leaf_name_data.push_back(register_limit.get_name_leafdata());
    if (register_limit_reached.is_set || is_set(register_limit_reached.operation)) leaf_name_data.push_back(register_limit_reached.get_name_leafdata());
    if (register_threshold.is_set || is_set(register_threshold.operation)) leaf_name_data.push_back(register_threshold.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.operation)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (route_limit.is_set || is_set(route_limit.operation)) leaf_name_data.push_back(route_limit.get_name_leafdata());
    if (route_low_water_mark.is_set || is_set(route_low_water_mark.operation)) leaf_name_data.push_back(route_low_water_mark.get_name_leafdata());
    if (route_threshold.is_set || is_set(route_threshold.operation)) leaf_name_data.push_back(route_threshold.get_name_leafdata());
    if (rxi_limit_reached.is_set || is_set(rxi_limit_reached.operation)) leaf_name_data.push_back(rxi_limit_reached.get_name_leafdata());
    if (rxi_low_water_mark.is_set || is_set(rxi_low_water_mark.operation)) leaf_name_data.push_back(rxi_low_water_mark.get_name_leafdata());
    if (topology_interface_state_count.is_set || is_set(topology_interface_state_count.operation)) leaf_name_data.push_back(topology_interface_state_count.get_name_leafdata());
    if (topology_interface_state_limit.is_set || is_set(topology_interface_state_limit.operation)) leaf_name_data.push_back(topology_interface_state_limit.get_name_leafdata());
    if (topology_interface_state_threshold.is_set || is_set(topology_interface_state_threshold.operation)) leaf_name_data.push_back(topology_interface_state_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Process::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::Process::Summary::get_children()
{
    return children;
}

void Pim::Active::Process::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bsr-candidate-rp-set-count")
    {
        bsr_candidate_rp_set_count = value;
    }
    if(value_path == "bsr-candidate-rp-set-limit")
    {
        bsr_candidate_rp_set_limit = value;
    }
    if(value_path == "bsr-candidate-rp-set-threshold")
    {
        bsr_candidate_rp_set_threshold = value;
    }
    if(value_path == "bsr-range-threshold")
    {
        bsr_range_threshold = value;
    }
    if(value_path == "bsr-ranges-count")
    {
        bsr_ranges_count = value;
    }
    if(value_path == "bsr-ranges-limit")
    {
        bsr_ranges_limit = value;
    }
    if(value_path == "global-auto-rp-ranges-limit")
    {
        global_auto_rp_ranges_limit = value;
    }
    if(value_path == "global-bsr-candidate-rp-set-count")
    {
        global_bsr_candidate_rp_set_count = value;
    }
    if(value_path == "global-bsr-candidate-rp-set-limit")
    {
        global_bsr_candidate_rp_set_limit = value;
    }
    if(value_path == "global-bsr-candidate-rp-set-threshold")
    {
        global_bsr_candidate_rp_set_threshold = value;
    }
    if(value_path == "global-bsr-ranges-count")
    {
        global_bsr_ranges_count = value;
    }
    if(value_path == "global-bsr-ranges-limit")
    {
        global_bsr_ranges_limit = value;
    }
    if(value_path == "global-bsr-ranges-threshold")
    {
        global_bsr_ranges_threshold = value;
    }
    if(value_path == "global-register-limit")
    {
        global_register_limit = value;
    }
    if(value_path == "is-bsr-ranges-threshold-reached")
    {
        is_bsr_ranges_threshold_reached = value;
    }
    if(value_path == "is-global-auto-rp-ranges-limit-reached")
    {
        is_global_auto_rp_ranges_limit_reached = value;
    }
    if(value_path == "is-global-bsr-ranges-limit-reached")
    {
        is_global_bsr_ranges_limit_reached = value;
    }
    if(value_path == "is-global-register-limit-reached")
    {
        is_global_register_limit_reached = value;
    }
    if(value_path == "is-global-route-limit-reached")
    {
        is_global_route_limit_reached = value;
    }
    if(value_path == "is-global-rxi-limit-reached")
    {
        is_global_rxi_limit_reached = value;
    }
    if(value_path == "is-maximum-enforcement-disabled")
    {
        is_maximum_enforcement_disabled = value;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
    }
    if(value_path == "is-ranges-limit-reached")
    {
        is_ranges_limit_reached = value;
    }
    if(value_path == "is-route-limit-reached")
    {
        is_route_limit_reached = value;
    }
    if(value_path == "ranges-count")
    {
        ranges_count = value;
    }
    if(value_path == "ranges-limit")
    {
        ranges_limit = value;
    }
    if(value_path == "ranges-threshold")
    {
        ranges_threshold = value;
    }
    if(value_path == "register-count")
    {
        register_count = value;
    }
    if(value_path == "register-limit")
    {
        register_limit = value;
    }
    if(value_path == "register-limit-reached")
    {
        register_limit_reached = value;
    }
    if(value_path == "register-threshold")
    {
        register_threshold = value;
    }
    if(value_path == "route-count")
    {
        route_count = value;
    }
    if(value_path == "route-limit")
    {
        route_limit = value;
    }
    if(value_path == "route-low-water-mark")
    {
        route_low_water_mark = value;
    }
    if(value_path == "route-threshold")
    {
        route_threshold = value;
    }
    if(value_path == "rxi-limit-reached")
    {
        rxi_limit_reached = value;
    }
    if(value_path == "rxi-low-water-mark")
    {
        rxi_low_water_mark = value;
    }
    if(value_path == "topology-interface-state-count")
    {
        topology_interface_state_count = value;
    }
    if(value_path == "topology-interface-state-limit")
    {
        topology_interface_state_limit = value;
    }
    if(value_path == "topology-interface-state-threshold")
    {
        topology_interface_state_threshold = value;
    }
}

Pim::Active::Process::Nsf::Nsf()
    :
    configured_state{YType::boolean, "configured-state"},
    last_icd_notif_recv{YType::int64, "last-icd-notif-recv"},
    last_icd_notif_recv_sec{YType::int32, "last-icd-notif-recv-sec"},
    last_nsf_off{YType::int64, "last-nsf-off"},
    last_nsf_off_sec{YType::int32, "last-nsf-off-sec"},
    last_nsf_on{YType::int64, "last-nsf-on"},
    last_nsf_on_sec{YType::int32, "last-nsf-on-sec"},
    nsf_state{YType::boolean, "nsf-state"},
    nsf_time_left{YType::uint32, "nsf-time-left"},
    nsf_timeout{YType::uint32, "nsf-timeout"},
    respawn_count{YType::uint32, "respawn-count"},
    waiting_membership{YType::boolean, "waiting-membership"},
    waiting_timer{YType::boolean, "waiting-timer"}
{
    yang_name = "nsf"; yang_parent_name = "process";
}

Pim::Active::Process::Nsf::~Nsf()
{
}

bool Pim::Active::Process::Nsf::has_data() const
{
    return configured_state.is_set
	|| last_icd_notif_recv.is_set
	|| last_icd_notif_recv_sec.is_set
	|| last_nsf_off.is_set
	|| last_nsf_off_sec.is_set
	|| last_nsf_on.is_set
	|| last_nsf_on_sec.is_set
	|| nsf_state.is_set
	|| nsf_time_left.is_set
	|| nsf_timeout.is_set
	|| respawn_count.is_set
	|| waiting_membership.is_set
	|| waiting_timer.is_set;
}

bool Pim::Active::Process::Nsf::has_operation() const
{
    return is_set(operation)
	|| is_set(configured_state.operation)
	|| is_set(last_icd_notif_recv.operation)
	|| is_set(last_icd_notif_recv_sec.operation)
	|| is_set(last_nsf_off.operation)
	|| is_set(last_nsf_off_sec.operation)
	|| is_set(last_nsf_on.operation)
	|| is_set(last_nsf_on_sec.operation)
	|| is_set(nsf_state.operation)
	|| is_set(nsf_time_left.operation)
	|| is_set(nsf_timeout.operation)
	|| is_set(respawn_count.operation)
	|| is_set(waiting_membership.operation)
	|| is_set(waiting_timer.operation);
}

std::string Pim::Active::Process::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";

    return path_buffer.str();

}

EntityPath Pim::Active::Process::Nsf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_state.is_set || is_set(configured_state.operation)) leaf_name_data.push_back(configured_state.get_name_leafdata());
    if (last_icd_notif_recv.is_set || is_set(last_icd_notif_recv.operation)) leaf_name_data.push_back(last_icd_notif_recv.get_name_leafdata());
    if (last_icd_notif_recv_sec.is_set || is_set(last_icd_notif_recv_sec.operation)) leaf_name_data.push_back(last_icd_notif_recv_sec.get_name_leafdata());
    if (last_nsf_off.is_set || is_set(last_nsf_off.operation)) leaf_name_data.push_back(last_nsf_off.get_name_leafdata());
    if (last_nsf_off_sec.is_set || is_set(last_nsf_off_sec.operation)) leaf_name_data.push_back(last_nsf_off_sec.get_name_leafdata());
    if (last_nsf_on.is_set || is_set(last_nsf_on.operation)) leaf_name_data.push_back(last_nsf_on.get_name_leafdata());
    if (last_nsf_on_sec.is_set || is_set(last_nsf_on_sec.operation)) leaf_name_data.push_back(last_nsf_on_sec.get_name_leafdata());
    if (nsf_state.is_set || is_set(nsf_state.operation)) leaf_name_data.push_back(nsf_state.get_name_leafdata());
    if (nsf_time_left.is_set || is_set(nsf_time_left.operation)) leaf_name_data.push_back(nsf_time_left.get_name_leafdata());
    if (nsf_timeout.is_set || is_set(nsf_timeout.operation)) leaf_name_data.push_back(nsf_timeout.get_name_leafdata());
    if (respawn_count.is_set || is_set(respawn_count.operation)) leaf_name_data.push_back(respawn_count.get_name_leafdata());
    if (waiting_membership.is_set || is_set(waiting_membership.operation)) leaf_name_data.push_back(waiting_membership.get_name_leafdata());
    if (waiting_timer.is_set || is_set(waiting_timer.operation)) leaf_name_data.push_back(waiting_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Process::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::Process::Nsf::get_children()
{
    return children;
}

void Pim::Active::Process::Nsf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured-state")
    {
        configured_state = value;
    }
    if(value_path == "last-icd-notif-recv")
    {
        last_icd_notif_recv = value;
    }
    if(value_path == "last-icd-notif-recv-sec")
    {
        last_icd_notif_recv_sec = value;
    }
    if(value_path == "last-nsf-off")
    {
        last_nsf_off = value;
    }
    if(value_path == "last-nsf-off-sec")
    {
        last_nsf_off_sec = value;
    }
    if(value_path == "last-nsf-on")
    {
        last_nsf_on = value;
    }
    if(value_path == "last-nsf-on-sec")
    {
        last_nsf_on_sec = value;
    }
    if(value_path == "nsf-state")
    {
        nsf_state = value;
    }
    if(value_path == "nsf-time-left")
    {
        nsf_time_left = value;
    }
    if(value_path == "nsf-timeout")
    {
        nsf_timeout = value;
    }
    if(value_path == "respawn-count")
    {
        respawn_count = value;
    }
    if(value_path == "waiting-membership")
    {
        waiting_membership = value;
    }
    if(value_path == "waiting-timer")
    {
        waiting_timer = value;
    }
}

Pim::Active::Process::Issu::Issu()
    :
    checkpoint_idt_timestamp{YType::uint64, "checkpoint-idt-timestamp"},
    eoc_received_timestamp{YType::uint64, "eoc-received-timestamp"},
    ihms_received_timestamp{YType::uint64, "ihms-received-timestamp"},
    informationvalid{YType::boolean, "informationvalid"},
    is_checkpoint_idt_done{YType::boolean, "is-checkpoint-idt-done"},
    is_eoc_received{YType::boolean, "is-eoc-received"},
    is_ihms_done_received{YType::boolean, "is-ihms-done-received"},
    is_nbr_sync_received{YType::boolean, "is-nbr-sync-received"},
    is_rib_sync_received{YType::boolean, "is-rib-sync-received"},
    last_ha_role_notification_received{YType::uint64, "last-ha-role-notification-received"},
    last_issu_phase_notification_received{YType::uint64, "last-issu-phase-notification-received"},
    last_issu_role_notification_received{YType::uint64, "last-issu-role-notification-received"},
    nbr_sync_received_timestamp{YType::uint64, "nbr-sync-received-timestamp"},
    phase_issu{YType::int32, "phase-issu"},
    rib_sync_received_timestamp{YType::uint64, "rib-sync-received-timestamp"},
    role_ha{YType::int32, "role-ha"},
    role_issu{YType::int32, "role-issu"}
{
    yang_name = "issu"; yang_parent_name = "process";
}

Pim::Active::Process::Issu::~Issu()
{
}

bool Pim::Active::Process::Issu::has_data() const
{
    return checkpoint_idt_timestamp.is_set
	|| eoc_received_timestamp.is_set
	|| ihms_received_timestamp.is_set
	|| informationvalid.is_set
	|| is_checkpoint_idt_done.is_set
	|| is_eoc_received.is_set
	|| is_ihms_done_received.is_set
	|| is_nbr_sync_received.is_set
	|| is_rib_sync_received.is_set
	|| last_ha_role_notification_received.is_set
	|| last_issu_phase_notification_received.is_set
	|| last_issu_role_notification_received.is_set
	|| nbr_sync_received_timestamp.is_set
	|| phase_issu.is_set
	|| rib_sync_received_timestamp.is_set
	|| role_ha.is_set
	|| role_issu.is_set;
}

bool Pim::Active::Process::Issu::has_operation() const
{
    return is_set(operation)
	|| is_set(checkpoint_idt_timestamp.operation)
	|| is_set(eoc_received_timestamp.operation)
	|| is_set(ihms_received_timestamp.operation)
	|| is_set(informationvalid.operation)
	|| is_set(is_checkpoint_idt_done.operation)
	|| is_set(is_eoc_received.operation)
	|| is_set(is_ihms_done_received.operation)
	|| is_set(is_nbr_sync_received.operation)
	|| is_set(is_rib_sync_received.operation)
	|| is_set(last_ha_role_notification_received.operation)
	|| is_set(last_issu_phase_notification_received.operation)
	|| is_set(last_issu_role_notification_received.operation)
	|| is_set(nbr_sync_received_timestamp.operation)
	|| is_set(phase_issu.operation)
	|| is_set(rib_sync_received_timestamp.operation)
	|| is_set(role_ha.operation)
	|| is_set(role_issu.operation);
}

std::string Pim::Active::Process::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";

    return path_buffer.str();

}

EntityPath Pim::Active::Process::Issu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (checkpoint_idt_timestamp.is_set || is_set(checkpoint_idt_timestamp.operation)) leaf_name_data.push_back(checkpoint_idt_timestamp.get_name_leafdata());
    if (eoc_received_timestamp.is_set || is_set(eoc_received_timestamp.operation)) leaf_name_data.push_back(eoc_received_timestamp.get_name_leafdata());
    if (ihms_received_timestamp.is_set || is_set(ihms_received_timestamp.operation)) leaf_name_data.push_back(ihms_received_timestamp.get_name_leafdata());
    if (informationvalid.is_set || is_set(informationvalid.operation)) leaf_name_data.push_back(informationvalid.get_name_leafdata());
    if (is_checkpoint_idt_done.is_set || is_set(is_checkpoint_idt_done.operation)) leaf_name_data.push_back(is_checkpoint_idt_done.get_name_leafdata());
    if (is_eoc_received.is_set || is_set(is_eoc_received.operation)) leaf_name_data.push_back(is_eoc_received.get_name_leafdata());
    if (is_ihms_done_received.is_set || is_set(is_ihms_done_received.operation)) leaf_name_data.push_back(is_ihms_done_received.get_name_leafdata());
    if (is_nbr_sync_received.is_set || is_set(is_nbr_sync_received.operation)) leaf_name_data.push_back(is_nbr_sync_received.get_name_leafdata());
    if (is_rib_sync_received.is_set || is_set(is_rib_sync_received.operation)) leaf_name_data.push_back(is_rib_sync_received.get_name_leafdata());
    if (last_ha_role_notification_received.is_set || is_set(last_ha_role_notification_received.operation)) leaf_name_data.push_back(last_ha_role_notification_received.get_name_leafdata());
    if (last_issu_phase_notification_received.is_set || is_set(last_issu_phase_notification_received.operation)) leaf_name_data.push_back(last_issu_phase_notification_received.get_name_leafdata());
    if (last_issu_role_notification_received.is_set || is_set(last_issu_role_notification_received.operation)) leaf_name_data.push_back(last_issu_role_notification_received.get_name_leafdata());
    if (nbr_sync_received_timestamp.is_set || is_set(nbr_sync_received_timestamp.operation)) leaf_name_data.push_back(nbr_sync_received_timestamp.get_name_leafdata());
    if (phase_issu.is_set || is_set(phase_issu.operation)) leaf_name_data.push_back(phase_issu.get_name_leafdata());
    if (rib_sync_received_timestamp.is_set || is_set(rib_sync_received_timestamp.operation)) leaf_name_data.push_back(rib_sync_received_timestamp.get_name_leafdata());
    if (role_ha.is_set || is_set(role_ha.operation)) leaf_name_data.push_back(role_ha.get_name_leafdata());
    if (role_issu.is_set || is_set(role_issu.operation)) leaf_name_data.push_back(role_issu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Process::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::Process::Issu::get_children()
{
    return children;
}

void Pim::Active::Process::Issu::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "checkpoint-idt-timestamp")
    {
        checkpoint_idt_timestamp = value;
    }
    if(value_path == "eoc-received-timestamp")
    {
        eoc_received_timestamp = value;
    }
    if(value_path == "ihms-received-timestamp")
    {
        ihms_received_timestamp = value;
    }
    if(value_path == "informationvalid")
    {
        informationvalid = value;
    }
    if(value_path == "is-checkpoint-idt-done")
    {
        is_checkpoint_idt_done = value;
    }
    if(value_path == "is-eoc-received")
    {
        is_eoc_received = value;
    }
    if(value_path == "is-ihms-done-received")
    {
        is_ihms_done_received = value;
    }
    if(value_path == "is-nbr-sync-received")
    {
        is_nbr_sync_received = value;
    }
    if(value_path == "is-rib-sync-received")
    {
        is_rib_sync_received = value;
    }
    if(value_path == "last-ha-role-notification-received")
    {
        last_ha_role_notification_received = value;
    }
    if(value_path == "last-issu-phase-notification-received")
    {
        last_issu_phase_notification_received = value;
    }
    if(value_path == "last-issu-role-notification-received")
    {
        last_issu_role_notification_received = value;
    }
    if(value_path == "nbr-sync-received-timestamp")
    {
        nbr_sync_received_timestamp = value;
    }
    if(value_path == "phase-issu")
    {
        phase_issu = value;
    }
    if(value_path == "rib-sync-received-timestamp")
    {
        rib_sync_received_timestamp = value;
    }
    if(value_path == "role-ha")
    {
        role_ha = value;
    }
    if(value_path == "role-issu")
    {
        role_issu = value;
    }
}

Pim::Active::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "active";
}

Pim::Active::Vrfs::~Vrfs()
{
}

bool Pim::Active::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Pim::Active::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    auto_rp(std::make_shared<Pim::Active::Vrfs::Vrf::AutoRp>())
	,bgp_afs(std::make_shared<Pim::Active::Vrfs::Vrf::BgpAfs>())
	,bidir_df_states(std::make_shared<Pim::Active::Vrfs::Vrf::BidirDfStates>())
	,bidir_df_winners(std::make_shared<Pim::Active::Vrfs::Vrf::BidirDfWinners>())
	,bsr(std::make_shared<Pim::Active::Vrfs::Vrf::Bsr>())
	,context(std::make_shared<Pim::Active::Vrfs::Vrf::Context>())
	,gre(std::make_shared<Pim::Active::Vrfs::Vrf::Gre>())
	,group_map_match_rpfs(std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs>())
	,group_map_match_sources(std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapMatchSources>())
	,group_map_rpfs(std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapRpfs>())
	,group_map_sources(std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapSources>())
	,ifrs_interfaces(std::make_shared<Pim::Active::Vrfs::Vrf::IfrsInterfaces>())
	,ifrs_summary(std::make_shared<Pim::Active::Vrfs::Vrf::IfrsSummary>())
	,interface_old_formats(std::make_shared<Pim::Active::Vrfs::Vrf::InterfaceOldFormats>())
	,interface_statistics(std::make_shared<Pim::Active::Vrfs::Vrf::InterfaceStatistics>())
	,interfaces(std::make_shared<Pim::Active::Vrfs::Vrf::Interfaces>())
	,jp_statistics(std::make_shared<Pim::Active::Vrfs::Vrf::JpStatistics>())
	,mib_databases(std::make_shared<Pim::Active::Vrfs::Vrf::MibDatabases>())
	,multicast_static_routes(std::make_shared<Pim::Active::Vrfs::Vrf::MulticastStaticRoutes>())
	,neighbor_old_formats(std::make_shared<Pim::Active::Vrfs::Vrf::NeighborOldFormats>())
	,neighbor_summaries(std::make_shared<Pim::Active::Vrfs::Vrf::NeighborSummaries>())
	,neighbors(std::make_shared<Pim::Active::Vrfs::Vrf::Neighbors>())
	,net_io_tunnels(std::make_shared<Pim::Active::Vrfs::Vrf::NetIoTunnels>())
	,ranges(std::make_shared<Pim::Active::Vrfs::Vrf::Ranges>())
	,route_policy(std::make_shared<Pim::Active::Vrfs::Vrf::RoutePolicy>())
	,rpf_redirect(std::make_shared<Pim::Active::Vrfs::Vrf::RpfRedirect>())
	,rpf_summary(std::make_shared<Pim::Active::Vrfs::Vrf::RpfSummary>())
	,safs(std::make_shared<Pim::Active::Vrfs::Vrf::Safs>())
	,summary(std::make_shared<Pim::Active::Vrfs::Vrf::Summary>())
	,table_contexts(std::make_shared<Pim::Active::Vrfs::Vrf::TableContexts>())
	,topologies(std::make_shared<Pim::Active::Vrfs::Vrf::Topologies>())
	,topology_entry_flag_route_counts(std::make_shared<Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts>())
	,topology_interface_flag_route_counts(std::make_shared<Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts>())
	,topology_route_count(std::make_shared<Pim::Active::Vrfs::Vrf::TopologyRouteCount>())
	,traffic_counters(std::make_shared<Pim::Active::Vrfs::Vrf::TrafficCounters>())
	,tunnels(std::make_shared<Pim::Active::Vrfs::Vrf::Tunnels>())
{
    auto_rp->parent = this;
    children["auto-rp"] = auto_rp;

    bgp_afs->parent = this;
    children["bgp-afs"] = bgp_afs;

    bidir_df_states->parent = this;
    children["bidir-df-states"] = bidir_df_states;

    bidir_df_winners->parent = this;
    children["bidir-df-winners"] = bidir_df_winners;

    bsr->parent = this;
    children["bsr"] = bsr;

    context->parent = this;
    children["context"] = context;

    gre->parent = this;
    children["gre"] = gre;

    group_map_match_rpfs->parent = this;
    children["group-map-match-rpfs"] = group_map_match_rpfs;

    group_map_match_sources->parent = this;
    children["group-map-match-sources"] = group_map_match_sources;

    group_map_rpfs->parent = this;
    children["group-map-rpfs"] = group_map_rpfs;

    group_map_sources->parent = this;
    children["group-map-sources"] = group_map_sources;

    ifrs_interfaces->parent = this;
    children["ifrs-interfaces"] = ifrs_interfaces;

    ifrs_summary->parent = this;
    children["ifrs-summary"] = ifrs_summary;

    interface_old_formats->parent = this;
    children["interface-old-formats"] = interface_old_formats;

    interface_statistics->parent = this;
    children["interface-statistics"] = interface_statistics;

    interfaces->parent = this;
    children["interfaces"] = interfaces;

    jp_statistics->parent = this;
    children["jp-statistics"] = jp_statistics;

    mib_databases->parent = this;
    children["mib-databases"] = mib_databases;

    multicast_static_routes->parent = this;
    children["multicast-static-routes"] = multicast_static_routes;

    neighbor_old_formats->parent = this;
    children["neighbor-old-formats"] = neighbor_old_formats;

    neighbor_summaries->parent = this;
    children["neighbor-summaries"] = neighbor_summaries;

    neighbors->parent = this;
    children["neighbors"] = neighbors;

    net_io_tunnels->parent = this;
    children["net-io-tunnels"] = net_io_tunnels;

    ranges->parent = this;
    children["ranges"] = ranges;

    route_policy->parent = this;
    children["route-policy"] = route_policy;

    rpf_redirect->parent = this;
    children["rpf-redirect"] = rpf_redirect;

    rpf_summary->parent = this;
    children["rpf-summary"] = rpf_summary;

    safs->parent = this;
    children["safs"] = safs;

    summary->parent = this;
    children["summary"] = summary;

    table_contexts->parent = this;
    children["table-contexts"] = table_contexts;

    topologies->parent = this;
    children["topologies"] = topologies;

    topology_entry_flag_route_counts->parent = this;
    children["topology-entry-flag-route-counts"] = topology_entry_flag_route_counts;

    topology_interface_flag_route_counts->parent = this;
    children["topology-interface-flag-route-counts"] = topology_interface_flag_route_counts;

    topology_route_count->parent = this;
    children["topology-route-count"] = topology_route_count;

    traffic_counters->parent = this;
    children["traffic-counters"] = traffic_counters;

    tunnels->parent = this;
    children["tunnels"] = tunnels;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Pim::Active::Vrfs::Vrf::~Vrf()
{
}

bool Pim::Active::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (auto_rp !=  nullptr && auto_rp->has_data())
	|| (bgp_afs !=  nullptr && bgp_afs->has_data())
	|| (bidir_df_states !=  nullptr && bidir_df_states->has_data())
	|| (bidir_df_winners !=  nullptr && bidir_df_winners->has_data())
	|| (bsr !=  nullptr && bsr->has_data())
	|| (context !=  nullptr && context->has_data())
	|| (gre !=  nullptr && gre->has_data())
	|| (group_map_match_rpfs !=  nullptr && group_map_match_rpfs->has_data())
	|| (group_map_match_sources !=  nullptr && group_map_match_sources->has_data())
	|| (group_map_rpfs !=  nullptr && group_map_rpfs->has_data())
	|| (group_map_sources !=  nullptr && group_map_sources->has_data())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_data())
	|| (ifrs_summary !=  nullptr && ifrs_summary->has_data())
	|| (interface_old_formats !=  nullptr && interface_old_formats->has_data())
	|| (interface_statistics !=  nullptr && interface_statistics->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (jp_statistics !=  nullptr && jp_statistics->has_data())
	|| (mib_databases !=  nullptr && mib_databases->has_data())
	|| (multicast_static_routes !=  nullptr && multicast_static_routes->has_data())
	|| (neighbor_old_formats !=  nullptr && neighbor_old_formats->has_data())
	|| (neighbor_summaries !=  nullptr && neighbor_summaries->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (net_io_tunnels !=  nullptr && net_io_tunnels->has_data())
	|| (ranges !=  nullptr && ranges->has_data())
	|| (route_policy !=  nullptr && route_policy->has_data())
	|| (rpf_redirect !=  nullptr && rpf_redirect->has_data())
	|| (rpf_summary !=  nullptr && rpf_summary->has_data())
	|| (safs !=  nullptr && safs->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (table_contexts !=  nullptr && table_contexts->has_data())
	|| (topologies !=  nullptr && topologies->has_data())
	|| (topology_entry_flag_route_counts !=  nullptr && topology_entry_flag_route_counts->has_data())
	|| (topology_interface_flag_route_counts !=  nullptr && topology_interface_flag_route_counts->has_data())
	|| (topology_route_count !=  nullptr && topology_route_count->has_data())
	|| (traffic_counters !=  nullptr && traffic_counters->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool Pim::Active::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (auto_rp !=  nullptr && auto_rp->has_operation())
	|| (bgp_afs !=  nullptr && bgp_afs->has_operation())
	|| (bidir_df_states !=  nullptr && bidir_df_states->has_operation())
	|| (bidir_df_winners !=  nullptr && bidir_df_winners->has_operation())
	|| (bsr !=  nullptr && bsr->has_operation())
	|| (context !=  nullptr && context->has_operation())
	|| (gre !=  nullptr && gre->has_operation())
	|| (group_map_match_rpfs !=  nullptr && group_map_match_rpfs->has_operation())
	|| (group_map_match_sources !=  nullptr && group_map_match_sources->has_operation())
	|| (group_map_rpfs !=  nullptr && group_map_rpfs->has_operation())
	|| (group_map_sources !=  nullptr && group_map_sources->has_operation())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_operation())
	|| (ifrs_summary !=  nullptr && ifrs_summary->has_operation())
	|| (interface_old_formats !=  nullptr && interface_old_formats->has_operation())
	|| (interface_statistics !=  nullptr && interface_statistics->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (jp_statistics !=  nullptr && jp_statistics->has_operation())
	|| (mib_databases !=  nullptr && mib_databases->has_operation())
	|| (multicast_static_routes !=  nullptr && multicast_static_routes->has_operation())
	|| (neighbor_old_formats !=  nullptr && neighbor_old_formats->has_operation())
	|| (neighbor_summaries !=  nullptr && neighbor_summaries->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (net_io_tunnels !=  nullptr && net_io_tunnels->has_operation())
	|| (ranges !=  nullptr && ranges->has_operation())
	|| (route_policy !=  nullptr && route_policy->has_operation())
	|| (rpf_redirect !=  nullptr && rpf_redirect->has_operation())
	|| (rpf_summary !=  nullptr && rpf_summary->has_operation())
	|| (safs !=  nullptr && safs->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (table_contexts !=  nullptr && table_contexts->has_operation())
	|| (topologies !=  nullptr && topologies->has_operation())
	|| (topology_entry_flag_route_counts !=  nullptr && topology_entry_flag_route_counts->has_operation())
	|| (topology_interface_flag_route_counts !=  nullptr && topology_interface_flag_route_counts->has_operation())
	|| (topology_route_count !=  nullptr && topology_route_count->has_operation())
	|| (traffic_counters !=  nullptr && traffic_counters->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath Pim::Active::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/vrfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto-rp")
    {
        if(auto_rp != nullptr)
        {
            children["auto-rp"] = auto_rp;
        }
        else
        {
            auto_rp = std::make_shared<Pim::Active::Vrfs::Vrf::AutoRp>();
            auto_rp->parent = this;
            children["auto-rp"] = auto_rp;
        }
        return children.at("auto-rp");
    }

    if(child_yang_name == "bgp-afs")
    {
        if(bgp_afs != nullptr)
        {
            children["bgp-afs"] = bgp_afs;
        }
        else
        {
            bgp_afs = std::make_shared<Pim::Active::Vrfs::Vrf::BgpAfs>();
            bgp_afs->parent = this;
            children["bgp-afs"] = bgp_afs;
        }
        return children.at("bgp-afs");
    }

    if(child_yang_name == "bidir-df-states")
    {
        if(bidir_df_states != nullptr)
        {
            children["bidir-df-states"] = bidir_df_states;
        }
        else
        {
            bidir_df_states = std::make_shared<Pim::Active::Vrfs::Vrf::BidirDfStates>();
            bidir_df_states->parent = this;
            children["bidir-df-states"] = bidir_df_states;
        }
        return children.at("bidir-df-states");
    }

    if(child_yang_name == "bidir-df-winners")
    {
        if(bidir_df_winners != nullptr)
        {
            children["bidir-df-winners"] = bidir_df_winners;
        }
        else
        {
            bidir_df_winners = std::make_shared<Pim::Active::Vrfs::Vrf::BidirDfWinners>();
            bidir_df_winners->parent = this;
            children["bidir-df-winners"] = bidir_df_winners;
        }
        return children.at("bidir-df-winners");
    }

    if(child_yang_name == "bsr")
    {
        if(bsr != nullptr)
        {
            children["bsr"] = bsr;
        }
        else
        {
            bsr = std::make_shared<Pim::Active::Vrfs::Vrf::Bsr>();
            bsr->parent = this;
            children["bsr"] = bsr;
        }
        return children.at("bsr");
    }

    if(child_yang_name == "context")
    {
        if(context != nullptr)
        {
            children["context"] = context;
        }
        else
        {
            context = std::make_shared<Pim::Active::Vrfs::Vrf::Context>();
            context->parent = this;
            children["context"] = context;
        }
        return children.at("context");
    }

    if(child_yang_name == "gre")
    {
        if(gre != nullptr)
        {
            children["gre"] = gre;
        }
        else
        {
            gre = std::make_shared<Pim::Active::Vrfs::Vrf::Gre>();
            gre->parent = this;
            children["gre"] = gre;
        }
        return children.at("gre");
    }

    if(child_yang_name == "group-map-match-rpfs")
    {
        if(group_map_match_rpfs != nullptr)
        {
            children["group-map-match-rpfs"] = group_map_match_rpfs;
        }
        else
        {
            group_map_match_rpfs = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs>();
            group_map_match_rpfs->parent = this;
            children["group-map-match-rpfs"] = group_map_match_rpfs;
        }
        return children.at("group-map-match-rpfs");
    }

    if(child_yang_name == "group-map-match-sources")
    {
        if(group_map_match_sources != nullptr)
        {
            children["group-map-match-sources"] = group_map_match_sources;
        }
        else
        {
            group_map_match_sources = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapMatchSources>();
            group_map_match_sources->parent = this;
            children["group-map-match-sources"] = group_map_match_sources;
        }
        return children.at("group-map-match-sources");
    }

    if(child_yang_name == "group-map-rpfs")
    {
        if(group_map_rpfs != nullptr)
        {
            children["group-map-rpfs"] = group_map_rpfs;
        }
        else
        {
            group_map_rpfs = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapRpfs>();
            group_map_rpfs->parent = this;
            children["group-map-rpfs"] = group_map_rpfs;
        }
        return children.at("group-map-rpfs");
    }

    if(child_yang_name == "group-map-sources")
    {
        if(group_map_sources != nullptr)
        {
            children["group-map-sources"] = group_map_sources;
        }
        else
        {
            group_map_sources = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapSources>();
            group_map_sources->parent = this;
            children["group-map-sources"] = group_map_sources;
        }
        return children.at("group-map-sources");
    }

    if(child_yang_name == "ifrs-interfaces")
    {
        if(ifrs_interfaces != nullptr)
        {
            children["ifrs-interfaces"] = ifrs_interfaces;
        }
        else
        {
            ifrs_interfaces = std::make_shared<Pim::Active::Vrfs::Vrf::IfrsInterfaces>();
            ifrs_interfaces->parent = this;
            children["ifrs-interfaces"] = ifrs_interfaces;
        }
        return children.at("ifrs-interfaces");
    }

    if(child_yang_name == "ifrs-summary")
    {
        if(ifrs_summary != nullptr)
        {
            children["ifrs-summary"] = ifrs_summary;
        }
        else
        {
            ifrs_summary = std::make_shared<Pim::Active::Vrfs::Vrf::IfrsSummary>();
            ifrs_summary->parent = this;
            children["ifrs-summary"] = ifrs_summary;
        }
        return children.at("ifrs-summary");
    }

    if(child_yang_name == "interface-old-formats")
    {
        if(interface_old_formats != nullptr)
        {
            children["interface-old-formats"] = interface_old_formats;
        }
        else
        {
            interface_old_formats = std::make_shared<Pim::Active::Vrfs::Vrf::InterfaceOldFormats>();
            interface_old_formats->parent = this;
            children["interface-old-formats"] = interface_old_formats;
        }
        return children.at("interface-old-formats");
    }

    if(child_yang_name == "interface-statistics")
    {
        if(interface_statistics != nullptr)
        {
            children["interface-statistics"] = interface_statistics;
        }
        else
        {
            interface_statistics = std::make_shared<Pim::Active::Vrfs::Vrf::InterfaceStatistics>();
            interface_statistics->parent = this;
            children["interface-statistics"] = interface_statistics;
        }
        return children.at("interface-statistics");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<Pim::Active::Vrfs::Vrf::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "jp-statistics")
    {
        if(jp_statistics != nullptr)
        {
            children["jp-statistics"] = jp_statistics;
        }
        else
        {
            jp_statistics = std::make_shared<Pim::Active::Vrfs::Vrf::JpStatistics>();
            jp_statistics->parent = this;
            children["jp-statistics"] = jp_statistics;
        }
        return children.at("jp-statistics");
    }

    if(child_yang_name == "mib-databases")
    {
        if(mib_databases != nullptr)
        {
            children["mib-databases"] = mib_databases;
        }
        else
        {
            mib_databases = std::make_shared<Pim::Active::Vrfs::Vrf::MibDatabases>();
            mib_databases->parent = this;
            children["mib-databases"] = mib_databases;
        }
        return children.at("mib-databases");
    }

    if(child_yang_name == "multicast-static-routes")
    {
        if(multicast_static_routes != nullptr)
        {
            children["multicast-static-routes"] = multicast_static_routes;
        }
        else
        {
            multicast_static_routes = std::make_shared<Pim::Active::Vrfs::Vrf::MulticastStaticRoutes>();
            multicast_static_routes->parent = this;
            children["multicast-static-routes"] = multicast_static_routes;
        }
        return children.at("multicast-static-routes");
    }

    if(child_yang_name == "neighbor-old-formats")
    {
        if(neighbor_old_formats != nullptr)
        {
            children["neighbor-old-formats"] = neighbor_old_formats;
        }
        else
        {
            neighbor_old_formats = std::make_shared<Pim::Active::Vrfs::Vrf::NeighborOldFormats>();
            neighbor_old_formats->parent = this;
            children["neighbor-old-formats"] = neighbor_old_formats;
        }
        return children.at("neighbor-old-formats");
    }

    if(child_yang_name == "neighbor-summaries")
    {
        if(neighbor_summaries != nullptr)
        {
            children["neighbor-summaries"] = neighbor_summaries;
        }
        else
        {
            neighbor_summaries = std::make_shared<Pim::Active::Vrfs::Vrf::NeighborSummaries>();
            neighbor_summaries->parent = this;
            children["neighbor-summaries"] = neighbor_summaries;
        }
        return children.at("neighbor-summaries");
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
        else
        {
            neighbors = std::make_shared<Pim::Active::Vrfs::Vrf::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors;
        }
        return children.at("neighbors");
    }

    if(child_yang_name == "net-io-tunnels")
    {
        if(net_io_tunnels != nullptr)
        {
            children["net-io-tunnels"] = net_io_tunnels;
        }
        else
        {
            net_io_tunnels = std::make_shared<Pim::Active::Vrfs::Vrf::NetIoTunnels>();
            net_io_tunnels->parent = this;
            children["net-io-tunnels"] = net_io_tunnels;
        }
        return children.at("net-io-tunnels");
    }

    if(child_yang_name == "ranges")
    {
        if(ranges != nullptr)
        {
            children["ranges"] = ranges;
        }
        else
        {
            ranges = std::make_shared<Pim::Active::Vrfs::Vrf::Ranges>();
            ranges->parent = this;
            children["ranges"] = ranges;
        }
        return children.at("ranges");
    }

    if(child_yang_name == "route-policy")
    {
        if(route_policy != nullptr)
        {
            children["route-policy"] = route_policy;
        }
        else
        {
            route_policy = std::make_shared<Pim::Active::Vrfs::Vrf::RoutePolicy>();
            route_policy->parent = this;
            children["route-policy"] = route_policy;
        }
        return children.at("route-policy");
    }

    if(child_yang_name == "rpf-redirect")
    {
        if(rpf_redirect != nullptr)
        {
            children["rpf-redirect"] = rpf_redirect;
        }
        else
        {
            rpf_redirect = std::make_shared<Pim::Active::Vrfs::Vrf::RpfRedirect>();
            rpf_redirect->parent = this;
            children["rpf-redirect"] = rpf_redirect;
        }
        return children.at("rpf-redirect");
    }

    if(child_yang_name == "rpf-summary")
    {
        if(rpf_summary != nullptr)
        {
            children["rpf-summary"] = rpf_summary;
        }
        else
        {
            rpf_summary = std::make_shared<Pim::Active::Vrfs::Vrf::RpfSummary>();
            rpf_summary->parent = this;
            children["rpf-summary"] = rpf_summary;
        }
        return children.at("rpf-summary");
    }

    if(child_yang_name == "safs")
    {
        if(safs != nullptr)
        {
            children["safs"] = safs;
        }
        else
        {
            safs = std::make_shared<Pim::Active::Vrfs::Vrf::Safs>();
            safs->parent = this;
            children["safs"] = safs;
        }
        return children.at("safs");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<Pim::Active::Vrfs::Vrf::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    if(child_yang_name == "table-contexts")
    {
        if(table_contexts != nullptr)
        {
            children["table-contexts"] = table_contexts;
        }
        else
        {
            table_contexts = std::make_shared<Pim::Active::Vrfs::Vrf::TableContexts>();
            table_contexts->parent = this;
            children["table-contexts"] = table_contexts;
        }
        return children.at("table-contexts");
    }

    if(child_yang_name == "topologies")
    {
        if(topologies != nullptr)
        {
            children["topologies"] = topologies;
        }
        else
        {
            topologies = std::make_shared<Pim::Active::Vrfs::Vrf::Topologies>();
            topologies->parent = this;
            children["topologies"] = topologies;
        }
        return children.at("topologies");
    }

    if(child_yang_name == "topology-entry-flag-route-counts")
    {
        if(topology_entry_flag_route_counts != nullptr)
        {
            children["topology-entry-flag-route-counts"] = topology_entry_flag_route_counts;
        }
        else
        {
            topology_entry_flag_route_counts = std::make_shared<Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts>();
            topology_entry_flag_route_counts->parent = this;
            children["topology-entry-flag-route-counts"] = topology_entry_flag_route_counts;
        }
        return children.at("topology-entry-flag-route-counts");
    }

    if(child_yang_name == "topology-interface-flag-route-counts")
    {
        if(topology_interface_flag_route_counts != nullptr)
        {
            children["topology-interface-flag-route-counts"] = topology_interface_flag_route_counts;
        }
        else
        {
            topology_interface_flag_route_counts = std::make_shared<Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts>();
            topology_interface_flag_route_counts->parent = this;
            children["topology-interface-flag-route-counts"] = topology_interface_flag_route_counts;
        }
        return children.at("topology-interface-flag-route-counts");
    }

    if(child_yang_name == "topology-route-count")
    {
        if(topology_route_count != nullptr)
        {
            children["topology-route-count"] = topology_route_count;
        }
        else
        {
            topology_route_count = std::make_shared<Pim::Active::Vrfs::Vrf::TopologyRouteCount>();
            topology_route_count->parent = this;
            children["topology-route-count"] = topology_route_count;
        }
        return children.at("topology-route-count");
    }

    if(child_yang_name == "traffic-counters")
    {
        if(traffic_counters != nullptr)
        {
            children["traffic-counters"] = traffic_counters;
        }
        else
        {
            traffic_counters = std::make_shared<Pim::Active::Vrfs::Vrf::TrafficCounters>();
            traffic_counters->parent = this;
            children["traffic-counters"] = traffic_counters;
        }
        return children.at("traffic-counters");
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
        else
        {
            tunnels = std::make_shared<Pim::Active::Vrfs::Vrf::Tunnels>();
            tunnels->parent = this;
            children["tunnels"] = tunnels;
        }
        return children.at("tunnels");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::Vrfs::Vrf::get_children()
{
    if(children.find("auto-rp") == children.end())
    {
        if(auto_rp != nullptr)
        {
            children["auto-rp"] = auto_rp;
        }
    }

    if(children.find("bgp-afs") == children.end())
    {
        if(bgp_afs != nullptr)
        {
            children["bgp-afs"] = bgp_afs;
        }
    }

    if(children.find("bidir-df-states") == children.end())
    {
        if(bidir_df_states != nullptr)
        {
            children["bidir-df-states"] = bidir_df_states;
        }
    }

    if(children.find("bidir-df-winners") == children.end())
    {
        if(bidir_df_winners != nullptr)
        {
            children["bidir-df-winners"] = bidir_df_winners;
        }
    }

    if(children.find("bsr") == children.end())
    {
        if(bsr != nullptr)
        {
            children["bsr"] = bsr;
        }
    }

    if(children.find("context") == children.end())
    {
        if(context != nullptr)
        {
            children["context"] = context;
        }
    }

    if(children.find("gre") == children.end())
    {
        if(gre != nullptr)
        {
            children["gre"] = gre;
        }
    }

    if(children.find("group-map-match-rpfs") == children.end())
    {
        if(group_map_match_rpfs != nullptr)
        {
            children["group-map-match-rpfs"] = group_map_match_rpfs;
        }
    }

    if(children.find("group-map-match-sources") == children.end())
    {
        if(group_map_match_sources != nullptr)
        {
            children["group-map-match-sources"] = group_map_match_sources;
        }
    }

    if(children.find("group-map-rpfs") == children.end())
    {
        if(group_map_rpfs != nullptr)
        {
            children["group-map-rpfs"] = group_map_rpfs;
        }
    }

    if(children.find("group-map-sources") == children.end())
    {
        if(group_map_sources != nullptr)
        {
            children["group-map-sources"] = group_map_sources;
        }
    }

    if(children.find("ifrs-interfaces") == children.end())
    {
        if(ifrs_interfaces != nullptr)
        {
            children["ifrs-interfaces"] = ifrs_interfaces;
        }
    }

    if(children.find("ifrs-summary") == children.end())
    {
        if(ifrs_summary != nullptr)
        {
            children["ifrs-summary"] = ifrs_summary;
        }
    }

    if(children.find("interface-old-formats") == children.end())
    {
        if(interface_old_formats != nullptr)
        {
            children["interface-old-formats"] = interface_old_formats;
        }
    }

    if(children.find("interface-statistics") == children.end())
    {
        if(interface_statistics != nullptr)
        {
            children["interface-statistics"] = interface_statistics;
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    if(children.find("jp-statistics") == children.end())
    {
        if(jp_statistics != nullptr)
        {
            children["jp-statistics"] = jp_statistics;
        }
    }

    if(children.find("mib-databases") == children.end())
    {
        if(mib_databases != nullptr)
        {
            children["mib-databases"] = mib_databases;
        }
    }

    if(children.find("multicast-static-routes") == children.end())
    {
        if(multicast_static_routes != nullptr)
        {
            children["multicast-static-routes"] = multicast_static_routes;
        }
    }

    if(children.find("neighbor-old-formats") == children.end())
    {
        if(neighbor_old_formats != nullptr)
        {
            children["neighbor-old-formats"] = neighbor_old_formats;
        }
    }

    if(children.find("neighbor-summaries") == children.end())
    {
        if(neighbor_summaries != nullptr)
        {
            children["neighbor-summaries"] = neighbor_summaries;
        }
    }

    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
    }

    if(children.find("net-io-tunnels") == children.end())
    {
        if(net_io_tunnels != nullptr)
        {
            children["net-io-tunnels"] = net_io_tunnels;
        }
    }

    if(children.find("ranges") == children.end())
    {
        if(ranges != nullptr)
        {
            children["ranges"] = ranges;
        }
    }

    if(children.find("route-policy") == children.end())
    {
        if(route_policy != nullptr)
        {
            children["route-policy"] = route_policy;
        }
    }

    if(children.find("rpf-redirect") == children.end())
    {
        if(rpf_redirect != nullptr)
        {
            children["rpf-redirect"] = rpf_redirect;
        }
    }

    if(children.find("rpf-summary") == children.end())
    {
        if(rpf_summary != nullptr)
        {
            children["rpf-summary"] = rpf_summary;
        }
    }

    if(children.find("safs") == children.end())
    {
        if(safs != nullptr)
        {
            children["safs"] = safs;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    if(children.find("table-contexts") == children.end())
    {
        if(table_contexts != nullptr)
        {
            children["table-contexts"] = table_contexts;
        }
    }

    if(children.find("topologies") == children.end())
    {
        if(topologies != nullptr)
        {
            children["topologies"] = topologies;
        }
    }

    if(children.find("topology-entry-flag-route-counts") == children.end())
    {
        if(topology_entry_flag_route_counts != nullptr)
        {
            children["topology-entry-flag-route-counts"] = topology_entry_flag_route_counts;
        }
    }

    if(children.find("topology-interface-flag-route-counts") == children.end())
    {
        if(topology_interface_flag_route_counts != nullptr)
        {
            children["topology-interface-flag-route-counts"] = topology_interface_flag_route_counts;
        }
    }

    if(children.find("topology-route-count") == children.end())
    {
        if(topology_route_count != nullptr)
        {
            children["topology-route-count"] = topology_route_count;
        }
    }

    if(children.find("traffic-counters") == children.end())
    {
        if(traffic_counters != nullptr)
        {
            children["traffic-counters"] = traffic_counters;
        }
    }

    if(children.find("tunnels") == children.end())
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterfaces()
{
    yang_name = "ifrs-interfaces"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::IfrsInterfaces::~IfrsInterfaces()
{
}

bool Pim::Active::Vrfs::Vrf::IfrsInterfaces::has_data() const
{
    for (std::size_t index=0; index<ifrs_interface.size(); index++)
    {
        if(ifrs_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::IfrsInterfaces::has_operation() const
{
    for (std::size_t index=0; index<ifrs_interface.size(); index++)
    {
        if(ifrs_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::IfrsInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interfaces";

    return path_buffer.str();

}

EntityPath Pim::Active::Vrfs::Vrf::IfrsInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IfrsInterfaces' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::IfrsInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ifrs-interface")
    {
        for(auto const & c : ifrs_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface>();
        c->parent = this;
        ifrs_interface.push_back(std::move(c));
        children[segment_path] = ifrs_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::Vrfs::Vrf::IfrsInterfaces::get_children()
{
    for (auto const & c : ifrs_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::IfrsInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IfrsInterface()
    :
    interface_name{YType::str, "interface-name"},
    are_we_dr{YType::boolean, "are-we-dr"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    configured_override_interval{YType::uint16, "configured-override-interval"},
    configured_propagation_delay{YType::uint16, "configured-propagation-delay"},
    dr_priority{YType::uint32, "dr-priority"},
    external_neighbor_count{YType::uint16, "external-neighbor-count"},
    generation_id{YType::uint32, "generation-id"},
    hello_expiry{YType::uint64, "hello-expiry"},
    hello_interval{YType::uint16, "hello-interval"},
    idb_acl_name{YType::str, "idb-acl-name"},
    idb_acl_provided{YType::boolean, "idb-acl-provided"},
    idb_current_count{YType::uint32, "idb-current-count"},
    idb_max_count{YType::uint32, "idb-max-count"},
    idb_oor_enabled{YType::boolean, "idb-oor-enabled"},
    idb_threshold_count{YType::uint32, "idb-threshold-count"},
    interface_address_mask{YType::uint8, "interface-address-mask"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_enabled{YType::boolean, "is-enabled"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    join_prune_interval{YType::uint16, "join-prune-interval"},
    neighbor_count{YType::uint16, "neighbor-count"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    override_interval{YType::uint16, "override-interval"},
    passive_interface{YType::boolean, "passive-interface"},
    propagation_delay{YType::uint16, "propagation-delay"},
    prune_delay_enabled{YType::boolean, "prune-delay-enabled"},
    virtual_interface{YType::boolean, "virtual-interface"}
    	,
    dr_address(std::make_shared<Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress>())
{
    dr_address->parent = this;
    children["dr-address"] = dr_address;

    yang_name = "ifrs-interface"; yang_parent_name = "ifrs-interfaces";
}

Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::~IfrsInterface()
{
}

bool Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::has_data() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| are_we_dr.is_set
	|| bfd_enabled.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| configured_override_interval.is_set
	|| configured_propagation_delay.is_set
	|| dr_priority.is_set
	|| external_neighbor_count.is_set
	|| generation_id.is_set
	|| hello_expiry.is_set
	|| hello_interval.is_set
	|| idb_acl_name.is_set
	|| idb_acl_provided.is_set
	|| idb_current_count.is_set
	|| idb_max_count.is_set
	|| idb_oor_enabled.is_set
	|| idb_threshold_count.is_set
	|| interface_address_mask.is_set
	|| interface_name_xr.is_set
	|| is_batch_asserts_capable.is_set
	|| is_bidirectional_capable.is_set
	|| is_enabled.is_set
	|| is_proxy_capable.is_set
	|| join_prune_interval.is_set
	|| neighbor_count.is_set
	|| neighbor_filter_name.is_set
	|| override_interval.is_set
	|| passive_interface.is_set
	|| propagation_delay.is_set
	|| prune_delay_enabled.is_set
	|| virtual_interface.is_set
	|| (dr_address !=  nullptr && dr_address->has_data());
}

bool Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::has_operation() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(are_we_dr.operation)
	|| is_set(bfd_enabled.operation)
	|| is_set(bfd_interval.operation)
	|| is_set(bfd_multiplier.operation)
	|| is_set(configured_override_interval.operation)
	|| is_set(configured_propagation_delay.operation)
	|| is_set(dr_priority.operation)
	|| is_set(external_neighbor_count.operation)
	|| is_set(generation_id.operation)
	|| is_set(hello_expiry.operation)
	|| is_set(hello_interval.operation)
	|| is_set(idb_acl_name.operation)
	|| is_set(idb_acl_provided.operation)
	|| is_set(idb_current_count.operation)
	|| is_set(idb_max_count.operation)
	|| is_set(idb_oor_enabled.operation)
	|| is_set(idb_threshold_count.operation)
	|| is_set(interface_address_mask.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_batch_asserts_capable.operation)
	|| is_set(is_bidirectional_capable.operation)
	|| is_set(is_enabled.operation)
	|| is_set(is_proxy_capable.operation)
	|| is_set(join_prune_interval.operation)
	|| is_set(neighbor_count.operation)
	|| is_set(neighbor_filter_name.operation)
	|| is_set(override_interval.operation)
	|| is_set(passive_interface.operation)
	|| is_set(propagation_delay.operation)
	|| is_set(prune_delay_enabled.operation)
	|| is_set(virtual_interface.operation)
	|| (dr_address !=  nullptr && dr_address->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IfrsInterface' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (are_we_dr.is_set || is_set(are_we_dr.operation)) leaf_name_data.push_back(are_we_dr.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.operation)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.operation)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.operation)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (configured_override_interval.is_set || is_set(configured_override_interval.operation)) leaf_name_data.push_back(configured_override_interval.get_name_leafdata());
    if (configured_propagation_delay.is_set || is_set(configured_propagation_delay.operation)) leaf_name_data.push_back(configured_propagation_delay.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.operation)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (external_neighbor_count.is_set || is_set(external_neighbor_count.operation)) leaf_name_data.push_back(external_neighbor_count.get_name_leafdata());
    if (generation_id.is_set || is_set(generation_id.operation)) leaf_name_data.push_back(generation_id.get_name_leafdata());
    if (hello_expiry.is_set || is_set(hello_expiry.operation)) leaf_name_data.push_back(hello_expiry.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (idb_acl_name.is_set || is_set(idb_acl_name.operation)) leaf_name_data.push_back(idb_acl_name.get_name_leafdata());
    if (idb_acl_provided.is_set || is_set(idb_acl_provided.operation)) leaf_name_data.push_back(idb_acl_provided.get_name_leafdata());
    if (idb_current_count.is_set || is_set(idb_current_count.operation)) leaf_name_data.push_back(idb_current_count.get_name_leafdata());
    if (idb_max_count.is_set || is_set(idb_max_count.operation)) leaf_name_data.push_back(idb_max_count.get_name_leafdata());
    if (idb_oor_enabled.is_set || is_set(idb_oor_enabled.operation)) leaf_name_data.push_back(idb_oor_enabled.get_name_leafdata());
    if (idb_threshold_count.is_set || is_set(idb_threshold_count.operation)) leaf_name_data.push_back(idb_threshold_count.get_name_leafdata());
    if (interface_address_mask.is_set || is_set(interface_address_mask.operation)) leaf_name_data.push_back(interface_address_mask.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.operation)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.operation)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_enabled.is_set || is_set(is_enabled.operation)) leaf_name_data.push_back(is_enabled.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.operation)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (join_prune_interval.is_set || is_set(join_prune_interval.operation)) leaf_name_data.push_back(join_prune_interval.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.operation)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.operation)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.operation)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.operation)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.operation)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (prune_delay_enabled.is_set || is_set(prune_delay_enabled.operation)) leaf_name_data.push_back(prune_delay_enabled.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.operation)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dr-address")
    {
        if(dr_address != nullptr)
        {
            children["dr-address"] = dr_address;
        }
        else
        {
            dr_address = std::make_shared<Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress>();
            dr_address->parent = this;
            children["dr-address"] = dr_address;
        }
        return children.at("dr-address");
    }

    if(child_yang_name == "interface-address")
    {
        for(auto const & c : interface_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress>();
        c->parent = this;
        interface_address.push_back(std::move(c));
        children[segment_path] = interface_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::get_children()
{
    if(children.find("dr-address") == children.end())
    {
        if(dr_address != nullptr)
        {
            children["dr-address"] = dr_address;
        }
    }

    for (auto const & c : interface_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr = value;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval = value;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay = value;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count = value;
    }
    if(value_path == "generation-id")
    {
        generation_id = value;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name = value;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided = value;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count = value;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count = value;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled = value;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count = value;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
    }
    if(value_path == "is-enabled")
    {
        is_enabled = value;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval = value;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled = value;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
    }
}

Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::DrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "dr-address"; yang_parent_name = "ifrs-interface";
}

Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::~DrAddress()
{
}

bool Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dr-address";

    return path_buffer.str();

}

EntityPath Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DrAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::get_children()
{
    return children;
}

void Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}


}
}
