
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_82.hpp"
#include "Cisco_IOS_XE_native_83.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Line::Console::Exec::Exec()
    :
    prompt(std::make_shared<Native::Line::Console::Exec::Prompt>())
{
    prompt->parent = this;

    yang_name = "exec"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Exec::~Exec()
{
}

bool Native::Line::Console::Exec::has_data() const
{
    return (prompt !=  nullptr && prompt->has_data());
}

bool Native::Line::Console::Exec::has_operation() const
{
    return is_set(yfilter)
	|| (prompt !=  nullptr && prompt->has_operation());
}

std::string Native::Line::Console::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prompt")
    {
        if(prompt == nullptr)
        {
            prompt = std::make_shared<Native::Line::Console::Exec::Prompt>();
        }
        return prompt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prompt != nullptr)
    {
        children["prompt"] = prompt;
    }

    return children;
}

void Native::Line::Console::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Console::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Console::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prompt")
        return true;
    return false;
}

Native::Line::Console::Exec::Prompt::Prompt()
    :
    timestamp{YType::empty, "timestamp"}
{

    yang_name = "prompt"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Exec::Prompt::~Prompt()
{
}

bool Native::Line::Console::Exec::Prompt::has_data() const
{
    return timestamp.is_set;
}

bool Native::Line::Console::Exec::Prompt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter);
}

std::string Native::Line::Console::Exec::Prompt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prompt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Exec::Prompt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Exec::Prompt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Exec::Prompt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Exec::Prompt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Exec::Prompt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool Native::Line::Console::Exec::Prompt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp")
        return true;
    return false;
}

Native::Line::Console::ExecTimeout::ExecTimeout()
    :
    minutes{YType::uint32, "minutes"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "exec-timeout"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::ExecTimeout::~ExecTimeout()
{
}

bool Native::Line::Console::ExecTimeout::has_data() const
{
    return minutes.is_set
	|| seconds.is_set;
}

bool Native::Line::Console::ExecTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Line::Console::ExecTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::ExecTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::ExecTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::ExecTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::ExecTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::ExecTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Line::Console::ExecTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minutes" || name == "seconds")
        return true;
    return false;
}

Native::Line::Console::Flowcontrol::Flowcontrol()
    :
    hardware{YType::empty, "hardware"},
    none{YType::empty, "NONE"},
    software{YType::empty, "software"}
{

    yang_name = "flowcontrol"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Flowcontrol::~Flowcontrol()
{
}

bool Native::Line::Console::Flowcontrol::has_data() const
{
    return hardware.is_set
	|| none.is_set
	|| software.is_set;
}

bool Native::Line::Console::Flowcontrol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hardware.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(software.yfilter);
}

std::string Native::Line::Console::Flowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowcontrol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Flowcontrol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hardware.is_set || is_set(hardware.yfilter)) leaf_name_data.push_back(hardware.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (software.is_set || is_set(software.yfilter)) leaf_name_data.push_back(software.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Flowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Flowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Flowcontrol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hardware")
    {
        hardware = value;
        hardware.value_namespace = name_space;
        hardware.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "NONE")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software")
    {
        software = value;
        software.value_namespace = name_space;
        software.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Flowcontrol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hardware")
    {
        hardware.yfilter = yfilter;
    }
    if(value_path == "NONE")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "software")
    {
        software.yfilter = yfilter;
    }
}

bool Native::Line::Console::Flowcontrol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware" || name == "NONE" || name == "software")
        return true;
    return false;
}

Native::Line::Console::History::History()
    :
    size{YType::uint8, "size"}
{

    yang_name = "history"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::History::~History()
{
}

bool Native::Line::Console::History::has_data() const
{
    return size.is_set;
}

bool Native::Line::Console::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Line::Console::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Line::Console::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Line::Console::Ip::Ip()
    :
    tcp{YType::empty, "tcp"}
    	,
    netmask_format(nullptr) // presence node
{

    yang_name = "ip"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Ip::~Ip()
{
}

bool Native::Line::Console::Ip::has_data() const
{
    return tcp.is_set
	|| (netmask_format !=  nullptr && netmask_format->has_data());
}

bool Native::Line::Console::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcp.yfilter)
	|| (netmask_format !=  nullptr && netmask_format->has_operation());
}

std::string Native::Line::Console::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcp.is_set || is_set(tcp.yfilter)) leaf_name_data.push_back(tcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "netmask-format")
    {
        if(netmask_format == nullptr)
        {
            netmask_format = std::make_shared<Native::Line::Console::Ip::NetmaskFormat>();
        }
        return netmask_format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(netmask_format != nullptr)
    {
        children["netmask-format"] = netmask_format;
    }

    return children;
}

void Native::Line::Console::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcp")
    {
        tcp = value;
        tcp.value_namespace = name_space;
        tcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcp")
    {
        tcp.yfilter = yfilter;
    }
}

bool Native::Line::Console::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netmask-format" || name == "tcp")
        return true;
    return false;
}

Native::Line::Console::Ip::NetmaskFormat::NetmaskFormat()
    :
    format{YType::enumeration, "format"}
{

    yang_name = "netmask-format"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Ip::NetmaskFormat::~NetmaskFormat()
{
}

bool Native::Line::Console::Ip::NetmaskFormat::has_data() const
{
    return format.is_set;
}

bool Native::Line::Console::Ip::NetmaskFormat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter);
}

std::string Native::Line::Console::Ip::NetmaskFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netmask-format";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Ip::NetmaskFormat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Ip::NetmaskFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Ip::NetmaskFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Ip::NetmaskFormat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Ip::NetmaskFormat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool Native::Line::Console::Ip::NetmaskFormat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format")
        return true;
    return false;
}

Native::Line::Console::Ipv6::Ipv6()
    :
    access_class(std::make_shared<Native::Line::Console::Ipv6::AccessClass>())
{
    access_class->parent = this;

    yang_name = "ipv6"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Ipv6::~Ipv6()
{
}

bool Native::Line::Console::Ipv6::has_data() const
{
    return (access_class !=  nullptr && access_class->has_data());
}

bool Native::Line::Console::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (access_class !=  nullptr && access_class->has_operation());
}

std::string Native::Line::Console::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        if(access_class == nullptr)
        {
            access_class = std::make_shared<Native::Line::Console::Ipv6::AccessClass>();
        }
        return access_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_class != nullptr)
    {
        children["access-class"] = access_class;
    }

    return children;
}

void Native::Line::Console::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Console::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Console::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class")
        return true;
    return false;
}

Native::Line::Console::Ipv6::AccessClass::AccessClass()
{

    yang_name = "access-class"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Ipv6::AccessClass::~AccessClass()
{
}

bool Native::Line::Console::Ipv6::AccessClass::has_data() const
{
    for (std::size_t index=0; index<access_class.size(); index++)
    {
        if(access_class[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::Console::Ipv6::AccessClass::has_operation() const
{
    for (std::size_t index=0; index<access_class.size(); index++)
    {
        if(access_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Line::Console::Ipv6::AccessClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Ipv6::AccessClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Ipv6::AccessClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        for(auto const & c : access_class)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::Console::Ipv6::AccessClass::AccessClass_>();
        c->parent = this;
        access_class.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Ipv6::AccessClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_class)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Line::Console::Ipv6::AccessClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Console::Ipv6::AccessClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Console::Ipv6::AccessClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class")
        return true;
    return false;
}

Native::Line::Console::Ipv6::AccessClass::AccessClass_::AccessClass_()
    :
    access_class_name{YType::str, "access-class-name"},
    enumeration_in_out{YType::enumeration, "enumeration-in-out"}
{

    yang_name = "access-class"; yang_parent_name = "access-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Ipv6::AccessClass::AccessClass_::~AccessClass_()
{
}

bool Native::Line::Console::Ipv6::AccessClass::AccessClass_::has_data() const
{
    return access_class_name.is_set
	|| enumeration_in_out.is_set;
}

bool Native::Line::Console::Ipv6::AccessClass::AccessClass_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_class_name.yfilter)
	|| ydk::is_set(enumeration_in_out.yfilter);
}

std::string Native::Line::Console::Ipv6::AccessClass::AccessClass_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class" <<"[access-class-name='" <<access_class_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Ipv6::AccessClass::AccessClass_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_class_name.is_set || is_set(access_class_name.yfilter)) leaf_name_data.push_back(access_class_name.get_name_leafdata());
    if (enumeration_in_out.is_set || is_set(enumeration_in_out.yfilter)) leaf_name_data.push_back(enumeration_in_out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Ipv6::AccessClass::AccessClass_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Ipv6::AccessClass::AccessClass_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Ipv6::AccessClass::AccessClass_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-class-name")
    {
        access_class_name = value;
        access_class_name.value_namespace = name_space;
        access_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enumeration-in-out")
    {
        enumeration_in_out = value;
        enumeration_in_out.value_namespace = name_space;
        enumeration_in_out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Ipv6::AccessClass::AccessClass_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-class-name")
    {
        access_class_name.yfilter = yfilter;
    }
    if(value_path == "enumeration-in-out")
    {
        enumeration_in_out.yfilter = yfilter;
    }
}

bool Native::Line::Console::Ipv6::AccessClass::AccessClass_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class-name" || name == "enumeration-in-out")
        return true;
    return false;
}

Native::Line::Console::Logging::Logging()
    :
    synchronous(nullptr) // presence node
{

    yang_name = "logging"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Logging::~Logging()
{
}

bool Native::Line::Console::Logging::has_data() const
{
    return (synchronous !=  nullptr && synchronous->has_data());
}

bool Native::Line::Console::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (synchronous !=  nullptr && synchronous->has_operation());
}

std::string Native::Line::Console::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "synchronous")
    {
        if(synchronous == nullptr)
        {
            synchronous = std::make_shared<Native::Line::Console::Logging::Synchronous>();
        }
        return synchronous;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(synchronous != nullptr)
    {
        children["synchronous"] = synchronous;
    }

    return children;
}

void Native::Line::Console::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Console::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Console::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "synchronous")
        return true;
    return false;
}

Native::Line::Console::Logging::Synchronous::Synchronous()
{

    yang_name = "synchronous"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Logging::Synchronous::~Synchronous()
{
}

bool Native::Line::Console::Logging::Synchronous::has_data() const
{
    return false;
}

bool Native::Line::Console::Logging::Synchronous::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Line::Console::Logging::Synchronous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "synchronous";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Logging::Synchronous::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Logging::Synchronous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Logging::Synchronous::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Logging::Synchronous::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Console::Logging::Synchronous::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Console::Logging::Synchronous::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Line::Console::Login::Login()
    :
    authentication{YType::str, "authentication"},
    local{YType::empty, "local"}
{

    yang_name = "login"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Login::~Login()
{
}

bool Native::Line::Console::Login::has_data() const
{
    return authentication.is_set
	|| local.is_set;
}

bool Native::Line::Console::Login::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Line::Console::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Login::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Login::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Login::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Line::Console::Login::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "local")
        return true;
    return false;
}

Native::Line::Console::MediaType::MediaType()
    :
    rj45{YType::empty, "rj45"}
{

    yang_name = "media-type"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::MediaType::~MediaType()
{
}

bool Native::Line::Console::MediaType::has_data() const
{
    return rj45.is_set;
}

bool Native::Line::Console::MediaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rj45.yfilter);
}

std::string Native::Line::Console::MediaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::MediaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rj45.is_set || is_set(rj45.yfilter)) leaf_name_data.push_back(rj45.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::MediaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::MediaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::MediaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rj45")
    {
        rj45 = value;
        rj45.value_namespace = name_space;
        rj45.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::MediaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rj45")
    {
        rj45.yfilter = yfilter;
    }
}

bool Native::Line::Console::MediaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rj45")
        return true;
    return false;
}

Native::Line::Console::Modem::Modem()
    :
    answer_timeout{YType::empty, "answer-timeout"},
    cts_alarm{YType::empty, "CTS-Alarm"},
    dialin{YType::empty, "Dialin"},
    dtr_active{YType::empty, "DTR-active"},
    dtr_delay{YType::empty, "dtr-delay"},
    host{YType::empty, "Host"},
    inout{YType::empty, "InOut"},
    printer{YType::empty, "Printer"}
{

    yang_name = "modem"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Modem::~Modem()
{
}

bool Native::Line::Console::Modem::has_data() const
{
    return answer_timeout.is_set
	|| cts_alarm.is_set
	|| dialin.is_set
	|| dtr_active.is_set
	|| dtr_delay.is_set
	|| host.is_set
	|| inout.is_set
	|| printer.is_set;
}

bool Native::Line::Console::Modem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(answer_timeout.yfilter)
	|| ydk::is_set(cts_alarm.yfilter)
	|| ydk::is_set(dialin.yfilter)
	|| ydk::is_set(dtr_active.yfilter)
	|| ydk::is_set(dtr_delay.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(printer.yfilter);
}

std::string Native::Line::Console::Modem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Modem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (answer_timeout.is_set || is_set(answer_timeout.yfilter)) leaf_name_data.push_back(answer_timeout.get_name_leafdata());
    if (cts_alarm.is_set || is_set(cts_alarm.yfilter)) leaf_name_data.push_back(cts_alarm.get_name_leafdata());
    if (dialin.is_set || is_set(dialin.yfilter)) leaf_name_data.push_back(dialin.get_name_leafdata());
    if (dtr_active.is_set || is_set(dtr_active.yfilter)) leaf_name_data.push_back(dtr_active.get_name_leafdata());
    if (dtr_delay.is_set || is_set(dtr_delay.yfilter)) leaf_name_data.push_back(dtr_delay.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (printer.is_set || is_set(printer.yfilter)) leaf_name_data.push_back(printer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Modem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Modem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Modem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "answer-timeout")
    {
        answer_timeout = value;
        answer_timeout.value_namespace = name_space;
        answer_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CTS-Alarm")
    {
        cts_alarm = value;
        cts_alarm.value_namespace = name_space;
        cts_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Dialin")
    {
        dialin = value;
        dialin.value_namespace = name_space;
        dialin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "DTR-active")
    {
        dtr_active = value;
        dtr_active.value_namespace = name_space;
        dtr_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dtr-delay")
    {
        dtr_delay = value;
        dtr_delay.value_namespace = name_space;
        dtr_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "InOut")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Printer")
    {
        printer = value;
        printer.value_namespace = name_space;
        printer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Modem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "answer-timeout")
    {
        answer_timeout.yfilter = yfilter;
    }
    if(value_path == "CTS-Alarm")
    {
        cts_alarm.yfilter = yfilter;
    }
    if(value_path == "Dialin")
    {
        dialin.yfilter = yfilter;
    }
    if(value_path == "DTR-active")
    {
        dtr_active.yfilter = yfilter;
    }
    if(value_path == "dtr-delay")
    {
        dtr_delay.yfilter = yfilter;
    }
    if(value_path == "Host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "InOut")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "Printer")
    {
        printer.yfilter = yfilter;
    }
}

bool Native::Line::Console::Modem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "answer-timeout" || name == "CTS-Alarm" || name == "Dialin" || name == "DTR-active" || name == "dtr-delay" || name == "Host" || name == "InOut" || name == "Printer")
        return true;
    return false;
}

Native::Line::Console::NoExec::NoExec()
    :
    exec{YType::boolean, "exec"}
{

    yang_name = "no-exec"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::NoExec::~NoExec()
{
}

bool Native::Line::Console::NoExec::has_data() const
{
    return exec.is_set;
}

bool Native::Line::Console::NoExec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exec.yfilter);
}

std::string Native::Line::Console::NoExec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::NoExec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exec.is_set || is_set(exec.yfilter)) leaf_name_data.push_back(exec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::NoExec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::NoExec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::NoExec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exec")
    {
        exec = value;
        exec.value_namespace = name_space;
        exec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::NoExec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exec")
    {
        exec.yfilter = yfilter;
    }
}

bool Native::Line::Console::NoExec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exec")
        return true;
    return false;
}

Native::Line::Console::Padding::Padding()
    :
    character{YType::str, "character"},
    null{YType::uint8, "null"}
{

    yang_name = "padding"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Padding::~Padding()
{
}

bool Native::Line::Console::Padding::has_data() const
{
    return character.is_set
	|| null.is_set;
}

bool Native::Line::Console::Padding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(character.yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Line::Console::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Padding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (character.is_set || is_set(character.yfilter)) leaf_name_data.push_back(character.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Padding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "character")
    {
        character = value;
        character.value_namespace = name_space;
        character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Padding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "character")
    {
        character.yfilter = yfilter;
    }
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Line::Console::Padding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "character" || name == "null")
        return true;
    return false;
}

Native::Line::Console::Parity::Parity()
    :
    even{YType::empty, "even"},
    mark{YType::empty, "mark"},
    none{YType::empty, "none"},
    odd{YType::empty, "odd"},
    space{YType::empty, "space"}
{

    yang_name = "parity"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Parity::~Parity()
{
}

bool Native::Line::Console::Parity::has_data() const
{
    return even.is_set
	|| mark.is_set
	|| none.is_set
	|| odd.is_set
	|| space.is_set;
}

bool Native::Line::Console::Parity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(even.yfilter)
	|| ydk::is_set(mark.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(odd.yfilter)
	|| ydk::is_set(space.yfilter);
}

std::string Native::Line::Console::Parity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Parity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (even.is_set || is_set(even.yfilter)) leaf_name_data.push_back(even.get_name_leafdata());
    if (mark.is_set || is_set(mark.yfilter)) leaf_name_data.push_back(mark.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (odd.is_set || is_set(odd.yfilter)) leaf_name_data.push_back(odd.get_name_leafdata());
    if (space.is_set || is_set(space.yfilter)) leaf_name_data.push_back(space.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Parity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Parity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Parity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "even")
    {
        even = value;
        even.value_namespace = name_space;
        even.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark")
    {
        mark = value;
        mark.value_namespace = name_space;
        mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "odd")
    {
        odd = value;
        odd.value_namespace = name_space;
        odd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "space")
    {
        space = value;
        space.value_namespace = name_space;
        space.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Parity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "even")
    {
        even.yfilter = yfilter;
    }
    if(value_path == "mark")
    {
        mark.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "odd")
    {
        odd.yfilter = yfilter;
    }
    if(value_path == "space")
    {
        space.yfilter = yfilter;
    }
}

bool Native::Line::Console::Parity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "even" || name == "mark" || name == "none" || name == "odd" || name == "space")
        return true;
    return false;
}

Native::Line::Console::Password::Password()
    :
    level{YType::uint8, "level"},
    secret{YType::str, "secret"},
    type{YType::enumeration, "type"}
{

    yang_name = "password"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Password::~Password()
{
}

bool Native::Line::Console::Password::has_data() const
{
    return level.is_set
	|| secret.is_set
	|| type.is_set;
}

bool Native::Line::Console::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(secret.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Line::Console::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Line::Console::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "secret" || name == "type")
        return true;
    return false;
}

Native::Line::Console::Prc::Prc()
    :
    expose{YType::empty, "expose"},
    hide{YType::empty, "hide"}
{

    yang_name = "prc"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Prc::~Prc()
{
}

bool Native::Line::Console::Prc::has_data() const
{
    return expose.is_set
	|| hide.is_set;
}

bool Native::Line::Console::Prc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expose.yfilter)
	|| ydk::is_set(hide.yfilter);
}

std::string Native::Line::Console::Prc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Prc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expose.is_set || is_set(expose.yfilter)) leaf_name_data.push_back(expose.get_name_leafdata());
    if (hide.is_set || is_set(hide.yfilter)) leaf_name_data.push_back(hide.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Prc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Prc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Prc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expose")
    {
        expose = value;
        expose.value_namespace = name_space;
        expose.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hide")
    {
        hide = value;
        hide.value_namespace = name_space;
        hide.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Prc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expose")
    {
        expose.yfilter = yfilter;
    }
    if(value_path == "hide")
    {
        hide.yfilter = yfilter;
    }
}

bool Native::Line::Console::Prc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expose" || name == "hide")
        return true;
    return false;
}

Native::Line::Console::Privilege::Privilege()
    :
    level(nullptr) // presence node
{

    yang_name = "privilege"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Privilege::~Privilege()
{
}

bool Native::Line::Console::Privilege::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Line::Console::Privilege::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Line::Console::Privilege::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privilege";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Privilege::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Privilege::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Line::Console::Privilege::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Privilege::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Line::Console::Privilege::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Console::Privilege::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Console::Privilege::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Line::Console::Privilege::Level::Level()
    :
    number{YType::uint8, "number"}
{

    yang_name = "level"; yang_parent_name = "privilege"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Privilege::Level::~Level()
{
}

bool Native::Line::Console::Privilege::Level::has_data() const
{
    return number.is_set;
}

bool Native::Line::Console::Privilege::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Line::Console::Privilege::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Privilege::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Privilege::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Privilege::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Privilege::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Privilege::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Line::Console::Privilege::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number")
        return true;
    return false;
}

Native::Line::Console::SessionTimeout::SessionTimeout()
    :
    output{YType::empty, "output"},
    session_timeout_value{YType::uint16, "session-timeout-value"}
{

    yang_name = "session-timeout"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::SessionTimeout::~SessionTimeout()
{
}

bool Native::Line::Console::SessionTimeout::has_data() const
{
    return output.is_set
	|| session_timeout_value.is_set;
}

bool Native::Line::Console::SessionTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(output.yfilter)
	|| ydk::is_set(session_timeout_value.yfilter);
}

std::string Native::Line::Console::SessionTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::SessionTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());
    if (session_timeout_value.is_set || is_set(session_timeout_value.yfilter)) leaf_name_data.push_back(session_timeout_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::SessionTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::SessionTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::SessionTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-timeout-value")
    {
        session_timeout_value = value;
        session_timeout_value.value_namespace = name_space;
        session_timeout_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::SessionTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
    if(value_path == "session-timeout-value")
    {
        session_timeout_value.yfilter = yfilter;
    }
}

bool Native::Line::Console::SessionTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output" || name == "session-timeout-value")
        return true;
    return false;
}

Native::Line::Console::Telnet::Telnet()
    :
    transparent{YType::empty, "transparent"}
{

    yang_name = "telnet"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Telnet::~Telnet()
{
}

bool Native::Line::Console::Telnet::has_data() const
{
    return transparent.is_set;
}

bool Native::Line::Console::Telnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Line::Console::Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Telnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Telnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Telnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Telnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Line::Console::Telnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transparent")
        return true;
    return false;
}

Native::Line::Console::Timeout::Timeout()
    :
    login{YType::empty, "login"}
{

    yang_name = "timeout"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Timeout::~Timeout()
{
}

bool Native::Line::Console::Timeout::has_data() const
{
    return login.is_set;
}

bool Native::Line::Console::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(login.yfilter);
}

std::string Native::Line::Console::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (login.is_set || is_set(login.yfilter)) leaf_name_data.push_back(login.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "login")
    {
        login = value;
        login.value_namespace = name_space;
        login.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "login")
    {
        login.yfilter = yfilter;
    }
}

bool Native::Line::Console::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "login")
        return true;
    return false;
}

Native::Line::Console::Transport::Transport()
    :
    input(std::make_shared<Native::Line::Console::Transport::Input>())
	,output(std::make_shared<Native::Line::Console::Transport::Output>())
	,preferred(nullptr) // presence node
{
    input->parent = this;
    output->parent = this;

    yang_name = "transport"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Transport::~Transport()
{
}

bool Native::Line::Console::Transport::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data())
	|| (preferred !=  nullptr && preferred->has_data());
}

bool Native::Line::Console::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation())
	|| (preferred !=  nullptr && preferred->has_operation());
}

std::string Native::Line::Console::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Line::Console::Transport::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Line::Console::Transport::Output>();
        }
        return output;
    }

    if(child_yang_name == "preferred")
    {
        if(preferred == nullptr)
        {
            preferred = std::make_shared<Native::Line::Console::Transport::Preferred>();
        }
        return preferred;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    if(preferred != nullptr)
    {
        children["preferred"] = preferred;
    }

    return children;
}

void Native::Line::Console::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Console::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Console::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output" || name == "preferred")
        return true;
    return false;
}

Native::Line::Console::Transport::Input::Input()
    :
    input{YType::enumeration, "input"}
{

    yang_name = "input"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Transport::Input::~Input()
{
}

bool Native::Line::Console::Transport::Input::has_data() const
{
    for (auto const & leaf : input.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Line::Console::Transport::Input::has_operation() const
{
    for (auto const & leaf : input.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter);
}

std::string Native::Line::Console::Transport::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Transport::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto input_name_datas = input.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), input_name_datas.begin(), input_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Transport::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Transport::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Transport::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input.append(value);
    }
}

void Native::Line::Console::Transport::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
}

bool Native::Line::Console::Transport::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

Native::Line::Console::Transport::Output::Output()
    :
    output{YType::enumeration, "output"}
{

    yang_name = "output"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Transport::Output::~Output()
{
}

bool Native::Line::Console::Transport::Output::has_data() const
{
    for (auto const & leaf : output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Line::Console::Transport::Output::has_operation() const
{
    for (auto const & leaf : output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Line::Console::Transport::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Transport::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto output_name_datas = output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), output_name_datas.begin(), output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Transport::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Transport::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Transport::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output")
    {
        output.append(value);
    }
}

void Native::Line::Console::Transport::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Line::Console::Transport::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output")
        return true;
    return false;
}

Native::Line::Console::Transport::Preferred::Preferred()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "preferred"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Transport::Preferred::~Preferred()
{
}

bool Native::Line::Console::Transport::Preferred::has_data() const
{
    return protocol.is_set;
}

bool Native::Line::Console::Transport::Preferred::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Line::Console::Transport::Preferred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Transport::Preferred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Transport::Preferred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Transport::Preferred::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Transport::Preferred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Transport::Preferred::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Line::Console::Transport::Preferred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Line::Console::UsbInactivityTimeout::UsbInactivityTimeout()
    :
    switch_{YType::empty, "switch"}
{

    yang_name = "usb-inactivity-timeout"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::UsbInactivityTimeout::~UsbInactivityTimeout()
{
}

bool Native::Line::Console::UsbInactivityTimeout::has_data() const
{
    return switch_.is_set;
}

bool Native::Line::Console::UsbInactivityTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::Line::Console::UsbInactivityTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usb-inactivity-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::UsbInactivityTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::UsbInactivityTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::UsbInactivityTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::UsbInactivityTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::UsbInactivityTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::Line::Console::UsbInactivityTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Line::LineList::LineList()
    :
    first_number{YType::uint8, "first-number"},
    activation_character{YType::str, "activation-character"},
    data_character_bits{YType::uint8, "data-character-bits"},
    domain_lookup{YType::empty, "domain-lookup"},
    editing{YType::empty, "editing"},
    exec_banner{YType::empty, "exec-banner"},
    exec_character_bits{YType::uint8, "exec-character-bits"},
    full_help{YType::empty, "full-help"},
    international{YType::empty, "international"},
    last_number{YType::uint16, "last-number"},
    length{YType::uint16, "length"},
    line{YType::uint8, "line"},
    location{YType::str, "location"},
    monitor{YType::empty, "monitor"},
    motd_banner{YType::empty, "motd-banner"},
    no_activation_character{YType::boolean, "no-activation-character"},
    notify{YType::empty, "notify"},
    rotary{YType::uint8, "rotary"},
    rxspeed{YType::uint32, "rxspeed"},
    special_character_bits{YType::uint8, "special-character-bits"},
    speed{YType::uint32, "speed"},
    start_character{YType::str, "start-character"},
    stop_character{YType::str, "stop-character"},
    stopbits{YType::enumeration, "stopbits"},
    terminal_type{YType::str, "terminal-type"},
    txspeed{YType::uint32, "txspeed"},
    width{YType::uint16, "width"}
    	,
    access_class(std::make_shared<Native::Line::LineList::AccessClass>())
	,authorization(std::make_shared<Native::Line::LineList::Authorization>())
	,autocommand(std::make_shared<Native::Line::LineList::Autocommand>())
	,autocommand_options(nullptr) // presence node
	,databits(std::make_shared<Native::Line::LineList::Databits>())
	,escape_character(std::make_shared<Native::Line::LineList::EscapeCharacter>())
	,exec(std::make_shared<Native::Line::LineList::Exec>())
	,exec_timeout(std::make_shared<Native::Line::LineList::ExecTimeout>())
	,flowcontrol(std::make_shared<Native::Line::LineList::Flowcontrol>())
	,history(nullptr) // presence node
	,ip(std::make_shared<Native::Line::LineList::Ip>())
	,ipv6(std::make_shared<Native::Line::LineList::Ipv6>())
	,logging(std::make_shared<Native::Line::LineList::Logging>())
	,login(nullptr) // presence node
	,media_type(std::make_shared<Native::Line::LineList::MediaType>())
	,modem(std::make_shared<Native::Line::LineList::Modem>())
	,no_exec(std::make_shared<Native::Line::LineList::NoExec>())
	,padding(std::make_shared<Native::Line::LineList::Padding>())
	,parity(std::make_shared<Native::Line::LineList::Parity>())
	,password(std::make_shared<Native::Line::LineList::Password>())
	,prc(std::make_shared<Native::Line::LineList::Prc>())
	,privilege(std::make_shared<Native::Line::LineList::Privilege>())
	,session_timeout(std::make_shared<Native::Line::LineList::SessionTimeout>())
	,telnet(std::make_shared<Native::Line::LineList::Telnet>())
	,timeout(std::make_shared<Native::Line::LineList::Timeout>())
	,transport(std::make_shared<Native::Line::LineList::Transport>())
	,usb_inactivity_timeout(std::make_shared<Native::Line::LineList::UsbInactivityTimeout>())
{
    access_class->parent = this;
    authorization->parent = this;
    autocommand->parent = this;
    databits->parent = this;
    escape_character->parent = this;
    exec->parent = this;
    exec_timeout->parent = this;
    flowcontrol->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    logging->parent = this;
    media_type->parent = this;
    modem->parent = this;
    no_exec->parent = this;
    padding->parent = this;
    parity->parent = this;
    password->parent = this;
    prc->parent = this;
    privilege->parent = this;
    session_timeout->parent = this;
    telnet->parent = this;
    timeout->parent = this;
    transport->parent = this;
    usb_inactivity_timeout->parent = this;

    yang_name = "line-list"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Line::LineList::~LineList()
{
}

bool Native::Line::LineList::has_data() const
{
    return first_number.is_set
	|| activation_character.is_set
	|| data_character_bits.is_set
	|| domain_lookup.is_set
	|| editing.is_set
	|| exec_banner.is_set
	|| exec_character_bits.is_set
	|| full_help.is_set
	|| international.is_set
	|| last_number.is_set
	|| length.is_set
	|| line.is_set
	|| location.is_set
	|| monitor.is_set
	|| motd_banner.is_set
	|| no_activation_character.is_set
	|| notify.is_set
	|| rotary.is_set
	|| rxspeed.is_set
	|| special_character_bits.is_set
	|| speed.is_set
	|| start_character.is_set
	|| stop_character.is_set
	|| stopbits.is_set
	|| terminal_type.is_set
	|| txspeed.is_set
	|| width.is_set
	|| (access_class !=  nullptr && access_class->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (autocommand !=  nullptr && autocommand->has_data())
	|| (autocommand_options !=  nullptr && autocommand_options->has_data())
	|| (databits !=  nullptr && databits->has_data())
	|| (escape_character !=  nullptr && escape_character->has_data())
	|| (exec !=  nullptr && exec->has_data())
	|| (exec_timeout !=  nullptr && exec_timeout->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (login !=  nullptr && login->has_data())
	|| (media_type !=  nullptr && media_type->has_data())
	|| (modem !=  nullptr && modem->has_data())
	|| (no_exec !=  nullptr && no_exec->has_data())
	|| (padding !=  nullptr && padding->has_data())
	|| (parity !=  nullptr && parity->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (prc !=  nullptr && prc->has_data())
	|| (privilege !=  nullptr && privilege->has_data())
	|| (session_timeout !=  nullptr && session_timeout->has_data())
	|| (telnet !=  nullptr && telnet->has_data())
	|| (timeout !=  nullptr && timeout->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_data());
}

bool Native::Line::LineList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(first_number.yfilter)
	|| ydk::is_set(activation_character.yfilter)
	|| ydk::is_set(data_character_bits.yfilter)
	|| ydk::is_set(domain_lookup.yfilter)
	|| ydk::is_set(editing.yfilter)
	|| ydk::is_set(exec_banner.yfilter)
	|| ydk::is_set(exec_character_bits.yfilter)
	|| ydk::is_set(full_help.yfilter)
	|| ydk::is_set(international.yfilter)
	|| ydk::is_set(last_number.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(monitor.yfilter)
	|| ydk::is_set(motd_banner.yfilter)
	|| ydk::is_set(no_activation_character.yfilter)
	|| ydk::is_set(notify.yfilter)
	|| ydk::is_set(rotary.yfilter)
	|| ydk::is_set(rxspeed.yfilter)
	|| ydk::is_set(special_character_bits.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(start_character.yfilter)
	|| ydk::is_set(stop_character.yfilter)
	|| ydk::is_set(stopbits.yfilter)
	|| ydk::is_set(terminal_type.yfilter)
	|| ydk::is_set(txspeed.yfilter)
	|| ydk::is_set(width.yfilter)
	|| (access_class !=  nullptr && access_class->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (autocommand !=  nullptr && autocommand->has_operation())
	|| (autocommand_options !=  nullptr && autocommand_options->has_operation())
	|| (databits !=  nullptr && databits->has_operation())
	|| (escape_character !=  nullptr && escape_character->has_operation())
	|| (exec !=  nullptr && exec->has_operation())
	|| (exec_timeout !=  nullptr && exec_timeout->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (login !=  nullptr && login->has_operation())
	|| (media_type !=  nullptr && media_type->has_operation())
	|| (modem !=  nullptr && modem->has_operation())
	|| (no_exec !=  nullptr && no_exec->has_operation())
	|| (padding !=  nullptr && padding->has_operation())
	|| (parity !=  nullptr && parity->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (prc !=  nullptr && prc->has_operation())
	|| (privilege !=  nullptr && privilege->has_operation())
	|| (session_timeout !=  nullptr && session_timeout->has_operation())
	|| (telnet !=  nullptr && telnet->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_operation());
}

std::string Native::Line::LineList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/line/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Line::LineList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-list" <<"[first-number='" <<first_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first_number.is_set || is_set(first_number.yfilter)) leaf_name_data.push_back(first_number.get_name_leafdata());
    if (activation_character.is_set || is_set(activation_character.yfilter)) leaf_name_data.push_back(activation_character.get_name_leafdata());
    if (data_character_bits.is_set || is_set(data_character_bits.yfilter)) leaf_name_data.push_back(data_character_bits.get_name_leafdata());
    if (domain_lookup.is_set || is_set(domain_lookup.yfilter)) leaf_name_data.push_back(domain_lookup.get_name_leafdata());
    if (editing.is_set || is_set(editing.yfilter)) leaf_name_data.push_back(editing.get_name_leafdata());
    if (exec_banner.is_set || is_set(exec_banner.yfilter)) leaf_name_data.push_back(exec_banner.get_name_leafdata());
    if (exec_character_bits.is_set || is_set(exec_character_bits.yfilter)) leaf_name_data.push_back(exec_character_bits.get_name_leafdata());
    if (full_help.is_set || is_set(full_help.yfilter)) leaf_name_data.push_back(full_help.get_name_leafdata());
    if (international.is_set || is_set(international.yfilter)) leaf_name_data.push_back(international.get_name_leafdata());
    if (last_number.is_set || is_set(last_number.yfilter)) leaf_name_data.push_back(last_number.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());
    if (motd_banner.is_set || is_set(motd_banner.yfilter)) leaf_name_data.push_back(motd_banner.get_name_leafdata());
    if (no_activation_character.is_set || is_set(no_activation_character.yfilter)) leaf_name_data.push_back(no_activation_character.get_name_leafdata());
    if (notify.is_set || is_set(notify.yfilter)) leaf_name_data.push_back(notify.get_name_leafdata());
    if (rotary.is_set || is_set(rotary.yfilter)) leaf_name_data.push_back(rotary.get_name_leafdata());
    if (rxspeed.is_set || is_set(rxspeed.yfilter)) leaf_name_data.push_back(rxspeed.get_name_leafdata());
    if (special_character_bits.is_set || is_set(special_character_bits.yfilter)) leaf_name_data.push_back(special_character_bits.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (start_character.is_set || is_set(start_character.yfilter)) leaf_name_data.push_back(start_character.get_name_leafdata());
    if (stop_character.is_set || is_set(stop_character.yfilter)) leaf_name_data.push_back(stop_character.get_name_leafdata());
    if (stopbits.is_set || is_set(stopbits.yfilter)) leaf_name_data.push_back(stopbits.get_name_leafdata());
    if (terminal_type.is_set || is_set(terminal_type.yfilter)) leaf_name_data.push_back(terminal_type.get_name_leafdata());
    if (txspeed.is_set || is_set(txspeed.yfilter)) leaf_name_data.push_back(txspeed.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        if(access_class == nullptr)
        {
            access_class = std::make_shared<Native::Line::LineList::AccessClass>();
        }
        return access_class;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Line::LineList::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "autocommand")
    {
        if(autocommand == nullptr)
        {
            autocommand = std::make_shared<Native::Line::LineList::Autocommand>();
        }
        return autocommand;
    }

    if(child_yang_name == "autocommand-options")
    {
        if(autocommand_options == nullptr)
        {
            autocommand_options = std::make_shared<Native::Line::LineList::AutocommandOptions>();
        }
        return autocommand_options;
    }

    if(child_yang_name == "databits")
    {
        if(databits == nullptr)
        {
            databits = std::make_shared<Native::Line::LineList::Databits>();
        }
        return databits;
    }

    if(child_yang_name == "escape-character")
    {
        if(escape_character == nullptr)
        {
            escape_character = std::make_shared<Native::Line::LineList::EscapeCharacter>();
        }
        return escape_character;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Line::LineList::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "exec-timeout")
    {
        if(exec_timeout == nullptr)
        {
            exec_timeout = std::make_shared<Native::Line::LineList::ExecTimeout>();
        }
        return exec_timeout;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Line::LineList::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Line::LineList::History>();
        }
        return history;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Line::LineList::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Line::LineList::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Line::LineList::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "login")
    {
        if(login == nullptr)
        {
            login = std::make_shared<Native::Line::LineList::Login>();
        }
        return login;
    }

    if(child_yang_name == "media-type")
    {
        if(media_type == nullptr)
        {
            media_type = std::make_shared<Native::Line::LineList::MediaType>();
        }
        return media_type;
    }

    if(child_yang_name == "modem")
    {
        if(modem == nullptr)
        {
            modem = std::make_shared<Native::Line::LineList::Modem>();
        }
        return modem;
    }

    if(child_yang_name == "no-exec")
    {
        if(no_exec == nullptr)
        {
            no_exec = std::make_shared<Native::Line::LineList::NoExec>();
        }
        return no_exec;
    }

    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Line::LineList::Padding>();
        }
        return padding;
    }

    if(child_yang_name == "parity")
    {
        if(parity == nullptr)
        {
            parity = std::make_shared<Native::Line::LineList::Parity>();
        }
        return parity;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Line::LineList::Password>();
        }
        return password;
    }

    if(child_yang_name == "prc")
    {
        if(prc == nullptr)
        {
            prc = std::make_shared<Native::Line::LineList::Prc>();
        }
        return prc;
    }

    if(child_yang_name == "privilege")
    {
        if(privilege == nullptr)
        {
            privilege = std::make_shared<Native::Line::LineList::Privilege>();
        }
        return privilege;
    }

    if(child_yang_name == "session-timeout")
    {
        if(session_timeout == nullptr)
        {
            session_timeout = std::make_shared<Native::Line::LineList::SessionTimeout>();
        }
        return session_timeout;
    }

    if(child_yang_name == "telnet")
    {
        if(telnet == nullptr)
        {
            telnet = std::make_shared<Native::Line::LineList::Telnet>();
        }
        return telnet;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Line::LineList::Timeout>();
        }
        return timeout;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Line::LineList::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "usb-inactivity-timeout")
    {
        if(usb_inactivity_timeout == nullptr)
        {
            usb_inactivity_timeout = std::make_shared<Native::Line::LineList::UsbInactivityTimeout>();
        }
        return usb_inactivity_timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_class != nullptr)
    {
        children["access-class"] = access_class;
    }

    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(autocommand != nullptr)
    {
        children["autocommand"] = autocommand;
    }

    if(autocommand_options != nullptr)
    {
        children["autocommand-options"] = autocommand_options;
    }

    if(databits != nullptr)
    {
        children["databits"] = databits;
    }

    if(escape_character != nullptr)
    {
        children["escape-character"] = escape_character;
    }

    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    if(exec_timeout != nullptr)
    {
        children["exec-timeout"] = exec_timeout;
    }

    if(flowcontrol != nullptr)
    {
        children["flowcontrol"] = flowcontrol;
    }

    if(history != nullptr)
    {
        children["history"] = history;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(login != nullptr)
    {
        children["login"] = login;
    }

    if(media_type != nullptr)
    {
        children["media-type"] = media_type;
    }

    if(modem != nullptr)
    {
        children["modem"] = modem;
    }

    if(no_exec != nullptr)
    {
        children["no-exec"] = no_exec;
    }

    if(padding != nullptr)
    {
        children["padding"] = padding;
    }

    if(parity != nullptr)
    {
        children["parity"] = parity;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(prc != nullptr)
    {
        children["prc"] = prc;
    }

    if(privilege != nullptr)
    {
        children["privilege"] = privilege;
    }

    if(session_timeout != nullptr)
    {
        children["session-timeout"] = session_timeout;
    }

    if(telnet != nullptr)
    {
        children["telnet"] = telnet;
    }

    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(usb_inactivity_timeout != nullptr)
    {
        children["usb-inactivity-timeout"] = usb_inactivity_timeout;
    }

    return children;
}

void Native::Line::LineList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "first-number")
    {
        first_number = value;
        first_number.value_namespace = name_space;
        first_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activation-character")
    {
        activation_character = value;
        activation_character.value_namespace = name_space;
        activation_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-character-bits")
    {
        data_character_bits = value;
        data_character_bits.value_namespace = name_space;
        data_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-lookup")
    {
        domain_lookup = value;
        domain_lookup.value_namespace = name_space;
        domain_lookup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "editing")
    {
        editing = value;
        editing.value_namespace = name_space;
        editing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-banner")
    {
        exec_banner = value;
        exec_banner.value_namespace = name_space;
        exec_banner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-character-bits")
    {
        exec_character_bits = value;
        exec_character_bits.value_namespace = name_space;
        exec_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "full-help")
    {
        full_help = value;
        full_help.value_namespace = name_space;
        full_help.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "international")
    {
        international = value;
        international.value_namespace = name_space;
        international.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-number")
    {
        last_number = value;
        last_number.value_namespace = name_space;
        last_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "motd-banner")
    {
        motd_banner = value;
        motd_banner.value_namespace = name_space;
        motd_banner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-activation-character")
    {
        no_activation_character = value;
        no_activation_character.value_namespace = name_space;
        no_activation_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify")
    {
        notify = value;
        notify.value_namespace = name_space;
        notify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rotary")
    {
        rotary = value;
        rotary.value_namespace = name_space;
        rotary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxspeed")
    {
        rxspeed = value;
        rxspeed.value_namespace = name_space;
        rxspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "special-character-bits")
    {
        special_character_bits = value;
        special_character_bits.value_namespace = name_space;
        special_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-character")
    {
        start_character = value;
        start_character.value_namespace = name_space;
        start_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-character")
    {
        stop_character = value;
        stop_character.value_namespace = name_space;
        stop_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stopbits")
    {
        stopbits = value;
        stopbits.value_namespace = name_space;
        stopbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal-type")
    {
        terminal_type = value;
        terminal_type.value_namespace = name_space;
        terminal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txspeed")
    {
        txspeed = value;
        txspeed.value_namespace = name_space;
        txspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "first-number")
    {
        first_number.yfilter = yfilter;
    }
    if(value_path == "activation-character")
    {
        activation_character.yfilter = yfilter;
    }
    if(value_path == "data-character-bits")
    {
        data_character_bits.yfilter = yfilter;
    }
    if(value_path == "domain-lookup")
    {
        domain_lookup.yfilter = yfilter;
    }
    if(value_path == "editing")
    {
        editing.yfilter = yfilter;
    }
    if(value_path == "exec-banner")
    {
        exec_banner.yfilter = yfilter;
    }
    if(value_path == "exec-character-bits")
    {
        exec_character_bits.yfilter = yfilter;
    }
    if(value_path == "full-help")
    {
        full_help.yfilter = yfilter;
    }
    if(value_path == "international")
    {
        international.yfilter = yfilter;
    }
    if(value_path == "last-number")
    {
        last_number.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
    if(value_path == "motd-banner")
    {
        motd_banner.yfilter = yfilter;
    }
    if(value_path == "no-activation-character")
    {
        no_activation_character.yfilter = yfilter;
    }
    if(value_path == "notify")
    {
        notify.yfilter = yfilter;
    }
    if(value_path == "rotary")
    {
        rotary.yfilter = yfilter;
    }
    if(value_path == "rxspeed")
    {
        rxspeed.yfilter = yfilter;
    }
    if(value_path == "special-character-bits")
    {
        special_character_bits.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "start-character")
    {
        start_character.yfilter = yfilter;
    }
    if(value_path == "stop-character")
    {
        stop_character.yfilter = yfilter;
    }
    if(value_path == "stopbits")
    {
        stopbits.yfilter = yfilter;
    }
    if(value_path == "terminal-type")
    {
        terminal_type.yfilter = yfilter;
    }
    if(value_path == "txspeed")
    {
        txspeed.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool Native::Line::LineList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class" || name == "authorization" || name == "autocommand" || name == "autocommand-options" || name == "databits" || name == "escape-character" || name == "exec" || name == "exec-timeout" || name == "flowcontrol" || name == "history" || name == "ip" || name == "ipv6" || name == "logging" || name == "login" || name == "media-type" || name == "modem" || name == "no-exec" || name == "padding" || name == "parity" || name == "password" || name == "prc" || name == "privilege" || name == "session-timeout" || name == "telnet" || name == "timeout" || name == "transport" || name == "usb-inactivity-timeout" || name == "first-number" || name == "activation-character" || name == "data-character-bits" || name == "domain-lookup" || name == "editing" || name == "exec-banner" || name == "exec-character-bits" || name == "full-help" || name == "international" || name == "last-number" || name == "length" || name == "line" || name == "location" || name == "monitor" || name == "motd-banner" || name == "no-activation-character" || name == "notify" || name == "rotary" || name == "rxspeed" || name == "special-character-bits" || name == "speed" || name == "start-character" || name == "stop-character" || name == "stopbits" || name == "terminal-type" || name == "txspeed" || name == "width")
        return true;
    return false;
}

Native::Line::LineList::AccessClass::AccessClass()
{

    yang_name = "access-class"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::AccessClass::~AccessClass()
{
}

bool Native::Line::LineList::AccessClass::has_data() const
{
    for (std::size_t index=0; index<acccess_list.size(); index++)
    {
        if(acccess_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::LineList::AccessClass::has_operation() const
{
    for (std::size_t index=0; index<acccess_list.size(); index++)
    {
        if(acccess_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Line::LineList::AccessClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::AccessClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::AccessClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acccess-list")
    {
        for(auto const & c : acccess_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::LineList::AccessClass::AcccessList>();
        c->parent = this;
        acccess_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::AccessClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : acccess_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Line::LineList::AccessClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::LineList::AccessClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::LineList::AccessClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acccess-list")
        return true;
    return false;
}

Native::Line::LineList::AccessClass::AcccessList::AcccessList()
    :
    direction{YType::enumeration, "direction"},
    access_list{YType::str, "access-list"},
    vrf_also{YType::empty, "vrf-also"}
{

    yang_name = "acccess-list"; yang_parent_name = "access-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::AccessClass::AcccessList::~AcccessList()
{
}

bool Native::Line::LineList::AccessClass::AcccessList::has_data() const
{
    return direction.is_set
	|| access_list.is_set
	|| vrf_also.is_set;
}

bool Native::Line::LineList::AccessClass::AcccessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(vrf_also.yfilter);
}

std::string Native::Line::LineList::AccessClass::AcccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acccess-list" <<"[direction='" <<direction <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::AccessClass::AcccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (vrf_also.is_set || is_set(vrf_also.yfilter)) leaf_name_data.push_back(vrf_also.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::AccessClass::AcccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::AccessClass::AcccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::AccessClass::AcccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-also")
    {
        vrf_also = value;
        vrf_also.value_namespace = name_space;
        vrf_also.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::AccessClass::AcccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "vrf-also")
    {
        vrf_also.yfilter = yfilter;
    }
}

bool Native::Line::LineList::AccessClass::AcccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "access-list" || name == "vrf-also")
        return true;
    return false;
}

Native::Line::LineList::Authorization::Authorization()
    :
    command(std::make_shared<Native::Line::LineList::Authorization::Command>())
{
    command->parent = this;

    yang_name = "authorization"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Authorization::~Authorization()
{
}

bool Native::Line::LineList::Authorization::has_data() const
{
    return (command !=  nullptr && command->has_data());
}

bool Native::Line::LineList::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| (command !=  nullptr && command->has_operation());
}

std::string Native::Line::LineList::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command")
    {
        if(command == nullptr)
        {
            command = std::make_shared<Native::Line::LineList::Authorization::Command>();
        }
        return command;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(command != nullptr)
    {
        children["command"] = command;
    }

    return children;
}

void Native::Line::LineList::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::LineList::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::LineList::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

Native::Line::LineList::Authorization::Command::Command()
    :
    auth_name{YType::str, "auth-name"},
    enable_level{YType::uint8, "enable-level"}
{

    yang_name = "command"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Authorization::Command::~Command()
{
}

bool Native::Line::LineList::Authorization::Command::has_data() const
{
    return auth_name.is_set
	|| enable_level.is_set;
}

bool Native::Line::LineList::Authorization::Command::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_name.yfilter)
	|| ydk::is_set(enable_level.yfilter);
}

std::string Native::Line::LineList::Authorization::Command::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Authorization::Command::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_name.is_set || is_set(auth_name.yfilter)) leaf_name_data.push_back(auth_name.get_name_leafdata());
    if (enable_level.is_set || is_set(enable_level.yfilter)) leaf_name_data.push_back(enable_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Authorization::Command::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Authorization::Command::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Authorization::Command::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-name")
    {
        auth_name = value;
        auth_name.value_namespace = name_space;
        auth_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-level")
    {
        enable_level = value;
        enable_level.value_namespace = name_space;
        enable_level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Authorization::Command::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-name")
    {
        auth_name.yfilter = yfilter;
    }
    if(value_path == "enable-level")
    {
        enable_level.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Authorization::Command::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-name" || name == "enable-level")
        return true;
    return false;
}

Native::Line::LineList::Autocommand::Autocommand()
    :
    line{YType::str, "line"}
    	,
    no_suppress_linenumber(nullptr) // presence node
{

    yang_name = "autocommand"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Autocommand::~Autocommand()
{
}

bool Native::Line::LineList::Autocommand::has_data() const
{
    return line.is_set
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_data());
}

bool Native::Line::LineList::Autocommand::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter)
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_operation());
}

std::string Native::Line::LineList::Autocommand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Autocommand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Autocommand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "no-suppress-linenumber")
    {
        if(no_suppress_linenumber == nullptr)
        {
            no_suppress_linenumber = std::make_shared<Native::Line::LineList::Autocommand::NoSuppressLinenumber>();
        }
        return no_suppress_linenumber;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Autocommand::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(no_suppress_linenumber != nullptr)
    {
        children["no-suppress-linenumber"] = no_suppress_linenumber;
    }

    return children;
}

void Native::Line::LineList::Autocommand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Autocommand::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Autocommand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-suppress-linenumber" || name == "line")
        return true;
    return false;
}

Native::Line::LineList::Autocommand::NoSuppressLinenumber::NoSuppressLinenumber()
    :
    line{YType::str, "line"}
{

    yang_name = "no-suppress-linenumber"; yang_parent_name = "autocommand"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Autocommand::NoSuppressLinenumber::~NoSuppressLinenumber()
{
}

bool Native::Line::LineList::Autocommand::NoSuppressLinenumber::has_data() const
{
    return line.is_set;
}

bool Native::Line::LineList::Autocommand::NoSuppressLinenumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter);
}

std::string Native::Line::LineList::Autocommand::NoSuppressLinenumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-suppress-linenumber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Autocommand::NoSuppressLinenumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Autocommand::NoSuppressLinenumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Autocommand::NoSuppressLinenumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Autocommand::NoSuppressLinenumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Autocommand::NoSuppressLinenumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Autocommand::NoSuppressLinenumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line")
        return true;
    return false;
}

Native::Line::LineList::AutocommandOptions::AutocommandOptions()
    :
    abort_character(nullptr) // presence node
	,delay(nullptr) // presence node
	,nohangup(nullptr) // presence node
{

    yang_name = "autocommand-options"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::AutocommandOptions::~AutocommandOptions()
{
}

bool Native::Line::LineList::AutocommandOptions::has_data() const
{
    return (abort_character !=  nullptr && abort_character->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (nohangup !=  nullptr && nohangup->has_data());
}

bool Native::Line::LineList::AutocommandOptions::has_operation() const
{
    return is_set(yfilter)
	|| (abort_character !=  nullptr && abort_character->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (nohangup !=  nullptr && nohangup->has_operation());
}

std::string Native::Line::LineList::AutocommandOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::AutocommandOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::AutocommandOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "abort-character")
    {
        if(abort_character == nullptr)
        {
            abort_character = std::make_shared<Native::Line::LineList::AutocommandOptions::AbortCharacter>();
        }
        return abort_character;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Line::LineList::AutocommandOptions::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "nohangup")
    {
        if(nohangup == nullptr)
        {
            nohangup = std::make_shared<Native::Line::LineList::AutocommandOptions::Nohangup>();
        }
        return nohangup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::AutocommandOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(abort_character != nullptr)
    {
        children["abort-character"] = abort_character;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(nohangup != nullptr)
    {
        children["nohangup"] = nohangup;
    }

    return children;
}

void Native::Line::LineList::AutocommandOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::LineList::AutocommandOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::LineList::AutocommandOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abort-character" || name == "delay" || name == "nohangup")
        return true;
    return false;
}

Native::Line::LineList::AutocommandOptions::AbortCharacter::AbortCharacter()
    :
    character{YType::str, "character"}
{

    yang_name = "abort-character"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::AutocommandOptions::AbortCharacter::~AbortCharacter()
{
}

bool Native::Line::LineList::AutocommandOptions::AbortCharacter::has_data() const
{
    return character.is_set;
}

bool Native::Line::LineList::AutocommandOptions::AbortCharacter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(character.yfilter);
}

std::string Native::Line::LineList::AutocommandOptions::AbortCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "abort-character";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::AutocommandOptions::AbortCharacter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (character.is_set || is_set(character.yfilter)) leaf_name_data.push_back(character.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::AutocommandOptions::AbortCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::AutocommandOptions::AbortCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::AutocommandOptions::AbortCharacter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "character")
    {
        character = value;
        character.value_namespace = name_space;
        character.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::AutocommandOptions::AbortCharacter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "character")
    {
        character.yfilter = yfilter;
    }
}

bool Native::Line::LineList::AutocommandOptions::AbortCharacter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "character")
        return true;
    return false;
}

Native::Line::LineList::AutocommandOptions::Delay::Delay()
    :
    time{YType::uint8, "time"}
{

    yang_name = "delay"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::AutocommandOptions::Delay::~Delay()
{
}

bool Native::Line::LineList::AutocommandOptions::Delay::has_data() const
{
    return time.is_set;
}

bool Native::Line::LineList::AutocommandOptions::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Line::LineList::AutocommandOptions::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::AutocommandOptions::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::AutocommandOptions::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::AutocommandOptions::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::AutocommandOptions::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::AutocommandOptions::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Line::LineList::AutocommandOptions::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Line::LineList::AutocommandOptions::Nohangup::Nohangup()
    :
    abort_character{YType::empty, "abort-character"},
    delay{YType::empty, "delay"}
{

    yang_name = "nohangup"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::AutocommandOptions::Nohangup::~Nohangup()
{
}

bool Native::Line::LineList::AutocommandOptions::Nohangup::has_data() const
{
    return abort_character.is_set
	|| delay.is_set;
}

bool Native::Line::LineList::AutocommandOptions::Nohangup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(abort_character.yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string Native::Line::LineList::AutocommandOptions::Nohangup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nohangup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::AutocommandOptions::Nohangup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abort_character.is_set || is_set(abort_character.yfilter)) leaf_name_data.push_back(abort_character.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::AutocommandOptions::Nohangup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::AutocommandOptions::Nohangup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::AutocommandOptions::Nohangup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "abort-character")
    {
        abort_character = value;
        abort_character.value_namespace = name_space;
        abort_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::AutocommandOptions::Nohangup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "abort-character")
    {
        abort_character.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Line::LineList::AutocommandOptions::Nohangup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abort-character" || name == "delay")
        return true;
    return false;
}

Native::Line::LineList::Databits::Databits()
    :
    set_to_5{YType::empty, "set-to-5"},
    set_to_6{YType::empty, "set-to-6"},
    set_to_7{YType::empty, "set-to-7"},
    set_to_8{YType::empty, "set-to-8"}
{

    yang_name = "databits"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Databits::~Databits()
{
}

bool Native::Line::LineList::Databits::has_data() const
{
    return set_to_5.is_set
	|| set_to_6.is_set
	|| set_to_7.is_set
	|| set_to_8.is_set;
}

bool Native::Line::LineList::Databits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_to_5.yfilter)
	|| ydk::is_set(set_to_6.yfilter)
	|| ydk::is_set(set_to_7.yfilter)
	|| ydk::is_set(set_to_8.yfilter);
}

std::string Native::Line::LineList::Databits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "databits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Databits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_to_5.is_set || is_set(set_to_5.yfilter)) leaf_name_data.push_back(set_to_5.get_name_leafdata());
    if (set_to_6.is_set || is_set(set_to_6.yfilter)) leaf_name_data.push_back(set_to_6.get_name_leafdata());
    if (set_to_7.is_set || is_set(set_to_7.yfilter)) leaf_name_data.push_back(set_to_7.get_name_leafdata());
    if (set_to_8.is_set || is_set(set_to_8.yfilter)) leaf_name_data.push_back(set_to_8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Databits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Databits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Databits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-to-5")
    {
        set_to_5 = value;
        set_to_5.value_namespace = name_space;
        set_to_5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-6")
    {
        set_to_6 = value;
        set_to_6.value_namespace = name_space;
        set_to_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-7")
    {
        set_to_7 = value;
        set_to_7.value_namespace = name_space;
        set_to_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-8")
    {
        set_to_8 = value;
        set_to_8.value_namespace = name_space;
        set_to_8.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Databits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-to-5")
    {
        set_to_5.yfilter = yfilter;
    }
    if(value_path == "set-to-6")
    {
        set_to_6.yfilter = yfilter;
    }
    if(value_path == "set-to-7")
    {
        set_to_7.yfilter = yfilter;
    }
    if(value_path == "set-to-8")
    {
        set_to_8.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Databits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-to-5" || name == "set-to-6" || name == "set-to-7" || name == "set-to-8")
        return true;
    return false;
}

Native::Line::LineList::EscapeCharacter::EscapeCharacter()
    :
    char_{YType::str, "char"},
    soft{YType::empty, "soft"}
{

    yang_name = "escape-character"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::EscapeCharacter::~EscapeCharacter()
{
}

bool Native::Line::LineList::EscapeCharacter::has_data() const
{
    return char_.is_set
	|| soft.is_set;
}

bool Native::Line::LineList::EscapeCharacter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(char_.yfilter)
	|| ydk::is_set(soft.yfilter);
}

std::string Native::Line::LineList::EscapeCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "escape-character";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::EscapeCharacter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (char_.is_set || is_set(char_.yfilter)) leaf_name_data.push_back(char_.get_name_leafdata());
    if (soft.is_set || is_set(soft.yfilter)) leaf_name_data.push_back(soft.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::EscapeCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::EscapeCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::EscapeCharacter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "char")
    {
        char_ = value;
        char_.value_namespace = name_space;
        char_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft")
    {
        soft = value;
        soft.value_namespace = name_space;
        soft.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::EscapeCharacter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "char")
    {
        char_.yfilter = yfilter;
    }
    if(value_path == "soft")
    {
        soft.yfilter = yfilter;
    }
}

bool Native::Line::LineList::EscapeCharacter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "char" || name == "soft")
        return true;
    return false;
}

Native::Line::LineList::Exec::Exec()
    :
    prompt(std::make_shared<Native::Line::LineList::Exec::Prompt>())
{
    prompt->parent = this;

    yang_name = "exec"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Exec::~Exec()
{
}

bool Native::Line::LineList::Exec::has_data() const
{
    return (prompt !=  nullptr && prompt->has_data());
}

bool Native::Line::LineList::Exec::has_operation() const
{
    return is_set(yfilter)
	|| (prompt !=  nullptr && prompt->has_operation());
}

std::string Native::Line::LineList::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prompt")
    {
        if(prompt == nullptr)
        {
            prompt = std::make_shared<Native::Line::LineList::Exec::Prompt>();
        }
        return prompt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prompt != nullptr)
    {
        children["prompt"] = prompt;
    }

    return children;
}

void Native::Line::LineList::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::LineList::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::LineList::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prompt")
        return true;
    return false;
}

Native::Line::LineList::Exec::Prompt::Prompt()
    :
    timestamp{YType::empty, "timestamp"}
{

    yang_name = "prompt"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Exec::Prompt::~Prompt()
{
}

bool Native::Line::LineList::Exec::Prompt::has_data() const
{
    return timestamp.is_set;
}

bool Native::Line::LineList::Exec::Prompt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter);
}

std::string Native::Line::LineList::Exec::Prompt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prompt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Exec::Prompt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Exec::Prompt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Exec::Prompt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Exec::Prompt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Exec::Prompt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Exec::Prompt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp")
        return true;
    return false;
}

Native::Line::LineList::ExecTimeout::ExecTimeout()
    :
    minutes{YType::uint32, "minutes"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "exec-timeout"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::ExecTimeout::~ExecTimeout()
{
}

bool Native::Line::LineList::ExecTimeout::has_data() const
{
    return minutes.is_set
	|| seconds.is_set;
}

bool Native::Line::LineList::ExecTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Line::LineList::ExecTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::ExecTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::ExecTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::ExecTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::ExecTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::ExecTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Line::LineList::ExecTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minutes" || name == "seconds")
        return true;
    return false;
}

Native::Line::LineList::Flowcontrol::Flowcontrol()
    :
    hardware{YType::empty, "hardware"},
    none{YType::empty, "NONE"},
    software{YType::empty, "software"}
{

    yang_name = "flowcontrol"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Flowcontrol::~Flowcontrol()
{
}

bool Native::Line::LineList::Flowcontrol::has_data() const
{
    return hardware.is_set
	|| none.is_set
	|| software.is_set;
}

bool Native::Line::LineList::Flowcontrol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hardware.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(software.yfilter);
}

std::string Native::Line::LineList::Flowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowcontrol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Flowcontrol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hardware.is_set || is_set(hardware.yfilter)) leaf_name_data.push_back(hardware.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (software.is_set || is_set(software.yfilter)) leaf_name_data.push_back(software.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Flowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Flowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Flowcontrol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hardware")
    {
        hardware = value;
        hardware.value_namespace = name_space;
        hardware.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "NONE")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software")
    {
        software = value;
        software.value_namespace = name_space;
        software.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Flowcontrol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hardware")
    {
        hardware.yfilter = yfilter;
    }
    if(value_path == "NONE")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "software")
    {
        software.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Flowcontrol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware" || name == "NONE" || name == "software")
        return true;
    return false;
}

Native::Line::LineList::History::History()
    :
    size{YType::uint8, "size"}
{

    yang_name = "history"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::History::~History()
{
}

bool Native::Line::LineList::History::has_data() const
{
    return size.is_set;
}

bool Native::Line::LineList::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Line::LineList::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Line::LineList::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Line::LineList::Ip::Ip()
    :
    tcp{YType::empty, "tcp"}
    	,
    netmask_format(nullptr) // presence node
{

    yang_name = "ip"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Ip::~Ip()
{
}

bool Native::Line::LineList::Ip::has_data() const
{
    return tcp.is_set
	|| (netmask_format !=  nullptr && netmask_format->has_data());
}

bool Native::Line::LineList::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcp.yfilter)
	|| (netmask_format !=  nullptr && netmask_format->has_operation());
}

std::string Native::Line::LineList::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcp.is_set || is_set(tcp.yfilter)) leaf_name_data.push_back(tcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "netmask-format")
    {
        if(netmask_format == nullptr)
        {
            netmask_format = std::make_shared<Native::Line::LineList::Ip::NetmaskFormat>();
        }
        return netmask_format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(netmask_format != nullptr)
    {
        children["netmask-format"] = netmask_format;
    }

    return children;
}

void Native::Line::LineList::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcp")
    {
        tcp = value;
        tcp.value_namespace = name_space;
        tcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcp")
    {
        tcp.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netmask-format" || name == "tcp")
        return true;
    return false;
}

Native::Line::LineList::Ip::NetmaskFormat::NetmaskFormat()
    :
    format{YType::enumeration, "format"}
{

    yang_name = "netmask-format"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Ip::NetmaskFormat::~NetmaskFormat()
{
}

bool Native::Line::LineList::Ip::NetmaskFormat::has_data() const
{
    return format.is_set;
}

bool Native::Line::LineList::Ip::NetmaskFormat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter);
}

std::string Native::Line::LineList::Ip::NetmaskFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netmask-format";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Ip::NetmaskFormat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Ip::NetmaskFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Ip::NetmaskFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Ip::NetmaskFormat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Ip::NetmaskFormat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Ip::NetmaskFormat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format")
        return true;
    return false;
}

Native::Line::LineList::Ipv6::Ipv6()
    :
    access_class(std::make_shared<Native::Line::LineList::Ipv6::AccessClass>())
{
    access_class->parent = this;

    yang_name = "ipv6"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Ipv6::~Ipv6()
{
}

bool Native::Line::LineList::Ipv6::has_data() const
{
    return (access_class !=  nullptr && access_class->has_data());
}

bool Native::Line::LineList::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (access_class !=  nullptr && access_class->has_operation());
}

std::string Native::Line::LineList::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        if(access_class == nullptr)
        {
            access_class = std::make_shared<Native::Line::LineList::Ipv6::AccessClass>();
        }
        return access_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_class != nullptr)
    {
        children["access-class"] = access_class;
    }

    return children;
}

void Native::Line::LineList::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::LineList::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::LineList::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class")
        return true;
    return false;
}

Native::Line::LineList::Ipv6::AccessClass::AccessClass()
{

    yang_name = "access-class"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Ipv6::AccessClass::~AccessClass()
{
}

bool Native::Line::LineList::Ipv6::AccessClass::has_data() const
{
    for (std::size_t index=0; index<access_class.size(); index++)
    {
        if(access_class[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::LineList::Ipv6::AccessClass::has_operation() const
{
    for (std::size_t index=0; index<access_class.size(); index++)
    {
        if(access_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Line::LineList::Ipv6::AccessClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Ipv6::AccessClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Ipv6::AccessClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        for(auto const & c : access_class)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::LineList::Ipv6::AccessClass::AccessClass_>();
        c->parent = this;
        access_class.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Ipv6::AccessClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_class)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Line::LineList::Ipv6::AccessClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::LineList::Ipv6::AccessClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::LineList::Ipv6::AccessClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class")
        return true;
    return false;
}

Native::Line::LineList::Ipv6::AccessClass::AccessClass_::AccessClass_()
    :
    access_class_name{YType::str, "access-class-name"},
    enumeration_in_out{YType::enumeration, "enumeration-in-out"}
{

    yang_name = "access-class"; yang_parent_name = "access-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Ipv6::AccessClass::AccessClass_::~AccessClass_()
{
}

bool Native::Line::LineList::Ipv6::AccessClass::AccessClass_::has_data() const
{
    return access_class_name.is_set
	|| enumeration_in_out.is_set;
}

bool Native::Line::LineList::Ipv6::AccessClass::AccessClass_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_class_name.yfilter)
	|| ydk::is_set(enumeration_in_out.yfilter);
}

std::string Native::Line::LineList::Ipv6::AccessClass::AccessClass_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class" <<"[access-class-name='" <<access_class_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Ipv6::AccessClass::AccessClass_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_class_name.is_set || is_set(access_class_name.yfilter)) leaf_name_data.push_back(access_class_name.get_name_leafdata());
    if (enumeration_in_out.is_set || is_set(enumeration_in_out.yfilter)) leaf_name_data.push_back(enumeration_in_out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Ipv6::AccessClass::AccessClass_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Ipv6::AccessClass::AccessClass_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Ipv6::AccessClass::AccessClass_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-class-name")
    {
        access_class_name = value;
        access_class_name.value_namespace = name_space;
        access_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enumeration-in-out")
    {
        enumeration_in_out = value;
        enumeration_in_out.value_namespace = name_space;
        enumeration_in_out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Ipv6::AccessClass::AccessClass_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-class-name")
    {
        access_class_name.yfilter = yfilter;
    }
    if(value_path == "enumeration-in-out")
    {
        enumeration_in_out.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Ipv6::AccessClass::AccessClass_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class-name" || name == "enumeration-in-out")
        return true;
    return false;
}

Native::Line::LineList::Logging::Logging()
    :
    synchronous(nullptr) // presence node
{

    yang_name = "logging"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Logging::~Logging()
{
}

bool Native::Line::LineList::Logging::has_data() const
{
    return (synchronous !=  nullptr && synchronous->has_data());
}

bool Native::Line::LineList::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (synchronous !=  nullptr && synchronous->has_operation());
}

std::string Native::Line::LineList::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "synchronous")
    {
        if(synchronous == nullptr)
        {
            synchronous = std::make_shared<Native::Line::LineList::Logging::Synchronous>();
        }
        return synchronous;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(synchronous != nullptr)
    {
        children["synchronous"] = synchronous;
    }

    return children;
}

void Native::Line::LineList::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::LineList::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::LineList::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "synchronous")
        return true;
    return false;
}

Native::Line::LineList::Logging::Synchronous::Synchronous()
{

    yang_name = "synchronous"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Logging::Synchronous::~Synchronous()
{
}

bool Native::Line::LineList::Logging::Synchronous::has_data() const
{
    return false;
}

bool Native::Line::LineList::Logging::Synchronous::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Line::LineList::Logging::Synchronous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "synchronous";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Logging::Synchronous::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Logging::Synchronous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Logging::Synchronous::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Logging::Synchronous::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::LineList::Logging::Synchronous::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::LineList::Logging::Synchronous::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Line::LineList::Login::Login()
    :
    authentication{YType::str, "authentication"},
    local{YType::empty, "local"}
{

    yang_name = "login"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Login::~Login()
{
}

bool Native::Line::LineList::Login::has_data() const
{
    return authentication.is_set
	|| local.is_set;
}

bool Native::Line::LineList::Login::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Line::LineList::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Login::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Login::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Login::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Login::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "local")
        return true;
    return false;
}

Native::Line::LineList::MediaType::MediaType()
    :
    rj45{YType::empty, "rj45"}
{

    yang_name = "media-type"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::MediaType::~MediaType()
{
}

bool Native::Line::LineList::MediaType::has_data() const
{
    return rj45.is_set;
}

bool Native::Line::LineList::MediaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rj45.yfilter);
}

std::string Native::Line::LineList::MediaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::MediaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rj45.is_set || is_set(rj45.yfilter)) leaf_name_data.push_back(rj45.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::MediaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::MediaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::MediaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rj45")
    {
        rj45 = value;
        rj45.value_namespace = name_space;
        rj45.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::MediaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rj45")
    {
        rj45.yfilter = yfilter;
    }
}

bool Native::Line::LineList::MediaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rj45")
        return true;
    return false;
}

Native::Line::LineList::Modem::Modem()
    :
    answer_timeout{YType::empty, "answer-timeout"},
    cts_alarm{YType::empty, "CTS-Alarm"},
    dialin{YType::empty, "Dialin"},
    dtr_active{YType::empty, "DTR-active"},
    dtr_delay{YType::empty, "dtr-delay"},
    host{YType::empty, "Host"},
    inout{YType::empty, "InOut"},
    printer{YType::empty, "Printer"}
{

    yang_name = "modem"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Modem::~Modem()
{
}

bool Native::Line::LineList::Modem::has_data() const
{
    return answer_timeout.is_set
	|| cts_alarm.is_set
	|| dialin.is_set
	|| dtr_active.is_set
	|| dtr_delay.is_set
	|| host.is_set
	|| inout.is_set
	|| printer.is_set;
}

bool Native::Line::LineList::Modem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(answer_timeout.yfilter)
	|| ydk::is_set(cts_alarm.yfilter)
	|| ydk::is_set(dialin.yfilter)
	|| ydk::is_set(dtr_active.yfilter)
	|| ydk::is_set(dtr_delay.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(printer.yfilter);
}

std::string Native::Line::LineList::Modem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Modem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (answer_timeout.is_set || is_set(answer_timeout.yfilter)) leaf_name_data.push_back(answer_timeout.get_name_leafdata());
    if (cts_alarm.is_set || is_set(cts_alarm.yfilter)) leaf_name_data.push_back(cts_alarm.get_name_leafdata());
    if (dialin.is_set || is_set(dialin.yfilter)) leaf_name_data.push_back(dialin.get_name_leafdata());
    if (dtr_active.is_set || is_set(dtr_active.yfilter)) leaf_name_data.push_back(dtr_active.get_name_leafdata());
    if (dtr_delay.is_set || is_set(dtr_delay.yfilter)) leaf_name_data.push_back(dtr_delay.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (printer.is_set || is_set(printer.yfilter)) leaf_name_data.push_back(printer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Modem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Modem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Modem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "answer-timeout")
    {
        answer_timeout = value;
        answer_timeout.value_namespace = name_space;
        answer_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CTS-Alarm")
    {
        cts_alarm = value;
        cts_alarm.value_namespace = name_space;
        cts_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Dialin")
    {
        dialin = value;
        dialin.value_namespace = name_space;
        dialin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "DTR-active")
    {
        dtr_active = value;
        dtr_active.value_namespace = name_space;
        dtr_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dtr-delay")
    {
        dtr_delay = value;
        dtr_delay.value_namespace = name_space;
        dtr_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "InOut")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Printer")
    {
        printer = value;
        printer.value_namespace = name_space;
        printer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Modem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "answer-timeout")
    {
        answer_timeout.yfilter = yfilter;
    }
    if(value_path == "CTS-Alarm")
    {
        cts_alarm.yfilter = yfilter;
    }
    if(value_path == "Dialin")
    {
        dialin.yfilter = yfilter;
    }
    if(value_path == "DTR-active")
    {
        dtr_active.yfilter = yfilter;
    }
    if(value_path == "dtr-delay")
    {
        dtr_delay.yfilter = yfilter;
    }
    if(value_path == "Host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "InOut")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "Printer")
    {
        printer.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Modem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "answer-timeout" || name == "CTS-Alarm" || name == "Dialin" || name == "DTR-active" || name == "dtr-delay" || name == "Host" || name == "InOut" || name == "Printer")
        return true;
    return false;
}

Native::Line::LineList::NoExec::NoExec()
    :
    exec{YType::boolean, "exec"}
{

    yang_name = "no-exec"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::NoExec::~NoExec()
{
}

bool Native::Line::LineList::NoExec::has_data() const
{
    return exec.is_set;
}

bool Native::Line::LineList::NoExec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exec.yfilter);
}

std::string Native::Line::LineList::NoExec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::NoExec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exec.is_set || is_set(exec.yfilter)) leaf_name_data.push_back(exec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::NoExec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::NoExec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::NoExec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exec")
    {
        exec = value;
        exec.value_namespace = name_space;
        exec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::NoExec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exec")
    {
        exec.yfilter = yfilter;
    }
}

bool Native::Line::LineList::NoExec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exec")
        return true;
    return false;
}

Native::Line::LineList::Padding::Padding()
    :
    character{YType::str, "character"},
    null{YType::uint8, "null"}
{

    yang_name = "padding"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Padding::~Padding()
{
}

bool Native::Line::LineList::Padding::has_data() const
{
    return character.is_set
	|| null.is_set;
}

bool Native::Line::LineList::Padding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(character.yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Line::LineList::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Padding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (character.is_set || is_set(character.yfilter)) leaf_name_data.push_back(character.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Padding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "character")
    {
        character = value;
        character.value_namespace = name_space;
        character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Padding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "character")
    {
        character.yfilter = yfilter;
    }
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Padding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "character" || name == "null")
        return true;
    return false;
}

Native::Line::LineList::Parity::Parity()
    :
    even{YType::empty, "even"},
    mark{YType::empty, "mark"},
    none{YType::empty, "none"},
    odd{YType::empty, "odd"},
    space{YType::empty, "space"}
{

    yang_name = "parity"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Parity::~Parity()
{
}

bool Native::Line::LineList::Parity::has_data() const
{
    return even.is_set
	|| mark.is_set
	|| none.is_set
	|| odd.is_set
	|| space.is_set;
}

bool Native::Line::LineList::Parity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(even.yfilter)
	|| ydk::is_set(mark.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(odd.yfilter)
	|| ydk::is_set(space.yfilter);
}

std::string Native::Line::LineList::Parity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Parity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (even.is_set || is_set(even.yfilter)) leaf_name_data.push_back(even.get_name_leafdata());
    if (mark.is_set || is_set(mark.yfilter)) leaf_name_data.push_back(mark.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (odd.is_set || is_set(odd.yfilter)) leaf_name_data.push_back(odd.get_name_leafdata());
    if (space.is_set || is_set(space.yfilter)) leaf_name_data.push_back(space.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Parity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Parity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Parity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "even")
    {
        even = value;
        even.value_namespace = name_space;
        even.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark")
    {
        mark = value;
        mark.value_namespace = name_space;
        mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "odd")
    {
        odd = value;
        odd.value_namespace = name_space;
        odd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "space")
    {
        space = value;
        space.value_namespace = name_space;
        space.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Parity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "even")
    {
        even.yfilter = yfilter;
    }
    if(value_path == "mark")
    {
        mark.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "odd")
    {
        odd.yfilter = yfilter;
    }
    if(value_path == "space")
    {
        space.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Parity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "even" || name == "mark" || name == "none" || name == "odd" || name == "space")
        return true;
    return false;
}

Native::Line::LineList::Password::Password()
    :
    level{YType::uint8, "level"},
    secret{YType::str, "secret"},
    type{YType::enumeration, "type"}
{

    yang_name = "password"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Password::~Password()
{
}

bool Native::Line::LineList::Password::has_data() const
{
    return level.is_set
	|| secret.is_set
	|| type.is_set;
}

bool Native::Line::LineList::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(secret.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Line::LineList::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "secret" || name == "type")
        return true;
    return false;
}

Native::Line::LineList::Prc::Prc()
    :
    expose{YType::empty, "expose"},
    hide{YType::empty, "hide"}
{

    yang_name = "prc"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Prc::~Prc()
{
}

bool Native::Line::LineList::Prc::has_data() const
{
    return expose.is_set
	|| hide.is_set;
}

bool Native::Line::LineList::Prc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expose.yfilter)
	|| ydk::is_set(hide.yfilter);
}

std::string Native::Line::LineList::Prc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Prc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expose.is_set || is_set(expose.yfilter)) leaf_name_data.push_back(expose.get_name_leafdata());
    if (hide.is_set || is_set(hide.yfilter)) leaf_name_data.push_back(hide.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Prc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Prc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Prc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expose")
    {
        expose = value;
        expose.value_namespace = name_space;
        expose.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hide")
    {
        hide = value;
        hide.value_namespace = name_space;
        hide.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Prc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expose")
    {
        expose.yfilter = yfilter;
    }
    if(value_path == "hide")
    {
        hide.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Prc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expose" || name == "hide")
        return true;
    return false;
}

Native::Line::LineList::Privilege::Privilege()
    :
    level(nullptr) // presence node
{

    yang_name = "privilege"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Privilege::~Privilege()
{
}

bool Native::Line::LineList::Privilege::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Line::LineList::Privilege::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Line::LineList::Privilege::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privilege";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Privilege::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Privilege::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Line::LineList::Privilege::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Privilege::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Line::LineList::Privilege::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::LineList::Privilege::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::LineList::Privilege::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Line::LineList::Privilege::Level::Level()
    :
    number{YType::uint8, "number"}
{

    yang_name = "level"; yang_parent_name = "privilege"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Privilege::Level::~Level()
{
}

bool Native::Line::LineList::Privilege::Level::has_data() const
{
    return number.is_set;
}

bool Native::Line::LineList::Privilege::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Line::LineList::Privilege::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Privilege::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Privilege::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Privilege::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Privilege::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Privilege::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Privilege::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number")
        return true;
    return false;
}

Native::Line::LineList::SessionTimeout::SessionTimeout()
    :
    output{YType::empty, "output"},
    session_timeout_value{YType::uint16, "session-timeout-value"}
{

    yang_name = "session-timeout"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::SessionTimeout::~SessionTimeout()
{
}

bool Native::Line::LineList::SessionTimeout::has_data() const
{
    return output.is_set
	|| session_timeout_value.is_set;
}

bool Native::Line::LineList::SessionTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(output.yfilter)
	|| ydk::is_set(session_timeout_value.yfilter);
}

std::string Native::Line::LineList::SessionTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::SessionTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());
    if (session_timeout_value.is_set || is_set(session_timeout_value.yfilter)) leaf_name_data.push_back(session_timeout_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::SessionTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::SessionTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::SessionTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-timeout-value")
    {
        session_timeout_value = value;
        session_timeout_value.value_namespace = name_space;
        session_timeout_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::SessionTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
    if(value_path == "session-timeout-value")
    {
        session_timeout_value.yfilter = yfilter;
    }
}

bool Native::Line::LineList::SessionTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output" || name == "session-timeout-value")
        return true;
    return false;
}

Native::Line::LineList::Telnet::Telnet()
    :
    transparent{YType::empty, "transparent"}
{

    yang_name = "telnet"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Telnet::~Telnet()
{
}

bool Native::Line::LineList::Telnet::has_data() const
{
    return transparent.is_set;
}

bool Native::Line::LineList::Telnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Line::LineList::Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Telnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Telnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Telnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Telnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Telnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transparent")
        return true;
    return false;
}

Native::Line::LineList::Timeout::Timeout()
    :
    login{YType::empty, "login"}
{

    yang_name = "timeout"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Timeout::~Timeout()
{
}

bool Native::Line::LineList::Timeout::has_data() const
{
    return login.is_set;
}

bool Native::Line::LineList::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(login.yfilter);
}

std::string Native::Line::LineList::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (login.is_set || is_set(login.yfilter)) leaf_name_data.push_back(login.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "login")
    {
        login = value;
        login.value_namespace = name_space;
        login.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "login")
    {
        login.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "login")
        return true;
    return false;
}

Native::Line::LineList::Transport::Transport()
    :
    input(std::make_shared<Native::Line::LineList::Transport::Input>())
	,output(std::make_shared<Native::Line::LineList::Transport::Output>())
	,preferred(nullptr) // presence node
{
    input->parent = this;
    output->parent = this;

    yang_name = "transport"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Transport::~Transport()
{
}

bool Native::Line::LineList::Transport::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data())
	|| (preferred !=  nullptr && preferred->has_data());
}

bool Native::Line::LineList::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation())
	|| (preferred !=  nullptr && preferred->has_operation());
}

std::string Native::Line::LineList::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Line::LineList::Transport::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Line::LineList::Transport::Output>();
        }
        return output;
    }

    if(child_yang_name == "preferred")
    {
        if(preferred == nullptr)
        {
            preferred = std::make_shared<Native::Line::LineList::Transport::Preferred>();
        }
        return preferred;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    if(preferred != nullptr)
    {
        children["preferred"] = preferred;
    }

    return children;
}

void Native::Line::LineList::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::LineList::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::LineList::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output" || name == "preferred")
        return true;
    return false;
}

Native::Line::LineList::Transport::Input::Input()
    :
    input{YType::enumeration, "input"}
{

    yang_name = "input"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Transport::Input::~Input()
{
}

bool Native::Line::LineList::Transport::Input::has_data() const
{
    for (auto const & leaf : input.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Line::LineList::Transport::Input::has_operation() const
{
    for (auto const & leaf : input.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter);
}

std::string Native::Line::LineList::Transport::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Transport::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto input_name_datas = input.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), input_name_datas.begin(), input_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Transport::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Transport::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Transport::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input.append(value);
    }
}

void Native::Line::LineList::Transport::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Transport::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

Native::Line::LineList::Transport::Output::Output()
    :
    output{YType::enumeration, "output"}
{

    yang_name = "output"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Transport::Output::~Output()
{
}

bool Native::Line::LineList::Transport::Output::has_data() const
{
    for (auto const & leaf : output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Line::LineList::Transport::Output::has_operation() const
{
    for (auto const & leaf : output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Line::LineList::Transport::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Transport::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto output_name_datas = output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), output_name_datas.begin(), output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Transport::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Transport::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Transport::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output")
    {
        output.append(value);
    }
}

void Native::Line::LineList::Transport::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Transport::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output")
        return true;
    return false;
}

Native::Line::LineList::Transport::Preferred::Preferred()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "preferred"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Transport::Preferred::~Preferred()
{
}

bool Native::Line::LineList::Transport::Preferred::has_data() const
{
    return protocol.is_set;
}

bool Native::Line::LineList::Transport::Preferred::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Line::LineList::Transport::Preferred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Transport::Preferred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Transport::Preferred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Transport::Preferred::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Transport::Preferred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Transport::Preferred::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Transport::Preferred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Line::LineList::UsbInactivityTimeout::UsbInactivityTimeout()
    :
    switch_{YType::empty, "switch"}
{

    yang_name = "usb-inactivity-timeout"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::UsbInactivityTimeout::~UsbInactivityTimeout()
{
}

bool Native::Line::LineList::UsbInactivityTimeout::has_data() const
{
    return switch_.is_set;
}

bool Native::Line::LineList::UsbInactivityTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::Line::LineList::UsbInactivityTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usb-inactivity-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::UsbInactivityTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::UsbInactivityTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::UsbInactivityTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::UsbInactivityTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::UsbInactivityTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::Line::LineList::UsbInactivityTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Line::Vty::Vty()
    :
    first{YType::uint16, "first"},
    activation_character{YType::str, "activation-character"},
    data_character_bits{YType::uint8, "data-character-bits"},
    domain_lookup{YType::empty, "domain-lookup"},
    editing{YType::empty, "editing"},
    exec_banner{YType::empty, "exec-banner"},
    exec_character_bits{YType::uint8, "exec-character-bits"},
    full_help{YType::empty, "full-help"},
    international{YType::empty, "international"},
    last{YType::uint16, "last"},
    length{YType::uint16, "length"},
    line{YType::uint8, "line"},
    location{YType::str, "location"},
    monitor{YType::empty, "monitor"},
    motd_banner{YType::empty, "motd-banner"},
    no_activation_character{YType::boolean, "no-activation-character"},
    notify{YType::empty, "notify"},
    rotary{YType::uint8, "rotary"},
    rxspeed{YType::uint32, "rxspeed"},
    special_character_bits{YType::uint8, "special-character-bits"},
    speed{YType::uint32, "speed"},
    start_character{YType::str, "start-character"},
    stop_character{YType::str, "stop-character"},
    stopbits{YType::enumeration, "stopbits"},
    terminal_type{YType::str, "terminal-type"},
    txspeed{YType::uint32, "txspeed"},
    width{YType::uint16, "width"}
    	,
    access_class(std::make_shared<Native::Line::Vty::AccessClass>())
	,authorization(std::make_shared<Native::Line::Vty::Authorization>())
	,autocommand(std::make_shared<Native::Line::Vty::Autocommand>())
	,autocommand_options(nullptr) // presence node
	,databits(std::make_shared<Native::Line::Vty::Databits>())
	,escape_character(std::make_shared<Native::Line::Vty::EscapeCharacter>())
	,exec(std::make_shared<Native::Line::Vty::Exec>())
	,exec_timeout(std::make_shared<Native::Line::Vty::ExecTimeout>())
	,flowcontrol(std::make_shared<Native::Line::Vty::Flowcontrol>())
	,history(nullptr) // presence node
	,ip(std::make_shared<Native::Line::Vty::Ip>())
	,ipv6(std::make_shared<Native::Line::Vty::Ipv6>())
	,logging(std::make_shared<Native::Line::Vty::Logging>())
	,login(nullptr) // presence node
	,media_type(std::make_shared<Native::Line::Vty::MediaType>())
	,modem(std::make_shared<Native::Line::Vty::Modem>())
	,no_exec(std::make_shared<Native::Line::Vty::NoExec>())
	,padding(std::make_shared<Native::Line::Vty::Padding>())
	,parity(std::make_shared<Native::Line::Vty::Parity>())
	,password(std::make_shared<Native::Line::Vty::Password>())
	,prc(std::make_shared<Native::Line::Vty::Prc>())
	,privilege(std::make_shared<Native::Line::Vty::Privilege>())
	,session_timeout(std::make_shared<Native::Line::Vty::SessionTimeout>())
	,telnet(std::make_shared<Native::Line::Vty::Telnet>())
	,timeout(std::make_shared<Native::Line::Vty::Timeout>())
	,transport(std::make_shared<Native::Line::Vty::Transport>())
	,usb_inactivity_timeout(std::make_shared<Native::Line::Vty::UsbInactivityTimeout>())
{
    access_class->parent = this;
    authorization->parent = this;
    autocommand->parent = this;
    databits->parent = this;
    escape_character->parent = this;
    exec->parent = this;
    exec_timeout->parent = this;
    flowcontrol->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    logging->parent = this;
    media_type->parent = this;
    modem->parent = this;
    no_exec->parent = this;
    padding->parent = this;
    parity->parent = this;
    password->parent = this;
    prc->parent = this;
    privilege->parent = this;
    session_timeout->parent = this;
    telnet->parent = this;
    timeout->parent = this;
    transport->parent = this;
    usb_inactivity_timeout->parent = this;

    yang_name = "vty"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Line::Vty::~Vty()
{
}

bool Native::Line::Vty::has_data() const
{
    return first.is_set
	|| activation_character.is_set
	|| data_character_bits.is_set
	|| domain_lookup.is_set
	|| editing.is_set
	|| exec_banner.is_set
	|| exec_character_bits.is_set
	|| full_help.is_set
	|| international.is_set
	|| last.is_set
	|| length.is_set
	|| line.is_set
	|| location.is_set
	|| monitor.is_set
	|| motd_banner.is_set
	|| no_activation_character.is_set
	|| notify.is_set
	|| rotary.is_set
	|| rxspeed.is_set
	|| special_character_bits.is_set
	|| speed.is_set
	|| start_character.is_set
	|| stop_character.is_set
	|| stopbits.is_set
	|| terminal_type.is_set
	|| txspeed.is_set
	|| width.is_set
	|| (access_class !=  nullptr && access_class->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (autocommand !=  nullptr && autocommand->has_data())
	|| (autocommand_options !=  nullptr && autocommand_options->has_data())
	|| (databits !=  nullptr && databits->has_data())
	|| (escape_character !=  nullptr && escape_character->has_data())
	|| (exec !=  nullptr && exec->has_data())
	|| (exec_timeout !=  nullptr && exec_timeout->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (login !=  nullptr && login->has_data())
	|| (media_type !=  nullptr && media_type->has_data())
	|| (modem !=  nullptr && modem->has_data())
	|| (no_exec !=  nullptr && no_exec->has_data())
	|| (padding !=  nullptr && padding->has_data())
	|| (parity !=  nullptr && parity->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (prc !=  nullptr && prc->has_data())
	|| (privilege !=  nullptr && privilege->has_data())
	|| (session_timeout !=  nullptr && session_timeout->has_data())
	|| (telnet !=  nullptr && telnet->has_data())
	|| (timeout !=  nullptr && timeout->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_data());
}

bool Native::Line::Vty::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(first.yfilter)
	|| ydk::is_set(activation_character.yfilter)
	|| ydk::is_set(data_character_bits.yfilter)
	|| ydk::is_set(domain_lookup.yfilter)
	|| ydk::is_set(editing.yfilter)
	|| ydk::is_set(exec_banner.yfilter)
	|| ydk::is_set(exec_character_bits.yfilter)
	|| ydk::is_set(full_help.yfilter)
	|| ydk::is_set(international.yfilter)
	|| ydk::is_set(last.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(monitor.yfilter)
	|| ydk::is_set(motd_banner.yfilter)
	|| ydk::is_set(no_activation_character.yfilter)
	|| ydk::is_set(notify.yfilter)
	|| ydk::is_set(rotary.yfilter)
	|| ydk::is_set(rxspeed.yfilter)
	|| ydk::is_set(special_character_bits.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(start_character.yfilter)
	|| ydk::is_set(stop_character.yfilter)
	|| ydk::is_set(stopbits.yfilter)
	|| ydk::is_set(terminal_type.yfilter)
	|| ydk::is_set(txspeed.yfilter)
	|| ydk::is_set(width.yfilter)
	|| (access_class !=  nullptr && access_class->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (autocommand !=  nullptr && autocommand->has_operation())
	|| (autocommand_options !=  nullptr && autocommand_options->has_operation())
	|| (databits !=  nullptr && databits->has_operation())
	|| (escape_character !=  nullptr && escape_character->has_operation())
	|| (exec !=  nullptr && exec->has_operation())
	|| (exec_timeout !=  nullptr && exec_timeout->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (login !=  nullptr && login->has_operation())
	|| (media_type !=  nullptr && media_type->has_operation())
	|| (modem !=  nullptr && modem->has_operation())
	|| (no_exec !=  nullptr && no_exec->has_operation())
	|| (padding !=  nullptr && padding->has_operation())
	|| (parity !=  nullptr && parity->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (prc !=  nullptr && prc->has_operation())
	|| (privilege !=  nullptr && privilege->has_operation())
	|| (session_timeout !=  nullptr && session_timeout->has_operation())
	|| (telnet !=  nullptr && telnet->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_operation());
}

std::string Native::Line::Vty::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/line/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Line::Vty::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vty" <<"[first='" <<first <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first.is_set || is_set(first.yfilter)) leaf_name_data.push_back(first.get_name_leafdata());
    if (activation_character.is_set || is_set(activation_character.yfilter)) leaf_name_data.push_back(activation_character.get_name_leafdata());
    if (data_character_bits.is_set || is_set(data_character_bits.yfilter)) leaf_name_data.push_back(data_character_bits.get_name_leafdata());
    if (domain_lookup.is_set || is_set(domain_lookup.yfilter)) leaf_name_data.push_back(domain_lookup.get_name_leafdata());
    if (editing.is_set || is_set(editing.yfilter)) leaf_name_data.push_back(editing.get_name_leafdata());
    if (exec_banner.is_set || is_set(exec_banner.yfilter)) leaf_name_data.push_back(exec_banner.get_name_leafdata());
    if (exec_character_bits.is_set || is_set(exec_character_bits.yfilter)) leaf_name_data.push_back(exec_character_bits.get_name_leafdata());
    if (full_help.is_set || is_set(full_help.yfilter)) leaf_name_data.push_back(full_help.get_name_leafdata());
    if (international.is_set || is_set(international.yfilter)) leaf_name_data.push_back(international.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());
    if (motd_banner.is_set || is_set(motd_banner.yfilter)) leaf_name_data.push_back(motd_banner.get_name_leafdata());
    if (no_activation_character.is_set || is_set(no_activation_character.yfilter)) leaf_name_data.push_back(no_activation_character.get_name_leafdata());
    if (notify.is_set || is_set(notify.yfilter)) leaf_name_data.push_back(notify.get_name_leafdata());
    if (rotary.is_set || is_set(rotary.yfilter)) leaf_name_data.push_back(rotary.get_name_leafdata());
    if (rxspeed.is_set || is_set(rxspeed.yfilter)) leaf_name_data.push_back(rxspeed.get_name_leafdata());
    if (special_character_bits.is_set || is_set(special_character_bits.yfilter)) leaf_name_data.push_back(special_character_bits.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (start_character.is_set || is_set(start_character.yfilter)) leaf_name_data.push_back(start_character.get_name_leafdata());
    if (stop_character.is_set || is_set(stop_character.yfilter)) leaf_name_data.push_back(stop_character.get_name_leafdata());
    if (stopbits.is_set || is_set(stopbits.yfilter)) leaf_name_data.push_back(stopbits.get_name_leafdata());
    if (terminal_type.is_set || is_set(terminal_type.yfilter)) leaf_name_data.push_back(terminal_type.get_name_leafdata());
    if (txspeed.is_set || is_set(txspeed.yfilter)) leaf_name_data.push_back(txspeed.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        if(access_class == nullptr)
        {
            access_class = std::make_shared<Native::Line::Vty::AccessClass>();
        }
        return access_class;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Line::Vty::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "autocommand")
    {
        if(autocommand == nullptr)
        {
            autocommand = std::make_shared<Native::Line::Vty::Autocommand>();
        }
        return autocommand;
    }

    if(child_yang_name == "autocommand-options")
    {
        if(autocommand_options == nullptr)
        {
            autocommand_options = std::make_shared<Native::Line::Vty::AutocommandOptions>();
        }
        return autocommand_options;
    }

    if(child_yang_name == "databits")
    {
        if(databits == nullptr)
        {
            databits = std::make_shared<Native::Line::Vty::Databits>();
        }
        return databits;
    }

    if(child_yang_name == "escape-character")
    {
        if(escape_character == nullptr)
        {
            escape_character = std::make_shared<Native::Line::Vty::EscapeCharacter>();
        }
        return escape_character;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Line::Vty::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "exec-timeout")
    {
        if(exec_timeout == nullptr)
        {
            exec_timeout = std::make_shared<Native::Line::Vty::ExecTimeout>();
        }
        return exec_timeout;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Line::Vty::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Line::Vty::History>();
        }
        return history;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Line::Vty::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Line::Vty::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Line::Vty::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "login")
    {
        if(login == nullptr)
        {
            login = std::make_shared<Native::Line::Vty::Login>();
        }
        return login;
    }

    if(child_yang_name == "media-type")
    {
        if(media_type == nullptr)
        {
            media_type = std::make_shared<Native::Line::Vty::MediaType>();
        }
        return media_type;
    }

    if(child_yang_name == "modem")
    {
        if(modem == nullptr)
        {
            modem = std::make_shared<Native::Line::Vty::Modem>();
        }
        return modem;
    }

    if(child_yang_name == "no-exec")
    {
        if(no_exec == nullptr)
        {
            no_exec = std::make_shared<Native::Line::Vty::NoExec>();
        }
        return no_exec;
    }

    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Line::Vty::Padding>();
        }
        return padding;
    }

    if(child_yang_name == "parity")
    {
        if(parity == nullptr)
        {
            parity = std::make_shared<Native::Line::Vty::Parity>();
        }
        return parity;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Line::Vty::Password>();
        }
        return password;
    }

    if(child_yang_name == "prc")
    {
        if(prc == nullptr)
        {
            prc = std::make_shared<Native::Line::Vty::Prc>();
        }
        return prc;
    }

    if(child_yang_name == "privilege")
    {
        if(privilege == nullptr)
        {
            privilege = std::make_shared<Native::Line::Vty::Privilege>();
        }
        return privilege;
    }

    if(child_yang_name == "session-timeout")
    {
        if(session_timeout == nullptr)
        {
            session_timeout = std::make_shared<Native::Line::Vty::SessionTimeout>();
        }
        return session_timeout;
    }

    if(child_yang_name == "telnet")
    {
        if(telnet == nullptr)
        {
            telnet = std::make_shared<Native::Line::Vty::Telnet>();
        }
        return telnet;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Line::Vty::Timeout>();
        }
        return timeout;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Line::Vty::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "usb-inactivity-timeout")
    {
        if(usb_inactivity_timeout == nullptr)
        {
            usb_inactivity_timeout = std::make_shared<Native::Line::Vty::UsbInactivityTimeout>();
        }
        return usb_inactivity_timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_class != nullptr)
    {
        children["access-class"] = access_class;
    }

    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(autocommand != nullptr)
    {
        children["autocommand"] = autocommand;
    }

    if(autocommand_options != nullptr)
    {
        children["autocommand-options"] = autocommand_options;
    }

    if(databits != nullptr)
    {
        children["databits"] = databits;
    }

    if(escape_character != nullptr)
    {
        children["escape-character"] = escape_character;
    }

    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    if(exec_timeout != nullptr)
    {
        children["exec-timeout"] = exec_timeout;
    }

    if(flowcontrol != nullptr)
    {
        children["flowcontrol"] = flowcontrol;
    }

    if(history != nullptr)
    {
        children["history"] = history;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(login != nullptr)
    {
        children["login"] = login;
    }

    if(media_type != nullptr)
    {
        children["media-type"] = media_type;
    }

    if(modem != nullptr)
    {
        children["modem"] = modem;
    }

    if(no_exec != nullptr)
    {
        children["no-exec"] = no_exec;
    }

    if(padding != nullptr)
    {
        children["padding"] = padding;
    }

    if(parity != nullptr)
    {
        children["parity"] = parity;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(prc != nullptr)
    {
        children["prc"] = prc;
    }

    if(privilege != nullptr)
    {
        children["privilege"] = privilege;
    }

    if(session_timeout != nullptr)
    {
        children["session-timeout"] = session_timeout;
    }

    if(telnet != nullptr)
    {
        children["telnet"] = telnet;
    }

    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(usb_inactivity_timeout != nullptr)
    {
        children["usb-inactivity-timeout"] = usb_inactivity_timeout;
    }

    return children;
}

void Native::Line::Vty::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "first")
    {
        first = value;
        first.value_namespace = name_space;
        first.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activation-character")
    {
        activation_character = value;
        activation_character.value_namespace = name_space;
        activation_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-character-bits")
    {
        data_character_bits = value;
        data_character_bits.value_namespace = name_space;
        data_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-lookup")
    {
        domain_lookup = value;
        domain_lookup.value_namespace = name_space;
        domain_lookup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "editing")
    {
        editing = value;
        editing.value_namespace = name_space;
        editing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-banner")
    {
        exec_banner = value;
        exec_banner.value_namespace = name_space;
        exec_banner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-character-bits")
    {
        exec_character_bits = value;
        exec_character_bits.value_namespace = name_space;
        exec_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "full-help")
    {
        full_help = value;
        full_help.value_namespace = name_space;
        full_help.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "international")
    {
        international = value;
        international.value_namespace = name_space;
        international.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "motd-banner")
    {
        motd_banner = value;
        motd_banner.value_namespace = name_space;
        motd_banner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-activation-character")
    {
        no_activation_character = value;
        no_activation_character.value_namespace = name_space;
        no_activation_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify")
    {
        notify = value;
        notify.value_namespace = name_space;
        notify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rotary")
    {
        rotary = value;
        rotary.value_namespace = name_space;
        rotary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxspeed")
    {
        rxspeed = value;
        rxspeed.value_namespace = name_space;
        rxspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "special-character-bits")
    {
        special_character_bits = value;
        special_character_bits.value_namespace = name_space;
        special_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-character")
    {
        start_character = value;
        start_character.value_namespace = name_space;
        start_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-character")
    {
        stop_character = value;
        stop_character.value_namespace = name_space;
        stop_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stopbits")
    {
        stopbits = value;
        stopbits.value_namespace = name_space;
        stopbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal-type")
    {
        terminal_type = value;
        terminal_type.value_namespace = name_space;
        terminal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txspeed")
    {
        txspeed = value;
        txspeed.value_namespace = name_space;
        txspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "first")
    {
        first.yfilter = yfilter;
    }
    if(value_path == "activation-character")
    {
        activation_character.yfilter = yfilter;
    }
    if(value_path == "data-character-bits")
    {
        data_character_bits.yfilter = yfilter;
    }
    if(value_path == "domain-lookup")
    {
        domain_lookup.yfilter = yfilter;
    }
    if(value_path == "editing")
    {
        editing.yfilter = yfilter;
    }
    if(value_path == "exec-banner")
    {
        exec_banner.yfilter = yfilter;
    }
    if(value_path == "exec-character-bits")
    {
        exec_character_bits.yfilter = yfilter;
    }
    if(value_path == "full-help")
    {
        full_help.yfilter = yfilter;
    }
    if(value_path == "international")
    {
        international.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
    if(value_path == "motd-banner")
    {
        motd_banner.yfilter = yfilter;
    }
    if(value_path == "no-activation-character")
    {
        no_activation_character.yfilter = yfilter;
    }
    if(value_path == "notify")
    {
        notify.yfilter = yfilter;
    }
    if(value_path == "rotary")
    {
        rotary.yfilter = yfilter;
    }
    if(value_path == "rxspeed")
    {
        rxspeed.yfilter = yfilter;
    }
    if(value_path == "special-character-bits")
    {
        special_character_bits.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "start-character")
    {
        start_character.yfilter = yfilter;
    }
    if(value_path == "stop-character")
    {
        stop_character.yfilter = yfilter;
    }
    if(value_path == "stopbits")
    {
        stopbits.yfilter = yfilter;
    }
    if(value_path == "terminal-type")
    {
        terminal_type.yfilter = yfilter;
    }
    if(value_path == "txspeed")
    {
        txspeed.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool Native::Line::Vty::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class" || name == "authorization" || name == "autocommand" || name == "autocommand-options" || name == "databits" || name == "escape-character" || name == "exec" || name == "exec-timeout" || name == "flowcontrol" || name == "history" || name == "ip" || name == "ipv6" || name == "logging" || name == "login" || name == "media-type" || name == "modem" || name == "no-exec" || name == "padding" || name == "parity" || name == "password" || name == "prc" || name == "privilege" || name == "session-timeout" || name == "telnet" || name == "timeout" || name == "transport" || name == "usb-inactivity-timeout" || name == "first" || name == "activation-character" || name == "data-character-bits" || name == "domain-lookup" || name == "editing" || name == "exec-banner" || name == "exec-character-bits" || name == "full-help" || name == "international" || name == "last" || name == "length" || name == "line" || name == "location" || name == "monitor" || name == "motd-banner" || name == "no-activation-character" || name == "notify" || name == "rotary" || name == "rxspeed" || name == "special-character-bits" || name == "speed" || name == "start-character" || name == "stop-character" || name == "stopbits" || name == "terminal-type" || name == "txspeed" || name == "width")
        return true;
    return false;
}

Native::Line::Vty::AccessClass::AccessClass()
{

    yang_name = "access-class"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::AccessClass::~AccessClass()
{
}

bool Native::Line::Vty::AccessClass::has_data() const
{
    for (std::size_t index=0; index<acccess_list.size(); index++)
    {
        if(acccess_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::Vty::AccessClass::has_operation() const
{
    for (std::size_t index=0; index<acccess_list.size(); index++)
    {
        if(acccess_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Line::Vty::AccessClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::AccessClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::AccessClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acccess-list")
    {
        for(auto const & c : acccess_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::Vty::AccessClass::AcccessList>();
        c->parent = this;
        acccess_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::AccessClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : acccess_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Line::Vty::AccessClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::AccessClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::AccessClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acccess-list")
        return true;
    return false;
}

Native::Line::Vty::AccessClass::AcccessList::AcccessList()
    :
    direction{YType::enumeration, "direction"},
    access_list{YType::str, "access-list"},
    vrf_also{YType::empty, "vrf-also"}
{

    yang_name = "acccess-list"; yang_parent_name = "access-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::AccessClass::AcccessList::~AcccessList()
{
}

bool Native::Line::Vty::AccessClass::AcccessList::has_data() const
{
    return direction.is_set
	|| access_list.is_set
	|| vrf_also.is_set;
}

bool Native::Line::Vty::AccessClass::AcccessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(vrf_also.yfilter);
}

std::string Native::Line::Vty::AccessClass::AcccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acccess-list" <<"[direction='" <<direction <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::AccessClass::AcccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (vrf_also.is_set || is_set(vrf_also.yfilter)) leaf_name_data.push_back(vrf_also.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::AccessClass::AcccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::AccessClass::AcccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::AccessClass::AcccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-also")
    {
        vrf_also = value;
        vrf_also.value_namespace = name_space;
        vrf_also.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::AccessClass::AcccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "vrf-also")
    {
        vrf_also.yfilter = yfilter;
    }
}

bool Native::Line::Vty::AccessClass::AcccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "access-list" || name == "vrf-also")
        return true;
    return false;
}

Native::Line::Vty::Authorization::Authorization()
    :
    command(std::make_shared<Native::Line::Vty::Authorization::Command>())
{
    command->parent = this;

    yang_name = "authorization"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Authorization::~Authorization()
{
}

bool Native::Line::Vty::Authorization::has_data() const
{
    return (command !=  nullptr && command->has_data());
}

bool Native::Line::Vty::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| (command !=  nullptr && command->has_operation());
}

std::string Native::Line::Vty::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command")
    {
        if(command == nullptr)
        {
            command = std::make_shared<Native::Line::Vty::Authorization::Command>();
        }
        return command;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(command != nullptr)
    {
        children["command"] = command;
    }

    return children;
}

void Native::Line::Vty::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

Native::Line::Vty::Authorization::Command::Command()
    :
    auth_name{YType::str, "auth-name"},
    enable_level{YType::uint8, "enable-level"}
{

    yang_name = "command"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Authorization::Command::~Command()
{
}

bool Native::Line::Vty::Authorization::Command::has_data() const
{
    return auth_name.is_set
	|| enable_level.is_set;
}

bool Native::Line::Vty::Authorization::Command::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_name.yfilter)
	|| ydk::is_set(enable_level.yfilter);
}

std::string Native::Line::Vty::Authorization::Command::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Authorization::Command::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_name.is_set || is_set(auth_name.yfilter)) leaf_name_data.push_back(auth_name.get_name_leafdata());
    if (enable_level.is_set || is_set(enable_level.yfilter)) leaf_name_data.push_back(enable_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Authorization::Command::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Authorization::Command::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Authorization::Command::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-name")
    {
        auth_name = value;
        auth_name.value_namespace = name_space;
        auth_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-level")
    {
        enable_level = value;
        enable_level.value_namespace = name_space;
        enable_level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Authorization::Command::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-name")
    {
        auth_name.yfilter = yfilter;
    }
    if(value_path == "enable-level")
    {
        enable_level.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Authorization::Command::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-name" || name == "enable-level")
        return true;
    return false;
}

Native::Line::Vty::Autocommand::Autocommand()
    :
    line{YType::str, "line"}
    	,
    no_suppress_linenumber(nullptr) // presence node
{

    yang_name = "autocommand"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Autocommand::~Autocommand()
{
}

bool Native::Line::Vty::Autocommand::has_data() const
{
    return line.is_set
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_data());
}

bool Native::Line::Vty::Autocommand::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter)
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_operation());
}

std::string Native::Line::Vty::Autocommand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Autocommand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Autocommand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "no-suppress-linenumber")
    {
        if(no_suppress_linenumber == nullptr)
        {
            no_suppress_linenumber = std::make_shared<Native::Line::Vty::Autocommand::NoSuppressLinenumber>();
        }
        return no_suppress_linenumber;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Autocommand::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(no_suppress_linenumber != nullptr)
    {
        children["no-suppress-linenumber"] = no_suppress_linenumber;
    }

    return children;
}

void Native::Line::Vty::Autocommand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Autocommand::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Autocommand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-suppress-linenumber" || name == "line")
        return true;
    return false;
}

Native::Line::Vty::Autocommand::NoSuppressLinenumber::NoSuppressLinenumber()
    :
    line{YType::str, "line"}
{

    yang_name = "no-suppress-linenumber"; yang_parent_name = "autocommand"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Autocommand::NoSuppressLinenumber::~NoSuppressLinenumber()
{
}

bool Native::Line::Vty::Autocommand::NoSuppressLinenumber::has_data() const
{
    return line.is_set;
}

bool Native::Line::Vty::Autocommand::NoSuppressLinenumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter);
}

std::string Native::Line::Vty::Autocommand::NoSuppressLinenumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-suppress-linenumber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Autocommand::NoSuppressLinenumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Autocommand::NoSuppressLinenumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Autocommand::NoSuppressLinenumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Autocommand::NoSuppressLinenumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Autocommand::NoSuppressLinenumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Autocommand::NoSuppressLinenumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line")
        return true;
    return false;
}

Native::Line::Vty::AutocommandOptions::AutocommandOptions()
    :
    abort_character(nullptr) // presence node
	,delay(nullptr) // presence node
	,nohangup(nullptr) // presence node
{

    yang_name = "autocommand-options"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::AutocommandOptions::~AutocommandOptions()
{
}

bool Native::Line::Vty::AutocommandOptions::has_data() const
{
    return (abort_character !=  nullptr && abort_character->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (nohangup !=  nullptr && nohangup->has_data());
}

bool Native::Line::Vty::AutocommandOptions::has_operation() const
{
    return is_set(yfilter)
	|| (abort_character !=  nullptr && abort_character->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (nohangup !=  nullptr && nohangup->has_operation());
}

std::string Native::Line::Vty::AutocommandOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::AutocommandOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::AutocommandOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "abort-character")
    {
        if(abort_character == nullptr)
        {
            abort_character = std::make_shared<Native::Line::Vty::AutocommandOptions::AbortCharacter>();
        }
        return abort_character;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Line::Vty::AutocommandOptions::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "nohangup")
    {
        if(nohangup == nullptr)
        {
            nohangup = std::make_shared<Native::Line::Vty::AutocommandOptions::Nohangup>();
        }
        return nohangup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::AutocommandOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(abort_character != nullptr)
    {
        children["abort-character"] = abort_character;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(nohangup != nullptr)
    {
        children["nohangup"] = nohangup;
    }

    return children;
}

void Native::Line::Vty::AutocommandOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::AutocommandOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::AutocommandOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abort-character" || name == "delay" || name == "nohangup")
        return true;
    return false;
}

Native::Line::Vty::AutocommandOptions::AbortCharacter::AbortCharacter()
    :
    character{YType::str, "character"}
{

    yang_name = "abort-character"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::AutocommandOptions::AbortCharacter::~AbortCharacter()
{
}

bool Native::Line::Vty::AutocommandOptions::AbortCharacter::has_data() const
{
    return character.is_set;
}

bool Native::Line::Vty::AutocommandOptions::AbortCharacter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(character.yfilter);
}

std::string Native::Line::Vty::AutocommandOptions::AbortCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "abort-character";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::AutocommandOptions::AbortCharacter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (character.is_set || is_set(character.yfilter)) leaf_name_data.push_back(character.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::AutocommandOptions::AbortCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::AutocommandOptions::AbortCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::AutocommandOptions::AbortCharacter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "character")
    {
        character = value;
        character.value_namespace = name_space;
        character.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::AutocommandOptions::AbortCharacter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "character")
    {
        character.yfilter = yfilter;
    }
}

bool Native::Line::Vty::AutocommandOptions::AbortCharacter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "character")
        return true;
    return false;
}

Native::Line::Vty::AutocommandOptions::Delay::Delay()
    :
    time{YType::uint8, "time"}
{

    yang_name = "delay"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::AutocommandOptions::Delay::~Delay()
{
}

bool Native::Line::Vty::AutocommandOptions::Delay::has_data() const
{
    return time.is_set;
}

bool Native::Line::Vty::AutocommandOptions::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Line::Vty::AutocommandOptions::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::AutocommandOptions::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::AutocommandOptions::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::AutocommandOptions::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::AutocommandOptions::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::AutocommandOptions::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Line::Vty::AutocommandOptions::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Line::Vty::AutocommandOptions::Nohangup::Nohangup()
    :
    abort_character{YType::empty, "abort-character"},
    delay{YType::empty, "delay"}
{

    yang_name = "nohangup"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::AutocommandOptions::Nohangup::~Nohangup()
{
}

bool Native::Line::Vty::AutocommandOptions::Nohangup::has_data() const
{
    return abort_character.is_set
	|| delay.is_set;
}

bool Native::Line::Vty::AutocommandOptions::Nohangup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(abort_character.yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string Native::Line::Vty::AutocommandOptions::Nohangup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nohangup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::AutocommandOptions::Nohangup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abort_character.is_set || is_set(abort_character.yfilter)) leaf_name_data.push_back(abort_character.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::AutocommandOptions::Nohangup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::AutocommandOptions::Nohangup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::AutocommandOptions::Nohangup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "abort-character")
    {
        abort_character = value;
        abort_character.value_namespace = name_space;
        abort_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::AutocommandOptions::Nohangup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "abort-character")
    {
        abort_character.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Line::Vty::AutocommandOptions::Nohangup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abort-character" || name == "delay")
        return true;
    return false;
}

Native::Line::Vty::Databits::Databits()
    :
    set_to_5{YType::empty, "set-to-5"},
    set_to_6{YType::empty, "set-to-6"},
    set_to_7{YType::empty, "set-to-7"},
    set_to_8{YType::empty, "set-to-8"}
{

    yang_name = "databits"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Databits::~Databits()
{
}

bool Native::Line::Vty::Databits::has_data() const
{
    return set_to_5.is_set
	|| set_to_6.is_set
	|| set_to_7.is_set
	|| set_to_8.is_set;
}

bool Native::Line::Vty::Databits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_to_5.yfilter)
	|| ydk::is_set(set_to_6.yfilter)
	|| ydk::is_set(set_to_7.yfilter)
	|| ydk::is_set(set_to_8.yfilter);
}

std::string Native::Line::Vty::Databits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "databits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Databits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_to_5.is_set || is_set(set_to_5.yfilter)) leaf_name_data.push_back(set_to_5.get_name_leafdata());
    if (set_to_6.is_set || is_set(set_to_6.yfilter)) leaf_name_data.push_back(set_to_6.get_name_leafdata());
    if (set_to_7.is_set || is_set(set_to_7.yfilter)) leaf_name_data.push_back(set_to_7.get_name_leafdata());
    if (set_to_8.is_set || is_set(set_to_8.yfilter)) leaf_name_data.push_back(set_to_8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Databits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Databits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Databits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-to-5")
    {
        set_to_5 = value;
        set_to_5.value_namespace = name_space;
        set_to_5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-6")
    {
        set_to_6 = value;
        set_to_6.value_namespace = name_space;
        set_to_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-7")
    {
        set_to_7 = value;
        set_to_7.value_namespace = name_space;
        set_to_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-8")
    {
        set_to_8 = value;
        set_to_8.value_namespace = name_space;
        set_to_8.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Databits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-to-5")
    {
        set_to_5.yfilter = yfilter;
    }
    if(value_path == "set-to-6")
    {
        set_to_6.yfilter = yfilter;
    }
    if(value_path == "set-to-7")
    {
        set_to_7.yfilter = yfilter;
    }
    if(value_path == "set-to-8")
    {
        set_to_8.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Databits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-to-5" || name == "set-to-6" || name == "set-to-7" || name == "set-to-8")
        return true;
    return false;
}

Native::Line::Vty::EscapeCharacter::EscapeCharacter()
    :
    char_{YType::str, "char"},
    soft{YType::empty, "soft"}
{

    yang_name = "escape-character"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::EscapeCharacter::~EscapeCharacter()
{
}

bool Native::Line::Vty::EscapeCharacter::has_data() const
{
    return char_.is_set
	|| soft.is_set;
}

bool Native::Line::Vty::EscapeCharacter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(char_.yfilter)
	|| ydk::is_set(soft.yfilter);
}

std::string Native::Line::Vty::EscapeCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "escape-character";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::EscapeCharacter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (char_.is_set || is_set(char_.yfilter)) leaf_name_data.push_back(char_.get_name_leafdata());
    if (soft.is_set || is_set(soft.yfilter)) leaf_name_data.push_back(soft.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::EscapeCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::EscapeCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::EscapeCharacter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "char")
    {
        char_ = value;
        char_.value_namespace = name_space;
        char_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft")
    {
        soft = value;
        soft.value_namespace = name_space;
        soft.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::EscapeCharacter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "char")
    {
        char_.yfilter = yfilter;
    }
    if(value_path == "soft")
    {
        soft.yfilter = yfilter;
    }
}

bool Native::Line::Vty::EscapeCharacter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "char" || name == "soft")
        return true;
    return false;
}

Native::Line::Vty::Exec::Exec()
    :
    prompt(std::make_shared<Native::Line::Vty::Exec::Prompt>())
{
    prompt->parent = this;

    yang_name = "exec"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Exec::~Exec()
{
}

bool Native::Line::Vty::Exec::has_data() const
{
    return (prompt !=  nullptr && prompt->has_data());
}

bool Native::Line::Vty::Exec::has_operation() const
{
    return is_set(yfilter)
	|| (prompt !=  nullptr && prompt->has_operation());
}

std::string Native::Line::Vty::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prompt")
    {
        if(prompt == nullptr)
        {
            prompt = std::make_shared<Native::Line::Vty::Exec::Prompt>();
        }
        return prompt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prompt != nullptr)
    {
        children["prompt"] = prompt;
    }

    return children;
}

void Native::Line::Vty::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prompt")
        return true;
    return false;
}

Native::Line::Vty::Exec::Prompt::Prompt()
    :
    timestamp{YType::empty, "timestamp"}
{

    yang_name = "prompt"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Exec::Prompt::~Prompt()
{
}

bool Native::Line::Vty::Exec::Prompt::has_data() const
{
    return timestamp.is_set;
}

bool Native::Line::Vty::Exec::Prompt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter);
}

std::string Native::Line::Vty::Exec::Prompt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prompt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Exec::Prompt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Exec::Prompt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Exec::Prompt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Exec::Prompt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Exec::Prompt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Exec::Prompt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp")
        return true;
    return false;
}

Native::Line::Vty::ExecTimeout::ExecTimeout()
    :
    minutes{YType::uint32, "minutes"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "exec-timeout"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::ExecTimeout::~ExecTimeout()
{
}

bool Native::Line::Vty::ExecTimeout::has_data() const
{
    return minutes.is_set
	|| seconds.is_set;
}

bool Native::Line::Vty::ExecTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Line::Vty::ExecTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::ExecTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::ExecTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::ExecTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::ExecTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::ExecTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Line::Vty::ExecTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minutes" || name == "seconds")
        return true;
    return false;
}

Native::Line::Vty::Flowcontrol::Flowcontrol()
    :
    hardware{YType::empty, "hardware"},
    none{YType::empty, "NONE"},
    software{YType::empty, "software"}
{

    yang_name = "flowcontrol"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Flowcontrol::~Flowcontrol()
{
}

bool Native::Line::Vty::Flowcontrol::has_data() const
{
    return hardware.is_set
	|| none.is_set
	|| software.is_set;
}

bool Native::Line::Vty::Flowcontrol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hardware.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(software.yfilter);
}

std::string Native::Line::Vty::Flowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowcontrol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Flowcontrol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hardware.is_set || is_set(hardware.yfilter)) leaf_name_data.push_back(hardware.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (software.is_set || is_set(software.yfilter)) leaf_name_data.push_back(software.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Flowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Flowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Flowcontrol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hardware")
    {
        hardware = value;
        hardware.value_namespace = name_space;
        hardware.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "NONE")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software")
    {
        software = value;
        software.value_namespace = name_space;
        software.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Flowcontrol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hardware")
    {
        hardware.yfilter = yfilter;
    }
    if(value_path == "NONE")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "software")
    {
        software.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Flowcontrol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware" || name == "NONE" || name == "software")
        return true;
    return false;
}

Native::Line::Vty::History::History()
    :
    size{YType::uint8, "size"}
{

    yang_name = "history"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::History::~History()
{
}

bool Native::Line::Vty::History::has_data() const
{
    return size.is_set;
}

bool Native::Line::Vty::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Line::Vty::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Line::Vty::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Line::Vty::Ip::Ip()
    :
    tcp{YType::empty, "tcp"}
    	,
    netmask_format(nullptr) // presence node
{

    yang_name = "ip"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Ip::~Ip()
{
}

bool Native::Line::Vty::Ip::has_data() const
{
    return tcp.is_set
	|| (netmask_format !=  nullptr && netmask_format->has_data());
}

bool Native::Line::Vty::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcp.yfilter)
	|| (netmask_format !=  nullptr && netmask_format->has_operation());
}

std::string Native::Line::Vty::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcp.is_set || is_set(tcp.yfilter)) leaf_name_data.push_back(tcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "netmask-format")
    {
        if(netmask_format == nullptr)
        {
            netmask_format = std::make_shared<Native::Line::Vty::Ip::NetmaskFormat>();
        }
        return netmask_format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(netmask_format != nullptr)
    {
        children["netmask-format"] = netmask_format;
    }

    return children;
}

void Native::Line::Vty::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcp")
    {
        tcp = value;
        tcp.value_namespace = name_space;
        tcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcp")
    {
        tcp.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netmask-format" || name == "tcp")
        return true;
    return false;
}

Native::Line::Vty::Ip::NetmaskFormat::NetmaskFormat()
    :
    format{YType::enumeration, "format"}
{

    yang_name = "netmask-format"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Ip::NetmaskFormat::~NetmaskFormat()
{
}

bool Native::Line::Vty::Ip::NetmaskFormat::has_data() const
{
    return format.is_set;
}

bool Native::Line::Vty::Ip::NetmaskFormat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter);
}

std::string Native::Line::Vty::Ip::NetmaskFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netmask-format";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Ip::NetmaskFormat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Ip::NetmaskFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Ip::NetmaskFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Ip::NetmaskFormat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Ip::NetmaskFormat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Ip::NetmaskFormat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format")
        return true;
    return false;
}

Native::Line::Vty::Ipv6::Ipv6()
    :
    access_class(std::make_shared<Native::Line::Vty::Ipv6::AccessClass>())
{
    access_class->parent = this;

    yang_name = "ipv6"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Ipv6::~Ipv6()
{
}

bool Native::Line::Vty::Ipv6::has_data() const
{
    return (access_class !=  nullptr && access_class->has_data());
}

bool Native::Line::Vty::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (access_class !=  nullptr && access_class->has_operation());
}

std::string Native::Line::Vty::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        if(access_class == nullptr)
        {
            access_class = std::make_shared<Native::Line::Vty::Ipv6::AccessClass>();
        }
        return access_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_class != nullptr)
    {
        children["access-class"] = access_class;
    }

    return children;
}

void Native::Line::Vty::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class")
        return true;
    return false;
}

Native::Line::Vty::Ipv6::AccessClass::AccessClass()
{

    yang_name = "access-class"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Ipv6::AccessClass::~AccessClass()
{
}

bool Native::Line::Vty::Ipv6::AccessClass::has_data() const
{
    for (std::size_t index=0; index<access_class.size(); index++)
    {
        if(access_class[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::Vty::Ipv6::AccessClass::has_operation() const
{
    for (std::size_t index=0; index<access_class.size(); index++)
    {
        if(access_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Line::Vty::Ipv6::AccessClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Ipv6::AccessClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Ipv6::AccessClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        for(auto const & c : access_class)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::Vty::Ipv6::AccessClass::AccessClass_>();
        c->parent = this;
        access_class.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Ipv6::AccessClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_class)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Line::Vty::Ipv6::AccessClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::Ipv6::AccessClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::Ipv6::AccessClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class")
        return true;
    return false;
}

Native::Line::Vty::Ipv6::AccessClass::AccessClass_::AccessClass_()
    :
    access_class_name{YType::str, "access-class-name"},
    enumeration_in_out{YType::enumeration, "enumeration-in-out"}
{

    yang_name = "access-class"; yang_parent_name = "access-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Ipv6::AccessClass::AccessClass_::~AccessClass_()
{
}

bool Native::Line::Vty::Ipv6::AccessClass::AccessClass_::has_data() const
{
    return access_class_name.is_set
	|| enumeration_in_out.is_set;
}

bool Native::Line::Vty::Ipv6::AccessClass::AccessClass_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_class_name.yfilter)
	|| ydk::is_set(enumeration_in_out.yfilter);
}

std::string Native::Line::Vty::Ipv6::AccessClass::AccessClass_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class" <<"[access-class-name='" <<access_class_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Ipv6::AccessClass::AccessClass_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_class_name.is_set || is_set(access_class_name.yfilter)) leaf_name_data.push_back(access_class_name.get_name_leafdata());
    if (enumeration_in_out.is_set || is_set(enumeration_in_out.yfilter)) leaf_name_data.push_back(enumeration_in_out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Ipv6::AccessClass::AccessClass_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Ipv6::AccessClass::AccessClass_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Ipv6::AccessClass::AccessClass_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-class-name")
    {
        access_class_name = value;
        access_class_name.value_namespace = name_space;
        access_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enumeration-in-out")
    {
        enumeration_in_out = value;
        enumeration_in_out.value_namespace = name_space;
        enumeration_in_out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Ipv6::AccessClass::AccessClass_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-class-name")
    {
        access_class_name.yfilter = yfilter;
    }
    if(value_path == "enumeration-in-out")
    {
        enumeration_in_out.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Ipv6::AccessClass::AccessClass_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class-name" || name == "enumeration-in-out")
        return true;
    return false;
}

Native::Line::Vty::Logging::Logging()
    :
    synchronous(nullptr) // presence node
{

    yang_name = "logging"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Logging::~Logging()
{
}

bool Native::Line::Vty::Logging::has_data() const
{
    return (synchronous !=  nullptr && synchronous->has_data());
}

bool Native::Line::Vty::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (synchronous !=  nullptr && synchronous->has_operation());
}

std::string Native::Line::Vty::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "synchronous")
    {
        if(synchronous == nullptr)
        {
            synchronous = std::make_shared<Native::Line::Vty::Logging::Synchronous>();
        }
        return synchronous;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(synchronous != nullptr)
    {
        children["synchronous"] = synchronous;
    }

    return children;
}

void Native::Line::Vty::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "synchronous")
        return true;
    return false;
}

Native::Line::Vty::Logging::Synchronous::Synchronous()
{

    yang_name = "synchronous"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Logging::Synchronous::~Synchronous()
{
}

bool Native::Line::Vty::Logging::Synchronous::has_data() const
{
    return false;
}

bool Native::Line::Vty::Logging::Synchronous::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Line::Vty::Logging::Synchronous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "synchronous";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Logging::Synchronous::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Logging::Synchronous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Logging::Synchronous::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Logging::Synchronous::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::Logging::Synchronous::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::Logging::Synchronous::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Line::Vty::Login::Login()
    :
    authentication{YType::str, "authentication"},
    local{YType::empty, "local"}
{

    yang_name = "login"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Login::~Login()
{
}

bool Native::Line::Vty::Login::has_data() const
{
    return authentication.is_set
	|| local.is_set;
}

bool Native::Line::Vty::Login::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Line::Vty::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Login::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Login::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Login::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Login::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "local")
        return true;
    return false;
}

Native::Line::Vty::MediaType::MediaType()
    :
    rj45{YType::empty, "rj45"}
{

    yang_name = "media-type"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::MediaType::~MediaType()
{
}

bool Native::Line::Vty::MediaType::has_data() const
{
    return rj45.is_set;
}

bool Native::Line::Vty::MediaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rj45.yfilter);
}

std::string Native::Line::Vty::MediaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::MediaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rj45.is_set || is_set(rj45.yfilter)) leaf_name_data.push_back(rj45.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::MediaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::MediaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::MediaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rj45")
    {
        rj45 = value;
        rj45.value_namespace = name_space;
        rj45.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::MediaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rj45")
    {
        rj45.yfilter = yfilter;
    }
}

bool Native::Line::Vty::MediaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rj45")
        return true;
    return false;
}

Native::Line::Vty::Modem::Modem()
    :
    answer_timeout{YType::empty, "answer-timeout"},
    cts_alarm{YType::empty, "CTS-Alarm"},
    dialin{YType::empty, "Dialin"},
    dtr_active{YType::empty, "DTR-active"},
    dtr_delay{YType::empty, "dtr-delay"},
    host{YType::empty, "Host"},
    inout{YType::empty, "InOut"},
    printer{YType::empty, "Printer"}
{

    yang_name = "modem"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Modem::~Modem()
{
}

bool Native::Line::Vty::Modem::has_data() const
{
    return answer_timeout.is_set
	|| cts_alarm.is_set
	|| dialin.is_set
	|| dtr_active.is_set
	|| dtr_delay.is_set
	|| host.is_set
	|| inout.is_set
	|| printer.is_set;
}

bool Native::Line::Vty::Modem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(answer_timeout.yfilter)
	|| ydk::is_set(cts_alarm.yfilter)
	|| ydk::is_set(dialin.yfilter)
	|| ydk::is_set(dtr_active.yfilter)
	|| ydk::is_set(dtr_delay.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(printer.yfilter);
}

std::string Native::Line::Vty::Modem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Modem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (answer_timeout.is_set || is_set(answer_timeout.yfilter)) leaf_name_data.push_back(answer_timeout.get_name_leafdata());
    if (cts_alarm.is_set || is_set(cts_alarm.yfilter)) leaf_name_data.push_back(cts_alarm.get_name_leafdata());
    if (dialin.is_set || is_set(dialin.yfilter)) leaf_name_data.push_back(dialin.get_name_leafdata());
    if (dtr_active.is_set || is_set(dtr_active.yfilter)) leaf_name_data.push_back(dtr_active.get_name_leafdata());
    if (dtr_delay.is_set || is_set(dtr_delay.yfilter)) leaf_name_data.push_back(dtr_delay.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (printer.is_set || is_set(printer.yfilter)) leaf_name_data.push_back(printer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Modem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Modem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Modem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "answer-timeout")
    {
        answer_timeout = value;
        answer_timeout.value_namespace = name_space;
        answer_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CTS-Alarm")
    {
        cts_alarm = value;
        cts_alarm.value_namespace = name_space;
        cts_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Dialin")
    {
        dialin = value;
        dialin.value_namespace = name_space;
        dialin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "DTR-active")
    {
        dtr_active = value;
        dtr_active.value_namespace = name_space;
        dtr_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dtr-delay")
    {
        dtr_delay = value;
        dtr_delay.value_namespace = name_space;
        dtr_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "InOut")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Printer")
    {
        printer = value;
        printer.value_namespace = name_space;
        printer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Modem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "answer-timeout")
    {
        answer_timeout.yfilter = yfilter;
    }
    if(value_path == "CTS-Alarm")
    {
        cts_alarm.yfilter = yfilter;
    }
    if(value_path == "Dialin")
    {
        dialin.yfilter = yfilter;
    }
    if(value_path == "DTR-active")
    {
        dtr_active.yfilter = yfilter;
    }
    if(value_path == "dtr-delay")
    {
        dtr_delay.yfilter = yfilter;
    }
    if(value_path == "Host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "InOut")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "Printer")
    {
        printer.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Modem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "answer-timeout" || name == "CTS-Alarm" || name == "Dialin" || name == "DTR-active" || name == "dtr-delay" || name == "Host" || name == "InOut" || name == "Printer")
        return true;
    return false;
}

Native::Line::Vty::NoExec::NoExec()
    :
    exec{YType::boolean, "exec"}
{

    yang_name = "no-exec"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::NoExec::~NoExec()
{
}

bool Native::Line::Vty::NoExec::has_data() const
{
    return exec.is_set;
}

bool Native::Line::Vty::NoExec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exec.yfilter);
}

std::string Native::Line::Vty::NoExec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::NoExec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exec.is_set || is_set(exec.yfilter)) leaf_name_data.push_back(exec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::NoExec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::NoExec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::NoExec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exec")
    {
        exec = value;
        exec.value_namespace = name_space;
        exec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::NoExec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exec")
    {
        exec.yfilter = yfilter;
    }
}

bool Native::Line::Vty::NoExec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exec")
        return true;
    return false;
}

Native::Line::Vty::Padding::Padding()
    :
    character{YType::str, "character"},
    null{YType::uint8, "null"}
{

    yang_name = "padding"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Padding::~Padding()
{
}

bool Native::Line::Vty::Padding::has_data() const
{
    return character.is_set
	|| null.is_set;
}

bool Native::Line::Vty::Padding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(character.yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Line::Vty::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Padding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (character.is_set || is_set(character.yfilter)) leaf_name_data.push_back(character.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Padding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "character")
    {
        character = value;
        character.value_namespace = name_space;
        character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Padding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "character")
    {
        character.yfilter = yfilter;
    }
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Padding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "character" || name == "null")
        return true;
    return false;
}

Native::Line::Vty::Parity::Parity()
    :
    even{YType::empty, "even"},
    mark{YType::empty, "mark"},
    none{YType::empty, "none"},
    odd{YType::empty, "odd"},
    space{YType::empty, "space"}
{

    yang_name = "parity"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Parity::~Parity()
{
}

bool Native::Line::Vty::Parity::has_data() const
{
    return even.is_set
	|| mark.is_set
	|| none.is_set
	|| odd.is_set
	|| space.is_set;
}

bool Native::Line::Vty::Parity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(even.yfilter)
	|| ydk::is_set(mark.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(odd.yfilter)
	|| ydk::is_set(space.yfilter);
}

std::string Native::Line::Vty::Parity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Parity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (even.is_set || is_set(even.yfilter)) leaf_name_data.push_back(even.get_name_leafdata());
    if (mark.is_set || is_set(mark.yfilter)) leaf_name_data.push_back(mark.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (odd.is_set || is_set(odd.yfilter)) leaf_name_data.push_back(odd.get_name_leafdata());
    if (space.is_set || is_set(space.yfilter)) leaf_name_data.push_back(space.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Parity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Parity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Parity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "even")
    {
        even = value;
        even.value_namespace = name_space;
        even.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark")
    {
        mark = value;
        mark.value_namespace = name_space;
        mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "odd")
    {
        odd = value;
        odd.value_namespace = name_space;
        odd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "space")
    {
        space = value;
        space.value_namespace = name_space;
        space.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Parity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "even")
    {
        even.yfilter = yfilter;
    }
    if(value_path == "mark")
    {
        mark.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "odd")
    {
        odd.yfilter = yfilter;
    }
    if(value_path == "space")
    {
        space.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Parity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "even" || name == "mark" || name == "none" || name == "odd" || name == "space")
        return true;
    return false;
}

Native::Line::Vty::Password::Password()
    :
    level{YType::uint8, "level"},
    secret{YType::str, "secret"},
    type{YType::enumeration, "type"}
{

    yang_name = "password"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Password::~Password()
{
}

bool Native::Line::Vty::Password::has_data() const
{
    return level.is_set
	|| secret.is_set
	|| type.is_set;
}

bool Native::Line::Vty::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(secret.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Line::Vty::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "secret" || name == "type")
        return true;
    return false;
}

Native::Line::Vty::Prc::Prc()
    :
    expose{YType::empty, "expose"},
    hide{YType::empty, "hide"}
{

    yang_name = "prc"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Prc::~Prc()
{
}

bool Native::Line::Vty::Prc::has_data() const
{
    return expose.is_set
	|| hide.is_set;
}

bool Native::Line::Vty::Prc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expose.yfilter)
	|| ydk::is_set(hide.yfilter);
}

std::string Native::Line::Vty::Prc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Prc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expose.is_set || is_set(expose.yfilter)) leaf_name_data.push_back(expose.get_name_leafdata());
    if (hide.is_set || is_set(hide.yfilter)) leaf_name_data.push_back(hide.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Prc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Prc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Prc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expose")
    {
        expose = value;
        expose.value_namespace = name_space;
        expose.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hide")
    {
        hide = value;
        hide.value_namespace = name_space;
        hide.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Prc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expose")
    {
        expose.yfilter = yfilter;
    }
    if(value_path == "hide")
    {
        hide.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Prc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expose" || name == "hide")
        return true;
    return false;
}

Native::Line::Vty::Privilege::Privilege()
    :
    level(nullptr) // presence node
{

    yang_name = "privilege"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Privilege::~Privilege()
{
}

bool Native::Line::Vty::Privilege::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Line::Vty::Privilege::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Line::Vty::Privilege::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privilege";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Privilege::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Privilege::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Line::Vty::Privilege::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Privilege::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Line::Vty::Privilege::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::Privilege::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::Privilege::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Line::Vty::Privilege::Level::Level()
    :
    number{YType::uint8, "number"}
{

    yang_name = "level"; yang_parent_name = "privilege"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Privilege::Level::~Level()
{
}

bool Native::Line::Vty::Privilege::Level::has_data() const
{
    return number.is_set;
}

bool Native::Line::Vty::Privilege::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Line::Vty::Privilege::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Privilege::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Privilege::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Privilege::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Privilege::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Privilege::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Privilege::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number")
        return true;
    return false;
}

Native::Line::Vty::SessionTimeout::SessionTimeout()
    :
    output{YType::empty, "output"},
    session_timeout_value{YType::uint16, "session-timeout-value"}
{

    yang_name = "session-timeout"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::SessionTimeout::~SessionTimeout()
{
}

bool Native::Line::Vty::SessionTimeout::has_data() const
{
    return output.is_set
	|| session_timeout_value.is_set;
}

bool Native::Line::Vty::SessionTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(output.yfilter)
	|| ydk::is_set(session_timeout_value.yfilter);
}

std::string Native::Line::Vty::SessionTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::SessionTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());
    if (session_timeout_value.is_set || is_set(session_timeout_value.yfilter)) leaf_name_data.push_back(session_timeout_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::SessionTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::SessionTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::SessionTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-timeout-value")
    {
        session_timeout_value = value;
        session_timeout_value.value_namespace = name_space;
        session_timeout_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::SessionTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
    if(value_path == "session-timeout-value")
    {
        session_timeout_value.yfilter = yfilter;
    }
}

bool Native::Line::Vty::SessionTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output" || name == "session-timeout-value")
        return true;
    return false;
}

Native::Line::Vty::Telnet::Telnet()
    :
    transparent{YType::empty, "transparent"}
{

    yang_name = "telnet"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Telnet::~Telnet()
{
}

bool Native::Line::Vty::Telnet::has_data() const
{
    return transparent.is_set;
}

bool Native::Line::Vty::Telnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Line::Vty::Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Telnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Telnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Telnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Telnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Telnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transparent")
        return true;
    return false;
}

Native::Line::Vty::Timeout::Timeout()
    :
    login{YType::empty, "login"}
{

    yang_name = "timeout"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Timeout::~Timeout()
{
}

bool Native::Line::Vty::Timeout::has_data() const
{
    return login.is_set;
}

bool Native::Line::Vty::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(login.yfilter);
}

std::string Native::Line::Vty::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (login.is_set || is_set(login.yfilter)) leaf_name_data.push_back(login.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "login")
    {
        login = value;
        login.value_namespace = name_space;
        login.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "login")
    {
        login.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "login")
        return true;
    return false;
}

Native::Line::Vty::Transport::Transport()
    :
    input(std::make_shared<Native::Line::Vty::Transport::Input>())
	,output(std::make_shared<Native::Line::Vty::Transport::Output>())
	,preferred(nullptr) // presence node
{
    input->parent = this;
    output->parent = this;

    yang_name = "transport"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Transport::~Transport()
{
}

bool Native::Line::Vty::Transport::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data())
	|| (preferred !=  nullptr && preferred->has_data());
}

bool Native::Line::Vty::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation())
	|| (preferred !=  nullptr && preferred->has_operation());
}

std::string Native::Line::Vty::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Line::Vty::Transport::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Line::Vty::Transport::Output>();
        }
        return output;
    }

    if(child_yang_name == "preferred")
    {
        if(preferred == nullptr)
        {
            preferred = std::make_shared<Native::Line::Vty::Transport::Preferred>();
        }
        return preferred;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    if(preferred != nullptr)
    {
        children["preferred"] = preferred;
    }

    return children;
}

void Native::Line::Vty::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output" || name == "preferred")
        return true;
    return false;
}

Native::Line::Vty::Transport::Input::Input()
    :
    input{YType::enumeration, "input"}
{

    yang_name = "input"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Transport::Input::~Input()
{
}

bool Native::Line::Vty::Transport::Input::has_data() const
{
    for (auto const & leaf : input.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Line::Vty::Transport::Input::has_operation() const
{
    for (auto const & leaf : input.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter);
}

std::string Native::Line::Vty::Transport::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Transport::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto input_name_datas = input.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), input_name_datas.begin(), input_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Transport::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Transport::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Transport::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input.append(value);
    }
}

void Native::Line::Vty::Transport::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Transport::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

Native::Line::Vty::Transport::Output::Output()
    :
    output{YType::enumeration, "output"}
{

    yang_name = "output"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Transport::Output::~Output()
{
}

bool Native::Line::Vty::Transport::Output::has_data() const
{
    for (auto const & leaf : output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Line::Vty::Transport::Output::has_operation() const
{
    for (auto const & leaf : output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Line::Vty::Transport::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Transport::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto output_name_datas = output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), output_name_datas.begin(), output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Transport::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Transport::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Transport::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output")
    {
        output.append(value);
    }
}

void Native::Line::Vty::Transport::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Transport::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output")
        return true;
    return false;
}

Native::Line::Vty::Transport::Preferred::Preferred()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "preferred"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::Transport::Preferred::~Preferred()
{
}

bool Native::Line::Vty::Transport::Preferred::has_data() const
{
    return protocol.is_set;
}

bool Native::Line::Vty::Transport::Preferred::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Line::Vty::Transport::Preferred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Transport::Preferred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::Transport::Preferred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Transport::Preferred::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Transport::Preferred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Transport::Preferred::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Transport::Preferred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Line::Vty::UsbInactivityTimeout::UsbInactivityTimeout()
    :
    switch_{YType::empty, "switch"}
{

    yang_name = "usb-inactivity-timeout"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Vty::UsbInactivityTimeout::~UsbInactivityTimeout()
{
}

bool Native::Line::Vty::UsbInactivityTimeout::has_data() const
{
    return switch_.is_set;
}

bool Native::Line::Vty::UsbInactivityTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::Line::Vty::UsbInactivityTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usb-inactivity-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::UsbInactivityTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Vty::UsbInactivityTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::UsbInactivityTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::UsbInactivityTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::UsbInactivityTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::Line::Vty::UsbInactivityTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Lldp::Lldp()
    :
    run{YType::empty, "run"}
{

    yang_name = "lldp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Lldp::~Lldp()
{
}

bool Native::Lldp::has_data() const
{
    return run.is_set;
}

bool Native::Lldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(run.yfilter);
}

std::string Native::Lldp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Lldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lldp:lldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Lldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (run.is_set || is_set(run.yfilter)) leaf_name_data.push_back(run.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Lldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Lldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Lldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "run")
    {
        run = value;
        run.value_namespace = name_space;
        run.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Lldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "run")
    {
        run.yfilter = yfilter;
    }
}

bool Native::Lldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "run")
        return true;
    return false;
}

Native::Location::Location()
    :
    civic_location(std::make_shared<Native::Location::CivicLocation>())
{
    civic_location->parent = this;

    yang_name = "location"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Location::~Location()
{
}

bool Native::Location::has_data() const
{
    return (civic_location !=  nullptr && civic_location->has_data());
}

bool Native::Location::has_operation() const
{
    return is_set(yfilter)
	|| (civic_location !=  nullptr && civic_location->has_operation());
}

std::string Native::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "civic-location")
    {
        if(civic_location == nullptr)
        {
            civic_location = std::make_shared<Native::Location::CivicLocation>();
        }
        return civic_location;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(civic_location != nullptr)
    {
        children["civic-location"] = civic_location;
    }

    return children;
}

void Native::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "civic-location")
        return true;
    return false;
}

Native::Location::CivicLocation::CivicLocation()
{

    yang_name = "civic-location"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Location::CivicLocation::~CivicLocation()
{
}

bool Native::Location::CivicLocation::has_data() const
{
    for (std::size_t index=0; index<identifier.size(); index++)
    {
        if(identifier[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Location::CivicLocation::has_operation() const
{
    for (std::size_t index=0; index<identifier.size(); index++)
    {
        if(identifier[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Location::CivicLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/location/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Location::CivicLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "civic-location";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Location::CivicLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Location::CivicLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        for(auto const & c : identifier)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Location::CivicLocation::Identifier>();
        c->parent = this;
        identifier.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Location::CivicLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : identifier)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Location::CivicLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Location::CivicLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Location::CivicLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier")
        return true;
    return false;
}

Native::Location::CivicLocation::Identifier::Identifier()
    :
    identifier{YType::str, "identifier"},
    building{YType::str, "building"},
    floor{YType::str, "floor"},
    landmark{YType::str, "landmark"},
    name{YType::str, "name"},
    number{YType::str, "number"}
{

    yang_name = "identifier"; yang_parent_name = "civic-location"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Location::CivicLocation::Identifier::~Identifier()
{
}

bool Native::Location::CivicLocation::Identifier::has_data() const
{
    return identifier.is_set
	|| building.is_set
	|| floor.is_set
	|| landmark.is_set
	|| name.is_set
	|| number.is_set;
}

bool Native::Location::CivicLocation::Identifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(building.yfilter)
	|| ydk::is_set(floor.yfilter)
	|| ydk::is_set(landmark.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Location::CivicLocation::Identifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/location/civic-location/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Location::CivicLocation::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier" <<"[identifier='" <<identifier <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Location::CivicLocation::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (building.is_set || is_set(building.yfilter)) leaf_name_data.push_back(building.get_name_leafdata());
    if (floor.is_set || is_set(floor.yfilter)) leaf_name_data.push_back(floor.get_name_leafdata());
    if (landmark.is_set || is_set(landmark.yfilter)) leaf_name_data.push_back(landmark.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Location::CivicLocation::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Location::CivicLocation::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Location::CivicLocation::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "building")
    {
        building = value;
        building.value_namespace = name_space;
        building.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "floor")
    {
        floor = value;
        floor.value_namespace = name_space;
        floor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "landmark")
    {
        landmark = value;
        landmark.value_namespace = name_space;
        landmark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Location::CivicLocation::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "building")
    {
        building.yfilter = yfilter;
    }
    if(value_path == "floor")
    {
        floor.yfilter = yfilter;
    }
    if(value_path == "landmark")
    {
        landmark.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Location::CivicLocation::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "building" || name == "floor" || name == "landmark" || name == "name" || name == "number")
        return true;
    return false;
}

Native::Logging::Logging()
    :
    alarm{YType::str, "alarm"},
    buginf{YType::empty, "buginf"},
    facility{YType::enumeration, "facility"},
    hostip{YType::str, "hostip"},
    snmp_authfail{YType::empty, "snmp-authfail"},
    userinfo{YType::empty, "userinfo"}
    	,
    buffered(nullptr) // presence node
	,console(nullptr) // presence node
	,console_conf(std::make_shared<Native::Logging::ConsoleConf>())
	,esm(std::make_shared<Native::Logging::Esm>())
	,event(std::make_shared<Native::Logging::Event>())
	,file(std::make_shared<Native::Logging::File>())
	,history(std::make_shared<Native::Logging::History>())
	,host(std::make_shared<Native::Logging::Host>())
	,monitor(nullptr) // presence node
	,monitor_conf(std::make_shared<Native::Logging::MonitorConf>())
	,origin_id(std::make_shared<Native::Logging::OriginId>())
	,persistent(nullptr) // presence node
	,rate_limit(nullptr) // presence node
	,rate_limit_conf(std::make_shared<Native::Logging::RateLimitConf>())
	,snmp_trap(std::make_shared<Native::Logging::SnmpTrap>())
	,trap(nullptr) // presence node
{
    console_conf->parent = this;
    esm->parent = this;
    event->parent = this;
    file->parent = this;
    history->parent = this;
    host->parent = this;
    monitor_conf->parent = this;
    origin_id->parent = this;
    rate_limit_conf->parent = this;
    snmp_trap->parent = this;

    yang_name = "logging"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::~Logging()
{
}

bool Native::Logging::has_data() const
{
    for (std::size_t index=0; index<discriminator.size(); index++)
    {
        if(discriminator[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<source_interface.size(); index++)
    {
        if(source_interface[index]->has_data())
            return true;
    }
    return alarm.is_set
	|| buginf.is_set
	|| facility.is_set
	|| hostip.is_set
	|| snmp_authfail.is_set
	|| userinfo.is_set
	|| (buffered !=  nullptr && buffered->has_data())
	|| (console !=  nullptr && console->has_data())
	|| (console_conf !=  nullptr && console_conf->has_data())
	|| (esm !=  nullptr && esm->has_data())
	|| (event !=  nullptr && event->has_data())
	|| (file !=  nullptr && file->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (host !=  nullptr && host->has_data())
	|| (monitor !=  nullptr && monitor->has_data())
	|| (monitor_conf !=  nullptr && monitor_conf->has_data())
	|| (origin_id !=  nullptr && origin_id->has_data())
	|| (persistent !=  nullptr && persistent->has_data())
	|| (rate_limit !=  nullptr && rate_limit->has_data())
	|| (rate_limit_conf !=  nullptr && rate_limit_conf->has_data())
	|| (snmp_trap !=  nullptr && snmp_trap->has_data())
	|| (trap !=  nullptr && trap->has_data());
}

bool Native::Logging::has_operation() const
{
    for (std::size_t index=0; index<discriminator.size(); index++)
    {
        if(discriminator[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<source_interface.size(); index++)
    {
        if(source_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(alarm.yfilter)
	|| ydk::is_set(buginf.yfilter)
	|| ydk::is_set(facility.yfilter)
	|| ydk::is_set(hostip.yfilter)
	|| ydk::is_set(snmp_authfail.yfilter)
	|| ydk::is_set(userinfo.yfilter)
	|| (buffered !=  nullptr && buffered->has_operation())
	|| (console !=  nullptr && console->has_operation())
	|| (console_conf !=  nullptr && console_conf->has_operation())
	|| (esm !=  nullptr && esm->has_operation())
	|| (event !=  nullptr && event->has_operation())
	|| (file !=  nullptr && file->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (host !=  nullptr && host->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (monitor_conf !=  nullptr && monitor_conf->has_operation())
	|| (origin_id !=  nullptr && origin_id->has_operation())
	|| (persistent !=  nullptr && persistent->has_operation())
	|| (rate_limit !=  nullptr && rate_limit->has_operation())
	|| (rate_limit_conf !=  nullptr && rate_limit_conf->has_operation())
	|| (snmp_trap !=  nullptr && snmp_trap->has_operation())
	|| (trap !=  nullptr && trap->has_operation());
}

std::string Native::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm.is_set || is_set(alarm.yfilter)) leaf_name_data.push_back(alarm.get_name_leafdata());
    if (buginf.is_set || is_set(buginf.yfilter)) leaf_name_data.push_back(buginf.get_name_leafdata());
    if (facility.is_set || is_set(facility.yfilter)) leaf_name_data.push_back(facility.get_name_leafdata());
    if (hostip.is_set || is_set(hostip.yfilter)) leaf_name_data.push_back(hostip.get_name_leafdata());
    if (snmp_authfail.is_set || is_set(snmp_authfail.yfilter)) leaf_name_data.push_back(snmp_authfail.get_name_leafdata());
    if (userinfo.is_set || is_set(userinfo.yfilter)) leaf_name_data.push_back(userinfo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "buffered")
    {
        if(buffered == nullptr)
        {
            buffered = std::make_shared<Native::Logging::Buffered>();
        }
        return buffered;
    }

    if(child_yang_name == "console")
    {
        if(console == nullptr)
        {
            console = std::make_shared<Native::Logging::Console>();
        }
        return console;
    }

    if(child_yang_name == "console-conf")
    {
        if(console_conf == nullptr)
        {
            console_conf = std::make_shared<Native::Logging::ConsoleConf>();
        }
        return console_conf;
    }

    if(child_yang_name == "discriminator")
    {
        for(auto const & c : discriminator)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Logging::Discriminator>();
        c->parent = this;
        discriminator.push_back(c);
        return c;
    }

    if(child_yang_name == "esm")
    {
        if(esm == nullptr)
        {
            esm = std::make_shared<Native::Logging::Esm>();
        }
        return esm;
    }

    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Logging::Event>();
        }
        return event;
    }

    if(child_yang_name == "file")
    {
        if(file == nullptr)
        {
            file = std::make_shared<Native::Logging::File>();
        }
        return file;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Logging::History>();
        }
        return history;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Logging::Host>();
        }
        return host;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Logging::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "monitor-conf")
    {
        if(monitor_conf == nullptr)
        {
            monitor_conf = std::make_shared<Native::Logging::MonitorConf>();
        }
        return monitor_conf;
    }

    if(child_yang_name == "origin-id")
    {
        if(origin_id == nullptr)
        {
            origin_id = std::make_shared<Native::Logging::OriginId>();
        }
        return origin_id;
    }

    if(child_yang_name == "persistent")
    {
        if(persistent == nullptr)
        {
            persistent = std::make_shared<Native::Logging::Persistent>();
        }
        return persistent;
    }

    if(child_yang_name == "rate-limit")
    {
        if(rate_limit == nullptr)
        {
            rate_limit = std::make_shared<Native::Logging::RateLimit>();
        }
        return rate_limit;
    }

    if(child_yang_name == "rate-limit-conf")
    {
        if(rate_limit_conf == nullptr)
        {
            rate_limit_conf = std::make_shared<Native::Logging::RateLimitConf>();
        }
        return rate_limit_conf;
    }

    if(child_yang_name == "snmp-trap")
    {
        if(snmp_trap == nullptr)
        {
            snmp_trap = std::make_shared<Native::Logging::SnmpTrap>();
        }
        return snmp_trap;
    }

    if(child_yang_name == "source-interface")
    {
        for(auto const & c : source_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Logging::SourceInterface>();
        c->parent = this;
        source_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::Logging::Trap>();
        }
        return trap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(buffered != nullptr)
    {
        children["buffered"] = buffered;
    }

    if(console != nullptr)
    {
        children["console"] = console;
    }

    if(console_conf != nullptr)
    {
        children["console-conf"] = console_conf;
    }

    for (auto const & c : discriminator)
    {
        children[c->get_segment_path()] = c;
    }

    if(esm != nullptr)
    {
        children["esm"] = esm;
    }

    if(event != nullptr)
    {
        children["event"] = event;
    }

    if(file != nullptr)
    {
        children["file"] = file;
    }

    if(history != nullptr)
    {
        children["history"] = history;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    if(monitor_conf != nullptr)
    {
        children["monitor-conf"] = monitor_conf;
    }

    if(origin_id != nullptr)
    {
        children["origin-id"] = origin_id;
    }

    if(persistent != nullptr)
    {
        children["persistent"] = persistent;
    }

    if(rate_limit != nullptr)
    {
        children["rate-limit"] = rate_limit;
    }

    if(rate_limit_conf != nullptr)
    {
        children["rate-limit-conf"] = rate_limit_conf;
    }

    if(snmp_trap != nullptr)
    {
        children["snmp-trap"] = snmp_trap;
    }

    for (auto const & c : source_interface)
    {
        children[c->get_segment_path()] = c;
    }

    if(trap != nullptr)
    {
        children["trap"] = trap;
    }

    return children;
}

void Native::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm")
    {
        alarm = value;
        alarm.value_namespace = name_space;
        alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buginf")
    {
        buginf = value;
        buginf.value_namespace = name_space;
        buginf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "facility")
    {
        facility = value;
        facility.value_namespace = name_space;
        facility.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostip")
    {
        hostip = value;
        hostip.value_namespace = name_space;
        hostip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp-authfail")
    {
        snmp_authfail = value;
        snmp_authfail.value_namespace = name_space;
        snmp_authfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "userinfo")
    {
        userinfo = value;
        userinfo.value_namespace = name_space;
        userinfo.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm")
    {
        alarm.yfilter = yfilter;
    }
    if(value_path == "buginf")
    {
        buginf.yfilter = yfilter;
    }
    if(value_path == "facility")
    {
        facility.yfilter = yfilter;
    }
    if(value_path == "hostip")
    {
        hostip.yfilter = yfilter;
    }
    if(value_path == "snmp-authfail")
    {
        snmp_authfail.yfilter = yfilter;
    }
    if(value_path == "userinfo")
    {
        userinfo.yfilter = yfilter;
    }
}

bool Native::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "buffered" || name == "console" || name == "console-conf" || name == "discriminator" || name == "esm" || name == "event" || name == "file" || name == "history" || name == "host" || name == "monitor" || name == "monitor-conf" || name == "origin-id" || name == "persistent" || name == "rate-limit" || name == "rate-limit-conf" || name == "snmp-trap" || name == "source-interface" || name == "trap" || name == "alarm" || name == "buginf" || name == "facility" || name == "hostip" || name == "snmp-authfail" || name == "userinfo")
        return true;
    return false;
}

Native::Logging::Buffered::Buffered()
    :
    severity{YType::str, "severity"},
    xxml{YType::uint32, "xxml"}
    	,
    size(std::make_shared<Native::Logging::Buffered::Size>())
{
    size->parent = this;

    yang_name = "buffered"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::Buffered::~Buffered()
{
}

bool Native::Logging::Buffered::has_data() const
{
    for (std::size_t index=0; index<discriminator.size(); index++)
    {
        if(discriminator[index]->has_data())
            return true;
    }
    return severity.is_set
	|| xxml.is_set
	|| (size !=  nullptr && size->has_data());
}

bool Native::Logging::Buffered::has_operation() const
{
    for (std::size_t index=0; index<discriminator.size(); index++)
    {
        if(discriminator[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(xxml.yfilter)
	|| (size !=  nullptr && size->has_operation());
}

std::string Native::Logging::Buffered::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Buffered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffered";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Buffered::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (xxml.is_set || is_set(xxml.yfilter)) leaf_name_data.push_back(xxml.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Buffered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discriminator")
    {
        for(auto const & c : discriminator)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Logging::Buffered::Discriminator>();
        c->parent = this;
        discriminator.push_back(c);
        return c;
    }

    if(child_yang_name == "size")
    {
        if(size == nullptr)
        {
            size = std::make_shared<Native::Logging::Buffered::Size>();
        }
        return size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Buffered::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : discriminator)
    {
        children[c->get_segment_path()] = c;
    }

    if(size != nullptr)
    {
        children["size"] = size;
    }

    return children;
}

void Native::Logging::Buffered::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xxml")
    {
        xxml = value;
        xxml.value_namespace = name_space;
        xxml.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Buffered::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "xxml")
    {
        xxml.yfilter = yfilter;
    }
}

bool Native::Logging::Buffered::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discriminator" || name == "size" || name == "severity" || name == "xxml")
        return true;
    return false;
}

Native::Logging::Buffered::Discriminator::Discriminator()
    :
    name{YType::str, "name"},
    severity{YType::str, "severity"},
    size_value{YType::uint32, "size-value"}
{

    yang_name = "discriminator"; yang_parent_name = "buffered"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::Buffered::Discriminator::~Discriminator()
{
}

bool Native::Logging::Buffered::Discriminator::has_data() const
{
    return name.is_set
	|| severity.is_set
	|| size_value.is_set;
}

bool Native::Logging::Buffered::Discriminator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(size_value.yfilter);
}

std::string Native::Logging::Buffered::Discriminator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/buffered/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Buffered::Discriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discriminator" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Buffered::Discriminator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (size_value.is_set || is_set(size_value.yfilter)) leaf_name_data.push_back(size_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Buffered::Discriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Buffered::Discriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Buffered::Discriminator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size-value")
    {
        size_value = value;
        size_value.value_namespace = name_space;
        size_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Buffered::Discriminator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "size-value")
    {
        size_value.yfilter = yfilter;
    }
}

bool Native::Logging::Buffered::Discriminator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "severity" || name == "size-value")
        return true;
    return false;
}

Native::Logging::Buffered::Size::Size()
    :
    severity{YType::str, "severity"},
    size_value{YType::uint32, "size-value"}
{

    yang_name = "size"; yang_parent_name = "buffered"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::Buffered::Size::~Size()
{
}

bool Native::Logging::Buffered::Size::has_data() const
{
    return severity.is_set
	|| size_value.is_set;
}

bool Native::Logging::Buffered::Size::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(size_value.yfilter);
}

std::string Native::Logging::Buffered::Size::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/buffered/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Buffered::Size::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Buffered::Size::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (size_value.is_set || is_set(size_value.yfilter)) leaf_name_data.push_back(size_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Buffered::Size::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Buffered::Size::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Buffered::Size::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size-value")
    {
        size_value = value;
        size_value.value_namespace = name_space;
        size_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Buffered::Size::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "size-value")
    {
        size_value.yfilter = yfilter;
    }
}

bool Native::Logging::Buffered::Size::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "severity" || name == "size-value")
        return true;
    return false;
}

Native::Logging::Console::Console()
    :
    filtered{YType::empty, "filtered"},
    guaranteed{YType::empty, "guaranteed"},
    severity{YType::str, "severity"},
    xxml{YType::str, "xxml"}
{

    yang_name = "console"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::Console::~Console()
{
}

bool Native::Logging::Console::has_data() const
{
    for (std::size_t index=0; index<discriminator.size(); index++)
    {
        if(discriminator[index]->has_data())
            return true;
    }
    return filtered.is_set
	|| guaranteed.is_set
	|| severity.is_set
	|| xxml.is_set;
}

bool Native::Logging::Console::has_operation() const
{
    for (std::size_t index=0; index<discriminator.size(); index++)
    {
        if(discriminator[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(filtered.yfilter)
	|| ydk::is_set(guaranteed.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(xxml.yfilter);
}

std::string Native::Logging::Console::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Console::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Console::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filtered.is_set || is_set(filtered.yfilter)) leaf_name_data.push_back(filtered.get_name_leafdata());
    if (guaranteed.is_set || is_set(guaranteed.yfilter)) leaf_name_data.push_back(guaranteed.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (xxml.is_set || is_set(xxml.yfilter)) leaf_name_data.push_back(xxml.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Console::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discriminator")
    {
        for(auto const & c : discriminator)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Logging::Console::Discriminator>();
        c->parent = this;
        discriminator.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Console::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : discriminator)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Logging::Console::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filtered")
    {
        filtered = value;
        filtered.value_namespace = name_space;
        filtered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "guaranteed")
    {
        guaranteed = value;
        guaranteed.value_namespace = name_space;
        guaranteed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xxml")
    {
        xxml = value;
        xxml.value_namespace = name_space;
        xxml.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Console::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filtered")
    {
        filtered.yfilter = yfilter;
    }
    if(value_path == "guaranteed")
    {
        guaranteed.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "xxml")
    {
        xxml.yfilter = yfilter;
    }
}

bool Native::Logging::Console::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discriminator" || name == "filtered" || name == "guaranteed" || name == "severity" || name == "xxml")
        return true;
    return false;
}

Native::Logging::Console::Discriminator::Discriminator()
    :
    name{YType::str, "name"},
    severity{YType::str, "severity"}
{

    yang_name = "discriminator"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::Console::Discriminator::~Discriminator()
{
}

bool Native::Logging::Console::Discriminator::has_data() const
{
    return name.is_set
	|| severity.is_set;
}

bool Native::Logging::Console::Discriminator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string Native::Logging::Console::Discriminator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/console/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Console::Discriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discriminator" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Console::Discriminator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Console::Discriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Console::Discriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Console::Discriminator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Console::Discriminator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Native::Logging::Console::Discriminator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "severity")
        return true;
    return false;
}

Native::Logging::ConsoleConf::ConsoleConf()
    :
    console{YType::boolean, "console"}
{

    yang_name = "console-conf"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::ConsoleConf::~ConsoleConf()
{
}

bool Native::Logging::ConsoleConf::has_data() const
{
    return console.is_set;
}

bool Native::Logging::ConsoleConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(console.yfilter);
}

std::string Native::Logging::ConsoleConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::ConsoleConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::ConsoleConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (console.is_set || is_set(console.yfilter)) leaf_name_data.push_back(console.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::ConsoleConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::ConsoleConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::ConsoleConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "console")
    {
        console = value;
        console.value_namespace = name_space;
        console.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::ConsoleConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "console")
    {
        console.yfilter = yfilter;
    }
}

bool Native::Logging::ConsoleConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "console")
        return true;
    return false;
}

Native::Logging::Discriminator::Discriminator()
    :
    name{YType::str, "name"}
    	,
    msg_body(std::make_shared<Native::Logging::Discriminator::MsgBody>())
{
    msg_body->parent = this;

    yang_name = "discriminator"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::Discriminator::~Discriminator()
{
}

bool Native::Logging::Discriminator::has_data() const
{
    return name.is_set
	|| (msg_body !=  nullptr && msg_body->has_data());
}

bool Native::Logging::Discriminator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (msg_body !=  nullptr && msg_body->has_operation());
}

std::string Native::Logging::Discriminator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Discriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discriminator" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Discriminator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Discriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msg-body")
    {
        if(msg_body == nullptr)
        {
            msg_body = std::make_shared<Native::Logging::Discriminator::MsgBody>();
        }
        return msg_body;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Discriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(msg_body != nullptr)
    {
        children["msg-body"] = msg_body;
    }

    return children;
}

void Native::Logging::Discriminator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Discriminator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Logging::Discriminator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msg-body" || name == "name")
        return true;
    return false;
}

Native::Logging::Discriminator::MsgBody::MsgBody()
    :
    drops{YType::str, "drops"},
    includes{YType::str, "includes"}
{

    yang_name = "msg-body"; yang_parent_name = "discriminator"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Logging::Discriminator::MsgBody::~MsgBody()
{
}

bool Native::Logging::Discriminator::MsgBody::has_data() const
{
    return drops.is_set
	|| includes.is_set;
}

bool Native::Logging::Discriminator::MsgBody::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drops.yfilter)
	|| ydk::is_set(includes.yfilter);
}

std::string Native::Logging::Discriminator::MsgBody::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-body";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Discriminator::MsgBody::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drops.is_set || is_set(drops.yfilter)) leaf_name_data.push_back(drops.get_name_leafdata());
    if (includes.is_set || is_set(includes.yfilter)) leaf_name_data.push_back(includes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Discriminator::MsgBody::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Discriminator::MsgBody::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Discriminator::MsgBody::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drops")
    {
        drops = value;
        drops.value_namespace = name_space;
        drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "includes")
    {
        includes = value;
        includes.value_namespace = name_space;
        includes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Discriminator::MsgBody::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drops")
    {
        drops.yfilter = yfilter;
    }
    if(value_path == "includes")
    {
        includes.yfilter = yfilter;
    }
}

bool Native::Logging::Discriminator::MsgBody::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drops" || name == "includes")
        return true;
    return false;
}

Native::Logging::Esm::Esm()
    :
    config{YType::empty, "config"}
{

    yang_name = "esm"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::Esm::~Esm()
{
}

bool Native::Logging::Esm::has_data() const
{
    return config.is_set;
}

bool Native::Logging::Esm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(config.yfilter);
}

std::string Native::Logging::Esm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Esm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Esm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config.is_set || is_set(config.yfilter)) leaf_name_data.push_back(config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Esm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Esm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Esm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "config")
    {
        config = value;
        config.value_namespace = name_space;
        config.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Esm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "config")
    {
        config.yfilter = yfilter;
    }
}

bool Native::Logging::Esm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config")
        return true;
    return false;
}

Native::Logging::Event::Event()
    :
    link_status(std::make_shared<Native::Logging::Event::LinkStatus>())
{
    link_status->parent = this;

    yang_name = "event"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::Event::~Event()
{
}

bool Native::Logging::Event::has_data() const
{
    return (link_status !=  nullptr && link_status->has_data());
}

bool Native::Logging::Event::has_operation() const
{
    return is_set(yfilter)
	|| (link_status !=  nullptr && link_status->has_operation());
}

std::string Native::Logging::Event::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-status")
    {
        if(link_status == nullptr)
        {
            link_status = std::make_shared<Native::Logging::Event::LinkStatus>();
        }
        return link_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_status != nullptr)
    {
        children["link-status"] = link_status;
    }

    return children;
}

void Native::Logging::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Logging::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Logging::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status")
        return true;
    return false;
}

Native::Logging::Event::LinkStatus::LinkStatus()
    :
    boot{YType::empty, "boot"},
    default_{YType::empty, "default"},
    global{YType::empty, "global"}
{

    yang_name = "link-status"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::Event::LinkStatus::~LinkStatus()
{
}

bool Native::Logging::Event::LinkStatus::has_data() const
{
    return boot.is_set
	|| default_.is_set
	|| global.is_set;
}

bool Native::Logging::Event::LinkStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(boot.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(global.yfilter);
}

std::string Native::Logging::Event::LinkStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/event/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Event::LinkStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Event::LinkStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boot.is_set || is_set(boot.yfilter)) leaf_name_data.push_back(boot.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Event::LinkStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Event::LinkStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Event::LinkStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boot")
    {
        boot = value;
        boot.value_namespace = name_space;
        boot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Event::LinkStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boot")
    {
        boot.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
}

bool Native::Logging::Event::LinkStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boot" || name == "default" || name == "global")
        return true;
    return false;
}

Native::Logging::File::File()
    :
    max_size{YType::uint32, "max-size"},
    min_size{YType::uint32, "min-size"},
    name{YType::str, "name"},
    severity{YType::str, "severity"}
{

    yang_name = "file"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::File::~File()
{
}

bool Native::Logging::File::has_data() const
{
    return max_size.is_set
	|| min_size.is_set
	|| name.is_set
	|| severity.is_set;
}

bool Native::Logging::File::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_size.yfilter)
	|| ydk::is_set(min_size.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string Native::Logging::File::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::File::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::File::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_size.is_set || is_set(max_size.yfilter)) leaf_name_data.push_back(max_size.get_name_leafdata());
    if (min_size.is_set || is_set(min_size.yfilter)) leaf_name_data.push_back(min_size.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::File::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::File::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::File::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-size")
    {
        max_size = value;
        max_size.value_namespace = name_space;
        max_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-size")
    {
        min_size = value;
        min_size.value_namespace = name_space;
        min_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::File::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-size")
    {
        max_size.yfilter = yfilter;
    }
    if(value_path == "min-size")
    {
        min_size.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Native::Logging::File::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-size" || name == "min-size" || name == "name" || name == "severity")
        return true;
    return false;
}

Native::Logging::History::History()
    :
    severity_level{YType::str, "severity-level"},
    size{YType::uint16, "size"}
{

    yang_name = "history"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::History::~History()
{
}

bool Native::Logging::History::has_data() const
{
    return severity_level.is_set
	|| size.is_set;
}

bool Native::Logging::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(severity_level.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Logging::History::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity_level.is_set || is_set(severity_level.yfilter)) leaf_name_data.push_back(severity_level.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity-level")
    {
        severity_level = value;
        severity_level.value_namespace = name_space;
        severity_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity-level")
    {
        severity_level.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Logging::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "severity-level" || name == "size")
        return true;
    return false;
}

Native::Logging::Host::Host()
    :
    ipv6(std::make_shared<Native::Logging::Host::Ipv6>())
{
    ipv6->parent = this;

    yang_name = "host"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::Host::~Host()
{
}

bool Native::Logging::Host::has_data() const
{
    for (std::size_t index=0; index<ipv4_host_list.size(); index++)
    {
        if(ipv4_host_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_host_transport_list.size(); index++)
    {
        if(ipv4_host_transport_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_host_vrf_list.size(); index++)
    {
        if(ipv4_host_vrf_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_host_vrf_transport_list.size(); index++)
    {
        if(ipv4_host_vrf_transport_list[index]->has_data())
            return true;
    }
    return (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Logging::Host::has_operation() const
{
    for (std::size_t index=0; index<ipv4_host_list.size(); index++)
    {
        if(ipv4_host_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_host_transport_list.size(); index++)
    {
        if(ipv4_host_transport_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_host_vrf_list.size(); index++)
    {
        if(ipv4_host_vrf_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_host_vrf_transport_list.size(); index++)
    {
        if(ipv4_host_vrf_transport_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Logging::Host::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-host-list")
    {
        for(auto const & c : ipv4_host_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Logging::Host::Ipv4HostList>();
        c->parent = this;
        ipv4_host_list.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv4-host-transport-list")
    {
        for(auto const & c : ipv4_host_transport_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Logging::Host::Ipv4HostTransportList>();
        c->parent = this;
        ipv4_host_transport_list.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv4-host-vrf-list")
    {
        for(auto const & c : ipv4_host_vrf_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Logging::Host::Ipv4HostVrfList>();
        c->parent = this;
        ipv4_host_vrf_list.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv4-host-vrf-transport-list")
    {
        for(auto const & c : ipv4_host_vrf_transport_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Logging::Host::Ipv4HostVrfTransportList>();
        c->parent = this;
        ipv4_host_vrf_transport_list.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Logging::Host::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_host_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv4_host_transport_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv4_host_vrf_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv4_host_vrf_transport_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Logging::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Logging::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Logging::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-host-list" || name == "ipv4-host-transport-list" || name == "ipv4-host-vrf-list" || name == "ipv4-host-vrf-transport-list" || name == "ipv6")
        return true;
    return false;
}

Native::Logging::Host::Ipv4HostList::Ipv4HostList()
    :
    ipv4_host{YType::str, "ipv4-host"}
{

    yang_name = "ipv4-host-list"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::Host::Ipv4HostList::~Ipv4HostList()
{
}

bool Native::Logging::Host::Ipv4HostList::has_data() const
{
    return ipv4_host.is_set;
}

bool Native::Logging::Host::Ipv4HostList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_host.yfilter);
}

std::string Native::Logging::Host::Ipv4HostList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/host/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Host::Ipv4HostList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-host-list" <<"[ipv4-host='" <<ipv4_host <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv4HostList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_host.is_set || is_set(ipv4_host.yfilter)) leaf_name_data.push_back(ipv4_host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Host::Ipv4HostList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::Ipv4HostList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Host::Ipv4HostList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-host")
    {
        ipv4_host = value;
        ipv4_host.value_namespace = name_space;
        ipv4_host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Host::Ipv4HostList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-host")
    {
        ipv4_host.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv4HostList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-host")
        return true;
    return false;
}

Native::Logging::Host::Ipv4HostTransportList::Ipv4HostTransportList()
    :
    ipv4_host{YType::str, "ipv4-host"},
    discriminator{YType::str, "discriminator"}
    	,
    transport(std::make_shared<Native::Logging::Host::Ipv4HostTransportList::Transport>())
{
    transport->parent = this;

    yang_name = "ipv4-host-transport-list"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::Host::Ipv4HostTransportList::~Ipv4HostTransportList()
{
}

bool Native::Logging::Host::Ipv4HostTransportList::has_data() const
{
    return ipv4_host.is_set
	|| discriminator.is_set
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Logging::Host::Ipv4HostTransportList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_host.yfilter)
	|| ydk::is_set(discriminator.yfilter)
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Logging::Host::Ipv4HostTransportList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/host/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Host::Ipv4HostTransportList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-host-transport-list" <<"[ipv4-host='" <<ipv4_host <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv4HostTransportList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_host.is_set || is_set(ipv4_host.yfilter)) leaf_name_data.push_back(ipv4_host.get_name_leafdata());
    if (discriminator.is_set || is_set(discriminator.yfilter)) leaf_name_data.push_back(discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Host::Ipv4HostTransportList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Logging::Host::Ipv4HostTransportList::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::Ipv4HostTransportList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Logging::Host::Ipv4HostTransportList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-host")
    {
        ipv4_host = value;
        ipv4_host.value_namespace = name_space;
        ipv4_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discriminator")
    {
        discriminator = value;
        discriminator.value_namespace = name_space;
        discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Host::Ipv4HostTransportList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-host")
    {
        ipv4_host.yfilter = yfilter;
    }
    if(value_path == "discriminator")
    {
        discriminator.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv4HostTransportList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport" || name == "ipv4-host" || name == "discriminator")
        return true;
    return false;
}

Native::Logging::Host::Ipv4HostTransportList::Transport::Transport()
    :
    tcp(std::make_shared<Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp>())
	,udp(std::make_shared<Native::Logging::Host::Ipv4HostTransportList::Transport::Udp>())
{
    tcp->parent = this;
    udp->parent = this;

    yang_name = "transport"; yang_parent_name = "ipv4-host-transport-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Logging::Host::Ipv4HostTransportList::Transport::~Transport()
{
}

bool Native::Logging::Host::Ipv4HostTransportList::Transport::has_data() const
{
    return (tcp !=  nullptr && tcp->has_data())
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Logging::Host::Ipv4HostTransportList::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Logging::Host::Ipv4HostTransportList::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv4HostTransportList::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Host::Ipv4HostTransportList::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Logging::Host::Ipv4HostTransportList::Transport::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::Ipv4HostTransportList::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Logging::Host::Ipv4HostTransportList::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Logging::Host::Ipv4HostTransportList::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Logging::Host::Ipv4HostTransportList::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp" || name == "udp")
        return true;
    return false;
}

Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp::Tcp()
    :
    port{YType::uint16, "port"}
{

    yang_name = "tcp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp::~Tcp()
{
}

bool Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp::has_data() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp::has_operation() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto port_name_datas = port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), port_name_datas.begin(), port_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port.append(value);
    }
}

void Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Logging::Host::Ipv4HostTransportList::Transport::Udp::Udp()
    :
    port{YType::uint16, "port"}
{

    yang_name = "udp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Logging::Host::Ipv4HostTransportList::Transport::Udp::~Udp()
{
}

bool Native::Logging::Host::Ipv4HostTransportList::Transport::Udp::has_data() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Logging::Host::Ipv4HostTransportList::Transport::Udp::has_operation() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Logging::Host::Ipv4HostTransportList::Transport::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv4HostTransportList::Transport::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto port_name_datas = port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), port_name_datas.begin(), port_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Host::Ipv4HostTransportList::Transport::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::Ipv4HostTransportList::Transport::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Host::Ipv4HostTransportList::Transport::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port.append(value);
    }
}

void Native::Logging::Host::Ipv4HostTransportList::Transport::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv4HostTransportList::Transport::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Logging::Host::Ipv4HostVrfList::Ipv4HostVrfList()
    :
    ipv4_host{YType::str, "ipv4-host"},
    vrf{YType::str, "vrf"},
    discriminator{YType::str, "discriminator"}
{

    yang_name = "ipv4-host-vrf-list"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::Host::Ipv4HostVrfList::~Ipv4HostVrfList()
{
}

bool Native::Logging::Host::Ipv4HostVrfList::has_data() const
{
    return ipv4_host.is_set
	|| vrf.is_set
	|| discriminator.is_set;
}

bool Native::Logging::Host::Ipv4HostVrfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_host.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(discriminator.yfilter);
}

std::string Native::Logging::Host::Ipv4HostVrfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/host/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Host::Ipv4HostVrfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-host-vrf-list" <<"[ipv4-host='" <<ipv4_host <<"']" <<"[vrf='" <<vrf <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv4HostVrfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_host.is_set || is_set(ipv4_host.yfilter)) leaf_name_data.push_back(ipv4_host.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (discriminator.is_set || is_set(discriminator.yfilter)) leaf_name_data.push_back(discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Host::Ipv4HostVrfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::Ipv4HostVrfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Host::Ipv4HostVrfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-host")
    {
        ipv4_host = value;
        ipv4_host.value_namespace = name_space;
        ipv4_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discriminator")
    {
        discriminator = value;
        discriminator.value_namespace = name_space;
        discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Host::Ipv4HostVrfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-host")
    {
        ipv4_host.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "discriminator")
    {
        discriminator.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv4HostVrfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-host" || name == "vrf" || name == "discriminator")
        return true;
    return false;
}

Native::Logging::Host::Ipv4HostVrfTransportList::Ipv4HostVrfTransportList()
    :
    ipv4_host{YType::str, "ipv4-host"},
    vrf{YType::str, "vrf"},
    discriminator{YType::str, "discriminator"}
    	,
    transport(std::make_shared<Native::Logging::Host::Ipv4HostVrfTransportList::Transport>())
{
    transport->parent = this;

    yang_name = "ipv4-host-vrf-transport-list"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::Host::Ipv4HostVrfTransportList::~Ipv4HostVrfTransportList()
{
}

bool Native::Logging::Host::Ipv4HostVrfTransportList::has_data() const
{
    return ipv4_host.is_set
	|| vrf.is_set
	|| discriminator.is_set
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Logging::Host::Ipv4HostVrfTransportList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_host.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(discriminator.yfilter)
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Logging::Host::Ipv4HostVrfTransportList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/host/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Host::Ipv4HostVrfTransportList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-host-vrf-transport-list" <<"[ipv4-host='" <<ipv4_host <<"']" <<"[vrf='" <<vrf <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv4HostVrfTransportList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_host.is_set || is_set(ipv4_host.yfilter)) leaf_name_data.push_back(ipv4_host.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (discriminator.is_set || is_set(discriminator.yfilter)) leaf_name_data.push_back(discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Host::Ipv4HostVrfTransportList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Logging::Host::Ipv4HostVrfTransportList::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::Ipv4HostVrfTransportList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Logging::Host::Ipv4HostVrfTransportList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-host")
    {
        ipv4_host = value;
        ipv4_host.value_namespace = name_space;
        ipv4_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discriminator")
    {
        discriminator = value;
        discriminator.value_namespace = name_space;
        discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Host::Ipv4HostVrfTransportList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-host")
    {
        ipv4_host.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "discriminator")
    {
        discriminator.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv4HostVrfTransportList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport" || name == "ipv4-host" || name == "vrf" || name == "discriminator")
        return true;
    return false;
}

Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Transport()
    :
    tcp(std::make_shared<Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp>())
	,udp(std::make_shared<Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp>())
{
    tcp->parent = this;
    udp->parent = this;

    yang_name = "transport"; yang_parent_name = "ipv4-host-vrf-transport-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Logging::Host::Ipv4HostVrfTransportList::Transport::~Transport()
{
}

bool Native::Logging::Host::Ipv4HostVrfTransportList::Transport::has_data() const
{
    return (tcp !=  nullptr && tcp->has_data())
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Logging::Host::Ipv4HostVrfTransportList::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Logging::Host::Ipv4HostVrfTransportList::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv4HostVrfTransportList::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Host::Ipv4HostVrfTransportList::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::Ipv4HostVrfTransportList::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Logging::Host::Ipv4HostVrfTransportList::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Logging::Host::Ipv4HostVrfTransportList::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Logging::Host::Ipv4HostVrfTransportList::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp" || name == "udp")
        return true;
    return false;
}

Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp::Tcp()
    :
    port{YType::uint16, "port"}
{

    yang_name = "tcp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp::~Tcp()
{
}

bool Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp::has_data() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp::has_operation() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto port_name_datas = port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), port_name_datas.begin(), port_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port.append(value);
    }
}

void Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp::Udp()
    :
    port{YType::uint16, "port"}
{

    yang_name = "udp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp::~Udp()
{
}

bool Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp::has_data() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp::has_operation() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto port_name_datas = port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), port_name_datas.begin(), port_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port.append(value);
    }
}

void Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Logging::Host::Ipv6::Ipv6()
{

    yang_name = "ipv6"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::Host::Ipv6::~Ipv6()
{
}

bool Native::Logging::Host::Ipv6::has_data() const
{
    for (std::size_t index=0; index<ipv6_host_list.size(); index++)
    {
        if(ipv6_host_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_host_transport_list.size(); index++)
    {
        if(ipv6_host_transport_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_host_vrf_list.size(); index++)
    {
        if(ipv6_host_vrf_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_host_vrf_transport_list.size(); index++)
    {
        if(ipv6_host_vrf_transport_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Logging::Host::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<ipv6_host_list.size(); index++)
    {
        if(ipv6_host_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_host_transport_list.size(); index++)
    {
        if(ipv6_host_transport_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_host_vrf_list.size(); index++)
    {
        if(ipv6_host_vrf_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_host_vrf_transport_list.size(); index++)
    {
        if(ipv6_host_vrf_transport_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Logging::Host::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/host/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Host::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Host::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-host-list")
    {
        for(auto const & c : ipv6_host_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostList>();
        c->parent = this;
        ipv6_host_list.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6-host-transport-list")
    {
        for(auto const & c : ipv6_host_transport_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostTransportList>();
        c->parent = this;
        ipv6_host_transport_list.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6-host-vrf-list")
    {
        for(auto const & c : ipv6_host_vrf_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostVrfList>();
        c->parent = this;
        ipv6_host_vrf_list.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6-host-vrf-transport-list")
    {
        for(auto const & c : ipv6_host_vrf_transport_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList>();
        c->parent = this;
        ipv6_host_vrf_transport_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_host_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6_host_transport_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6_host_vrf_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6_host_vrf_transport_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Logging::Host::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Logging::Host::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Logging::Host::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-host-list" || name == "ipv6-host-transport-list" || name == "ipv6-host-vrf-list" || name == "ipv6-host-vrf-transport-list")
        return true;
    return false;
}

Native::Logging::Host::Ipv6::Ipv6HostList::Ipv6HostList()
    :
    ipv6_host{YType::str, "ipv6-host"}
{

    yang_name = "ipv6-host-list"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::Host::Ipv6::Ipv6HostList::~Ipv6HostList()
{
}

bool Native::Logging::Host::Ipv6::Ipv6HostList::has_data() const
{
    return ipv6_host.is_set;
}

bool Native::Logging::Host::Ipv6::Ipv6HostList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_host.yfilter);
}

std::string Native::Logging::Host::Ipv6::Ipv6HostList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/host/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Host::Ipv6::Ipv6HostList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-host-list" <<"[ipv6-host='" <<ipv6_host <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv6::Ipv6HostList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_host.is_set || is_set(ipv6_host.yfilter)) leaf_name_data.push_back(ipv6_host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Host::Ipv6::Ipv6HostList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::Ipv6::Ipv6HostList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Host::Ipv6::Ipv6HostList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-host")
    {
        ipv6_host = value;
        ipv6_host.value_namespace = name_space;
        ipv6_host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Host::Ipv6::Ipv6HostList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-host")
    {
        ipv6_host.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv6::Ipv6HostList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-host")
        return true;
    return false;
}

Native::Logging::Host::Ipv6::Ipv6HostTransportList::Ipv6HostTransportList()
    :
    ipv6_host{YType::str, "ipv6-host"},
    discriminator{YType::str, "discriminator"}
    	,
    transport(std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport>())
{
    transport->parent = this;

    yang_name = "ipv6-host-transport-list"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::Host::Ipv6::Ipv6HostTransportList::~Ipv6HostTransportList()
{
}

bool Native::Logging::Host::Ipv6::Ipv6HostTransportList::has_data() const
{
    return ipv6_host.is_set
	|| discriminator.is_set
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Logging::Host::Ipv6::Ipv6HostTransportList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_host.yfilter)
	|| ydk::is_set(discriminator.yfilter)
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Logging::Host::Ipv6::Ipv6HostTransportList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/host/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Host::Ipv6::Ipv6HostTransportList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-host-transport-list" <<"[ipv6-host='" <<ipv6_host <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv6::Ipv6HostTransportList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_host.is_set || is_set(ipv6_host.yfilter)) leaf_name_data.push_back(ipv6_host.get_name_leafdata());
    if (discriminator.is_set || is_set(discriminator.yfilter)) leaf_name_data.push_back(discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Host::Ipv6::Ipv6HostTransportList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::Ipv6::Ipv6HostTransportList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Logging::Host::Ipv6::Ipv6HostTransportList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-host")
    {
        ipv6_host = value;
        ipv6_host.value_namespace = name_space;
        ipv6_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discriminator")
    {
        discriminator = value;
        discriminator.value_namespace = name_space;
        discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Host::Ipv6::Ipv6HostTransportList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-host")
    {
        ipv6_host.yfilter = yfilter;
    }
    if(value_path == "discriminator")
    {
        discriminator.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv6::Ipv6HostTransportList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport" || name == "ipv6-host" || name == "discriminator")
        return true;
    return false;
}

Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Transport()
    :
    tcp(std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp>())
	,udp(std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp>())
{
    tcp->parent = this;
    udp->parent = this;

    yang_name = "transport"; yang_parent_name = "ipv6-host-transport-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::~Transport()
{
}

bool Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::has_data() const
{
    return (tcp !=  nullptr && tcp->has_data())
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp" || name == "udp")
        return true;
    return false;
}

Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp::Tcp()
    :
    port{YType::uint16, "port"}
{

    yang_name = "tcp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp::~Tcp()
{
}

bool Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp::has_data() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp::has_operation() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto port_name_datas = port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), port_name_datas.begin(), port_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port.append(value);
    }
}

void Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

const Enum::YLeaf Native::Line::Console::Ip::NetmaskFormat::Format::bit_count {0, "bit-count"};
const Enum::YLeaf Native::Line::Console::Ip::NetmaskFormat::Format::decimal {1, "decimal"};
const Enum::YLeaf Native::Line::Console::Ip::NetmaskFormat::Format::hexadecimal {2, "hexadecimal"};

const Enum::YLeaf Native::Line::Console::Ipv6::AccessClass::AccessClass_::EnumerationInOut::in {0, "in"};
const Enum::YLeaf Native::Line::Console::Ipv6::AccessClass::AccessClass_::EnumerationInOut::out {1, "out"};

const Enum::YLeaf Native::Line::Console::Password::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Line::Console::Password::Type::Y_7 {1, "7"};

const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::all {1, "all"};
const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::lat {3, "lat"};
const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::mop {4, "mop"};
const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::none {6, "none"};
const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::pad {7, "pad"};
const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::v120 {12, "v120"};

const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::all {1, "all"};
const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::lat {3, "lat"};
const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::mop {4, "mop"};
const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::none {6, "none"};
const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::pad {7, "pad"};
const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::v120 {12, "v120"};

const Enum::YLeaf Native::Line::Console::Transport::Preferred::Protocol::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::Protocol::lat {1, "lat"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::Protocol::mop {2, "mop"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::Protocol::nasi {3, "nasi"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::Protocol::none {4, "none"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::Protocol::pad {5, "pad"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::Protocol::rlogin {6, "rlogin"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::Protocol::ssh {7, "ssh"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::Protocol::telnet {8, "telnet"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::Protocol::udptn {9, "udptn"};

const Enum::YLeaf Native::Line::LineList::Stopbits::Y_1 {0, "1"};
const Enum::YLeaf Native::Line::LineList::Stopbits::Y_1__DOT__5 {1, "1.5"};
const Enum::YLeaf Native::Line::LineList::Stopbits::Y_2 {2, "2"};

const Enum::YLeaf Native::Line::LineList::AccessClass::AcccessList::Direction::in {0, "in"};
const Enum::YLeaf Native::Line::LineList::AccessClass::AcccessList::Direction::out {1, "out"};

const Enum::YLeaf Native::Line::LineList::EscapeCharacter::Char_::BREAK {0, "BREAK"};
const Enum::YLeaf Native::Line::LineList::EscapeCharacter::Char_::DEFAULT {1, "DEFAULT"};
const Enum::YLeaf Native::Line::LineList::EscapeCharacter::Char_::NONE {2, "NONE"};

const Enum::YLeaf Native::Line::LineList::Ip::NetmaskFormat::Format::bit_count {0, "bit-count"};
const Enum::YLeaf Native::Line::LineList::Ip::NetmaskFormat::Format::decimal {1, "decimal"};
const Enum::YLeaf Native::Line::LineList::Ip::NetmaskFormat::Format::hexadecimal {2, "hexadecimal"};

const Enum::YLeaf Native::Line::LineList::Ipv6::AccessClass::AccessClass_::EnumerationInOut::in {0, "in"};
const Enum::YLeaf Native::Line::LineList::Ipv6::AccessClass::AccessClass_::EnumerationInOut::out {1, "out"};

const Enum::YLeaf Native::Line::LineList::Password::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Line::LineList::Password::Type::Y_7 {1, "7"};

const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::all {1, "all"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::lat {3, "lat"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::mop {4, "mop"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::none {6, "none"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::pad {7, "pad"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::v120 {12, "v120"};

const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::all {1, "all"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::lat {3, "lat"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::mop {4, "mop"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::none {6, "none"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::pad {7, "pad"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::v120 {12, "v120"};

const Enum::YLeaf Native::Line::LineList::Transport::Preferred::Protocol::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::Protocol::lat {1, "lat"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::Protocol::mop {2, "mop"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::Protocol::nasi {3, "nasi"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::Protocol::none {4, "none"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::Protocol::pad {5, "pad"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::Protocol::rlogin {6, "rlogin"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::Protocol::ssh {7, "ssh"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::Protocol::telnet {8, "telnet"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::Protocol::udptn {9, "udptn"};

const Enum::YLeaf Native::Line::Vty::Stopbits::Y_1 {0, "1"};
const Enum::YLeaf Native::Line::Vty::Stopbits::Y_1__DOT__5 {1, "1.5"};
const Enum::YLeaf Native::Line::Vty::Stopbits::Y_2 {2, "2"};

const Enum::YLeaf Native::Line::Vty::AccessClass::AcccessList::Direction::in {0, "in"};
const Enum::YLeaf Native::Line::Vty::AccessClass::AcccessList::Direction::out {1, "out"};

const Enum::YLeaf Native::Line::Vty::EscapeCharacter::Char_::BREAK {0, "BREAK"};
const Enum::YLeaf Native::Line::Vty::EscapeCharacter::Char_::DEFAULT {1, "DEFAULT"};
const Enum::YLeaf Native::Line::Vty::EscapeCharacter::Char_::NONE {2, "NONE"};

const Enum::YLeaf Native::Line::Vty::Ip::NetmaskFormat::Format::bit_count {0, "bit-count"};
const Enum::YLeaf Native::Line::Vty::Ip::NetmaskFormat::Format::decimal {1, "decimal"};
const Enum::YLeaf Native::Line::Vty::Ip::NetmaskFormat::Format::hexadecimal {2, "hexadecimal"};

const Enum::YLeaf Native::Line::Vty::Ipv6::AccessClass::AccessClass_::EnumerationInOut::in {0, "in"};
const Enum::YLeaf Native::Line::Vty::Ipv6::AccessClass::AccessClass_::EnumerationInOut::out {1, "out"};

const Enum::YLeaf Native::Line::Vty::Password::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Line::Vty::Password::Type::Y_7 {1, "7"};

const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::all {1, "all"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::lat {3, "lat"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::mop {4, "mop"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::none {6, "none"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::pad {7, "pad"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::v120 {12, "v120"};

const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::all {1, "all"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::lat {3, "lat"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::mop {4, "mop"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::none {6, "none"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::pad {7, "pad"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::v120 {12, "v120"};

const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::lat {1, "lat"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::mop {2, "mop"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::nasi {3, "nasi"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::none {4, "none"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::pad {5, "pad"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::rlogin {6, "rlogin"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::ssh {7, "ssh"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::telnet {8, "telnet"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::udptn {9, "udptn"};

const Enum::YLeaf Native::Logging::Alarm::critical {0, "critical"};
const Enum::YLeaf Native::Logging::Alarm::informational {1, "informational"};
const Enum::YLeaf Native::Logging::Alarm::major {2, "major"};
const Enum::YLeaf Native::Logging::Alarm::minor {3, "minor"};

const Enum::YLeaf Native::Logging::Facility::auth {0, "auth"};
const Enum::YLeaf Native::Logging::Facility::cron {1, "cron"};
const Enum::YLeaf Native::Logging::Facility::daemon {2, "daemon"};
const Enum::YLeaf Native::Logging::Facility::kern {3, "kern"};
const Enum::YLeaf Native::Logging::Facility::local0 {4, "local0"};
const Enum::YLeaf Native::Logging::Facility::local1 {5, "local1"};
const Enum::YLeaf Native::Logging::Facility::local2 {6, "local2"};
const Enum::YLeaf Native::Logging::Facility::local3 {7, "local3"};
const Enum::YLeaf Native::Logging::Facility::local4 {8, "local4"};
const Enum::YLeaf Native::Logging::Facility::local5 {9, "local5"};
const Enum::YLeaf Native::Logging::Facility::local6 {10, "local6"};
const Enum::YLeaf Native::Logging::Facility::local7 {11, "local7"};
const Enum::YLeaf Native::Logging::Facility::lpr {12, "lpr"};
const Enum::YLeaf Native::Logging::Facility::mail {13, "mail"};
const Enum::YLeaf Native::Logging::Facility::news {14, "news"};
const Enum::YLeaf Native::Logging::Facility::sys10 {15, "sys10"};
const Enum::YLeaf Native::Logging::Facility::sys11 {16, "sys11"};
const Enum::YLeaf Native::Logging::Facility::sys12 {17, "sys12"};
const Enum::YLeaf Native::Logging::Facility::sys13 {18, "sys13"};
const Enum::YLeaf Native::Logging::Facility::sys14 {19, "sys14"};
const Enum::YLeaf Native::Logging::Facility::sys9 {20, "sys9"};
const Enum::YLeaf Native::Logging::Facility::syslog {21, "syslog"};
const Enum::YLeaf Native::Logging::Facility::user {22, "user"};
const Enum::YLeaf Native::Logging::Facility::uucp {23, "uucp"};

const Enum::YLeaf Native::Logging::History::SeverityLevel::alerts {0, "alerts"};
const Enum::YLeaf Native::Logging::History::SeverityLevel::critical {1, "critical"};
const Enum::YLeaf Native::Logging::History::SeverityLevel::debugging {2, "debugging"};
const Enum::YLeaf Native::Logging::History::SeverityLevel::emergencies {3, "emergencies"};
const Enum::YLeaf Native::Logging::History::SeverityLevel::errors {4, "errors"};
const Enum::YLeaf Native::Logging::History::SeverityLevel::informational {5, "informational"};
const Enum::YLeaf Native::Logging::History::SeverityLevel::notifications {6, "notifications"};
const Enum::YLeaf Native::Logging::History::SeverityLevel::warnings {7, "warnings"};


}
}

