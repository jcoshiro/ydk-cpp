
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_81.hpp"
#include "Cisco_IOS_XE_native_82.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::Ipv4()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mask{YType::str, "ipv4-mask"}
{
    yang_name = "ipv4"; yang_parent_name = "address";
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::~Ipv4()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::has_data() const
{
    return ipv4_address.is_set
	|| ipv4_mask.is_set;
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4-address='" <<ipv4_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask = value;
        ipv4_mask.value_namespace = name_space;
        ipv4_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "ipv4-mask")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::Email()
    :
    domain{YType::str, "domain"},
    name{YType::str, "name"}
{
    yang_name = "email"; yang_parent_name = "remote";
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::~Email()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::has_data() const
{
    return domain.is_set
	|| name.is_set;
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "email";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Email' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "name")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::Fqdn()
    :
    domain{YType::str, "domain"},
    name{YType::str, "name"}
{
    yang_name = "fqdn"; yang_parent_name = "remote";
}

Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::~Fqdn()
{
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::has_data() const
{
    return domain.is_set
	|| name.is_set;
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fqdn";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fqdn' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "name")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Nat::Nat()
    :
    keepalive{YType::uint16, "keepalive"}
{
    yang_name = "nat"; yang_parent_name = "profile";
}

Native::Crypto::Ikev2::Profile::Nat::~Nat()
{
}

bool Native::Crypto::Ikev2::Profile::Nat::has_data() const
{
    return keepalive.is_set;
}

bool Native::Crypto::Ikev2::Profile::Nat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keepalive.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Nat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Nat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nat' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Nat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Nat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Nat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Pki::Pki()
    :
    trustpoint{YType::str, "trustpoint"},
    use{YType::enumeration, "use"}
{
    yang_name = "pki"; yang_parent_name = "profile";
}

Native::Crypto::Ikev2::Profile::Pki::~Pki()
{
}

bool Native::Crypto::Ikev2::Profile::Pki::has_data() const
{
    return trustpoint.is_set
	|| use.is_set;
}

bool Native::Crypto::Ikev2::Profile::Pki::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trustpoint.yfilter)
	|| ydk::is_set(use.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Pki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pki";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Pki::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pki' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trustpoint.is_set || is_set(trustpoint.yfilter)) leaf_name_data.push_back(trustpoint.get_name_leafdata());
    if (use.is_set || is_set(use.yfilter)) leaf_name_data.push_back(use.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Pki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Pki::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Pki::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trustpoint")
    {
        trustpoint = value;
        trustpoint.value_namespace = name_space;
        trustpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use")
    {
        use = value;
        use.value_namespace = name_space;
        use.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Pki::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trustpoint")
    {
        trustpoint.yfilter = yfilter;
    }
    if(value_path == "use")
    {
        use.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Pki::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trustpoint" || name == "use")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Reconnect::Reconnect()
    :
    timeout{YType::uint32, "timeout"}
{
    yang_name = "reconnect"; yang_parent_name = "profile";
}

Native::Crypto::Ikev2::Profile::Reconnect::~Reconnect()
{
}

bool Native::Crypto::Ikev2::Profile::Reconnect::has_data() const
{
    return timeout.is_set;
}

bool Native::Crypto::Ikev2::Profile::Reconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Reconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reconnect";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Reconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Reconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Reconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Reconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Reconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Reconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Redirect::Redirect()
    :
    gateway(std::make_shared<Native::Crypto::Ikev2::Profile::Redirect::Gateway>())
{
    gateway->parent = this;

    yang_name = "redirect"; yang_parent_name = "profile";
}

Native::Crypto::Ikev2::Profile::Redirect::~Redirect()
{
}

bool Native::Crypto::Ikev2::Profile::Redirect::has_data() const
{
    return (gateway !=  nullptr && gateway->has_data());
}

bool Native::Crypto::Ikev2::Profile::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| (gateway !=  nullptr && gateway->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Redirect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redirect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gateway")
    {
        if(gateway == nullptr)
        {
            gateway = std::make_shared<Native::Crypto::Ikev2::Profile::Redirect::Gateway>();
        }
        return gateway;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gateway != nullptr)
    {
        children["gateway"] = gateway;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gateway")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Redirect::Gateway::Gateway()
    :
    auth{YType::empty, "auth"}
{
    yang_name = "gateway"; yang_parent_name = "redirect";
}

Native::Crypto::Ikev2::Profile::Redirect::Gateway::~Gateway()
{
}

bool Native::Crypto::Ikev2::Profile::Redirect::Gateway::has_data() const
{
    return auth.is_set;
}

bool Native::Crypto::Ikev2::Profile::Redirect::Gateway::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Redirect::Gateway::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gateway";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Redirect::Gateway::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Gateway' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth.is_set || is_set(auth.yfilter)) leaf_name_data.push_back(auth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Redirect::Gateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Redirect::Gateway::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Redirect::Gateway::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth")
    {
        auth = value;
        auth.value_namespace = name_space;
        auth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Redirect::Gateway::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth")
    {
        auth.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Redirect::Gateway::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::VirtualTemplate::VirtualTemplate()
    :
    mode{YType::enumeration, "mode"},
    number{YType::uint16, "number"}
{
    yang_name = "virtual-template"; yang_parent_name = "profile";
}

Native::Crypto::Ikev2::Profile::VirtualTemplate::~VirtualTemplate()
{
}

bool Native::Crypto::Ikev2::Profile::VirtualTemplate::has_data() const
{
    return mode.is_set
	|| number.is_set;
}

bool Native::Crypto::Ikev2::Profile::VirtualTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::VirtualTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-template";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::VirtualTemplate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualTemplate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::VirtualTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::VirtualTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::VirtualTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::VirtualTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::VirtualTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "number")
        return true;
    return false;
}

Native::Crypto::Ikev2::Proposal::Proposal()
    :
    name{YType::str, "name"}
    	,
    encryption(std::make_shared<Native::Crypto::Ikev2::Proposal::Encryption>())
	,group(std::make_shared<Native::Crypto::Ikev2::Proposal::Group>())
	,integrity(std::make_shared<Native::Crypto::Ikev2::Proposal::Integrity>())
	,prf(std::make_shared<Native::Crypto::Ikev2::Proposal::Prf>())
{
    encryption->parent = this;

    group->parent = this;

    integrity->parent = this;

    prf->parent = this;

    yang_name = "proposal"; yang_parent_name = "ikev2";
}

Native::Crypto::Ikev2::Proposal::~Proposal()
{
}

bool Native::Crypto::Ikev2::Proposal::has_data() const
{
    return name.is_set
	|| (encryption !=  nullptr && encryption->has_data())
	|| (group !=  nullptr && group->has_data())
	|| (integrity !=  nullptr && integrity->has_data())
	|| (prf !=  nullptr && prf->has_data());
}

bool Native::Crypto::Ikev2::Proposal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (group !=  nullptr && group->has_operation())
	|| (integrity !=  nullptr && integrity->has_operation())
	|| (prf !=  nullptr && prf->has_operation());
}

std::string Native::Crypto::Ikev2::Proposal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proposal" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Proposal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Proposal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Crypto::Ikev2::Proposal::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Crypto::Ikev2::Proposal::Group>();
        }
        return group;
    }

    if(child_yang_name == "integrity")
    {
        if(integrity == nullptr)
        {
            integrity = std::make_shared<Native::Crypto::Ikev2::Proposal::Integrity>();
        }
        return integrity;
    }

    if(child_yang_name == "prf")
    {
        if(prf == nullptr)
        {
            prf = std::make_shared<Native::Crypto::Ikev2::Proposal::Prf>();
        }
        return prf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Proposal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(integrity != nullptr)
    {
        children["integrity"] = integrity;
    }

    if(prf != nullptr)
    {
        children["prf"] = prf;
    }

    return children;
}

void Native::Crypto::Ikev2::Proposal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Proposal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Proposal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "group" || name == "integrity" || name == "prf" || name == "name")
        return true;
    return false;
}

Native::Crypto::Ikev2::Proposal::Encryption::Encryption()
    :
    aes_cbc_128{YType::empty, "aes-cbc-128"},
    aes_cbc_192{YType::empty, "aes-cbc-192"},
    aes_cbc_256{YType::empty, "aes-cbc-256"},
    aes_gcm_128{YType::empty, "aes-gcm-128"},
    aes_gcm_256{YType::empty, "aes-gcm-256"},
    des{YType::empty, "des"},
    en_3des{YType::empty, "en-3des"}
{
    yang_name = "encryption"; yang_parent_name = "proposal";
}

Native::Crypto::Ikev2::Proposal::Encryption::~Encryption()
{
}

bool Native::Crypto::Ikev2::Proposal::Encryption::has_data() const
{
    return aes_cbc_128.is_set
	|| aes_cbc_192.is_set
	|| aes_cbc_256.is_set
	|| aes_gcm_128.is_set
	|| aes_gcm_256.is_set
	|| des.is_set
	|| en_3des.is_set;
}

bool Native::Crypto::Ikev2::Proposal::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aes_cbc_128.yfilter)
	|| ydk::is_set(aes_cbc_192.yfilter)
	|| ydk::is_set(aes_cbc_256.yfilter)
	|| ydk::is_set(aes_gcm_128.yfilter)
	|| ydk::is_set(aes_gcm_256.yfilter)
	|| ydk::is_set(des.yfilter)
	|| ydk::is_set(en_3des.yfilter);
}

std::string Native::Crypto::Ikev2::Proposal::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Proposal::Encryption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encryption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aes_cbc_128.is_set || is_set(aes_cbc_128.yfilter)) leaf_name_data.push_back(aes_cbc_128.get_name_leafdata());
    if (aes_cbc_192.is_set || is_set(aes_cbc_192.yfilter)) leaf_name_data.push_back(aes_cbc_192.get_name_leafdata());
    if (aes_cbc_256.is_set || is_set(aes_cbc_256.yfilter)) leaf_name_data.push_back(aes_cbc_256.get_name_leafdata());
    if (aes_gcm_128.is_set || is_set(aes_gcm_128.yfilter)) leaf_name_data.push_back(aes_gcm_128.get_name_leafdata());
    if (aes_gcm_256.is_set || is_set(aes_gcm_256.yfilter)) leaf_name_data.push_back(aes_gcm_256.get_name_leafdata());
    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());
    if (en_3des.is_set || is_set(en_3des.yfilter)) leaf_name_data.push_back(en_3des.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Proposal::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Proposal::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Proposal::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aes-cbc-128")
    {
        aes_cbc_128 = value;
        aes_cbc_128.value_namespace = name_space;
        aes_cbc_128.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-cbc-192")
    {
        aes_cbc_192 = value;
        aes_cbc_192.value_namespace = name_space;
        aes_cbc_192.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-cbc-256")
    {
        aes_cbc_256 = value;
        aes_cbc_256.value_namespace = name_space;
        aes_cbc_256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-gcm-128")
    {
        aes_gcm_128 = value;
        aes_gcm_128.value_namespace = name_space;
        aes_gcm_128.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-gcm-256")
    {
        aes_gcm_256 = value;
        aes_gcm_256.value_namespace = name_space;
        aes_gcm_256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "en-3des")
    {
        en_3des = value;
        en_3des.value_namespace = name_space;
        en_3des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Proposal::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aes-cbc-128")
    {
        aes_cbc_128.yfilter = yfilter;
    }
    if(value_path == "aes-cbc-192")
    {
        aes_cbc_192.yfilter = yfilter;
    }
    if(value_path == "aes-cbc-256")
    {
        aes_cbc_256.yfilter = yfilter;
    }
    if(value_path == "aes-gcm-128")
    {
        aes_gcm_128.yfilter = yfilter;
    }
    if(value_path == "aes-gcm-256")
    {
        aes_gcm_256.yfilter = yfilter;
    }
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
    if(value_path == "en-3des")
    {
        en_3des.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Proposal::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes-cbc-128" || name == "aes-cbc-192" || name == "aes-cbc-256" || name == "aes-gcm-128" || name == "aes-gcm-256" || name == "des" || name == "en-3des")
        return true;
    return false;
}

Native::Crypto::Ikev2::Proposal::Group::Group()
    :
    fifteen{YType::empty, "fifteen"},
    five{YType::empty, "five"},
    fourteen{YType::empty, "fourteen"},
    nineteen{YType::empty, "nineteen"},
    one{YType::empty, "one"},
    sixteen{YType::empty, "sixteen"},
    twenty{YType::empty, "twenty"},
    twenty_four{YType::empty, "twenty-four"},
    twenty_one{YType::empty, "twenty-one"},
    two{YType::empty, "two"}
{
    yang_name = "group"; yang_parent_name = "proposal";
}

Native::Crypto::Ikev2::Proposal::Group::~Group()
{
}

bool Native::Crypto::Ikev2::Proposal::Group::has_data() const
{
    return fifteen.is_set
	|| five.is_set
	|| fourteen.is_set
	|| nineteen.is_set
	|| one.is_set
	|| sixteen.is_set
	|| twenty.is_set
	|| twenty_four.is_set
	|| twenty_one.is_set
	|| two.is_set;
}

bool Native::Crypto::Ikev2::Proposal::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fifteen.yfilter)
	|| ydk::is_set(five.yfilter)
	|| ydk::is_set(fourteen.yfilter)
	|| ydk::is_set(nineteen.yfilter)
	|| ydk::is_set(one.yfilter)
	|| ydk::is_set(sixteen.yfilter)
	|| ydk::is_set(twenty.yfilter)
	|| ydk::is_set(twenty_four.yfilter)
	|| ydk::is_set(twenty_one.yfilter)
	|| ydk::is_set(two.yfilter);
}

std::string Native::Crypto::Ikev2::Proposal::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Proposal::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Group' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fifteen.is_set || is_set(fifteen.yfilter)) leaf_name_data.push_back(fifteen.get_name_leafdata());
    if (five.is_set || is_set(five.yfilter)) leaf_name_data.push_back(five.get_name_leafdata());
    if (fourteen.is_set || is_set(fourteen.yfilter)) leaf_name_data.push_back(fourteen.get_name_leafdata());
    if (nineteen.is_set || is_set(nineteen.yfilter)) leaf_name_data.push_back(nineteen.get_name_leafdata());
    if (one.is_set || is_set(one.yfilter)) leaf_name_data.push_back(one.get_name_leafdata());
    if (sixteen.is_set || is_set(sixteen.yfilter)) leaf_name_data.push_back(sixteen.get_name_leafdata());
    if (twenty.is_set || is_set(twenty.yfilter)) leaf_name_data.push_back(twenty.get_name_leafdata());
    if (twenty_four.is_set || is_set(twenty_four.yfilter)) leaf_name_data.push_back(twenty_four.get_name_leafdata());
    if (twenty_one.is_set || is_set(twenty_one.yfilter)) leaf_name_data.push_back(twenty_one.get_name_leafdata());
    if (two.is_set || is_set(two.yfilter)) leaf_name_data.push_back(two.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Proposal::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Proposal::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Proposal::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fifteen")
    {
        fifteen = value;
        fifteen.value_namespace = name_space;
        fifteen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "five")
    {
        five = value;
        five.value_namespace = name_space;
        five.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fourteen")
    {
        fourteen = value;
        fourteen.value_namespace = name_space;
        fourteen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nineteen")
    {
        nineteen = value;
        nineteen.value_namespace = name_space;
        nineteen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one")
    {
        one = value;
        one.value_namespace = name_space;
        one.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sixteen")
    {
        sixteen = value;
        sixteen.value_namespace = name_space;
        sixteen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "twenty")
    {
        twenty = value;
        twenty.value_namespace = name_space;
        twenty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "twenty-four")
    {
        twenty_four = value;
        twenty_four.value_namespace = name_space;
        twenty_four.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "twenty-one")
    {
        twenty_one = value;
        twenty_one.value_namespace = name_space;
        twenty_one.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two")
    {
        two = value;
        two.value_namespace = name_space;
        two.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Proposal::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fifteen")
    {
        fifteen.yfilter = yfilter;
    }
    if(value_path == "five")
    {
        five.yfilter = yfilter;
    }
    if(value_path == "fourteen")
    {
        fourteen.yfilter = yfilter;
    }
    if(value_path == "nineteen")
    {
        nineteen.yfilter = yfilter;
    }
    if(value_path == "one")
    {
        one.yfilter = yfilter;
    }
    if(value_path == "sixteen")
    {
        sixteen.yfilter = yfilter;
    }
    if(value_path == "twenty")
    {
        twenty.yfilter = yfilter;
    }
    if(value_path == "twenty-four")
    {
        twenty_four.yfilter = yfilter;
    }
    if(value_path == "twenty-one")
    {
        twenty_one.yfilter = yfilter;
    }
    if(value_path == "two")
    {
        two.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Proposal::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fifteen" || name == "five" || name == "fourteen" || name == "nineteen" || name == "one" || name == "sixteen" || name == "twenty" || name == "twenty-four" || name == "twenty-one" || name == "two")
        return true;
    return false;
}

Native::Crypto::Ikev2::Proposal::Integrity::Integrity()
    :
    md5{YType::empty, "md5"},
    sha1{YType::empty, "sha1"},
    sha256{YType::empty, "sha256"},
    sha384{YType::empty, "sha384"},
    sha512{YType::empty, "sha512"}
{
    yang_name = "integrity"; yang_parent_name = "proposal";
}

Native::Crypto::Ikev2::Proposal::Integrity::~Integrity()
{
}

bool Native::Crypto::Ikev2::Proposal::Integrity::has_data() const
{
    return md5.is_set
	|| sha1.is_set
	|| sha256.is_set
	|| sha384.is_set
	|| sha512.is_set;
}

bool Native::Crypto::Ikev2::Proposal::Integrity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(sha1.yfilter)
	|| ydk::is_set(sha256.yfilter)
	|| ydk::is_set(sha384.yfilter)
	|| ydk::is_set(sha512.yfilter);
}

std::string Native::Crypto::Ikev2::Proposal::Integrity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "integrity";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Proposal::Integrity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Integrity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha1.is_set || is_set(sha1.yfilter)) leaf_name_data.push_back(sha1.get_name_leafdata());
    if (sha256.is_set || is_set(sha256.yfilter)) leaf_name_data.push_back(sha256.get_name_leafdata());
    if (sha384.is_set || is_set(sha384.yfilter)) leaf_name_data.push_back(sha384.get_name_leafdata());
    if (sha512.is_set || is_set(sha512.yfilter)) leaf_name_data.push_back(sha512.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Proposal::Integrity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Proposal::Integrity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Proposal::Integrity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha1")
    {
        sha1 = value;
        sha1.value_namespace = name_space;
        sha1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha256")
    {
        sha256 = value;
        sha256.value_namespace = name_space;
        sha256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha384")
    {
        sha384 = value;
        sha384.value_namespace = name_space;
        sha384.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha512")
    {
        sha512 = value;
        sha512.value_namespace = name_space;
        sha512.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Proposal::Integrity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "sha1")
    {
        sha1.yfilter = yfilter;
    }
    if(value_path == "sha256")
    {
        sha256.yfilter = yfilter;
    }
    if(value_path == "sha384")
    {
        sha384.yfilter = yfilter;
    }
    if(value_path == "sha512")
    {
        sha512.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Proposal::Integrity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "sha1" || name == "sha256" || name == "sha384" || name == "sha512")
        return true;
    return false;
}

Native::Crypto::Ikev2::Proposal::Prf::Prf()
    :
    md5{YType::empty, "md5"},
    sha1{YType::empty, "sha1"},
    sha256{YType::empty, "sha256"},
    sha384{YType::empty, "sha384"},
    sha512{YType::empty, "sha512"}
{
    yang_name = "prf"; yang_parent_name = "proposal";
}

Native::Crypto::Ikev2::Proposal::Prf::~Prf()
{
}

bool Native::Crypto::Ikev2::Proposal::Prf::has_data() const
{
    return md5.is_set
	|| sha1.is_set
	|| sha256.is_set
	|| sha384.is_set
	|| sha512.is_set;
}

bool Native::Crypto::Ikev2::Proposal::Prf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(sha1.yfilter)
	|| ydk::is_set(sha256.yfilter)
	|| ydk::is_set(sha384.yfilter)
	|| ydk::is_set(sha512.yfilter);
}

std::string Native::Crypto::Ikev2::Proposal::Prf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prf";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Proposal::Prf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha1.is_set || is_set(sha1.yfilter)) leaf_name_data.push_back(sha1.get_name_leafdata());
    if (sha256.is_set || is_set(sha256.yfilter)) leaf_name_data.push_back(sha256.get_name_leafdata());
    if (sha384.is_set || is_set(sha384.yfilter)) leaf_name_data.push_back(sha384.get_name_leafdata());
    if (sha512.is_set || is_set(sha512.yfilter)) leaf_name_data.push_back(sha512.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Proposal::Prf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Proposal::Prf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Proposal::Prf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha1")
    {
        sha1 = value;
        sha1.value_namespace = name_space;
        sha1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha256")
    {
        sha256 = value;
        sha256.value_namespace = name_space;
        sha256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha384")
    {
        sha384 = value;
        sha384.value_namespace = name_space;
        sha384.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha512")
    {
        sha512 = value;
        sha512.value_namespace = name_space;
        sha512.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Proposal::Prf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "sha1")
    {
        sha1.yfilter = yfilter;
    }
    if(value_path == "sha256")
    {
        sha256.yfilter = yfilter;
    }
    if(value_path == "sha384")
    {
        sha384.yfilter = yfilter;
    }
    if(value_path == "sha512")
    {
        sha512.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Proposal::Prf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "sha1" || name == "sha256" || name == "sha384" || name == "sha512")
        return true;
    return false;
}

Native::Crypto::Ikev2::Reconnect::Reconnect()
    :
    active{YType::str, "active"},
    key{YType::uint8, "key"},
    value_{YType::str, "value"}
{
    yang_name = "reconnect"; yang_parent_name = "ikev2";
}

Native::Crypto::Ikev2::Reconnect::~Reconnect()
{
}

bool Native::Crypto::Ikev2::Reconnect::has_data() const
{
    return active.is_set
	|| key.is_set
	|| value_.is_set;
}

bool Native::Crypto::Ikev2::Reconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Crypto::Ikev2::Reconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reconnect";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Reconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Reconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Reconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Reconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Reconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Reconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "key" || name == "value")
        return true;
    return false;
}

Native::Crypto::Ikev2::Redirect::Redirect()
    :
    gateway{YType::enumeration, "gateway"}
    	,
    client(nullptr) // presence node
{
    yang_name = "redirect"; yang_parent_name = "ikev2";
}

Native::Crypto::Ikev2::Redirect::~Redirect()
{
}

bool Native::Crypto::Ikev2::Redirect::has_data() const
{
    return gateway.is_set
	|| (client !=  nullptr && client->has_data());
}

bool Native::Crypto::Ikev2::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gateway.yfilter)
	|| (client !=  nullptr && client->has_operation());
}

std::string Native::Crypto::Ikev2::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Redirect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gateway.is_set || is_set(gateway.yfilter)) leaf_name_data.push_back(gateway.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Ikev2::Redirect::Client>();
        }
        return client;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    return children;
}

void Native::Crypto::Ikev2::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gateway")
    {
        gateway = value;
        gateway.value_namespace = name_space;
        gateway.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gateway")
    {
        gateway.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "gateway")
        return true;
    return false;
}

Native::Crypto::Ikev2::Redirect::Client::Client()
    :
    max_redirects{YType::uint8, "max-redirects"}
{
    yang_name = "client"; yang_parent_name = "redirect";
}

Native::Crypto::Ikev2::Redirect::Client::~Client()
{
}

bool Native::Crypto::Ikev2::Redirect::Client::has_data() const
{
    return max_redirects.is_set;
}

bool Native::Crypto::Ikev2::Redirect::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_redirects.yfilter);
}

std::string Native::Crypto::Ikev2::Redirect::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Redirect::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/redirect/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_redirects.is_set || is_set(max_redirects.yfilter)) leaf_name_data.push_back(max_redirects.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Redirect::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Redirect::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Redirect::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-redirects")
    {
        max_redirects = value;
        max_redirects.value_namespace = name_space;
        max_redirects.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Redirect::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-redirects")
    {
        max_redirects.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Redirect::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-redirects")
        return true;
    return false;
}

Native::Crypto::Gkm::Gkm()
{
    yang_name = "gkm"; yang_parent_name = "crypto";
}

Native::Crypto::Gkm::~Gkm()
{
}

bool Native::Crypto::Gkm::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Gkm::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:gkm";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Gkm::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Gkm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Group()
    :
    name{YType::str, "name"},
    ipv6{YType::empty, "ipv6"},
    passive{YType::empty, "passive"}
    	,
    client(std::make_shared<Native::Crypto::Gkm::Group::Client>())
	,default_(std::make_shared<Native::Crypto::Gkm::Group::Default_>())
	,identity(std::make_shared<Native::Crypto::Gkm::Group::Identity>())
	,server(std::make_shared<Native::Crypto::Gkm::Group::Server>())
{
    client->parent = this;

    default_->parent = this;

    identity->parent = this;

    server->parent = this;

    yang_name = "group"; yang_parent_name = "gkm";
}

Native::Crypto::Gkm::Group::~Group()
{
}

bool Native::Crypto::Gkm::Group::has_data() const
{
    return name.is_set
	|| ipv6.is_set
	|| passive.is_set
	|| (client !=  nullptr && client->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (identity !=  nullptr && identity->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Crypto::Gkm::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (identity !=  nullptr && identity->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Crypto::Gkm::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:gkm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Gkm::Group::Client>();
        }
        return client;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gkm::Group::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Gkm::Group::Identity>();
        }
        return identity;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Crypto::Gkm::Group::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(identity != nullptr)
    {
        children["identity"] = identity;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Crypto::Gkm::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "default" || name == "identity" || name == "server" || name == "name" || name == "ipv6" || name == "passive")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::Client()
    :
    bypass_policy{YType::empty, "bypass-policy"},
    transform_sets{YType::str, "transform-sets"},
    transport_encrypt_key{YType::enumeration, "transport-encrypt-key"}
    	,
    protocol(std::make_shared<Native::Crypto::Gkm::Group::Client::Protocol>())
	,recovery_check(std::make_shared<Native::Crypto::Gkm::Group::Client::RecoveryCheck>())
	,registration(std::make_shared<Native::Crypto::Gkm::Group::Client::Registration>())
	,rekey(std::make_shared<Native::Crypto::Gkm::Group::Client::Rekey>())
	,status(std::make_shared<Native::Crypto::Gkm::Group::Client::Status>())
{
    protocol->parent = this;

    recovery_check->parent = this;

    registration->parent = this;

    rekey->parent = this;

    status->parent = this;

    yang_name = "client"; yang_parent_name = "group";
}

Native::Crypto::Gkm::Group::Client::~Client()
{
}

bool Native::Crypto::Gkm::Group::Client::has_data() const
{
    for (auto const & leaf : transform_sets.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bypass_policy.is_set
	|| transport_encrypt_key.is_set
	|| (protocol !=  nullptr && protocol->has_data())
	|| (recovery_check !=  nullptr && recovery_check->has_data())
	|| (registration !=  nullptr && registration->has_data())
	|| (rekey !=  nullptr && rekey->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool Native::Crypto::Gkm::Group::Client::has_operation() const
{
    for (auto const & leaf : transform_sets.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bypass_policy.yfilter)
	|| ydk::is_set(transform_sets.yfilter)
	|| ydk::is_set(transport_encrypt_key.yfilter)
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (recovery_check !=  nullptr && recovery_check->has_operation())
	|| (registration !=  nullptr && registration->has_operation())
	|| (rekey !=  nullptr && rekey->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string Native::Crypto::Gkm::Group::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Client' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypass_policy.is_set || is_set(bypass_policy.yfilter)) leaf_name_data.push_back(bypass_policy.get_name_leafdata());
    if (transport_encrypt_key.is_set || is_set(transport_encrypt_key.yfilter)) leaf_name_data.push_back(transport_encrypt_key.get_name_leafdata());

    auto transform_sets_name_datas = transform_sets.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), transform_sets_name_datas.begin(), transform_sets_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Crypto::Gkm::Group::Client::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "recovery-check")
    {
        if(recovery_check == nullptr)
        {
            recovery_check = std::make_shared<Native::Crypto::Gkm::Group::Client::RecoveryCheck>();
        }
        return recovery_check;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Crypto::Gkm::Group::Client::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Native::Crypto::Gkm::Group::Client::Rekey>();
        }
        return rekey;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Native::Crypto::Gkm::Group::Client::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(recovery_check != nullptr)
    {
        children["recovery-check"] = recovery_check;
    }

    if(registration != nullptr)
    {
        children["registration"] = registration;
    }

    if(rekey != nullptr)
    {
        children["rekey"] = rekey;
    }

    if(status != nullptr)
    {
        children["status"] = status;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bypass-policy")
    {
        bypass_policy = value;
        bypass_policy.value_namespace = name_space;
        bypass_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-sets")
    {
        transform_sets.append(value);
    }
    if(value_path == "transport-encrypt-key")
    {
        transport_encrypt_key = value;
        transport_encrypt_key.value_namespace = name_space;
        transport_encrypt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bypass-policy")
    {
        bypass_policy.yfilter = yfilter;
    }
    if(value_path == "transform-sets")
    {
        transform_sets.yfilter = yfilter;
    }
    if(value_path == "transport-encrypt-key")
    {
        transport_encrypt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "recovery-check" || name == "registration" || name == "rekey" || name == "status" || name == "bypass-policy" || name == "transform-sets" || name == "transport-encrypt-key")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::Protocol::Protocol()
    :
    gdoi{YType::empty, "gdoi"},
    gikev2{YType::str, "gikev2"}
{
    yang_name = "protocol"; yang_parent_name = "client";
}

Native::Crypto::Gkm::Group::Client::Protocol::~Protocol()
{
}

bool Native::Crypto::Gkm::Group::Client::Protocol::has_data() const
{
    return gdoi.is_set
	|| gikev2.is_set;
}

bool Native::Crypto::Gkm::Group::Client::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gdoi.yfilter)
	|| ydk::is_set(gikev2.yfilter);
}

std::string Native::Crypto::Gkm::Group::Client::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Client::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gdoi.is_set || is_set(gdoi.yfilter)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (gikev2.is_set || is_set(gikev2.yfilter)) leaf_name_data.push_back(gikev2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Client::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Client::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Client::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gdoi")
    {
        gdoi = value;
        gdoi.value_namespace = name_space;
        gdoi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gikev2")
    {
        gikev2 = value;
        gikev2.value_namespace = name_space;
        gikev2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Client::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gdoi")
    {
        gdoi.yfilter = yfilter;
    }
    if(value_path == "gikev2")
    {
        gikev2.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Client::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gdoi" || name == "gikev2")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::RecoveryCheck::RecoveryCheck()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "recovery-check"; yang_parent_name = "client";
}

Native::Crypto::Gkm::Group::Client::RecoveryCheck::~RecoveryCheck()
{
}

bool Native::Crypto::Gkm::Group::Client::RecoveryCheck::has_data() const
{
    return interval.is_set;
}

bool Native::Crypto::Gkm::Group::Client::RecoveryCheck::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Crypto::Gkm::Group::Client::RecoveryCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-check";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Client::RecoveryCheck::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RecoveryCheck' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Client::RecoveryCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Client::RecoveryCheck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Client::RecoveryCheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Client::RecoveryCheck::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Client::RecoveryCheck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::Registration::Registration()
    :
    interface{YType::str, "interface"}
{
    yang_name = "registration"; yang_parent_name = "client";
}

Native::Crypto::Gkm::Group::Client::Registration::~Registration()
{
}

bool Native::Crypto::Gkm::Group::Client::Registration::has_data() const
{
    return interface.is_set;
}

bool Native::Crypto::Gkm::Group::Client::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Crypto::Gkm::Group::Client::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Client::Registration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Registration' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Client::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Client::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Client::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Client::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Client::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::Rekey::Rekey()
    :
    encryption(std::make_shared<Native::Crypto::Gkm::Group::Client::Rekey::Encryption>())
	,hash(std::make_shared<Native::Crypto::Gkm::Group::Client::Rekey::Hash>())
{
    encryption->parent = this;

    hash->parent = this;

    yang_name = "rekey"; yang_parent_name = "client";
}

Native::Crypto::Gkm::Group::Client::Rekey::~Rekey()
{
}

bool Native::Crypto::Gkm::Group::Client::Rekey::has_data() const
{
    return (encryption !=  nullptr && encryption->has_data())
	|| (hash !=  nullptr && hash->has_data());
}

bool Native::Crypto::Gkm::Group::Client::Rekey::has_operation() const
{
    return is_set(yfilter)
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (hash !=  nullptr && hash->has_operation());
}

std::string Native::Crypto::Gkm::Group::Client::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Client::Rekey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rekey' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Client::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Crypto::Gkm::Group::Client::Rekey::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "hash")
    {
        if(hash == nullptr)
        {
            hash = std::make_shared<Native::Crypto::Gkm::Group::Client::Rekey::Hash>();
        }
        return hash;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Client::Rekey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    if(hash != nullptr)
    {
        children["hash"] = hash;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Client::Rekey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Client::Rekey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Client::Rekey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "hash")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::Rekey::Encryption::Encryption()
    :
    aes_128{YType::empty, "aes-128"},
    aes_192{YType::empty, "aes-192"},
    aes_256{YType::empty, "aes-256"},
    des_cbc{YType::empty, "des-cbc"},
    rekey_3des_cbc{YType::empty, "rekey-3des-cbc"}
{
    yang_name = "encryption"; yang_parent_name = "rekey";
}

Native::Crypto::Gkm::Group::Client::Rekey::Encryption::~Encryption()
{
}

bool Native::Crypto::Gkm::Group::Client::Rekey::Encryption::has_data() const
{
    return aes_128.is_set
	|| aes_192.is_set
	|| aes_256.is_set
	|| des_cbc.is_set
	|| rekey_3des_cbc.is_set;
}

bool Native::Crypto::Gkm::Group::Client::Rekey::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aes_128.yfilter)
	|| ydk::is_set(aes_192.yfilter)
	|| ydk::is_set(aes_256.yfilter)
	|| ydk::is_set(des_cbc.yfilter)
	|| ydk::is_set(rekey_3des_cbc.yfilter);
}

std::string Native::Crypto::Gkm::Group::Client::Rekey::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Client::Rekey::Encryption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encryption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aes_128.is_set || is_set(aes_128.yfilter)) leaf_name_data.push_back(aes_128.get_name_leafdata());
    if (aes_192.is_set || is_set(aes_192.yfilter)) leaf_name_data.push_back(aes_192.get_name_leafdata());
    if (aes_256.is_set || is_set(aes_256.yfilter)) leaf_name_data.push_back(aes_256.get_name_leafdata());
    if (des_cbc.is_set || is_set(des_cbc.yfilter)) leaf_name_data.push_back(des_cbc.get_name_leafdata());
    if (rekey_3des_cbc.is_set || is_set(rekey_3des_cbc.yfilter)) leaf_name_data.push_back(rekey_3des_cbc.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Client::Rekey::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Client::Rekey::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Client::Rekey::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aes-128")
    {
        aes_128 = value;
        aes_128.value_namespace = name_space;
        aes_128.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-192")
    {
        aes_192 = value;
        aes_192.value_namespace = name_space;
        aes_192.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-256")
    {
        aes_256 = value;
        aes_256.value_namespace = name_space;
        aes_256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des-cbc")
    {
        des_cbc = value;
        des_cbc.value_namespace = name_space;
        des_cbc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rekey-3des-cbc")
    {
        rekey_3des_cbc = value;
        rekey_3des_cbc.value_namespace = name_space;
        rekey_3des_cbc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Client::Rekey::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aes-128")
    {
        aes_128.yfilter = yfilter;
    }
    if(value_path == "aes-192")
    {
        aes_192.yfilter = yfilter;
    }
    if(value_path == "aes-256")
    {
        aes_256.yfilter = yfilter;
    }
    if(value_path == "des-cbc")
    {
        des_cbc.yfilter = yfilter;
    }
    if(value_path == "rekey-3des-cbc")
    {
        rekey_3des_cbc.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Client::Rekey::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes-128" || name == "aes-192" || name == "aes-256" || name == "des-cbc" || name == "rekey-3des-cbc")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::Rekey::Hash::Hash()
    :
    sha{YType::empty, "sha"},
    sha256{YType::empty, "sha256"},
    sha384{YType::empty, "sha384"},
    sha512{YType::empty, "sha512"}
{
    yang_name = "hash"; yang_parent_name = "rekey";
}

Native::Crypto::Gkm::Group::Client::Rekey::Hash::~Hash()
{
}

bool Native::Crypto::Gkm::Group::Client::Rekey::Hash::has_data() const
{
    return sha.is_set
	|| sha256.is_set
	|| sha384.is_set
	|| sha512.is_set;
}

bool Native::Crypto::Gkm::Group::Client::Rekey::Hash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sha.yfilter)
	|| ydk::is_set(sha256.yfilter)
	|| ydk::is_set(sha384.yfilter)
	|| ydk::is_set(sha512.yfilter);
}

std::string Native::Crypto::Gkm::Group::Client::Rekey::Hash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hash";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Client::Rekey::Hash::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hash' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sha.is_set || is_set(sha.yfilter)) leaf_name_data.push_back(sha.get_name_leafdata());
    if (sha256.is_set || is_set(sha256.yfilter)) leaf_name_data.push_back(sha256.get_name_leafdata());
    if (sha384.is_set || is_set(sha384.yfilter)) leaf_name_data.push_back(sha384.get_name_leafdata());
    if (sha512.is_set || is_set(sha512.yfilter)) leaf_name_data.push_back(sha512.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Client::Rekey::Hash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Client::Rekey::Hash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Client::Rekey::Hash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sha")
    {
        sha = value;
        sha.value_namespace = name_space;
        sha.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha256")
    {
        sha256 = value;
        sha256.value_namespace = name_space;
        sha256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha384")
    {
        sha384 = value;
        sha384.value_namespace = name_space;
        sha384.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha512")
    {
        sha512 = value;
        sha512.value_namespace = name_space;
        sha512.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Client::Rekey::Hash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sha")
    {
        sha.yfilter = yfilter;
    }
    if(value_path == "sha256")
    {
        sha256.yfilter = yfilter;
    }
    if(value_path == "sha384")
    {
        sha384.yfilter = yfilter;
    }
    if(value_path == "sha512")
    {
        sha512.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Client::Rekey::Hash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sha" || name == "sha256" || name == "sha384" || name == "sha512")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::Status::Status()
    :
    active_sa(std::make_shared<Native::Crypto::Gkm::Group::Client::Status::ActiveSa>())
{
    active_sa->parent = this;

    yang_name = "status"; yang_parent_name = "client";
}

Native::Crypto::Gkm::Group::Client::Status::~Status()
{
}

bool Native::Crypto::Gkm::Group::Client::Status::has_data() const
{
    return (active_sa !=  nullptr && active_sa->has_data());
}

bool Native::Crypto::Gkm::Group::Client::Status::has_operation() const
{
    return is_set(yfilter)
	|| (active_sa !=  nullptr && active_sa->has_operation());
}

std::string Native::Crypto::Gkm::Group::Client::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Client::Status::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Status' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Client::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-sa")
    {
        if(active_sa == nullptr)
        {
            active_sa = std::make_shared<Native::Crypto::Gkm::Group::Client::Status::ActiveSa>();
        }
        return active_sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Client::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_sa != nullptr)
    {
        children["active-sa"] = active_sa;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Client::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Client::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Client::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-sa")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Client::Status::ActiveSa::ActiveSa()
    :
    track{YType::uint16, "track"}
{
    yang_name = "active-sa"; yang_parent_name = "status";
}

Native::Crypto::Gkm::Group::Client::Status::ActiveSa::~ActiveSa()
{
}

bool Native::Crypto::Gkm::Group::Client::Status::ActiveSa::has_data() const
{
    return track.is_set;
}

bool Native::Crypto::Gkm::Group::Client::Status::ActiveSa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(track.yfilter);
}

std::string Native::Crypto::Gkm::Group::Client::Status::ActiveSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-sa";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Client::Status::ActiveSa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActiveSa' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Client::Status::ActiveSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Client::Status::ActiveSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Client::Status::ActiveSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Client::Status::ActiveSa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Client::Status::ActiveSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Identity::Identity()
    :
    number{YType::uint64, "number"}
    	,
    address(std::make_shared<Native::Crypto::Gkm::Group::Identity::Address>())
{
    address->parent = this;

    yang_name = "identity"; yang_parent_name = "group";
}

Native::Crypto::Gkm::Group::Identity::~Identity()
{
}

bool Native::Crypto::Gkm::Group::Identity::has_data() const
{
    return number.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gkm::Group::Identity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gkm::Group::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Identity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Identity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Identity::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "number")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Identity::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{
    yang_name = "address"; yang_parent_name = "identity";
}

Native::Crypto::Gkm::Group::Identity::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Identity::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Identity::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Identity::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Identity::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Identity::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Identity::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Identity::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Identity::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Identity::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Server()
    :
    address(std::make_shared<Native::Crypto::Gkm::Group::Server::Address>())
	,hostname(std::make_shared<Native::Crypto::Gkm::Group::Server::Hostname>())
	,local(std::make_shared<Native::Crypto::Gkm::Group::Server::Local>())
{
    address->parent = this;

    hostname->parent = this;

    local->parent = this;

    yang_name = "server"; yang_parent_name = "group";
}

Native::Crypto::Gkm::Group::Server::~Server()
{
}

bool Native::Crypto::Gkm::Group::Server::has_data() const
{
    return (address !=  nullptr && address->has_data())
	|| (hostname !=  nullptr && hostname->has_data())
	|| (local !=  nullptr && local->has_data());
}

bool Native::Crypto::Gkm::Group::Server::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation())
	|| (local !=  nullptr && local->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Server' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Address>();
        }
        return address;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Crypto::Gkm::Group::Server::Hostname>();
        }
        return hostname;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Gkm::Group::Server::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(hostname != nullptr)
    {
        children["hostname"] = hostname;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "hostname" || name == "local")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Address::Address()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "address"; yang_parent_name = "server";
}

Native::Crypto::Gkm::Group::Server::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Address::has_data() const
{
    for (auto const & leaf : ipv4.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv6.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Address::has_operation() const
{
    for (auto const & leaf : ipv4.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ipv6.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv4_name_datas = ipv4.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_name_datas.begin(), ipv4_name_datas.end());
    auto ipv6_name_datas = ipv6.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_name_datas.begin(), ipv6_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4.append(value);
    }
    if(value_path == "ipv6")
    {
        ipv6.append(value);
    }
}

void Native::Crypto::Gkm::Group::Server::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Hostname::Hostname()
    :
    ipv4{YType::str, "ipv4"}
{
    yang_name = "hostname"; yang_parent_name = "server";
}

Native::Crypto::Gkm::Group::Server::Hostname::~Hostname()
{
}

bool Native::Crypto::Gkm::Group::Server::Hostname::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Hostname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hostname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Local()
    :
    gdoi{YType::empty, "gdoi"},
    gikev2{YType::str, "gikev2"}
    	,
    address(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Address>())
	,authorization(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Authorization>())
	,default_(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_>())
	,group(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Group_>())
	,identifier(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Identifier>())
	,redundancy(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy>())
	,registration(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Registration>())
	,rekey(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey>())
	,sa(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa>())
{
    address->parent = this;

    authorization->parent = this;

    default_->parent = this;

    group->parent = this;

    identifier->parent = this;

    redundancy->parent = this;

    registration->parent = this;

    rekey->parent = this;

    sa->parent = this;

    yang_name = "local"; yang_parent_name = "server";
}

Native::Crypto::Gkm::Group::Server::Local::~Local()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::has_data() const
{
    return gdoi.is_set
	|| gikev2.is_set
	|| (address !=  nullptr && address->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (group !=  nullptr && group->has_data())
	|| (identifier !=  nullptr && identifier->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (registration !=  nullptr && registration->has_data())
	|| (rekey !=  nullptr && rekey->has_data())
	|| (sa !=  nullptr && sa->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gdoi.yfilter)
	|| ydk::is_set(gikev2.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (group !=  nullptr && group->has_operation())
	|| (identifier !=  nullptr && identifier->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (registration !=  nullptr && registration->has_operation())
	|| (rekey !=  nullptr && rekey->has_operation())
	|| (sa !=  nullptr && sa->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gdoi.is_set || is_set(gdoi.yfilter)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (gikev2.is_set || is_set(gikev2.yfilter)) leaf_name_data.push_back(gikev2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Address>();
        }
        return address;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Group_>();
        }
        return group;
    }

    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Identifier>();
        }
        return identifier;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey>();
        }
        return rekey;
    }

    if(child_yang_name == "sa")
    {
        if(sa == nullptr)
        {
            sa = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa>();
        }
        return sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(identifier != nullptr)
    {
        children["identifier"] = identifier;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    if(registration != nullptr)
    {
        children["registration"] = registration;
    }

    if(rekey != nullptr)
    {
        children["rekey"] = rekey;
    }

    if(sa != nullptr)
    {
        children["sa"] = sa;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gdoi")
    {
        gdoi = value;
        gdoi.value_namespace = name_space;
        gdoi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gikev2")
    {
        gikev2 = value;
        gikev2.value_namespace = name_space;
        gikev2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gdoi")
    {
        gdoi.yfilter = yfilter;
    }
    if(value_path == "gikev2")
    {
        gikev2.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "authorization" || name == "default" || name == "group" || name == "identifier" || name == "redundancy" || name == "registration" || name == "rekey" || name == "sa" || name == "gdoi" || name == "gikev2")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{
    yang_name = "address"; yang_parent_name = "local";
}

Native::Crypto::Gkm::Group::Server::Local::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Authorization::Authorization()
    :
    identity{YType::str, "identity"}
    	,
    address(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Authorization::Address>())
{
    address->parent = this;

    yang_name = "authorization"; yang_parent_name = "local";
}

Native::Crypto::Gkm::Group::Server::Local::Authorization::~Authorization()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Authorization::has_data() const
{
    return identity.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identity.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Authorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authorization' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Authorization::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "identity")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{
    yang_name = "address"; yang_parent_name = "authorization";
}

Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Authorization::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Group_::Group_()
    :
    size(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Group_::Size>())
{
    size->parent = this;

    yang_name = "group"; yang_parent_name = "local";
}

Native::Crypto::Gkm::Group::Server::Local::Group_::~Group_()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Group_::has_data() const
{
    return (size !=  nullptr && size->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Group_::has_operation() const
{
    return is_set(yfilter)
	|| (size !=  nullptr && size->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Group_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Group_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Group_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Group_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "size")
    {
        if(size == nullptr)
        {
            size = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Group_::Size>();
        }
        return size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Group_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(size != nullptr)
    {
        children["size"] = size;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Group_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Group_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Group_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Group_::Size::Size()
    :
    large{YType::empty, "large"},
    medium{YType::empty, "medium"},
    small{YType::enumeration, "small"}
{
    yang_name = "size"; yang_parent_name = "group";
}

Native::Crypto::Gkm::Group::Server::Local::Group_::Size::~Size()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Group_::Size::has_data() const
{
    return large.is_set
	|| medium.is_set
	|| small.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Group_::Size::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(large.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(small.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Group_::Size::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "size";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Group_::Size::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Size' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (large.is_set || is_set(large.yfilter)) leaf_name_data.push_back(large.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (small.is_set || is_set(small.yfilter)) leaf_name_data.push_back(small.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Group_::Size::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Group_::Size::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Group_::Size::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "large")
    {
        large = value;
        large.value_namespace = name_space;
        large.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "small")
    {
        small = value;
        small.value_namespace = name_space;
        small.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Group_::Size::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "large")
    {
        large.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "small")
    {
        small.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Group_::Size::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "large" || name == "medium" || name == "small")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Identifier::Identifier()
    :
    value_{YType::uint8, "value"}
    	,
    default_(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_>())
	,range(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Identifier::Range>())
{
    default_->parent = this;

    range->parent = this;

    yang_name = "identifier"; yang_parent_name = "local";
}

Native::Crypto::Gkm::Group::Server::Local::Identifier::~Identifier()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::has_data() const
{
    return value_.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Identifier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Identifier' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Identifier::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "range" || name == "value")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Default_()
    :
    value_{YType::uint8, "value"}
    	,
    range(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range>())
{
    range->parent = this;

    yang_name = "default"; yang_parent_name = "identifier";
}

Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::~Default_()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::has_data() const
{
    return value_.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "value")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range::Range()
    :
    highest{YType::uint8, "highest"},
    hyphen{YType::empty, "hyphen"},
    lowest{YType::uint8, "lowest"}
{
    yang_name = "range"; yang_parent_name = "default";
}

Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range::~Range()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range::has_data() const
{
    return highest.is_set
	|| hyphen.is_set
	|| lowest.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(highest.yfilter)
	|| ydk::is_set(hyphen.yfilter)
	|| ydk::is_set(lowest.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (highest.is_set || is_set(highest.yfilter)) leaf_name_data.push_back(highest.get_name_leafdata());
    if (hyphen.is_set || is_set(hyphen.yfilter)) leaf_name_data.push_back(hyphen.get_name_leafdata());
    if (lowest.is_set || is_set(lowest.yfilter)) leaf_name_data.push_back(lowest.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "highest")
    {
        highest = value;
        highest.value_namespace = name_space;
        highest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hyphen")
    {
        hyphen = value;
        hyphen.value_namespace = name_space;
        hyphen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lowest")
    {
        lowest = value;
        lowest.value_namespace = name_space;
        lowest.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "highest")
    {
        highest.yfilter = yfilter;
    }
    if(value_path == "hyphen")
    {
        hyphen.yfilter = yfilter;
    }
    if(value_path == "lowest")
    {
        lowest.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "highest" || name == "hyphen" || name == "lowest")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::Range()
    :
    highest{YType::uint8, "highest"},
    hyphen{YType::empty, "hyphen"},
    lowest{YType::uint8, "lowest"}
{
    yang_name = "range"; yang_parent_name = "identifier";
}

Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::~Range()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::has_data() const
{
    return highest.is_set
	|| hyphen.is_set
	|| lowest.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(highest.yfilter)
	|| ydk::is_set(hyphen.yfilter)
	|| ydk::is_set(lowest.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (highest.is_set || is_set(highest.yfilter)) leaf_name_data.push_back(highest.get_name_leafdata());
    if (hyphen.is_set || is_set(hyphen.yfilter)) leaf_name_data.push_back(hyphen.get_name_leafdata());
    if (lowest.is_set || is_set(lowest.yfilter)) leaf_name_data.push_back(lowest.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "highest")
    {
        highest = value;
        highest.value_namespace = name_space;
        highest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hyphen")
    {
        hyphen = value;
        hyphen.value_namespace = name_space;
        hyphen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lowest")
    {
        lowest = value;
        lowest.value_namespace = name_space;
        lowest.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "highest")
    {
        highest.yfilter = yfilter;
    }
    if(value_path == "hyphen")
    {
        hyphen.yfilter = yfilter;
    }
    if(value_path == "lowest")
    {
        lowest.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Identifier::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "highest" || name == "hyphen" || name == "lowest")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Redundancy()
    :
    default_(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_>())
	,local(nullptr) // presence node
	,peer(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer>())
	,protocol(nullptr) // presence node
{
    default_->parent = this;

    peer->parent = this;

    yang_name = "redundancy"; yang_parent_name = "local";
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::~Redundancy()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::has_data() const
{
    return (default_ !=  nullptr && default_->has_data())
	|| (local !=  nullptr && local->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (protocol !=  nullptr && protocol->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (local !=  nullptr && local->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Redundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redundancy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_>();
        }
        return local;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "local" || name == "peer" || name == "protocol")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Default_()
    :
    local(nullptr) // presence node
	,peer(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer>())
	,protocol(nullptr) // presence node
{
    peer->parent = this;

    yang_name = "default"; yang_parent_name = "redundancy";
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::~Default_()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::has_data() const
{
    return (local !=  nullptr && local->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (protocol !=  nullptr && protocol->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_>();
        }
        return local;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "peer" || name == "protocol")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_::Local_()
    :
    priority{YType::uint8, "priority"}
{
    yang_name = "local"; yang_parent_name = "default";
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_::~Local_()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_::has_data() const
{
    return priority.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Peer()
    :
    address(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address>())
{
    address->parent = this;

    yang_name = "peer"; yang_parent_name = "default";
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::~Peer()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{
    yang_name = "address"; yang_parent_name = "peer";
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::Protocol()
    :
    pdu{YType::uint32, "pdu"},
    version{YType::enumeration, "version"}
{
    yang_name = "protocol"; yang_parent_name = "default";
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::~Protocol()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::has_data() const
{
    return pdu.is_set
	|| version.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu.is_set || is_set(pdu.yfilter)) leaf_name_data.push_back(pdu.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu")
    {
        pdu = value;
        pdu.value_namespace = name_space;
        pdu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu")
    {
        pdu.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu" || name == "version")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::Local_()
    :
    priority{YType::uint8, "priority"}
{
    yang_name = "local"; yang_parent_name = "redundancy";
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::~Local_()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::has_data() const
{
    return priority.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Peer()
    :
    address(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address>())
{
    address->parent = this;

    yang_name = "peer"; yang_parent_name = "redundancy";
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::~Peer()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{
    yang_name = "address"; yang_parent_name = "peer";
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::Protocol()
    :
    pdu{YType::uint32, "pdu"},
    version{YType::enumeration, "version"}
{
    yang_name = "protocol"; yang_parent_name = "redundancy";
}

Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::~Protocol()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::has_data() const
{
    return pdu.is_set
	|| version.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu.is_set || is_set(pdu.yfilter)) leaf_name_data.push_back(pdu.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu")
    {
        pdu = value;
        pdu.value_namespace = name_space;
        pdu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu")
    {
        pdu.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu" || name == "version")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Registration::Registration()
    :
    interface{YType::str, "interface"}
    	,
    periodic(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic>())
{
    periodic->parent = this;

    yang_name = "registration"; yang_parent_name = "local";
}

Native::Crypto::Gkm::Group::Server::Local::Registration::~Registration()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::has_data() const
{
    return interface.is_set
	|| (periodic !=  nullptr && periodic->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| (periodic !=  nullptr && periodic->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Registration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Registration' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "periodic")
    {
        if(periodic == nullptr)
        {
            periodic = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic>();
        }
        return periodic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(periodic != nullptr)
    {
        children["periodic"] = periodic;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "periodic" || name == "interface")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Periodic()
    :
    crl(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl>())
{
    crl->parent = this;

    yang_name = "periodic"; yang_parent_name = "registration";
}

Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::~Periodic()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::has_data() const
{
    return (crl !=  nullptr && crl->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::has_operation() const
{
    return is_set(yfilter)
	|| (crl !=  nullptr && crl->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "periodic";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Periodic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crl")
    {
        if(crl == nullptr)
        {
            crl = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl>();
        }
        return crl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(crl != nullptr)
    {
        children["crl"] = crl;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crl")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::Crl()
    :
    trustpoint{YType::str, "trustpoint"}
{
    yang_name = "crl"; yang_parent_name = "periodic";
}

Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::~Crl()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::has_data() const
{
    return trustpoint.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trustpoint.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crl";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Crl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trustpoint.is_set || is_set(trustpoint.yfilter)) leaf_name_data.push_back(trustpoint.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trustpoint")
    {
        trustpoint = value;
        trustpoint.value_namespace = name_space;
        trustpoint.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trustpoint")
    {
        trustpoint.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trustpoint")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Rekey()
    :
    acknowledgement{YType::enumeration, "acknowledgement"}
    	,
    address(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Address>())
	,algorithm(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm>())
	,authentication(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication>())
	,lifetime(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime>())
	,retransmit(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit>())
	,sig_hash(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash>())
	,transport(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport>())
{
    address->parent = this;

    algorithm->parent = this;

    authentication->parent = this;

    lifetime->parent = this;

    retransmit->parent = this;

    sig_hash->parent = this;

    transport->parent = this;

    yang_name = "rekey"; yang_parent_name = "local";
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::~Rekey()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::has_data() const
{
    return acknowledgement.is_set
	|| (address !=  nullptr && address->has_data())
	|| (algorithm !=  nullptr && algorithm->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (sig_hash !=  nullptr && sig_hash->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledgement.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (algorithm !=  nullptr && algorithm->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (sig_hash !=  nullptr && sig_hash->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Rekey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rekey' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement.is_set || is_set(acknowledgement.yfilter)) leaf_name_data.push_back(acknowledgement.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Address>();
        }
        return address;
    }

    if(child_yang_name == "algorithm")
    {
        if(algorithm == nullptr)
        {
            algorithm = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm>();
        }
        return algorithm;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "sig-hash")
    {
        if(sig_hash == nullptr)
        {
            sig_hash = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash>();
        }
        return sig_hash;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(algorithm != nullptr)
    {
        children["algorithm"] = algorithm;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(retransmit != nullptr)
    {
        children["retransmit"] = retransmit;
    }

    if(sig_hash != nullptr)
    {
        children["sig-hash"] = sig_hash;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement = value;
        acknowledgement.value_namespace = name_space;
        acknowledgement.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "algorithm" || name == "authentication" || name == "lifetime" || name == "retransmit" || name == "sig-hash" || name == "transport" || name == "acknowledgement")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{
    yang_name = "address"; yang_parent_name = "rekey";
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::Algorithm()
    :
    a3des_cbc{YType::empty, "a3des-cbc"},
    aes_128{YType::empty, "aes-128"},
    aes_192{YType::empty, "aes-192"},
    aes_256{YType::empty, "aes-256"},
    des_cbc{YType::empty, "des-cbc"}
{
    yang_name = "algorithm"; yang_parent_name = "rekey";
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::~Algorithm()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::has_data() const
{
    return a3des_cbc.is_set
	|| aes_128.is_set
	|| aes_192.is_set
	|| aes_256.is_set
	|| des_cbc.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(a3des_cbc.yfilter)
	|| ydk::is_set(aes_128.yfilter)
	|| ydk::is_set(aes_192.yfilter)
	|| ydk::is_set(aes_256.yfilter)
	|| ydk::is_set(des_cbc.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Algorithm' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a3des_cbc.is_set || is_set(a3des_cbc.yfilter)) leaf_name_data.push_back(a3des_cbc.get_name_leafdata());
    if (aes_128.is_set || is_set(aes_128.yfilter)) leaf_name_data.push_back(aes_128.get_name_leafdata());
    if (aes_192.is_set || is_set(aes_192.yfilter)) leaf_name_data.push_back(aes_192.get_name_leafdata());
    if (aes_256.is_set || is_set(aes_256.yfilter)) leaf_name_data.push_back(aes_256.get_name_leafdata());
    if (des_cbc.is_set || is_set(des_cbc.yfilter)) leaf_name_data.push_back(des_cbc.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a3des-cbc")
    {
        a3des_cbc = value;
        a3des_cbc.value_namespace = name_space;
        a3des_cbc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-128")
    {
        aes_128 = value;
        aes_128.value_namespace = name_space;
        aes_128.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-192")
    {
        aes_192 = value;
        aes_192.value_namespace = name_space;
        aes_192.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-256")
    {
        aes_256 = value;
        aes_256.value_namespace = name_space;
        aes_256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des-cbc")
    {
        des_cbc = value;
        des_cbc.value_namespace = name_space;
        des_cbc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a3des-cbc")
    {
        a3des_cbc.yfilter = yfilter;
    }
    if(value_path == "aes-128")
    {
        aes_128.yfilter = yfilter;
    }
    if(value_path == "aes-192")
    {
        aes_192.yfilter = yfilter;
    }
    if(value_path == "aes-256")
    {
        aes_256.yfilter = yfilter;
    }
    if(value_path == "des-cbc")
    {
        des_cbc.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "a3des-cbc" || name == "aes-128" || name == "aes-192" || name == "aes-256" || name == "des-cbc")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Authentication()
    :
    mypubkey(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey>())
{
    mypubkey->parent = this;

    yang_name = "authentication"; yang_parent_name = "rekey";
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::~Authentication()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::has_data() const
{
    return (mypubkey !=  nullptr && mypubkey->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (mypubkey !=  nullptr && mypubkey->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mypubkey")
    {
        if(mypubkey == nullptr)
        {
            mypubkey = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey>();
        }
        return mypubkey;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mypubkey != nullptr)
    {
        children["mypubkey"] = mypubkey;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mypubkey")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::Mypubkey()
    :
    rsa{YType::str, "rsa"}
{
    yang_name = "mypubkey"; yang_parent_name = "authentication";
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::~Mypubkey()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::has_data() const
{
    return rsa.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rsa.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mypubkey";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mypubkey' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsa.is_set || is_set(rsa.yfilter)) leaf_name_data.push_back(rsa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rsa")
    {
        rsa = value;
        rsa.value_namespace = name_space;
        rsa.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rsa")
    {
        rsa.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsa")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::Lifetime()
    :
    days{YType::uint8, "days"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lifetime"; yang_parent_name = "rekey";
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::has_data() const
{
    return days.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lifetime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::Retransmit()
    :
    number{YType::uint8, "number"},
    periodic{YType::empty, "periodic"},
    seconds{YType::uint8, "seconds"}
{
    yang_name = "retransmit"; yang_parent_name = "rekey";
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::~Retransmit()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::has_data() const
{
    return number.is_set
	|| periodic.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(periodic.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Retransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "periodic" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::SigHash()
    :
    algorithm{YType::enumeration, "algorithm"}
{
    yang_name = "sig-hash"; yang_parent_name = "rekey";
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::~SigHash()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::has_data() const
{
    return algorithm.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(algorithm.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sig-hash";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SigHash' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::Transport()
    :
    unicast{YType::empty, "unicast"}
{
    yang_name = "transport"; yang_parent_name = "rekey";
}

Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::~Transport()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::has_data() const
{
    return unicast.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Sa()
    :
    receive_only{YType::empty, "receive-only"}
    	,
    d3p(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::D3P>())
	,pair_wise_keying(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying>())
{
    d3p->parent = this;

    pair_wise_keying->parent = this;

    yang_name = "sa"; yang_parent_name = "local";
}

Native::Crypto::Gkm::Group::Server::Local::Sa::~Sa()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::has_data() const
{
    for (std::size_t index=0; index<ipsec.size(); index++)
    {
        if(ipsec[index]->has_data())
            return true;
    }
    return receive_only.is_set
	|| (d3p !=  nullptr && d3p->has_data())
	|| (pair_wise_keying !=  nullptr && pair_wise_keying->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::has_operation() const
{
    for (std::size_t index=0; index<ipsec.size(); index++)
    {
        if(ipsec[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(receive_only.yfilter)
	|| (d3p !=  nullptr && d3p->has_operation())
	|| (pair_wise_keying !=  nullptr && pair_wise_keying->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Sa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sa' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive_only.is_set || is_set(receive_only.yfilter)) leaf_name_data.push_back(receive_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "d3p")
    {
        if(d3p == nullptr)
        {
            d3p = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::D3P>();
        }
        return d3p;
    }

    if(child_yang_name == "ipsec")
    {
        for(auto const & c : ipsec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec>();
        c->parent = this;
        ipsec.push_back(c);
        return c;
    }

    if(child_yang_name == "pair-wise-keying")
    {
        if(pair_wise_keying == nullptr)
        {
            pair_wise_keying = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying>();
        }
        return pair_wise_keying;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(d3p != nullptr)
    {
        children["d3p"] = d3p;
    }

    for (auto const & c : ipsec)
    {
        children[c->get_segment_path()] = c;
    }

    if(pair_wise_keying != nullptr)
    {
        children["pair-wise-keying"] = pair_wise_keying;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive-only")
    {
        receive_only = value;
        receive_only.value_namespace = name_space;
        receive_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive-only")
    {
        receive_only.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "d3p" || name == "ipsec" || name == "pair-wise-keying" || name == "receive-only")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::D3P()
    :
    window(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window>())
{
    window->parent = this;

    yang_name = "d3p"; yang_parent_name = "sa";
}

Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::~D3P()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::has_data() const
{
    return (window !=  nullptr && window->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::has_operation() const
{
    return is_set(yfilter)
	|| (window !=  nullptr && window->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "d3p";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'D3P' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "window")
    {
        if(window == nullptr)
        {
            window = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window>();
        }
        return window;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(window != nullptr)
    {
        children["window"] = window;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window::Window()
    :
    msec{YType::uint32, "msec"},
    sec{YType::uint8, "sec"}
{
    yang_name = "window"; yang_parent_name = "d3p";
}

Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window::~Window()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window::has_data() const
{
    return msec.is_set
	|| sec.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(sec.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Window' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (sec.is_set || is_set(sec.yfilter)) leaf_name_data.push_back(sec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec")
    {
        sec = value;
        sec.value_namespace = name_space;
        sec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "sec")
    {
        sec.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "sec")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Ipsec()
    :
    sequence{YType::uint16, "sequence"},
    profile{YType::str, "profile"}
    	,
    default_(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_>())
	,match(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match>())
	,replay(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay>())
	,tag(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag>())
{
    default_->parent = this;

    match->parent = this;

    replay->parent = this;

    tag->parent = this;

    yang_name = "ipsec"; yang_parent_name = "sa";
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::~Ipsec()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::has_data() const
{
    return sequence.is_set
	|| profile.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (replay !=  nullptr && replay->has_data())
	|| (tag !=  nullptr && tag->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (replay !=  nullptr && replay->has_operation())
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec" <<"[sequence='" <<sequence <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipsec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match>();
        }
        return match;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay>();
        }
        return replay;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(replay != nullptr)
    {
        children["replay"] = replay;
    }

    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "match" || name == "replay" || name == "tag" || name == "sequence" || name == "profile")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Default_()
    :
    profile{YType::empty, "profile"}
    	,
    match(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match>())
	,replay(nullptr) // presence node
	,tag(nullptr) // presence node
{
    match->parent = this;

    yang_name = "default"; yang_parent_name = "ipsec";
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::~Default_()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::has_data() const
{
    return profile.is_set
	|| (match !=  nullptr && match->has_data())
	|| (replay !=  nullptr && replay->has_data())
	|| (tag !=  nullptr && tag->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter)
	|| (match !=  nullptr && match->has_operation())
	|| (replay !=  nullptr && replay->has_operation())
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match>();
        }
        return match;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay>();
        }
        return replay;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(replay != nullptr)
    {
        children["replay"] = replay;
    }

    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "replay" || name == "tag" || name == "profile")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Match()
    :
    address(nullptr) // presence node
{
    yang_name = "match"; yang_parent_name = "default";
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::~Match()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::Address()
{
    yang_name = "address"; yang_parent_name = "match";
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay::Replay()
{
    yang_name = "replay"; yang_parent_name = "default";
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay::~Replay()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Replay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag::Tag()
{
    yang_name = "tag"; yang_parent_name = "default";
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag::~Tag()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tag' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Match()
    :
    address(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address>())
{
    address->parent = this;

    yang_name = "match"; yang_parent_name = "ipsec";
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::~Match()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::Address()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "address"; yang_parent_name = "match";
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Replay()
    :
    counter(nullptr) // presence node
	,time(nullptr) // presence node
{
    yang_name = "replay"; yang_parent_name = "ipsec";
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::~Replay()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::has_data() const
{
    return (counter !=  nullptr && counter->has_data())
	|| (time !=  nullptr && time->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::has_operation() const
{
    return is_set(yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Replay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(time != nullptr)
    {
        children["time"] = time;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "time")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::Counter()
    :
    window_size{YType::enumeration, "window-size"}
{
    yang_name = "counter"; yang_parent_name = "replay";
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::~Counter()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::has_data() const
{
    return window_size.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window-size")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::Time()
    :
    window_size{YType::uint8, "window-size"}
{
    yang_name = "time"; yang_parent_name = "replay";
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::~Time()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::has_data() const
{
    return window_size.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Time' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window-size")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Tag()
    :
    cts(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts>())
{
    cts->parent = this;

    yang_name = "tag"; yang_parent_name = "ipsec";
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::~Tag()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::has_data() const
{
    return (cts !=  nullptr && cts->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::has_operation() const
{
    return is_set(yfilter)
	|| (cts !=  nullptr && cts->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tag' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cts")
    {
        if(cts == nullptr)
        {
            cts = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts>();
        }
        return cts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cts != nullptr)
    {
        children["cts"] = cts;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cts")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::Cts()
    :
    sgt{YType::empty, "sgt"}
{
    yang_name = "cts"; yang_parent_name = "tag";
}

Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::~Cts()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::has_data() const
{
    return sgt.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgt.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cts' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::PairWiseKeying()
    :
    safety_limit{YType::uint8, "safety-limit"}
{
    yang_name = "pair-wise-keying"; yang_parent_name = "sa";
}

Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::~PairWiseKeying()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::has_data() const
{
    return safety_limit.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(safety_limit.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pair-wise-keying";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PairWiseKeying' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (safety_limit.is_set || is_set(safety_limit.yfilter)) leaf_name_data.push_back(safety_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "safety-limit")
    {
        safety_limit = value;
        safety_limit.value_namespace = name_space;
        safety_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "safety-limit")
    {
        safety_limit.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "safety-limit")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Default_()
    :
    gdoi{YType::empty, "gdoi"},
    gikev2{YType::empty, "gikev2"}
    	,
    address(nullptr) // presence node
	,authorization(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization>())
	,group(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Group_>())
	,identifier(nullptr) // presence node
	,redundancy(nullptr) // presence node
	,registration(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Registration>())
	,rekey(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey>())
	,sa(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Sa>())
{
    authorization->parent = this;

    group->parent = this;

    registration->parent = this;

    rekey->parent = this;

    sa->parent = this;

    yang_name = "default"; yang_parent_name = "local";
}

Native::Crypto::Gkm::Group::Server::Local::Default_::~Default_()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::has_data() const
{
    return gdoi.is_set
	|| gikev2.is_set
	|| (address !=  nullptr && address->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (group !=  nullptr && group->has_data())
	|| (identifier !=  nullptr && identifier->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (registration !=  nullptr && registration->has_data())
	|| (rekey !=  nullptr && rekey->has_data())
	|| (sa !=  nullptr && sa->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gdoi.yfilter)
	|| ydk::is_set(gikev2.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (group !=  nullptr && group->has_operation())
	|| (identifier !=  nullptr && identifier->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (registration !=  nullptr && registration->has_operation())
	|| (rekey !=  nullptr && rekey->has_operation())
	|| (sa !=  nullptr && sa->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gdoi.is_set || is_set(gdoi.yfilter)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (gikev2.is_set || is_set(gikev2.yfilter)) leaf_name_data.push_back(gikev2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Address>();
        }
        return address;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Group_>();
        }
        return group;
    }

    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier>();
        }
        return identifier;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey>();
        }
        return rekey;
    }

    if(child_yang_name == "sa")
    {
        if(sa == nullptr)
        {
            sa = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Sa>();
        }
        return sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(identifier != nullptr)
    {
        children["identifier"] = identifier;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    if(registration != nullptr)
    {
        children["registration"] = registration;
    }

    if(rekey != nullptr)
    {
        children["rekey"] = rekey;
    }

    if(sa != nullptr)
    {
        children["sa"] = sa;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gdoi")
    {
        gdoi = value;
        gdoi.value_namespace = name_space;
        gdoi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gikev2")
    {
        gikev2 = value;
        gikev2.value_namespace = name_space;
        gikev2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gdoi")
    {
        gdoi.yfilter = yfilter;
    }
    if(value_path == "gikev2")
    {
        gikev2.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "authorization" || name == "group" || name == "identifier" || name == "redundancy" || name == "registration" || name == "rekey" || name == "sa" || name == "gdoi" || name == "gikev2")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Address::Address()
{
    yang_name = "address"; yang_parent_name = "default";
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Address::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Address::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Default_::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Authorization()
    :
    identity{YType::empty, "identity"}
    	,
    address(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address>())
{
    address->parent = this;

    yang_name = "authorization"; yang_parent_name = "default";
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::~Authorization()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::has_data() const
{
    return identity.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identity.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authorization' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "identity")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address::Address()
    :
    ipv4{YType::empty, "ipv4"}
{
    yang_name = "address"; yang_parent_name = "authorization";
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Group_()
    :
    size(nullptr) // presence node
{
    yang_name = "group"; yang_parent_name = "default";
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::~Group_()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::has_data() const
{
    return (size !=  nullptr && size->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::has_operation() const
{
    return is_set(yfilter)
	|| (size !=  nullptr && size->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Group_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "size")
    {
        if(size == nullptr)
        {
            size = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size>();
        }
        return size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(size != nullptr)
    {
        children["size"] = size;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size::Size()
{
    yang_name = "size"; yang_parent_name = "group";
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size::~Size()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "size";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Size' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier::Identifier()
{
    yang_name = "identifier"; yang_parent_name = "default";
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier::~Identifier()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Identifier' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy::Redundancy()
{
    yang_name = "redundancy"; yang_parent_name = "default";
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy::~Redundancy()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redundancy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Registration()
    :
    interface{YType::str, "interface"}
    	,
    periodic(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic>())
{
    periodic->parent = this;

    yang_name = "registration"; yang_parent_name = "default";
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::~Registration()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::has_data() const
{
    return interface.is_set
	|| (periodic !=  nullptr && periodic->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| (periodic !=  nullptr && periodic->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Registration' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "periodic")
    {
        if(periodic == nullptr)
        {
            periodic = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic>();
        }
        return periodic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(periodic != nullptr)
    {
        children["periodic"] = periodic;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "periodic" || name == "interface")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Periodic()
    :
    crl(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl>())
{
    crl->parent = this;

    yang_name = "periodic"; yang_parent_name = "registration";
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::~Periodic()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::has_data() const
{
    return (crl !=  nullptr && crl->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::has_operation() const
{
    return is_set(yfilter)
	|| (crl !=  nullptr && crl->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "periodic";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Periodic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crl")
    {
        if(crl == nullptr)
        {
            crl = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl>();
        }
        return crl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(crl != nullptr)
    {
        children["crl"] = crl;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crl")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl::Crl()
    :
    trustpoint{YType::empty, "trustpoint"}
{
    yang_name = "crl"; yang_parent_name = "periodic";
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl::~Crl()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl::has_data() const
{
    return trustpoint.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trustpoint.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crl";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Crl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trustpoint.is_set || is_set(trustpoint.yfilter)) leaf_name_data.push_back(trustpoint.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trustpoint")
    {
        trustpoint = value;
        trustpoint.value_namespace = name_space;
        trustpoint.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trustpoint")
    {
        trustpoint.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trustpoint")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Rekey()
    :
    acknowledgement{YType::empty, "acknowledgement"}
    	,
    address(nullptr) // presence node
	,algorithm(nullptr) // presence node
	,authentication(nullptr) // presence node
	,lifetime(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime>())
	,retransmit(nullptr) // presence node
	,sig_hash(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash>())
	,transport(std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport>())
{
    lifetime->parent = this;

    sig_hash->parent = this;

    transport->parent = this;

    yang_name = "rekey"; yang_parent_name = "default";
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::~Rekey()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::has_data() const
{
    return acknowledgement.is_set
	|| (address !=  nullptr && address->has_data())
	|| (algorithm !=  nullptr && algorithm->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (sig_hash !=  nullptr && sig_hash->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledgement.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (algorithm !=  nullptr && algorithm->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (sig_hash !=  nullptr && sig_hash->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rekey' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement.is_set || is_set(acknowledgement.yfilter)) leaf_name_data.push_back(acknowledgement.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address>();
        }
        return address;
    }

    if(child_yang_name == "algorithm")
    {
        if(algorithm == nullptr)
        {
            algorithm = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm>();
        }
        return algorithm;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "sig-hash")
    {
        if(sig_hash == nullptr)
        {
            sig_hash = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash>();
        }
        return sig_hash;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(algorithm != nullptr)
    {
        children["algorithm"] = algorithm;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(retransmit != nullptr)
    {
        children["retransmit"] = retransmit;
    }

    if(sig_hash != nullptr)
    {
        children["sig-hash"] = sig_hash;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement = value;
        acknowledgement.value_namespace = name_space;
        acknowledgement.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "algorithm" || name == "authentication" || name == "lifetime" || name == "retransmit" || name == "sig-hash" || name == "transport" || name == "acknowledgement")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address::Address()
{
    yang_name = "address"; yang_parent_name = "rekey";
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm::Algorithm()
{
    yang_name = "algorithm"; yang_parent_name = "rekey";
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm::~Algorithm()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Algorithm' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication::Authentication()
{
    yang_name = "authentication"; yang_parent_name = "rekey";
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication::~Authentication()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime::Lifetime()
    :
    days{YType::empty, "days"},
    seconds{YType::empty, "seconds"}
{
    yang_name = "lifetime"; yang_parent_name = "rekey";
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime::has_data() const
{
    return days.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lifetime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit::Retransmit()
{
    yang_name = "retransmit"; yang_parent_name = "rekey";
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit::~Retransmit()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Retransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash::SigHash()
    :
    algorithm{YType::empty, "algorithm"}
{
    yang_name = "sig-hash"; yang_parent_name = "rekey";
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash::~SigHash()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash::has_data() const
{
    return algorithm.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(algorithm.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sig-hash";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SigHash' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport::Transport()
    :
    unicast{YType::empty, "unicast"}
{
    yang_name = "transport"; yang_parent_name = "rekey";
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport::~Transport()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport::has_data() const
{
    return unicast.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Sa()
    :
    receive_only{YType::empty, "receive-only"}
    	,
    d3p(nullptr) // presence node
	,pair_wise_keying(nullptr) // presence node
{
    yang_name = "sa"; yang_parent_name = "default";
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::~Sa()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::has_data() const
{
    for (std::size_t index=0; index<ipsec.size(); index++)
    {
        if(ipsec[index]->has_data())
            return true;
    }
    return receive_only.is_set
	|| (d3p !=  nullptr && d3p->has_data())
	|| (pair_wise_keying !=  nullptr && pair_wise_keying->has_data());
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::has_operation() const
{
    for (std::size_t index=0; index<ipsec.size(); index++)
    {
        if(ipsec[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(receive_only.yfilter)
	|| (d3p !=  nullptr && d3p->has_operation())
	|| (pair_wise_keying !=  nullptr && pair_wise_keying->has_operation());
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sa' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive_only.is_set || is_set(receive_only.yfilter)) leaf_name_data.push_back(receive_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "d3p")
    {
        if(d3p == nullptr)
        {
            d3p = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P>();
        }
        return d3p;
    }

    if(child_yang_name == "ipsec")
    {
        for(auto const & c : ipsec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec>();
        c->parent = this;
        ipsec.push_back(c);
        return c;
    }

    if(child_yang_name == "pair-wise-keying")
    {
        if(pair_wise_keying == nullptr)
        {
            pair_wise_keying = std::make_shared<Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying>();
        }
        return pair_wise_keying;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(d3p != nullptr)
    {
        children["d3p"] = d3p;
    }

    for (auto const & c : ipsec)
    {
        children[c->get_segment_path()] = c;
    }

    if(pair_wise_keying != nullptr)
    {
        children["pair-wise-keying"] = pair_wise_keying;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive-only")
    {
        receive_only = value;
        receive_only.value_namespace = name_space;
        receive_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive-only")
    {
        receive_only.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "d3p" || name == "ipsec" || name == "pair-wise-keying" || name == "receive-only")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P::D3P()
{
    yang_name = "d3p"; yang_parent_name = "sa";
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P::~D3P()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "d3p";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'D3P' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec::Ipsec()
    :
    sequence{YType::uint16, "sequence"}
{
    yang_name = "ipsec"; yang_parent_name = "sa";
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec::~Ipsec()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec::has_data() const
{
    return sequence.is_set;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec" <<"[sequence='" <<sequence <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipsec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequence")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying::PairWiseKeying()
{
    yang_name = "pair-wise-keying"; yang_parent_name = "sa";
}

Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying::~PairWiseKeying()
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pair-wise-keying";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PairWiseKeying' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Default_::Default_()
    :
    passive{YType::empty, "passive"}
    	,
    client(std::make_shared<Native::Crypto::Gkm::Group::Default_::Client>())
	,identity(nullptr) // presence node
	,server(std::make_shared<Native::Crypto::Gkm::Group::Default_::Server>())
{
    client->parent = this;

    server->parent = this;

    yang_name = "default"; yang_parent_name = "group";
}

Native::Crypto::Gkm::Group::Default_::~Default_()
{
}

bool Native::Crypto::Gkm::Group::Default_::has_data() const
{
    return passive.is_set
	|| (client !=  nullptr && client->has_data())
	|| (identity !=  nullptr && identity->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Crypto::Gkm::Group::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(passive.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (identity !=  nullptr && identity->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Crypto::Gkm::Group::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Gkm::Group::Default_::Client>();
        }
        return client;
    }

    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Gkm::Group::Default_::Identity>();
        }
        return identity;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Crypto::Gkm::Group::Default_::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(identity != nullptr)
    {
        children["identity"] = identity;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "identity" || name == "server" || name == "passive")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Default_::Client::Client()
    :
    bypass_policy{YType::empty, "bypass-policy"},
    transform_sets{YType::empty, "transform-sets"},
    transport_encrypt_key{YType::enumeration, "transport-encrypt-key"}
    	,
    protocol(nullptr) // presence node
	,recovery_check(nullptr) // presence node
	,registration(std::make_shared<Native::Crypto::Gkm::Group::Default_::Client::Registration>())
	,rekey(std::make_shared<Native::Crypto::Gkm::Group::Default_::Client::Rekey>())
	,status(std::make_shared<Native::Crypto::Gkm::Group::Default_::Client::Status>())
{
    registration->parent = this;

    rekey->parent = this;

    status->parent = this;

    yang_name = "client"; yang_parent_name = "default";
}

Native::Crypto::Gkm::Group::Default_::Client::~Client()
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::has_data() const
{
    return bypass_policy.is_set
	|| transform_sets.is_set
	|| transport_encrypt_key.is_set
	|| (protocol !=  nullptr && protocol->has_data())
	|| (recovery_check !=  nullptr && recovery_check->has_data())
	|| (registration !=  nullptr && registration->has_data())
	|| (rekey !=  nullptr && rekey->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool Native::Crypto::Gkm::Group::Default_::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bypass_policy.yfilter)
	|| ydk::is_set(transform_sets.yfilter)
	|| ydk::is_set(transport_encrypt_key.yfilter)
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (recovery_check !=  nullptr && recovery_check->has_operation())
	|| (registration !=  nullptr && registration->has_operation())
	|| (rekey !=  nullptr && rekey->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string Native::Crypto::Gkm::Group::Default_::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Default_::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Client' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypass_policy.is_set || is_set(bypass_policy.yfilter)) leaf_name_data.push_back(bypass_policy.get_name_leafdata());
    if (transform_sets.is_set || is_set(transform_sets.yfilter)) leaf_name_data.push_back(transform_sets.get_name_leafdata());
    if (transport_encrypt_key.is_set || is_set(transport_encrypt_key.yfilter)) leaf_name_data.push_back(transport_encrypt_key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Crypto::Gkm::Group::Default_::Client::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "recovery-check")
    {
        if(recovery_check == nullptr)
        {
            recovery_check = std::make_shared<Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck>();
        }
        return recovery_check;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Crypto::Gkm::Group::Default_::Client::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Native::Crypto::Gkm::Group::Default_::Client::Rekey>();
        }
        return rekey;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Native::Crypto::Gkm::Group::Default_::Client::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(recovery_check != nullptr)
    {
        children["recovery-check"] = recovery_check;
    }

    if(registration != nullptr)
    {
        children["registration"] = registration;
    }

    if(rekey != nullptr)
    {
        children["rekey"] = rekey;
    }

    if(status != nullptr)
    {
        children["status"] = status;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Default_::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bypass-policy")
    {
        bypass_policy = value;
        bypass_policy.value_namespace = name_space;
        bypass_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-sets")
    {
        transform_sets = value;
        transform_sets.value_namespace = name_space;
        transform_sets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-encrypt-key")
    {
        transport_encrypt_key = value;
        transport_encrypt_key.value_namespace = name_space;
        transport_encrypt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Default_::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bypass-policy")
    {
        bypass_policy.yfilter = yfilter;
    }
    if(value_path == "transform-sets")
    {
        transform_sets.yfilter = yfilter;
    }
    if(value_path == "transport-encrypt-key")
    {
        transport_encrypt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Default_::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "recovery-check" || name == "registration" || name == "rekey" || name == "status" || name == "bypass-policy" || name == "transform-sets" || name == "transport-encrypt-key")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Default_::Client::Protocol::Protocol()
{
    yang_name = "protocol"; yang_parent_name = "client";
}

Native::Crypto::Gkm::Group::Default_::Client::Protocol::~Protocol()
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Protocol::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Default_::Client::Protocol::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Default_::Client::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Default_::Client::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Client::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Client::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Default_::Client::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Default_::Client::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck::RecoveryCheck()
{
    yang_name = "recovery-check"; yang_parent_name = "client";
}

Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck::~RecoveryCheck()
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-check";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RecoveryCheck' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Default_::Client::Registration::Registration()
    :
    interface{YType::empty, "interface"}
{
    yang_name = "registration"; yang_parent_name = "client";
}

Native::Crypto::Gkm::Group::Default_::Client::Registration::~Registration()
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Registration::has_data() const
{
    return interface.is_set;
}

bool Native::Crypto::Gkm::Group::Default_::Client::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Crypto::Gkm::Group::Default_::Client::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Default_::Client::Registration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Registration' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Client::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Client::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Default_::Client::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Default_::Client::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Default_::Client::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Default_::Client::Rekey::Rekey()
    :
    encryption(nullptr) // presence node
	,hash(nullptr) // presence node
{
    yang_name = "rekey"; yang_parent_name = "client";
}

Native::Crypto::Gkm::Group::Default_::Client::Rekey::~Rekey()
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Rekey::has_data() const
{
    return (encryption !=  nullptr && encryption->has_data())
	|| (hash !=  nullptr && hash->has_data());
}

bool Native::Crypto::Gkm::Group::Default_::Client::Rekey::has_operation() const
{
    return is_set(yfilter)
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (hash !=  nullptr && hash->has_operation());
}

std::string Native::Crypto::Gkm::Group::Default_::Client::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Default_::Client::Rekey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rekey' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Client::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "hash")
    {
        if(hash == nullptr)
        {
            hash = std::make_shared<Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash>();
        }
        return hash;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Client::Rekey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    if(hash != nullptr)
    {
        children["hash"] = hash;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Default_::Client::Rekey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Default_::Client::Rekey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Rekey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "hash")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption::Encryption()
{
    yang_name = "encryption"; yang_parent_name = "rekey";
}

Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption::~Encryption()
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encryption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash::Hash()
{
    yang_name = "hash"; yang_parent_name = "rekey";
}

Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash::~Hash()
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hash";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hash' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Default_::Client::Status::Status()
    :
    active_sa(nullptr) // presence node
{
    yang_name = "status"; yang_parent_name = "client";
}

Native::Crypto::Gkm::Group::Default_::Client::Status::~Status()
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Status::has_data() const
{
    return (active_sa !=  nullptr && active_sa->has_data());
}

bool Native::Crypto::Gkm::Group::Default_::Client::Status::has_operation() const
{
    return is_set(yfilter)
	|| (active_sa !=  nullptr && active_sa->has_operation());
}

std::string Native::Crypto::Gkm::Group::Default_::Client::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Default_::Client::Status::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Status' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Client::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-sa")
    {
        if(active_sa == nullptr)
        {
            active_sa = std::make_shared<Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa>();
        }
        return active_sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Client::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_sa != nullptr)
    {
        children["active-sa"] = active_sa;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Default_::Client::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Default_::Client::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-sa")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa::ActiveSa()
{
    yang_name = "active-sa"; yang_parent_name = "status";
}

Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa::~ActiveSa()
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-sa";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActiveSa' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Default_::Identity::Identity()
{
    yang_name = "identity"; yang_parent_name = "default";
}

Native::Crypto::Gkm::Group::Default_::Identity::~Identity()
{
}

bool Native::Crypto::Gkm::Group::Default_::Identity::has_data() const
{
    return false;
}

bool Native::Crypto::Gkm::Group::Default_::Identity::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gkm::Group::Default_::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Default_::Identity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Identity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Default_::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gkm::Group::Default_::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gkm::Group::Default_::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gkm::Group::Default_::Server::Server()
    :
    local{YType::empty, "local"}
    	,
    address(std::make_shared<Native::Crypto::Gkm::Group::Default_::Server::Address>())
	,hostname(std::make_shared<Native::Crypto::Gkm::Group::Default_::Server::Hostname>())
{
    address->parent = this;

    hostname->parent = this;

    yang_name = "server"; yang_parent_name = "default";
}

Native::Crypto::Gkm::Group::Default_::Server::~Server()
{
}

bool Native::Crypto::Gkm::Group::Default_::Server::has_data() const
{
    return local.is_set
	|| (address !=  nullptr && address->has_data())
	|| (hostname !=  nullptr && hostname->has_data());
}

bool Native::Crypto::Gkm::Group::Default_::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation());
}

std::string Native::Crypto::Gkm::Group::Default_::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Default_::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Server' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gkm::Group::Default_::Server::Address>();
        }
        return address;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Crypto::Gkm::Group::Default_::Server::Hostname>();
        }
        return hostname;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(hostname != nullptr)
    {
        children["hostname"] = hostname;
    }

    return children;
}

void Native::Crypto::Gkm::Group::Default_::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Default_::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Default_::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "hostname" || name == "local")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Default_::Server::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{
    yang_name = "address"; yang_parent_name = "server";
}

Native::Crypto::Gkm::Group::Default_::Server::Address::~Address()
{
}

bool Native::Crypto::Gkm::Group::Default_::Server::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Default_::Server::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Default_::Server::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Default_::Server::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Server::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Server::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Default_::Server::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Default_::Server::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Default_::Server::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gkm::Group::Default_::Server::Hostname::Hostname()
    :
    ipv4{YType::str, "ipv4"}
{
    yang_name = "hostname"; yang_parent_name = "server";
}

Native::Crypto::Gkm::Group::Default_::Server::Hostname::~Hostname()
{
}

bool Native::Crypto::Gkm::Group::Default_::Server::Hostname::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gkm::Group::Default_::Server::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gkm::Group::Default_::Server::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gkm::Group::Default_::Server::Hostname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hostname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gkm::Group::Default_::Server::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gkm::Group::Default_::Server::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gkm::Group::Default_::Server::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gkm::Group::Default_::Server::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gkm::Group::Default_::Server::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Identity::Identity()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    dn{YType::str, "dn"},
    fqdn{YType::str, "fqdn"}
    	,
    default_(std::make_shared<Native::Crypto::Identity::Default_>())
{
    default_->parent = this;

    yang_name = "identity"; yang_parent_name = "crypto";
}

Native::Crypto::Identity::~Identity()
{
}

bool Native::Crypto::Identity::has_data() const
{
    return name.is_set
	|| description.is_set
	|| dn.is_set
	|| fqdn.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Identity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(dn.yfilter)
	|| ydk::is_set(fqdn.yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Crypto::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:identity" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Identity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (dn.is_set || is_set(dn.yfilter)) leaf_name_data.push_back(dn.get_name_leafdata());
    if (fqdn.is_set || is_set(fqdn.yfilter)) leaf_name_data.push_back(fqdn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Identity::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Crypto::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn")
    {
        dn = value;
        dn.value_namespace = name_space;
        dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fqdn")
    {
        fqdn = value;
        fqdn.value_namespace = name_space;
        fqdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "dn")
    {
        dn.yfilter = yfilter;
    }
    if(value_path == "fqdn")
    {
        fqdn.yfilter = yfilter;
    }
}

bool Native::Crypto::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "name" || name == "description" || name == "dn" || name == "fqdn")
        return true;
    return false;
}

Native::Crypto::Identity::Default_::Default_()
    :
    description{YType::empty, "description"},
    dn{YType::str, "dn"},
    fqdn{YType::str, "fqdn"}
{
    yang_name = "default"; yang_parent_name = "identity";
}

Native::Crypto::Identity::Default_::~Default_()
{
}

bool Native::Crypto::Identity::Default_::has_data() const
{
    return description.is_set
	|| dn.is_set
	|| fqdn.is_set;
}

bool Native::Crypto::Identity::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(dn.yfilter)
	|| ydk::is_set(fqdn.yfilter);
}

std::string Native::Crypto::Identity::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Identity::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (dn.is_set || is_set(dn.yfilter)) leaf_name_data.push_back(dn.get_name_leafdata());
    if (fqdn.is_set || is_set(fqdn.yfilter)) leaf_name_data.push_back(fqdn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Identity::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Identity::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Identity::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn")
    {
        dn = value;
        dn.value_namespace = name_space;
        dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fqdn")
    {
        fqdn = value;
        fqdn.value_namespace = name_space;
        fqdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Identity::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "dn")
    {
        dn.yfilter = yfilter;
    }
    if(value_path == "fqdn")
    {
        fqdn.yfilter = yfilter;
    }
}

bool Native::Crypto::Identity::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "dn" || name == "fqdn")
        return true;
    return false;
}

Native::Crypto::Ipsec::Ipsec()
    :
    df_bit{YType::enumeration, "df-bit"},
    fragmentation{YType::enumeration, "fragmentation"},
    ipv4_deny{YType::enumeration, "ipv4-deny"},
    nat_transparency{YType::enumeration, "nat-transparency"}
    	,
    optional(nullptr) // presence node
	,security_association(std::make_shared<Native::Crypto::Ipsec::SecurityAssociation>())
{
    security_association->parent = this;

    yang_name = "ipsec"; yang_parent_name = "crypto";
}

Native::Crypto::Ipsec::~Ipsec()
{
}

bool Native::Crypto::Ipsec::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<transform_set.size(); index++)
    {
        if(transform_set[index]->has_data())
            return true;
    }
    return df_bit.is_set
	|| fragmentation.is_set
	|| ipv4_deny.is_set
	|| nat_transparency.is_set
	|| (optional !=  nullptr && optional->has_data())
	|| (security_association !=  nullptr && security_association->has_data());
}

bool Native::Crypto::Ipsec::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<transform_set.size(); index++)
    {
        if(transform_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(df_bit.yfilter)
	|| ydk::is_set(fragmentation.yfilter)
	|| ydk::is_set(ipv4_deny.yfilter)
	|| ydk::is_set(nat_transparency.yfilter)
	|| (optional !=  nullptr && optional->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation());
}

std::string Native::Crypto::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:ipsec";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (df_bit.is_set || is_set(df_bit.yfilter)) leaf_name_data.push_back(df_bit.get_name_leafdata());
    if (fragmentation.is_set || is_set(fragmentation.yfilter)) leaf_name_data.push_back(fragmentation.get_name_leafdata());
    if (ipv4_deny.is_set || is_set(ipv4_deny.yfilter)) leaf_name_data.push_back(ipv4_deny.get_name_leafdata());
    if (nat_transparency.is_set || is_set(nat_transparency.yfilter)) leaf_name_data.push_back(nat_transparency.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optional")
    {
        if(optional == nullptr)
        {
            optional = std::make_shared<Native::Crypto::Ipsec::Optional>();
        }
        return optional;
    }

    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ipsec::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::Ipsec::SecurityAssociation>();
        }
        return security_association;
    }

    if(child_yang_name == "transform-set")
    {
        for(auto const & c : transform_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ipsec::TransformSet>();
        c->parent = this;
        transform_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optional != nullptr)
    {
        children["optional"] = optional;
    }

    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    if(security_association != nullptr)
    {
        children["security-association"] = security_association;
    }

    for (auto const & c : transform_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "df-bit")
    {
        df_bit = value;
        df_bit.value_namespace = name_space;
        df_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragmentation")
    {
        fragmentation = value;
        fragmentation.value_namespace = name_space;
        fragmentation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-deny")
    {
        ipv4_deny = value;
        ipv4_deny.value_namespace = name_space;
        ipv4_deny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nat-transparency")
    {
        nat_transparency = value;
        nat_transparency.value_namespace = name_space;
        nat_transparency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "df-bit")
    {
        df_bit.yfilter = yfilter;
    }
    if(value_path == "fragmentation")
    {
        fragmentation.yfilter = yfilter;
    }
    if(value_path == "ipv4-deny")
    {
        ipv4_deny.yfilter = yfilter;
    }
    if(value_path == "nat-transparency")
    {
        nat_transparency.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optional" || name == "profile" || name == "security-association" || name == "transform-set" || name == "df-bit" || name == "fragmentation" || name == "ipv4-deny" || name == "nat-transparency")
        return true;
    return false;
}

Native::Crypto::Ipsec::Optional::Optional()
    :
    retry{YType::uint32, "retry"}
{
    yang_name = "optional"; yang_parent_name = "ipsec";
}

Native::Crypto::Ipsec::Optional::~Optional()
{
}

bool Native::Crypto::Ipsec::Optional::has_data() const
{
    return retry.is_set;
}

bool Native::Crypto::Ipsec::Optional::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(retry.yfilter);
}

std::string Native::Crypto::Ipsec::Optional::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optional";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::Optional::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retry.is_set || is_set(retry.yfilter)) leaf_name_data.push_back(retry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Optional::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Optional::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Optional::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "retry")
    {
        retry = value;
        retry.value_namespace = name_space;
        retry.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Optional::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "retry")
    {
        retry.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Optional::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retry")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Profile()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    responder_only{YType::empty, "responder-only"}
    	,
    default_(std::make_shared<Native::Crypto::Ipsec::Profile::Default_>())
	,dialer(std::make_shared<Native::Crypto::Ipsec::Profile::Dialer>())
	,redundancy(std::make_shared<Native::Crypto::Ipsec::Profile::Redundancy>())
	,set(std::make_shared<Native::Crypto::Ipsec::Profile::Set>())
{
    default_->parent = this;

    dialer->parent = this;

    redundancy->parent = this;

    set->parent = this;

    yang_name = "profile"; yang_parent_name = "ipsec";
}

Native::Crypto::Ipsec::Profile::~Profile()
{
}

bool Native::Crypto::Ipsec::Profile::has_data() const
{
    return name.is_set
	|| description.is_set
	|| responder_only.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (dialer !=  nullptr && dialer->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::Ipsec::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(responder_only.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (dialer !=  nullptr && dialer->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::Ipsec::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (responder_only.is_set || is_set(responder_only.yfilter)) leaf_name_data.push_back(responder_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Ipsec::Profile::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "dialer")
    {
        if(dialer == nullptr)
        {
            dialer = std::make_shared<Native::Crypto::Ipsec::Profile::Dialer>();
        }
        return dialer;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::Crypto::Ipsec::Profile::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::Ipsec::Profile::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(dialer != nullptr)
    {
        children["dialer"] = dialer;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::Ipsec::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "responder-only")
    {
        responder_only = value;
        responder_only.value_namespace = name_space;
        responder_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "responder-only")
    {
        responder_only.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "dialer" || name == "redundancy" || name == "set" || name == "name" || name == "description" || name == "responder-only")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Default_()
    :
    description{YType::empty, "description"},
    redundancy{YType::empty, "redundancy"},
    responder_only{YType::empty, "responder-only"}
    	,
    dialer(std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Dialer>())
	,set(std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set>())
{
    dialer->parent = this;

    set->parent = this;

    yang_name = "default"; yang_parent_name = "profile";
}

Native::Crypto::Ipsec::Profile::Default_::~Default_()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::has_data() const
{
    return description.is_set
	|| redundancy.is_set
	|| responder_only.is_set
	|| (dialer !=  nullptr && dialer->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::Ipsec::Profile::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(responder_only.yfilter)
	|| (dialer !=  nullptr && dialer->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::Ipsec::Profile::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::Profile::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (responder_only.is_set || is_set(responder_only.yfilter)) leaf_name_data.push_back(responder_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dialer")
    {
        if(dialer == nullptr)
        {
            dialer = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Dialer>();
        }
        return dialer;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dialer != nullptr)
    {
        children["dialer"] = dialer;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "responder-only")
    {
        responder_only = value;
        responder_only.value_namespace = name_space;
        responder_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "responder-only")
    {
        responder_only.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dialer" || name == "set" || name == "description" || name == "redundancy" || name == "responder-only")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Dialer::Dialer()
    :
    pre_classify{YType::empty, "pre-classify"}
{
    yang_name = "dialer"; yang_parent_name = "default";
}

Native::Crypto::Ipsec::Profile::Default_::Dialer::~Dialer()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Dialer::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::Ipsec::Profile::Default_::Dialer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default_::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialer";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::Profile::Default_::Dialer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dialer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Dialer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default_::Dialer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default_::Dialer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::Set()
    :
    group{YType::empty, "group"},
    identity{YType::empty, "identity"},
    ikev2_profile{YType::str, "ikev2-profile"},
    isakmp_profile{YType::empty, "isakmp-profile"},
    mixed_mode{YType::empty, "mixed-mode"},
    transform_set{YType::empty, "transform-set"}
    	,
    pfs(nullptr) // presence node
	,reverse_route(nullptr) // presence node
	,security_association(std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation>())
	,security_policy(std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy>())
{
    security_association->parent = this;

    security_policy->parent = this;

    yang_name = "set"; yang_parent_name = "default";
}

Native::Crypto::Ipsec::Profile::Default_::Set::~Set()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::has_data() const
{
    return group.is_set
	|| identity.is_set
	|| ikev2_profile.is_set
	|| isakmp_profile.is_set
	|| mixed_mode.is_set
	|| transform_set.is_set
	|| (pfs !=  nullptr && pfs->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (security_association !=  nullptr && security_association->has_data())
	|| (security_policy !=  nullptr && security_policy->has_data());
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(identity.yfilter)
	|| ydk::is_set(ikev2_profile.yfilter)
	|| ydk::is_set(isakmp_profile.yfilter)
	|| ydk::is_set(mixed_mode.yfilter)
	|| ydk::is_set(transform_set.yfilter)
	|| (pfs !=  nullptr && pfs->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation())
	|| (security_policy !=  nullptr && security_policy->has_operation());
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::Profile::Default_::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Set' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (ikev2_profile.is_set || is_set(ikev2_profile.yfilter)) leaf_name_data.push_back(ikev2_profile.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.yfilter)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());
    if (mixed_mode.is_set || is_set(mixed_mode.yfilter)) leaf_name_data.push_back(mixed_mode.get_name_leafdata());
    if (transform_set.is_set || is_set(transform_set.yfilter)) leaf_name_data.push_back(transform_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfs")
    {
        if(pfs == nullptr)
        {
            pfs = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::Pfs>();
        }
        return pfs;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation>();
        }
        return security_association;
    }

    if(child_yang_name == "security-policy")
    {
        if(security_policy == nullptr)
        {
            security_policy = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy>();
        }
        return security_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pfs != nullptr)
    {
        children["pfs"] = pfs;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(security_association != nullptr)
    {
        children["security-association"] = security_association;
    }

    if(security_policy != nullptr)
    {
        children["security-policy"] = security_policy;
    }

    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile = value;
        ikev2_profile.value_namespace = name_space;
        ikev2_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile = value;
        isakmp_profile.value_namespace = name_space;
        isakmp_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mixed-mode")
    {
        mixed_mode = value;
        mixed_mode.value_namespace = name_space;
        mixed_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-set")
    {
        transform_set = value;
        transform_set.value_namespace = name_space;
        transform_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default_::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile.yfilter = yfilter;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile.yfilter = yfilter;
    }
    if(value_path == "mixed-mode")
    {
        mixed_mode.yfilter = yfilter;
    }
    if(value_path == "transform-set")
    {
        transform_set.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfs" || name == "reverse-route" || name == "security-association" || name == "security-policy" || name == "group" || name == "identity" || name == "ikev2-profile" || name == "isakmp-profile" || name == "mixed-mode" || name == "transform-set")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::Pfs()
{
    yang_name = "pfs"; yang_parent_name = "set";
}

Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::~Pfs()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::has_data() const
{
    return false;
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfs";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pfs' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::Pfs::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::ReverseRoute()
{
    yang_name = "reverse-route"; yang_parent_name = "set";
}

Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::has_data() const
{
    return false;
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReverseRoute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::SecurityAssociation()
    :
    dfbit{YType::empty, "dfbit"},
    ecn{YType::empty, "ecn"},
    level{YType::enumeration, "level"}
    	,
    dummy(nullptr) // presence node
	,idle_time_container(std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer>())
	,lifetime(std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime>())
	,replay(std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay>())
{
    idle_time_container->parent = this;

    lifetime->parent = this;

    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "set";
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::has_data() const
{
    return dfbit.is_set
	|| ecn.is_set
	|| level.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (idle_time_container !=  nullptr && idle_time_container->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dfbit.yfilter)
	|| ydk::is_set(ecn.yfilter)
	|| ydk::is_set(level.yfilter)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (idle_time_container !=  nullptr && idle_time_container->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (replay !=  nullptr && replay->has_operation());
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecurityAssociation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dfbit.is_set || is_set(dfbit.yfilter)) leaf_name_data.push_back(dfbit.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "idle-time-container")
    {
        if(idle_time_container == nullptr)
        {
            idle_time_container = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer>();
        }
        return idle_time_container;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dummy != nullptr)
    {
        children["dummy"] = dummy;
    }

    if(idle_time_container != nullptr)
    {
        children["idle-time-container"] = idle_time_container;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(replay != nullptr)
    {
        children["replay"] = replay;
    }

    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dfbit")
    {
        dfbit = value;
        dfbit.value_namespace = name_space;
        dfbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dfbit")
    {
        dfbit.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy" || name == "idle-time-container" || name == "lifetime" || name == "replay" || name == "dfbit" || name == "ecn" || name == "level")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::Dummy()
{
    yang_name = "dummy"; yang_parent_name = "security-association";
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::has_data() const
{
    return false;
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dummy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::IdleTimeContainer()
    :
    default_{YType::empty, "default"},
    idle_time{YType::empty, "idle-time"}
{
    yang_name = "idle-time-container"; yang_parent_name = "security-association";
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::~IdleTimeContainer()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::has_data() const
{
    return default_.is_set
	|| idle_time.is_set;
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(idle_time.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time-container";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IdleTimeContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "idle-time")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::empty, "days"},
    kilobytes{YType::empty, "kilobytes"},
    seconds{YType::empty, "seconds"}
{
    yang_name = "lifetime"; yang_parent_name = "security-association";
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::has_data() const
{
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(kilobytes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lifetime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.yfilter)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobytes")
    {
        kilobytes = value;
        kilobytes.value_namespace = name_space;
        kilobytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "kilobytes")
    {
        kilobytes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "kilobytes" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::empty, "window-size"}
{
    yang_name = "replay"; yang_parent_name = "security-association";
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::has_data() const
{
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Replay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "window-size")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::SecurityPolicy()
    :
    limit{YType::uint32, "limit"}
{
    yang_name = "security-policy"; yang_parent_name = "set";
}

Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::~SecurityPolicy()
{
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::has_data() const
{
    return limit.is_set;
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-policy";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecurityPolicy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Dialer::Dialer()
    :
    pre_classify{YType::empty, "pre-classify"}
{
    yang_name = "dialer"; yang_parent_name = "profile";
}

Native::Crypto::Ipsec::Profile::Dialer::~Dialer()
{
}

bool Native::Crypto::Ipsec::Profile::Dialer::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::Ipsec::Profile::Dialer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialer";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::Profile::Dialer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dialer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Dialer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Dialer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Dialer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Redundancy::Redundancy()
    :
    name{YType::str, "name"},
    stateful{YType::empty, "stateful"}
{
    yang_name = "redundancy"; yang_parent_name = "profile";
}

Native::Crypto::Ipsec::Profile::Redundancy::~Redundancy()
{
}

bool Native::Crypto::Ipsec::Profile::Redundancy::has_data() const
{
    return name.is_set
	|| stateful.is_set;
}

bool Native::Crypto::Ipsec::Profile::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stateful.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::Profile::Redundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redundancy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "stateful")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::Set()
    :
    group{YType::str, "group"},
    identity{YType::str, "identity"},
    ikev2_profile{YType::str, "ikev2-profile"},
    isakmp_profile{YType::str, "isakmp-profile"},
    mixed_mode{YType::empty, "mixed-mode"},
    transform_set{YType::str, "transform-set"}
    	,
    peer(std::make_shared<Native::Crypto::Ipsec::Profile::Set::Peer>())
	,pfs(nullptr) // presence node
	,reverse_route(std::make_shared<Native::Crypto::Ipsec::Profile::Set::ReverseRoute>())
	,security_association(std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation>())
	,security_policy(std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityPolicy>())
{
    peer->parent = this;

    reverse_route->parent = this;

    security_association->parent = this;

    security_policy->parent = this;

    yang_name = "set"; yang_parent_name = "profile";
}

Native::Crypto::Ipsec::Profile::Set::~Set()
{
}

bool Native::Crypto::Ipsec::Profile::Set::has_data() const
{
    for (auto const & leaf : transform_set.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return group.is_set
	|| identity.is_set
	|| ikev2_profile.is_set
	|| isakmp_profile.is_set
	|| mixed_mode.is_set
	|| (peer !=  nullptr && peer->has_data())
	|| (pfs !=  nullptr && pfs->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (security_association !=  nullptr && security_association->has_data())
	|| (security_policy !=  nullptr && security_policy->has_data());
}

bool Native::Crypto::Ipsec::Profile::Set::has_operation() const
{
    for (auto const & leaf : transform_set.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(identity.yfilter)
	|| ydk::is_set(ikev2_profile.yfilter)
	|| ydk::is_set(isakmp_profile.yfilter)
	|| ydk::is_set(mixed_mode.yfilter)
	|| ydk::is_set(transform_set.yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (pfs !=  nullptr && pfs->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation())
	|| (security_policy !=  nullptr && security_policy->has_operation());
}

std::string Native::Crypto::Ipsec::Profile::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::Profile::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Set' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (ikev2_profile.is_set || is_set(ikev2_profile.yfilter)) leaf_name_data.push_back(ikev2_profile.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.yfilter)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());
    if (mixed_mode.is_set || is_set(mixed_mode.yfilter)) leaf_name_data.push_back(mixed_mode.get_name_leafdata());

    auto transform_set_name_datas = transform_set.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), transform_set_name_datas.begin(), transform_set_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::Ipsec::Profile::Set::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "pfs")
    {
        if(pfs == nullptr)
        {
            pfs = std::make_shared<Native::Crypto::Ipsec::Profile::Set::Pfs>();
        }
        return pfs;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::Ipsec::Profile::Set::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation>();
        }
        return security_association;
    }

    if(child_yang_name == "security-policy")
    {
        if(security_policy == nullptr)
        {
            security_policy = std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityPolicy>();
        }
        return security_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(pfs != nullptr)
    {
        children["pfs"] = pfs;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(security_association != nullptr)
    {
        children["security-association"] = security_association;
    }

    if(security_policy != nullptr)
    {
        children["security-policy"] = security_policy;
    }

    return children;
}

void Native::Crypto::Ipsec::Profile::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile = value;
        ikev2_profile.value_namespace = name_space;
        ikev2_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile = value;
        isakmp_profile.value_namespace = name_space;
        isakmp_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mixed-mode")
    {
        mixed_mode = value;
        mixed_mode.value_namespace = name_space;
        mixed_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-set")
    {
        transform_set.append(value);
    }
}

void Native::Crypto::Ipsec::Profile::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile.yfilter = yfilter;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile.yfilter = yfilter;
    }
    if(value_path == "mixed-mode")
    {
        mixed_mode.yfilter = yfilter;
    }
    if(value_path == "transform-set")
    {
        transform_set.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "pfs" || name == "reverse-route" || name == "security-association" || name == "security-policy" || name == "group" || name == "identity" || name == "ikev2-profile" || name == "isakmp-profile" || name == "mixed-mode" || name == "transform-set")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::Peer::Peer()
    :
    address{YType::str, "address"},
    default_{YType::empty, "default"},
    dynamic{YType::empty, "dynamic"}
{
    yang_name = "peer"; yang_parent_name = "set";
}

Native::Crypto::Ipsec::Profile::Set::Peer::~Peer()
{
}

bool Native::Crypto::Ipsec::Profile::Set::Peer::has_data() const
{
    return address.is_set
	|| default_.is_set
	|| dynamic.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::Profile::Set::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Set::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "default" || name == "dynamic")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::Pfs::Pfs()
    :
    group{YType::enumeration, "group"}
{
    yang_name = "pfs"; yang_parent_name = "set";
}

Native::Crypto::Ipsec::Profile::Set::Pfs::~Pfs()
{
}

bool Native::Crypto::Ipsec::Profile::Set::Pfs::has_data() const
{
    return group.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::Pfs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::Pfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfs";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::Profile::Set::Pfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pfs' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::Pfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::Pfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Set::Pfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::Pfs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::Pfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::ReverseRoute::ReverseRoute()
    :
    distance{YType::uint8, "distance"},
    tag{YType::uint64, "tag"}
{
    yang_name = "reverse-route"; yang_parent_name = "set";
}

Native::Crypto::Ipsec::Profile::Set::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::Ipsec::Profile::Set::ReverseRoute::has_data() const
{
    return distance.is_set
	|| tag.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::ReverseRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::Profile::Set::ReverseRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReverseRoute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Set::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance" || name == "tag")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::SecurityAssociation()
    :
    dfbit{YType::enumeration, "dfbit"},
    ecn{YType::enumeration, "ecn"},
    level{YType::enumeration, "level"}
    	,
    dummy(std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy>())
	,idle_time_container(std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer>())
	,lifetime(std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime>())
	,replay(std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay>())
{
    dummy->parent = this;

    idle_time_container->parent = this;

    lifetime->parent = this;

    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "set";
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::has_data() const
{
    return dfbit.is_set
	|| ecn.is_set
	|| level.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (idle_time_container !=  nullptr && idle_time_container->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dfbit.yfilter)
	|| ydk::is_set(ecn.yfilter)
	|| ydk::is_set(level.yfilter)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (idle_time_container !=  nullptr && idle_time_container->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (replay !=  nullptr && replay->has_operation());
}

std::string Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecurityAssociation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dfbit.is_set || is_set(dfbit.yfilter)) leaf_name_data.push_back(dfbit.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "idle-time-container")
    {
        if(idle_time_container == nullptr)
        {
            idle_time_container = std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer>();
        }
        return idle_time_container;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dummy != nullptr)
    {
        children["dummy"] = dummy;
    }

    if(idle_time_container != nullptr)
    {
        children["idle-time-container"] = idle_time_container;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(replay != nullptr)
    {
        children["replay"] = replay;
    }

    return children;
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dfbit")
    {
        dfbit = value;
        dfbit.value_namespace = name_space;
        dfbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dfbit")
    {
        dfbit.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy" || name == "idle-time-container" || name == "lifetime" || name == "replay" || name == "dfbit" || name == "ecn" || name == "level")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::Dummy()
    :
    pps{YType::uint8, "pps"},
    seconds{YType::uint16, "seconds"}
{
    yang_name = "dummy"; yang_parent_name = "security-association";
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::has_data() const
{
    return pps.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pps.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dummy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pps.is_set || is_set(pps.yfilter)) leaf_name_data.push_back(pps.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pps")
    {
        pps = value;
        pps.value_namespace = name_space;
        pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pps")
    {
        pps.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::IdleTimeContainer()
    :
    default_{YType::empty, "default"},
    idle_time{YType::uint32, "idle-time"}
{
    yang_name = "idle-time-container"; yang_parent_name = "security-association";
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::~IdleTimeContainer()
{
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::has_data() const
{
    return default_.is_set
	|| idle_time.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(idle_time.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time-container";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IdleTimeContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "idle-time")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::uint8, "days"},
    kilobytes{YType::str, "kilobytes"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lifetime"; yang_parent_name = "security-association";
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::has_data() const
{
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(kilobytes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lifetime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.yfilter)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobytes")
    {
        kilobytes = value;
        kilobytes.value_namespace = name_space;
        kilobytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "kilobytes")
    {
        kilobytes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "kilobytes" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::enumeration, "window-size"}
{
    yang_name = "replay"; yang_parent_name = "security-association";
}

Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::has_data() const
{
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Replay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "window-size")
        return true;
    return false;
}

Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::SecurityPolicy()
    :
    limit{YType::uint32, "limit"}
{
    yang_name = "security-policy"; yang_parent_name = "set";
}

Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::~SecurityPolicy()
{
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::has_data() const
{
    return limit.is_set;
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-policy";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecurityPolicy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::Profile::Set::SecurityPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Crypto::Ipsec::SecurityAssociation::SecurityAssociation()
    :
    ecn{YType::enumeration, "ecn"},
    idle_time{YType::uint32, "idle-time"}
    	,
    dummy(std::make_shared<Native::Crypto::Ipsec::SecurityAssociation::Dummy>())
	,lifetime(std::make_shared<Native::Crypto::Ipsec::SecurityAssociation::Lifetime>())
	,replay(std::make_shared<Native::Crypto::Ipsec::SecurityAssociation::Replay>())
{
    dummy->parent = this;

    lifetime->parent = this;

    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "ipsec";
}

Native::Crypto::Ipsec::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::Ipsec::SecurityAssociation::has_data() const
{
    return ecn.is_set
	|| idle_time.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::Ipsec::SecurityAssociation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ecn.yfilter)
	|| ydk::is_set(idle_time.yfilter)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (replay !=  nullptr && replay->has_operation());
}

std::string Native::Crypto::Ipsec::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::SecurityAssociation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::Ipsec::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Ipsec::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::Ipsec::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::SecurityAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dummy != nullptr)
    {
        children["dummy"] = dummy;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(replay != nullptr)
    {
        children["replay"] = replay;
    }

    return children;
}

void Native::Crypto::Ipsec::SecurityAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::SecurityAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::SecurityAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy" || name == "lifetime" || name == "replay" || name == "ecn" || name == "idle-time")
        return true;
    return false;
}

Native::Crypto::Ipsec::SecurityAssociation::Dummy::Dummy()
    :
    pps{YType::uint8, "pps"},
    seconds{YType::uint16, "seconds"}
{
    yang_name = "dummy"; yang_parent_name = "security-association";
}

Native::Crypto::Ipsec::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::Ipsec::SecurityAssociation::Dummy::has_data() const
{
    return pps.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Ipsec::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pps.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Ipsec::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::SecurityAssociation::Dummy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/security-association/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pps.is_set || is_set(pps.yfilter)) leaf_name_data.push_back(pps.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::SecurityAssociation::Dummy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pps")
    {
        pps = value;
        pps.value_namespace = name_space;
        pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::SecurityAssociation::Dummy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pps")
    {
        pps.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::SecurityAssociation::Dummy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Ipsec::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::uint8, "days"},
    kilobytes{YType::str, "kilobytes"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lifetime"; yang_parent_name = "security-association";
}

Native::Crypto::Ipsec::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Ipsec::SecurityAssociation::Lifetime::has_data() const
{
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Ipsec::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(kilobytes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Ipsec::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ipsec::SecurityAssociation::Lifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ipsec/security-association/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.yfilter)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ipsec::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ipsec::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ipsec::SecurityAssociation::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobytes")
    {
        kilobytes = value;
        kilobytes.value_namespace = name_space;
        kilobytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ipsec::SecurityAssociation::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "kilobytes")
    {
        kilobytes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Ipsec::SecurityAssociation::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "kilobytes" || name == "seconds")
        return true;
    return false;
}

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Pki::Use::sign {0, "sign"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Pki::Use::verify {1, "verify"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::VirtualTemplate::Mode::auto_ {0, "auto"};

const Enum::YLeaf Native::Crypto::Ikev2::Redirect::Gateway::auth {0, "auth"};
const Enum::YLeaf Native::Crypto::Ikev2::Redirect::Gateway::init {1, "init"};

const Enum::YLeaf Native::Crypto::Gkm::Group::Client::TransportEncryptKey::group_key {0, "group-key"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Client::TransportEncryptKey::pair_wise_key {1, "pair-wise-key"};

const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Group_::Size::Small::Y_12 {0, "12"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Group_::Size::Small::Y_16 {1, "16"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Group_::Size::Small::Y_8 {2, "8"};

const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::Version::base {0, "base"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::Version::optimize {1, "optimize"};

const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::Version::base {0, "base"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::Version::optimize {1, "optimize"};

const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Rekey::Acknowledgement::any {0, "any"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Rekey::Acknowledgement::cisco {1, "cisco"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Rekey::Acknowledgement::interoperable {2, "interoperable"};

const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::Algorithm::sha {0, "sha"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::Algorithm::sha256 {1, "sha256"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::Algorithm::sha384 {2, "sha384"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::Algorithm::sha512 {3, "sha512"};

const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize::Y_1024 {0, "1024"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize::Y_128 {1, "128"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize::Y_256 {2, "256"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize::Y_512 {3, "512"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize::Y_64 {4, "64"};

const Enum::YLeaf Native::Crypto::Gkm::Group::Default_::Client::TransportEncryptKey::group_key {0, "group-key"};
const Enum::YLeaf Native::Crypto::Gkm::Group::Default_::Client::TransportEncryptKey::pair_wise_key {1, "pair-wise-key"};

const Enum::YLeaf Native::Crypto::Ipsec::DfBit::clear {0, "clear"};
const Enum::YLeaf Native::Crypto::Ipsec::DfBit::copy {1, "copy"};
const Enum::YLeaf Native::Crypto::Ipsec::DfBit::set {2, "set"};

const Enum::YLeaf Native::Crypto::Ipsec::Fragmentation::after_encryption {0, "after-encryption"};
const Enum::YLeaf Native::Crypto::Ipsec::Fragmentation::before_encryption {1, "before-encryption"};

const Enum::YLeaf Native::Crypto::Ipsec::Ipv4Deny::clear {0, "clear"};
const Enum::YLeaf Native::Crypto::Ipsec::Ipv4Deny::drop {1, "drop"};
const Enum::YLeaf Native::Crypto::Ipsec::Ipv4Deny::jump {2, "jump"};

const Enum::YLeaf Native::Crypto::Ipsec::NatTransparency::spi_matching {0, "spi-matching"};
const Enum::YLeaf Native::Crypto::Ipsec::NatTransparency::udp_encapsulation {1, "udp-encapsulation"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Level::per_host {0, "per-host"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group1 {0, "group1"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group14 {1, "group14"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group15 {2, "group15"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group16 {3, "group16"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group19 {4, "group19"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group2 {5, "group2"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group20 {6, "group20"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group21 {7, "group21"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group24 {8, "group24"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::Pfs::Group::group5 {9, "group5"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dfbit::clear {0, "clear"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dfbit::copy {1, "copy"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dfbit::set {2, "set"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Ecn::discard {0, "discard"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Ecn::propagate {1, "propagate"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Level::per_host {0, "per-host"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::Kilobytes::disable {0, "disable"};

const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::WindowSize::Y_1024 {0, "1024"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::WindowSize::Y_128 {1, "128"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::WindowSize::Y_256 {2, "256"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::WindowSize::Y_512 {3, "512"};
const Enum::YLeaf Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::WindowSize::Y_64 {4, "64"};

const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Ecn::discard {0, "discard"};
const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Ecn::propagate {1, "propagate"};

const Enum::YLeaf Native::Crypto::Ipsec::SecurityAssociation::Lifetime::Kilobytes::disable {0, "disable"};


}
}
