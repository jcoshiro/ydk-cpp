
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_92.hpp"
#include "Cisco_IOS_XE_native_93.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction::ExceedAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"},
    table{YType::str, "table"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-prec-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction::has_data() const
{
    return set_prec_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_prec_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.yfilter)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit = value;
        set_prec_transmit.value_namespace = name_space;
        set_prec_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetPrecTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-prec-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedSetQosTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-qos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::~ExceedSetQosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-qos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction::ExceedAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-qos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction::has_data() const
{
    return set_qos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_qos_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.yfilter)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
        set_qos_transmit.value_namespace = name_space;
        set_qos_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedSetQosTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-qos-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::~ExceedTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction::ExceedAction()
    :
    transmit{YType::empty, "transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction::has_data() const
{
    return transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ExceedTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateDrop()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-drop"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::~ViolateDrop()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction::ViolateAction()
    :
    drop{YType::empty, "drop"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-drop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction::has_data() const
{
    return drop.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateDrop::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateSetClpTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-clp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::~ViolateSetClpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-clp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction::ViolateAction()
    :
    set_clp_transmit{YType::empty, "set-clp-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-clp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction::has_data() const
{
    return set_clp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_clp_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_clp_transmit.is_set || is_set(set_clp_transmit.yfilter)) leaf_name_data.push_back(set_clp_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit = value;
        set_clp_transmit.value_namespace = name_space;
        set_clp_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetClpTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-clp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateSetCosTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-cos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::~ViolateSetCosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-cos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction::ViolateAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"},
    table{YType::str, "table"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-cos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction::has_data() const
{
    return set_cos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_cos_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.yfilter)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit = value;
        set_cos_transmit.value_namespace = name_space;
        set_cos_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetCosTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-cos-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateSetDiscardClassTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-discard-class-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::~ViolateSetDiscardClassTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-discard-class-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction::ViolateAction()
    :
    set_discard_class_transmit{YType::uint8, "set-discard-class-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-discard-class-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction::has_data() const
{
    return set_discard_class_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_discard_class_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_discard_class_transmit.is_set || is_set(set_discard_class_transmit.yfilter)) leaf_name_data.push_back(set_discard_class_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit = value;
        set_discard_class_transmit.value_namespace = name_space;
        set_discard_class_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDiscardClassTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-discard-class-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateSetDscpTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-dscp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::~ViolateSetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-dscp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction::ViolateAction()
    :
    set_dscp_transmit{YType::str, "set-dscp-transmit"},
    table{YType::str, "table"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-dscp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction::has_data() const
{
    return set_dscp_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_dscp_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.yfilter)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit = value;
        set_dscp_transmit.value_namespace = name_space;
        set_dscp_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetDscpTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-dscp-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateSetFrdeTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-frde-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::~ViolateSetFrdeTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-frde-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction::ViolateAction()
    :
    set_frde_transmit{YType::empty, "set-frde-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-frde-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction::has_data() const
{
    return set_frde_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_frde_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_frde_transmit.is_set || is_set(set_frde_transmit.yfilter)) leaf_name_data.push_back(set_frde_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit = value;
        set_frde_transmit.value_namespace = name_space;
        set_frde_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetFrdeTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-frde-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateSetMplsExpImpositionTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-mpls-exp-imposition-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::~ViolateSetMplsExpImpositionTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-mpls-exp-imposition-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::ViolateAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-mpls-exp-imposition-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_imposition_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
        set_mpls_exp_imposition_transmit.value_namespace = name_space;
        set_mpls_exp_imposition_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-imposition-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateSetMplsExpTopmostTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-mpls-exp-topmost-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::~ViolateSetMplsExpTopmostTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-mpls-exp-topmost-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::ViolateAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-mpls-exp-topmost-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_topmost_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
        set_mpls_exp_topmost_transmit.value_namespace = name_space;
        set_mpls_exp_topmost_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-topmost-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateSetPrecTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-prec-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::~ViolateSetPrecTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-prec-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction::ViolateAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"},
    table{YType::str, "table"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-prec-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction::has_data() const
{
    return set_prec_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_prec_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.yfilter)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit = value;
        set_prec_transmit.value_namespace = name_space;
        set_prec_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetPrecTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-prec-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateSetQosTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-qos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::~ViolateSetQosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-qos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction::ViolateAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-qos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction::has_data() const
{
    return set_qos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_qos_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.yfilter)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
        set_qos_transmit.value_namespace = name_space;
        set_qos_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateSetQosTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-qos-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::~ViolateTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction::ViolateAction()
    :
    transmit{YType::empty, "transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction::has_data() const
{
    return transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::Actions::ViolateTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakBurstMs::PeakBurstMs()
    :
    ms{YType::empty, "ms"}
{

    yang_name = "peak-burst-ms"; yang_parent_name = "percent"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakBurstMs::~PeakBurstMs()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakBurstMs::has_data() const
{
    return ms.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakBurstMs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ms.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakBurstMs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peak-burst-ms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakBurstMs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakBurstMs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakBurstMs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakBurstMs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakBurstMs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakBurstMs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ms")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakRate::PeakRate()
    :
    percent{YType::uint8, "percent"}
{

    yang_name = "peak-rate"; yang_parent_name = "percent"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakRate::~PeakRate()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakRate::has_data() const
{
    return percent.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peak-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent::Police::Rate::Percent::PeakRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::PoliceRateUnit()
    :
    police(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police>())
{
    police->parent = this;

    yang_name = "police-rate-unit"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::~PoliceRateUnit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::has_data() const
{
    return (police !=  nullptr && police->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::has_operation() const
{
    return is_set(yfilter)
	|| (police !=  nullptr && police->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-rate-unit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police>();
        }
        return police;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(police != nullptr)
    {
        children["police"] = police;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "police")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Police()
    :
    rate(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate>())
{
    rate->parent = this;

    yang_name = "police"; yang_parent_name = "police-rate-unit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::~Police()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::has_data() const
{
    return (rate !=  nullptr && rate->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::has_operation() const
{
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Rate()
    :
    units{YType::uint64, "units"},
    xps{YType::enumeration, "xps"}
    	,
    actions(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions>())
	,burst(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Burst>())
	,peak_burst(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakBurst>())
	,peak_rate(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakRate>())
{
    actions->parent = this;
    burst->parent = this;
    peak_burst->parent = this;
    peak_rate->parent = this;

    yang_name = "rate"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::~Rate()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::has_data() const
{
    return units.is_set
	|| xps.is_set
	|| (actions !=  nullptr && actions->has_data())
	|| (burst !=  nullptr && burst->has_data())
	|| (peak_burst !=  nullptr && peak_burst->has_data())
	|| (peak_rate !=  nullptr && peak_rate->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(units.yfilter)
	|| ydk::is_set(xps.yfilter)
	|| (actions !=  nullptr && actions->has_operation())
	|| (burst !=  nullptr && burst->has_operation())
	|| (peak_burst !=  nullptr && peak_burst->has_operation())
	|| (peak_rate !=  nullptr && peak_rate->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());
    if (xps.is_set || is_set(xps.yfilter)) leaf_name_data.push_back(xps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actions")
    {
        if(actions == nullptr)
        {
            actions = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions>();
        }
        return actions;
    }

    if(child_yang_name == "burst")
    {
        if(burst == nullptr)
        {
            burst = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Burst>();
        }
        return burst;
    }

    if(child_yang_name == "peak-burst")
    {
        if(peak_burst == nullptr)
        {
            peak_burst = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakBurst>();
        }
        return peak_burst;
    }

    if(child_yang_name == "peak-rate")
    {
        if(peak_rate == nullptr)
        {
            peak_rate = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakRate>();
        }
        return peak_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(actions != nullptr)
    {
        children["actions"] = actions;
    }

    if(burst != nullptr)
    {
        children["burst"] = burst;
    }

    if(peak_burst != nullptr)
    {
        children["peak-burst"] = peak_burst;
    }

    if(peak_rate != nullptr)
    {
        children["peak-rate"] = peak_rate;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xps")
    {
        xps = value;
        xps.value_namespace = name_space;
        xps.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
    if(value_path == "xps")
    {
        xps.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actions" || name == "burst" || name == "peak-burst" || name == "peak-rate" || name == "units" || name == "xps")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::Actions()
    :
    conform_drop(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop>())
	,conform_set_clp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit>())
	,conform_set_cos_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit>())
	,conform_set_cos_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable>())
	,conform_set_discard_class_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit>())
	,conform_set_dscp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit>())
	,conform_set_dscp_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable>())
	,conform_set_frde_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit>())
	,conform_set_mpls_exp_imposition_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit>())
	,conform_set_mpls_exp_imposition_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable>())
	,conform_set_mpls_exp_topmost_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit>())
	,conform_set_mpls_exp_topmost_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable>())
	,conform_set_prec_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit>())
	,conform_set_prec_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable>())
	,conform_set_qos_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit>())
	,conform_set_qos_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable>())
	,conform_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit>())
	,exceed_drop(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop>())
	,exceed_dscp(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp>())
	,exceed_set_clp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit>())
	,exceed_set_cos_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit>())
	,exceed_set_discard_class_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit>())
	,exceed_set_dscp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit>())
	,exceed_set_dscp_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable>())
	,exceed_set_frde_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit>())
	,exceed_set_mpls_exp_imposition_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit>())
	,exceed_set_mpls_exp_topmost_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit>())
	,exceed_set_prec_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit>())
	,exceed_set_qos_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit>())
	,exceed_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit>())
	,violate_drop(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop>())
	,violate_set_clp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit>())
	,violate_set_cos_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit>())
	,violate_set_discard_class_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit>())
	,violate_set_dscp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit>())
	,violate_set_frde_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit>())
	,violate_set_mpls_exp_imposition_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit>())
	,violate_set_mpls_exp_topmost_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit>())
	,violate_set_prec_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit>())
	,violate_set_qos_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit>())
	,violate_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit>())
{
    conform_drop->parent = this;
    conform_set_clp_transmit->parent = this;
    conform_set_cos_transmit->parent = this;
    conform_set_cos_transmit_table->parent = this;
    conform_set_discard_class_transmit->parent = this;
    conform_set_dscp_transmit->parent = this;
    conform_set_dscp_transmit_table->parent = this;
    conform_set_frde_transmit->parent = this;
    conform_set_mpls_exp_imposition_transmit->parent = this;
    conform_set_mpls_exp_imposition_transmit_table->parent = this;
    conform_set_mpls_exp_topmost_transmit->parent = this;
    conform_set_mpls_exp_topmost_transmit_table->parent = this;
    conform_set_prec_transmit->parent = this;
    conform_set_prec_transmit_table->parent = this;
    conform_set_qos_transmit->parent = this;
    conform_set_qos_transmit_table->parent = this;
    conform_transmit->parent = this;
    exceed_drop->parent = this;
    exceed_dscp->parent = this;
    exceed_set_clp_transmit->parent = this;
    exceed_set_cos_transmit->parent = this;
    exceed_set_discard_class_transmit->parent = this;
    exceed_set_dscp_transmit->parent = this;
    exceed_set_dscp_transmit_table->parent = this;
    exceed_set_frde_transmit->parent = this;
    exceed_set_mpls_exp_imposition_transmit->parent = this;
    exceed_set_mpls_exp_topmost_transmit->parent = this;
    exceed_set_prec_transmit->parent = this;
    exceed_set_qos_transmit->parent = this;
    exceed_transmit->parent = this;
    violate_drop->parent = this;
    violate_set_clp_transmit->parent = this;
    violate_set_cos_transmit->parent = this;
    violate_set_discard_class_transmit->parent = this;
    violate_set_dscp_transmit->parent = this;
    violate_set_frde_transmit->parent = this;
    violate_set_mpls_exp_imposition_transmit->parent = this;
    violate_set_mpls_exp_topmost_transmit->parent = this;
    violate_set_prec_transmit->parent = this;
    violate_set_qos_transmit->parent = this;
    violate_transmit->parent = this;

    yang_name = "actions"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::~Actions()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::has_data() const
{
    return (conform_drop !=  nullptr && conform_drop->has_data())
	|| (conform_set_clp_transmit !=  nullptr && conform_set_clp_transmit->has_data())
	|| (conform_set_cos_transmit !=  nullptr && conform_set_cos_transmit->has_data())
	|| (conform_set_cos_transmit_table !=  nullptr && conform_set_cos_transmit_table->has_data())
	|| (conform_set_discard_class_transmit !=  nullptr && conform_set_discard_class_transmit->has_data())
	|| (conform_set_dscp_transmit !=  nullptr && conform_set_dscp_transmit->has_data())
	|| (conform_set_dscp_transmit_table !=  nullptr && conform_set_dscp_transmit_table->has_data())
	|| (conform_set_frde_transmit !=  nullptr && conform_set_frde_transmit->has_data())
	|| (conform_set_mpls_exp_imposition_transmit !=  nullptr && conform_set_mpls_exp_imposition_transmit->has_data())
	|| (conform_set_mpls_exp_imposition_transmit_table !=  nullptr && conform_set_mpls_exp_imposition_transmit_table->has_data())
	|| (conform_set_mpls_exp_topmost_transmit !=  nullptr && conform_set_mpls_exp_topmost_transmit->has_data())
	|| (conform_set_mpls_exp_topmost_transmit_table !=  nullptr && conform_set_mpls_exp_topmost_transmit_table->has_data())
	|| (conform_set_prec_transmit !=  nullptr && conform_set_prec_transmit->has_data())
	|| (conform_set_prec_transmit_table !=  nullptr && conform_set_prec_transmit_table->has_data())
	|| (conform_set_qos_transmit !=  nullptr && conform_set_qos_transmit->has_data())
	|| (conform_set_qos_transmit_table !=  nullptr && conform_set_qos_transmit_table->has_data())
	|| (conform_transmit !=  nullptr && conform_transmit->has_data())
	|| (exceed_drop !=  nullptr && exceed_drop->has_data())
	|| (exceed_dscp !=  nullptr && exceed_dscp->has_data())
	|| (exceed_set_clp_transmit !=  nullptr && exceed_set_clp_transmit->has_data())
	|| (exceed_set_cos_transmit !=  nullptr && exceed_set_cos_transmit->has_data())
	|| (exceed_set_discard_class_transmit !=  nullptr && exceed_set_discard_class_transmit->has_data())
	|| (exceed_set_dscp_transmit !=  nullptr && exceed_set_dscp_transmit->has_data())
	|| (exceed_set_dscp_transmit_table !=  nullptr && exceed_set_dscp_transmit_table->has_data())
	|| (exceed_set_frde_transmit !=  nullptr && exceed_set_frde_transmit->has_data())
	|| (exceed_set_mpls_exp_imposition_transmit !=  nullptr && exceed_set_mpls_exp_imposition_transmit->has_data())
	|| (exceed_set_mpls_exp_topmost_transmit !=  nullptr && exceed_set_mpls_exp_topmost_transmit->has_data())
	|| (exceed_set_prec_transmit !=  nullptr && exceed_set_prec_transmit->has_data())
	|| (exceed_set_qos_transmit !=  nullptr && exceed_set_qos_transmit->has_data())
	|| (exceed_transmit !=  nullptr && exceed_transmit->has_data())
	|| (violate_drop !=  nullptr && violate_drop->has_data())
	|| (violate_set_clp_transmit !=  nullptr && violate_set_clp_transmit->has_data())
	|| (violate_set_cos_transmit !=  nullptr && violate_set_cos_transmit->has_data())
	|| (violate_set_discard_class_transmit !=  nullptr && violate_set_discard_class_transmit->has_data())
	|| (violate_set_dscp_transmit !=  nullptr && violate_set_dscp_transmit->has_data())
	|| (violate_set_frde_transmit !=  nullptr && violate_set_frde_transmit->has_data())
	|| (violate_set_mpls_exp_imposition_transmit !=  nullptr && violate_set_mpls_exp_imposition_transmit->has_data())
	|| (violate_set_mpls_exp_topmost_transmit !=  nullptr && violate_set_mpls_exp_topmost_transmit->has_data())
	|| (violate_set_prec_transmit !=  nullptr && violate_set_prec_transmit->has_data())
	|| (violate_set_qos_transmit !=  nullptr && violate_set_qos_transmit->has_data())
	|| (violate_transmit !=  nullptr && violate_transmit->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::has_operation() const
{
    return is_set(yfilter)
	|| (conform_drop !=  nullptr && conform_drop->has_operation())
	|| (conform_set_clp_transmit !=  nullptr && conform_set_clp_transmit->has_operation())
	|| (conform_set_cos_transmit !=  nullptr && conform_set_cos_transmit->has_operation())
	|| (conform_set_cos_transmit_table !=  nullptr && conform_set_cos_transmit_table->has_operation())
	|| (conform_set_discard_class_transmit !=  nullptr && conform_set_discard_class_transmit->has_operation())
	|| (conform_set_dscp_transmit !=  nullptr && conform_set_dscp_transmit->has_operation())
	|| (conform_set_dscp_transmit_table !=  nullptr && conform_set_dscp_transmit_table->has_operation())
	|| (conform_set_frde_transmit !=  nullptr && conform_set_frde_transmit->has_operation())
	|| (conform_set_mpls_exp_imposition_transmit !=  nullptr && conform_set_mpls_exp_imposition_transmit->has_operation())
	|| (conform_set_mpls_exp_imposition_transmit_table !=  nullptr && conform_set_mpls_exp_imposition_transmit_table->has_operation())
	|| (conform_set_mpls_exp_topmost_transmit !=  nullptr && conform_set_mpls_exp_topmost_transmit->has_operation())
	|| (conform_set_mpls_exp_topmost_transmit_table !=  nullptr && conform_set_mpls_exp_topmost_transmit_table->has_operation())
	|| (conform_set_prec_transmit !=  nullptr && conform_set_prec_transmit->has_operation())
	|| (conform_set_prec_transmit_table !=  nullptr && conform_set_prec_transmit_table->has_operation())
	|| (conform_set_qos_transmit !=  nullptr && conform_set_qos_transmit->has_operation())
	|| (conform_set_qos_transmit_table !=  nullptr && conform_set_qos_transmit_table->has_operation())
	|| (conform_transmit !=  nullptr && conform_transmit->has_operation())
	|| (exceed_drop !=  nullptr && exceed_drop->has_operation())
	|| (exceed_dscp !=  nullptr && exceed_dscp->has_operation())
	|| (exceed_set_clp_transmit !=  nullptr && exceed_set_clp_transmit->has_operation())
	|| (exceed_set_cos_transmit !=  nullptr && exceed_set_cos_transmit->has_operation())
	|| (exceed_set_discard_class_transmit !=  nullptr && exceed_set_discard_class_transmit->has_operation())
	|| (exceed_set_dscp_transmit !=  nullptr && exceed_set_dscp_transmit->has_operation())
	|| (exceed_set_dscp_transmit_table !=  nullptr && exceed_set_dscp_transmit_table->has_operation())
	|| (exceed_set_frde_transmit !=  nullptr && exceed_set_frde_transmit->has_operation())
	|| (exceed_set_mpls_exp_imposition_transmit !=  nullptr && exceed_set_mpls_exp_imposition_transmit->has_operation())
	|| (exceed_set_mpls_exp_topmost_transmit !=  nullptr && exceed_set_mpls_exp_topmost_transmit->has_operation())
	|| (exceed_set_prec_transmit !=  nullptr && exceed_set_prec_transmit->has_operation())
	|| (exceed_set_qos_transmit !=  nullptr && exceed_set_qos_transmit->has_operation())
	|| (exceed_transmit !=  nullptr && exceed_transmit->has_operation())
	|| (violate_drop !=  nullptr && violate_drop->has_operation())
	|| (violate_set_clp_transmit !=  nullptr && violate_set_clp_transmit->has_operation())
	|| (violate_set_cos_transmit !=  nullptr && violate_set_cos_transmit->has_operation())
	|| (violate_set_discard_class_transmit !=  nullptr && violate_set_discard_class_transmit->has_operation())
	|| (violate_set_dscp_transmit !=  nullptr && violate_set_dscp_transmit->has_operation())
	|| (violate_set_frde_transmit !=  nullptr && violate_set_frde_transmit->has_operation())
	|| (violate_set_mpls_exp_imposition_transmit !=  nullptr && violate_set_mpls_exp_imposition_transmit->has_operation())
	|| (violate_set_mpls_exp_topmost_transmit !=  nullptr && violate_set_mpls_exp_topmost_transmit->has_operation())
	|| (violate_set_prec_transmit !=  nullptr && violate_set_prec_transmit->has_operation())
	|| (violate_set_qos_transmit !=  nullptr && violate_set_qos_transmit->has_operation())
	|| (violate_transmit !=  nullptr && violate_transmit->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-drop")
    {
        if(conform_drop == nullptr)
        {
            conform_drop = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop>();
        }
        return conform_drop;
    }

    if(child_yang_name == "conform-set-clp-transmit")
    {
        if(conform_set_clp_transmit == nullptr)
        {
            conform_set_clp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit>();
        }
        return conform_set_clp_transmit;
    }

    if(child_yang_name == "conform-set-cos-transmit")
    {
        if(conform_set_cos_transmit == nullptr)
        {
            conform_set_cos_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit>();
        }
        return conform_set_cos_transmit;
    }

    if(child_yang_name == "conform-set-cos-transmit-table")
    {
        if(conform_set_cos_transmit_table == nullptr)
        {
            conform_set_cos_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable>();
        }
        return conform_set_cos_transmit_table;
    }

    if(child_yang_name == "conform-set-discard-class-transmit")
    {
        if(conform_set_discard_class_transmit == nullptr)
        {
            conform_set_discard_class_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit>();
        }
        return conform_set_discard_class_transmit;
    }

    if(child_yang_name == "conform-set-dscp-transmit")
    {
        if(conform_set_dscp_transmit == nullptr)
        {
            conform_set_dscp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit>();
        }
        return conform_set_dscp_transmit;
    }

    if(child_yang_name == "conform-set-dscp-transmit-table")
    {
        if(conform_set_dscp_transmit_table == nullptr)
        {
            conform_set_dscp_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable>();
        }
        return conform_set_dscp_transmit_table;
    }

    if(child_yang_name == "conform-set-frde-transmit")
    {
        if(conform_set_frde_transmit == nullptr)
        {
            conform_set_frde_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit>();
        }
        return conform_set_frde_transmit;
    }

    if(child_yang_name == "conform-set-mpls-exp-imposition-transmit")
    {
        if(conform_set_mpls_exp_imposition_transmit == nullptr)
        {
            conform_set_mpls_exp_imposition_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit>();
        }
        return conform_set_mpls_exp_imposition_transmit;
    }

    if(child_yang_name == "conform-set-mpls-exp-imposition-transmit-table")
    {
        if(conform_set_mpls_exp_imposition_transmit_table == nullptr)
        {
            conform_set_mpls_exp_imposition_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable>();
        }
        return conform_set_mpls_exp_imposition_transmit_table;
    }

    if(child_yang_name == "conform-set-mpls-exp-topmost-transmit")
    {
        if(conform_set_mpls_exp_topmost_transmit == nullptr)
        {
            conform_set_mpls_exp_topmost_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit>();
        }
        return conform_set_mpls_exp_topmost_transmit;
    }

    if(child_yang_name == "conform-set-mpls-exp-topmost-transmit-table")
    {
        if(conform_set_mpls_exp_topmost_transmit_table == nullptr)
        {
            conform_set_mpls_exp_topmost_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable>();
        }
        return conform_set_mpls_exp_topmost_transmit_table;
    }

    if(child_yang_name == "conform-set-prec-transmit")
    {
        if(conform_set_prec_transmit == nullptr)
        {
            conform_set_prec_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit>();
        }
        return conform_set_prec_transmit;
    }

    if(child_yang_name == "conform-set-prec-transmit-table")
    {
        if(conform_set_prec_transmit_table == nullptr)
        {
            conform_set_prec_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable>();
        }
        return conform_set_prec_transmit_table;
    }

    if(child_yang_name == "conform-set-qos-transmit")
    {
        if(conform_set_qos_transmit == nullptr)
        {
            conform_set_qos_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit>();
        }
        return conform_set_qos_transmit;
    }

    if(child_yang_name == "conform-set-qos-transmit-table")
    {
        if(conform_set_qos_transmit_table == nullptr)
        {
            conform_set_qos_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable>();
        }
        return conform_set_qos_transmit_table;
    }

    if(child_yang_name == "conform-transmit")
    {
        if(conform_transmit == nullptr)
        {
            conform_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit>();
        }
        return conform_transmit;
    }

    if(child_yang_name == "exceed-drop")
    {
        if(exceed_drop == nullptr)
        {
            exceed_drop = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop>();
        }
        return exceed_drop;
    }

    if(child_yang_name == "exceed-dscp")
    {
        if(exceed_dscp == nullptr)
        {
            exceed_dscp = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp>();
        }
        return exceed_dscp;
    }

    if(child_yang_name == "exceed-set-clp-transmit")
    {
        if(exceed_set_clp_transmit == nullptr)
        {
            exceed_set_clp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit>();
        }
        return exceed_set_clp_transmit;
    }

    if(child_yang_name == "exceed-set-cos-transmit")
    {
        if(exceed_set_cos_transmit == nullptr)
        {
            exceed_set_cos_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit>();
        }
        return exceed_set_cos_transmit;
    }

    if(child_yang_name == "exceed-set-discard-class-transmit")
    {
        if(exceed_set_discard_class_transmit == nullptr)
        {
            exceed_set_discard_class_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit>();
        }
        return exceed_set_discard_class_transmit;
    }

    if(child_yang_name == "exceed-set-dscp-transmit")
    {
        if(exceed_set_dscp_transmit == nullptr)
        {
            exceed_set_dscp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit>();
        }
        return exceed_set_dscp_transmit;
    }

    if(child_yang_name == "exceed-set-dscp-transmit-table")
    {
        if(exceed_set_dscp_transmit_table == nullptr)
        {
            exceed_set_dscp_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable>();
        }
        return exceed_set_dscp_transmit_table;
    }

    if(child_yang_name == "exceed-set-frde-transmit")
    {
        if(exceed_set_frde_transmit == nullptr)
        {
            exceed_set_frde_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit>();
        }
        return exceed_set_frde_transmit;
    }

    if(child_yang_name == "exceed-set-mpls-exp-imposition-transmit")
    {
        if(exceed_set_mpls_exp_imposition_transmit == nullptr)
        {
            exceed_set_mpls_exp_imposition_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit>();
        }
        return exceed_set_mpls_exp_imposition_transmit;
    }

    if(child_yang_name == "exceed-set-mpls-exp-topmost-transmit")
    {
        if(exceed_set_mpls_exp_topmost_transmit == nullptr)
        {
            exceed_set_mpls_exp_topmost_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit>();
        }
        return exceed_set_mpls_exp_topmost_transmit;
    }

    if(child_yang_name == "exceed-set-prec-transmit")
    {
        if(exceed_set_prec_transmit == nullptr)
        {
            exceed_set_prec_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit>();
        }
        return exceed_set_prec_transmit;
    }

    if(child_yang_name == "exceed-set-qos-transmit")
    {
        if(exceed_set_qos_transmit == nullptr)
        {
            exceed_set_qos_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit>();
        }
        return exceed_set_qos_transmit;
    }

    if(child_yang_name == "exceed-transmit")
    {
        if(exceed_transmit == nullptr)
        {
            exceed_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit>();
        }
        return exceed_transmit;
    }

    if(child_yang_name == "violate-drop")
    {
        if(violate_drop == nullptr)
        {
            violate_drop = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop>();
        }
        return violate_drop;
    }

    if(child_yang_name == "violate-set-clp-transmit")
    {
        if(violate_set_clp_transmit == nullptr)
        {
            violate_set_clp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit>();
        }
        return violate_set_clp_transmit;
    }

    if(child_yang_name == "violate-set-cos-transmit")
    {
        if(violate_set_cos_transmit == nullptr)
        {
            violate_set_cos_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit>();
        }
        return violate_set_cos_transmit;
    }

    if(child_yang_name == "violate-set-discard-class-transmit")
    {
        if(violate_set_discard_class_transmit == nullptr)
        {
            violate_set_discard_class_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit>();
        }
        return violate_set_discard_class_transmit;
    }

    if(child_yang_name == "violate-set-dscp-transmit")
    {
        if(violate_set_dscp_transmit == nullptr)
        {
            violate_set_dscp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit>();
        }
        return violate_set_dscp_transmit;
    }

    if(child_yang_name == "violate-set-frde-transmit")
    {
        if(violate_set_frde_transmit == nullptr)
        {
            violate_set_frde_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit>();
        }
        return violate_set_frde_transmit;
    }

    if(child_yang_name == "violate-set-mpls-exp-imposition-transmit")
    {
        if(violate_set_mpls_exp_imposition_transmit == nullptr)
        {
            violate_set_mpls_exp_imposition_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit>();
        }
        return violate_set_mpls_exp_imposition_transmit;
    }

    if(child_yang_name == "violate-set-mpls-exp-topmost-transmit")
    {
        if(violate_set_mpls_exp_topmost_transmit == nullptr)
        {
            violate_set_mpls_exp_topmost_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit>();
        }
        return violate_set_mpls_exp_topmost_transmit;
    }

    if(child_yang_name == "violate-set-prec-transmit")
    {
        if(violate_set_prec_transmit == nullptr)
        {
            violate_set_prec_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit>();
        }
        return violate_set_prec_transmit;
    }

    if(child_yang_name == "violate-set-qos-transmit")
    {
        if(violate_set_qos_transmit == nullptr)
        {
            violate_set_qos_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit>();
        }
        return violate_set_qos_transmit;
    }

    if(child_yang_name == "violate-transmit")
    {
        if(violate_transmit == nullptr)
        {
            violate_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit>();
        }
        return violate_transmit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_drop != nullptr)
    {
        children["conform-drop"] = conform_drop;
    }

    if(conform_set_clp_transmit != nullptr)
    {
        children["conform-set-clp-transmit"] = conform_set_clp_transmit;
    }

    if(conform_set_cos_transmit != nullptr)
    {
        children["conform-set-cos-transmit"] = conform_set_cos_transmit;
    }

    if(conform_set_cos_transmit_table != nullptr)
    {
        children["conform-set-cos-transmit-table"] = conform_set_cos_transmit_table;
    }

    if(conform_set_discard_class_transmit != nullptr)
    {
        children["conform-set-discard-class-transmit"] = conform_set_discard_class_transmit;
    }

    if(conform_set_dscp_transmit != nullptr)
    {
        children["conform-set-dscp-transmit"] = conform_set_dscp_transmit;
    }

    if(conform_set_dscp_transmit_table != nullptr)
    {
        children["conform-set-dscp-transmit-table"] = conform_set_dscp_transmit_table;
    }

    if(conform_set_frde_transmit != nullptr)
    {
        children["conform-set-frde-transmit"] = conform_set_frde_transmit;
    }

    if(conform_set_mpls_exp_imposition_transmit != nullptr)
    {
        children["conform-set-mpls-exp-imposition-transmit"] = conform_set_mpls_exp_imposition_transmit;
    }

    if(conform_set_mpls_exp_imposition_transmit_table != nullptr)
    {
        children["conform-set-mpls-exp-imposition-transmit-table"] = conform_set_mpls_exp_imposition_transmit_table;
    }

    if(conform_set_mpls_exp_topmost_transmit != nullptr)
    {
        children["conform-set-mpls-exp-topmost-transmit"] = conform_set_mpls_exp_topmost_transmit;
    }

    if(conform_set_mpls_exp_topmost_transmit_table != nullptr)
    {
        children["conform-set-mpls-exp-topmost-transmit-table"] = conform_set_mpls_exp_topmost_transmit_table;
    }

    if(conform_set_prec_transmit != nullptr)
    {
        children["conform-set-prec-transmit"] = conform_set_prec_transmit;
    }

    if(conform_set_prec_transmit_table != nullptr)
    {
        children["conform-set-prec-transmit-table"] = conform_set_prec_transmit_table;
    }

    if(conform_set_qos_transmit != nullptr)
    {
        children["conform-set-qos-transmit"] = conform_set_qos_transmit;
    }

    if(conform_set_qos_transmit_table != nullptr)
    {
        children["conform-set-qos-transmit-table"] = conform_set_qos_transmit_table;
    }

    if(conform_transmit != nullptr)
    {
        children["conform-transmit"] = conform_transmit;
    }

    if(exceed_drop != nullptr)
    {
        children["exceed-drop"] = exceed_drop;
    }

    if(exceed_dscp != nullptr)
    {
        children["exceed-dscp"] = exceed_dscp;
    }

    if(exceed_set_clp_transmit != nullptr)
    {
        children["exceed-set-clp-transmit"] = exceed_set_clp_transmit;
    }

    if(exceed_set_cos_transmit != nullptr)
    {
        children["exceed-set-cos-transmit"] = exceed_set_cos_transmit;
    }

    if(exceed_set_discard_class_transmit != nullptr)
    {
        children["exceed-set-discard-class-transmit"] = exceed_set_discard_class_transmit;
    }

    if(exceed_set_dscp_transmit != nullptr)
    {
        children["exceed-set-dscp-transmit"] = exceed_set_dscp_transmit;
    }

    if(exceed_set_dscp_transmit_table != nullptr)
    {
        children["exceed-set-dscp-transmit-table"] = exceed_set_dscp_transmit_table;
    }

    if(exceed_set_frde_transmit != nullptr)
    {
        children["exceed-set-frde-transmit"] = exceed_set_frde_transmit;
    }

    if(exceed_set_mpls_exp_imposition_transmit != nullptr)
    {
        children["exceed-set-mpls-exp-imposition-transmit"] = exceed_set_mpls_exp_imposition_transmit;
    }

    if(exceed_set_mpls_exp_topmost_transmit != nullptr)
    {
        children["exceed-set-mpls-exp-topmost-transmit"] = exceed_set_mpls_exp_topmost_transmit;
    }

    if(exceed_set_prec_transmit != nullptr)
    {
        children["exceed-set-prec-transmit"] = exceed_set_prec_transmit;
    }

    if(exceed_set_qos_transmit != nullptr)
    {
        children["exceed-set-qos-transmit"] = exceed_set_qos_transmit;
    }

    if(exceed_transmit != nullptr)
    {
        children["exceed-transmit"] = exceed_transmit;
    }

    if(violate_drop != nullptr)
    {
        children["violate-drop"] = violate_drop;
    }

    if(violate_set_clp_transmit != nullptr)
    {
        children["violate-set-clp-transmit"] = violate_set_clp_transmit;
    }

    if(violate_set_cos_transmit != nullptr)
    {
        children["violate-set-cos-transmit"] = violate_set_cos_transmit;
    }

    if(violate_set_discard_class_transmit != nullptr)
    {
        children["violate-set-discard-class-transmit"] = violate_set_discard_class_transmit;
    }

    if(violate_set_dscp_transmit != nullptr)
    {
        children["violate-set-dscp-transmit"] = violate_set_dscp_transmit;
    }

    if(violate_set_frde_transmit != nullptr)
    {
        children["violate-set-frde-transmit"] = violate_set_frde_transmit;
    }

    if(violate_set_mpls_exp_imposition_transmit != nullptr)
    {
        children["violate-set-mpls-exp-imposition-transmit"] = violate_set_mpls_exp_imposition_transmit;
    }

    if(violate_set_mpls_exp_topmost_transmit != nullptr)
    {
        children["violate-set-mpls-exp-topmost-transmit"] = violate_set_mpls_exp_topmost_transmit;
    }

    if(violate_set_prec_transmit != nullptr)
    {
        children["violate-set-prec-transmit"] = violate_set_prec_transmit;
    }

    if(violate_set_qos_transmit != nullptr)
    {
        children["violate-set-qos-transmit"] = violate_set_qos_transmit;
    }

    if(violate_transmit != nullptr)
    {
        children["violate-transmit"] = violate_transmit;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-drop" || name == "conform-set-clp-transmit" || name == "conform-set-cos-transmit" || name == "conform-set-cos-transmit-table" || name == "conform-set-discard-class-transmit" || name == "conform-set-dscp-transmit" || name == "conform-set-dscp-transmit-table" || name == "conform-set-frde-transmit" || name == "conform-set-mpls-exp-imposition-transmit" || name == "conform-set-mpls-exp-imposition-transmit-table" || name == "conform-set-mpls-exp-topmost-transmit" || name == "conform-set-mpls-exp-topmost-transmit-table" || name == "conform-set-prec-transmit" || name == "conform-set-prec-transmit-table" || name == "conform-set-qos-transmit" || name == "conform-set-qos-transmit-table" || name == "conform-transmit" || name == "exceed-drop" || name == "exceed-dscp" || name == "exceed-set-clp-transmit" || name == "exceed-set-cos-transmit" || name == "exceed-set-discard-class-transmit" || name == "exceed-set-dscp-transmit" || name == "exceed-set-dscp-transmit-table" || name == "exceed-set-frde-transmit" || name == "exceed-set-mpls-exp-imposition-transmit" || name == "exceed-set-mpls-exp-topmost-transmit" || name == "exceed-set-prec-transmit" || name == "exceed-set-qos-transmit" || name == "exceed-transmit" || name == "violate-drop" || name == "violate-set-clp-transmit" || name == "violate-set-cos-transmit" || name == "violate-set-discard-class-transmit" || name == "violate-set-dscp-transmit" || name == "violate-set-frde-transmit" || name == "violate-set-mpls-exp-imposition-transmit" || name == "violate-set-mpls-exp-topmost-transmit" || name == "violate-set-prec-transmit" || name == "violate-set-qos-transmit" || name == "violate-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop::ConformDrop()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-drop"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop::~ConformDrop()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop::ConformAction::ConformAction()
    :
    drop{YType::empty, "drop"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-drop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop::ConformAction::has_data() const
{
    return drop.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformDrop::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit::ConformSetClpTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-clp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit::~ConformSetClpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-clp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit::ConformAction::ConformAction()
    :
    set_clp_transmit{YType::empty, "set-clp-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-clp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit::ConformAction::has_data() const
{
    return set_clp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_clp_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_clp_transmit.is_set || is_set(set_clp_transmit.yfilter)) leaf_name_data.push_back(set_clp_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit = value;
        set_clp_transmit.value_namespace = name_space;
        set_clp_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetClpTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-clp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit::ConformSetCosTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-cos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit::~ConformSetCosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-cos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit::ConformAction::ConformAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-cos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit::ConformAction::has_data() const
{
    return set_cos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_cos_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.yfilter)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit = value;
        set_cos_transmit.value_namespace = name_space;
        set_cos_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-cos-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable::ConformSetCosTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-cos-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable::~ConformSetCosTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-cos-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable::ConformAction::ConformAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-cos-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable::ConformAction::has_data() const
{
    return set_cos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_cos_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.yfilter)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit = value;
        set_cos_transmit.value_namespace = name_space;
        set_cos_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetCosTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-cos-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit::ConformSetDiscardClassTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-discard-class-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit::~ConformSetDiscardClassTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-discard-class-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit::ConformAction::ConformAction()
    :
    set_discard_class_transmit{YType::uint8, "set-discard-class-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-discard-class-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit::ConformAction::has_data() const
{
    return set_discard_class_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_discard_class_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_discard_class_transmit.is_set || is_set(set_discard_class_transmit.yfilter)) leaf_name_data.push_back(set_discard_class_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit = value;
        set_discard_class_transmit.value_namespace = name_space;
        set_discard_class_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDiscardClassTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-discard-class-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit::ConformSetDscpTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-dscp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit::~ConformSetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-dscp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit::ConformAction::ConformAction()
    :
    set_dscp_transmit{YType::str, "set-dscp-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-dscp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit::ConformAction::has_data() const
{
    return set_dscp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_dscp_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.yfilter)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit = value;
        set_dscp_transmit.value_namespace = name_space;
        set_dscp_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-dscp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable::ConformSetDscpTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-dscp-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable::~ConformSetDscpTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-dscp-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable::ConformAction::ConformAction()
    :
    set_dscp_transmit{YType::str, "set-dscp-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-dscp-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable::ConformAction::has_data() const
{
    return set_dscp_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_dscp_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.yfilter)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit = value;
        set_dscp_transmit.value_namespace = name_space;
        set_dscp_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetDscpTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-dscp-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit::ConformSetFrdeTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-frde-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit::~ConformSetFrdeTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-frde-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit::ConformAction::ConformAction()
    :
    set_frde_transmit{YType::empty, "set-frde-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-frde-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit::ConformAction::has_data() const
{
    return set_frde_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_frde_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_frde_transmit.is_set || is_set(set_frde_transmit.yfilter)) leaf_name_data.push_back(set_frde_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit = value;
        set_frde_transmit.value_namespace = name_space;
        set_frde_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetFrdeTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-frde-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit::ConformSetMplsExpImpositionTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-imposition-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit::~ConformSetMplsExpImpositionTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-imposition-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::ConformAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-imposition-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_imposition_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
        set_mpls_exp_imposition_transmit.value_namespace = name_space;
        set_mpls_exp_imposition_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-imposition-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable::ConformSetMplsExpImpositionTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-imposition-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable::~ConformSetMplsExpImpositionTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-imposition-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::ConformAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-imposition-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_imposition_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
        set_mpls_exp_imposition_transmit.value_namespace = name_space;
        set_mpls_exp_imposition_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-imposition-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit::ConformSetMplsExpTopmostTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-topmost-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit::~ConformSetMplsExpTopmostTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-topmost-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::ConformAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-topmost-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_topmost_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
        set_mpls_exp_topmost_transmit.value_namespace = name_space;
        set_mpls_exp_topmost_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-topmost-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable::ConformSetMplsExpTopmostTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-topmost-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable::~ConformSetMplsExpTopmostTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-topmost-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::ConformAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-topmost-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_topmost_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
        set_mpls_exp_topmost_transmit.value_namespace = name_space;
        set_mpls_exp_topmost_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-topmost-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit::ConformSetPrecTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-prec-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit::~ConformSetPrecTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-prec-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit::ConformAction::ConformAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-prec-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit::ConformAction::has_data() const
{
    return set_prec_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_prec_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.yfilter)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit = value;
        set_prec_transmit.value_namespace = name_space;
        set_prec_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-prec-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable::ConformSetPrecTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-prec-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable::~ConformSetPrecTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-prec-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable::ConformAction::ConformAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-prec-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable::ConformAction::has_data() const
{
    return set_prec_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_prec_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.yfilter)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit = value;
        set_prec_transmit.value_namespace = name_space;
        set_prec_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetPrecTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-prec-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit::ConformSetQosTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-qos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit::~ConformSetQosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-qos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit::ConformAction::ConformAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-qos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit::ConformAction::has_data() const
{
    return set_qos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_qos_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.yfilter)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
        set_qos_transmit.value_namespace = name_space;
        set_qos_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-qos-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable::ConformSetQosTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-qos-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable::~ConformSetQosTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-qos-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable::ConformAction::ConformAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-qos-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable::ConformAction::has_data() const
{
    return set_qos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_qos_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.yfilter)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
        set_qos_transmit.value_namespace = name_space;
        set_qos_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformSetQosTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-qos-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit::ConformTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit::~ConformTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit::ConformAction::ConformAction()
    :
    transmit{YType::empty, "transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit::ConformAction::has_data() const
{
    return transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ConformTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop::ExceedDrop()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-drop"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop::~ExceedDrop()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop::ExceedAction::ExceedAction()
    :
    drop{YType::empty, "drop"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-drop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop::ExceedAction::has_data() const
{
    return drop.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDrop::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp::ExceedDscp()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-dscp"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp::~ExceedDscp()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp::ExceedAction::ExceedAction()
    :
    dscp{YType::str, "dscp"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-dscp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp::ExceedAction::has_data() const
{
    return dscp.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedDscp::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit::ExceedSetClpTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-clp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit::~ExceedSetClpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-clp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit::ExceedAction::ExceedAction()
    :
    set_clp_transmit{YType::empty, "set-clp-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-clp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit::ExceedAction::has_data() const
{
    return set_clp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_clp_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_clp_transmit.is_set || is_set(set_clp_transmit.yfilter)) leaf_name_data.push_back(set_clp_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit = value;
        set_clp_transmit.value_namespace = name_space;
        set_clp_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetClpTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-clp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit::ExceedSetCosTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-cos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit::~ExceedSetCosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-cos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit::ExceedAction::ExceedAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"},
    table{YType::str, "table"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-cos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit::ExceedAction::has_data() const
{
    return set_cos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_cos_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.yfilter)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit = value;
        set_cos_transmit.value_namespace = name_space;
        set_cos_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetCosTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-cos-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit::ExceedSetDiscardClassTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-discard-class-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit::~ExceedSetDiscardClassTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-discard-class-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit::ExceedAction::ExceedAction()
    :
    set_discard_class_transmit{YType::uint8, "set-discard-class-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-discard-class-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit::ExceedAction::has_data() const
{
    return set_discard_class_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_discard_class_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_discard_class_transmit.is_set || is_set(set_discard_class_transmit.yfilter)) leaf_name_data.push_back(set_discard_class_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit = value;
        set_discard_class_transmit.value_namespace = name_space;
        set_discard_class_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDiscardClassTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-discard-class-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedSetDscpTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-dscp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::~ExceedSetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-dscp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::ExceedAction()
    :
    set_dscp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit>())
{
    set_dscp_transmit->parent = this;

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-dscp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::has_data() const
{
    return (set_dscp_transmit !=  nullptr && set_dscp_transmit->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| (set_dscp_transmit !=  nullptr && set_dscp_transmit->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set-dscp-transmit")
    {
        if(set_dscp_transmit == nullptr)
        {
            set_dscp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit>();
        }
        return set_dscp_transmit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(set_dscp_transmit != nullptr)
    {
        children["set-dscp-transmit"] = set_dscp_transmit;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-dscp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::SetDscpTransmit()
    :
    dscp(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp>())
{
    dscp->parent = this;

    yang_name = "set-dscp-transmit"; yang_parent_name = "exceed-action"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::~SetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::has_data() const
{
    return (dscp !=  nullptr && dscp->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (dscp !=  nullptr && dscp->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-dscp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp>();
        }
        return dscp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::Dscp()
    :
    table{YType::enumeration, "table"}
{

    yang_name = "dscp"; yang_parent_name = "set-dscp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::~Dscp()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::has_data() const
{
    return table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable::ExceedSetDscpTransmitTable()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-dscp-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable::~ExceedSetDscpTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-dscp-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable::ExceedAction::ExceedAction()
    :
    set_dscp_transmit{YType::str, "set-dscp-transmit"},
    table{YType::str, "table"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-dscp-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable::ExceedAction::has_data() const
{
    return set_dscp_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_dscp_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.yfilter)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit = value;
        set_dscp_transmit.value_namespace = name_space;
        set_dscp_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmitTable::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-dscp-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit::ExceedSetFrdeTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-frde-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit::~ExceedSetFrdeTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-frde-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit::ExceedAction::ExceedAction()
    :
    set_frde_transmit{YType::empty, "set-frde-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-frde-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit::ExceedAction::has_data() const
{
    return set_frde_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_frde_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_frde_transmit.is_set || is_set(set_frde_transmit.yfilter)) leaf_name_data.push_back(set_frde_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit = value;
        set_frde_transmit.value_namespace = name_space;
        set_frde_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetFrdeTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-frde-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit::ExceedSetMplsExpImpositionTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-mpls-exp-imposition-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit::~ExceedSetMplsExpImpositionTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-mpls-exp-imposition-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::ExceedAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-mpls-exp-imposition-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_imposition_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
        set_mpls_exp_imposition_transmit.value_namespace = name_space;
        set_mpls_exp_imposition_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-imposition-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit::ExceedSetMplsExpTopmostTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-mpls-exp-topmost-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit::~ExceedSetMplsExpTopmostTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-mpls-exp-topmost-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::ExceedAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-mpls-exp-topmost-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_topmost_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
        set_mpls_exp_topmost_transmit.value_namespace = name_space;
        set_mpls_exp_topmost_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-topmost-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit::ExceedSetPrecTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-prec-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit::~ExceedSetPrecTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-prec-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit::ExceedAction::ExceedAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"},
    table{YType::str, "table"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-prec-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit::ExceedAction::has_data() const
{
    return set_prec_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_prec_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.yfilter)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit = value;
        set_prec_transmit.value_namespace = name_space;
        set_prec_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetPrecTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-prec-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit::ExceedSetQosTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-qos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit::~ExceedSetQosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-qos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit::ExceedAction::ExceedAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-qos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit::ExceedAction::has_data() const
{
    return set_qos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_qos_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.yfilter)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
        set_qos_transmit.value_namespace = name_space;
        set_qos_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetQosTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-qos-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit::ExceedTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit::~ExceedTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit::ExceedAction::ExceedAction()
    :
    transmit{YType::empty, "transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit::ExceedAction::has_data() const
{
    return transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop::ViolateDrop()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-drop"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop::~ViolateDrop()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop::ViolateAction::ViolateAction()
    :
    drop{YType::empty, "drop"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-drop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop::ViolateAction::has_data() const
{
    return drop.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateDrop::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit::ViolateSetClpTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-clp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit::~ViolateSetClpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-clp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit::ViolateAction::ViolateAction()
    :
    set_clp_transmit{YType::empty, "set-clp-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-clp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit::ViolateAction::has_data() const
{
    return set_clp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_clp_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_clp_transmit.is_set || is_set(set_clp_transmit.yfilter)) leaf_name_data.push_back(set_clp_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit = value;
        set_clp_transmit.value_namespace = name_space;
        set_clp_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetClpTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-clp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit::ViolateSetCosTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-cos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit::~ViolateSetCosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-cos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit::ViolateAction::ViolateAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"},
    table{YType::str, "table"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-cos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit::ViolateAction::has_data() const
{
    return set_cos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_cos_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.yfilter)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit = value;
        set_cos_transmit.value_namespace = name_space;
        set_cos_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetCosTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-cos-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit::ViolateSetDiscardClassTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-discard-class-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit::~ViolateSetDiscardClassTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-discard-class-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit::ViolateAction::ViolateAction()
    :
    set_discard_class_transmit{YType::uint8, "set-discard-class-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-discard-class-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit::ViolateAction::has_data() const
{
    return set_discard_class_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_discard_class_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_discard_class_transmit.is_set || is_set(set_discard_class_transmit.yfilter)) leaf_name_data.push_back(set_discard_class_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit = value;
        set_discard_class_transmit.value_namespace = name_space;
        set_discard_class_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDiscardClassTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-discard-class-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit::ViolateSetDscpTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-dscp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit::~ViolateSetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-dscp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit::ViolateAction::ViolateAction()
    :
    set_dscp_transmit{YType::str, "set-dscp-transmit"},
    table{YType::str, "table"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-dscp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit::ViolateAction::has_data() const
{
    return set_dscp_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_dscp_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.yfilter)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit = value;
        set_dscp_transmit.value_namespace = name_space;
        set_dscp_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetDscpTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-dscp-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit::ViolateSetFrdeTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-frde-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit::~ViolateSetFrdeTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-frde-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit::ViolateAction::ViolateAction()
    :
    set_frde_transmit{YType::empty, "set-frde-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-frde-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit::ViolateAction::has_data() const
{
    return set_frde_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_frde_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_frde_transmit.is_set || is_set(set_frde_transmit.yfilter)) leaf_name_data.push_back(set_frde_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit = value;
        set_frde_transmit.value_namespace = name_space;
        set_frde_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetFrdeTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-frde-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit::ViolateSetMplsExpImpositionTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-mpls-exp-imposition-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit::~ViolateSetMplsExpImpositionTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-mpls-exp-imposition-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::ViolateAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-mpls-exp-imposition-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_imposition_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
        set_mpls_exp_imposition_transmit.value_namespace = name_space;
        set_mpls_exp_imposition_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-imposition-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit::ViolateSetMplsExpTopmostTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-mpls-exp-topmost-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit::~ViolateSetMplsExpTopmostTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-mpls-exp-topmost-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::ViolateAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-mpls-exp-topmost-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_topmost_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
        set_mpls_exp_topmost_transmit.value_namespace = name_space;
        set_mpls_exp_topmost_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-topmost-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit::ViolateSetPrecTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-prec-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit::~ViolateSetPrecTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-prec-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit::ViolateAction::ViolateAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"},
    table{YType::str, "table"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-prec-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit::ViolateAction::has_data() const
{
    return set_prec_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_prec_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.yfilter)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit = value;
        set_prec_transmit.value_namespace = name_space;
        set_prec_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetPrecTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-prec-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit::ViolateSetQosTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-qos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit::~ViolateSetQosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-qos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit::ViolateAction::ViolateAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-qos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit::ViolateAction::has_data() const
{
    return set_qos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_qos_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.yfilter)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
        set_qos_transmit.value_namespace = name_space;
        set_qos_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateSetQosTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-qos-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit::ViolateTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit::~ViolateTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit::ViolateAction::ViolateAction()
    :
    transmit{YType::empty, "transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit::ViolateAction::has_data() const
{
    return transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ViolateTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Burst::Burst()
    :
    burst_type{YType::enumeration, "burst-type"},
    burst_value{YType::uint32, "burst-value"}
{

    yang_name = "burst"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Burst::~Burst()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Burst::has_data() const
{
    return burst_type.is_set
	|| burst_value.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Burst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(burst_type.yfilter)
	|| ydk::is_set(burst_value.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Burst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Burst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burst_type.is_set || is_set(burst_type.yfilter)) leaf_name_data.push_back(burst_type.get_name_leafdata());
    if (burst_value.is_set || is_set(burst_value.yfilter)) leaf_name_data.push_back(burst_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Burst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Burst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Burst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "burst-type")
    {
        burst_type = value;
        burst_type.value_namespace = name_space;
        burst_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-value")
    {
        burst_value = value;
        burst_value.value_namespace = name_space;
        burst_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Burst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "burst-type")
    {
        burst_type.yfilter = yfilter;
    }
    if(value_path == "burst-value")
    {
        burst_value.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Burst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "burst-type" || name == "burst-value")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakBurst::PeakBurst()
    :
    burst_type{YType::enumeration, "burst-type"},
    burst_value{YType::uint32, "burst-value"}
{

    yang_name = "peak-burst"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakBurst::~PeakBurst()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakBurst::has_data() const
{
    return burst_type.is_set
	|| burst_value.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(burst_type.yfilter)
	|| ydk::is_set(burst_value.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peak-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burst_type.is_set || is_set(burst_type.yfilter)) leaf_name_data.push_back(burst_type.get_name_leafdata());
    if (burst_value.is_set || is_set(burst_value.yfilter)) leaf_name_data.push_back(burst_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "burst-type")
    {
        burst_type = value;
        burst_type.value_namespace = name_space;
        burst_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-value")
    {
        burst_value = value;
        burst_value.value_namespace = name_space;
        burst_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakBurst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "burst-type")
    {
        burst_type.yfilter = yfilter;
    }
    if(value_path == "burst-value")
    {
        burst_value.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "burst-type" || name == "burst-value")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakRate::PeakRate()
    :
    peak_rate_value{YType::uint32, "peak-rate-value"},
    xps{YType::enumeration, "xps"}
{

    yang_name = "peak-rate"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakRate::~PeakRate()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakRate::has_data() const
{
    return peak_rate_value.is_set
	|| xps.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peak_rate_value.yfilter)
	|| ydk::is_set(xps.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peak-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peak_rate_value.is_set || is_set(peak_rate_value.yfilter)) leaf_name_data.push_back(peak_rate_value.get_name_leafdata());
    if (xps.is_set || is_set(xps.yfilter)) leaf_name_data.push_back(xps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peak-rate-value")
    {
        peak_rate_value = value;
        peak_rate_value.value_namespace = name_space;
        peak_rate_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xps")
    {
        xps = value;
        xps.value_namespace = name_space;
        xps.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peak-rate-value")
    {
        peak_rate_value.yfilter = yfilter;
    }
    if(value_path == "xps")
    {
        xps.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::PeakRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peak-rate-value" || name == "xps")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::PoliceSwitch()
    :
    police(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police>())
{
    police->parent = this;

    yang_name = "police-switch"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::~PoliceSwitch()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::has_data() const
{
    return (police !=  nullptr && police->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::has_operation() const
{
    return is_set(yfilter)
	|| (police !=  nullptr && police->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police>();
        }
        return police;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(police != nullptr)
    {
        children["police"] = police;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "police")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::Police()
    :
    bc{YType::uint32, "bc"},
    cir{YType::uint32, "cir"},
    exceed_action{YType::enumeration, "exceed-action"}
{

    yang_name = "police"; yang_parent_name = "police-switch"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::~Police()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::has_data() const
{
    return bc.is_set
	|| cir.is_set
	|| exceed_action.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bc.yfilter)
	|| ydk::is_set(cir.yfilter)
	|| ydk::is_set(exceed_action.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bc.is_set || is_set(bc.yfilter)) leaf_name_data.push_back(bc.get_name_leafdata());
    if (cir.is_set || is_set(cir.yfilter)) leaf_name_data.push_back(cir.get_name_leafdata());
    if (exceed_action.is_set || is_set(exceed_action.yfilter)) leaf_name_data.push_back(exceed_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bc")
    {
        bc = value;
        bc.value_namespace = name_space;
        bc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cir")
    {
        cir = value;
        cir.value_namespace = name_space;
        cir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-action")
    {
        exceed_action = value;
        exceed_action.value_namespace = name_space;
        exceed_action.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bc")
    {
        bc.yfilter = yfilter;
    }
    if(value_path == "cir")
    {
        cir.yfilter = yfilter;
    }
    if(value_path == "exceed-action")
    {
        exceed_action.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bc" || name == "cir" || name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::PoliceTargetBitrate()
    :
    police(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police>())
{
    police->parent = this;

    yang_name = "police-target-bitrate"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::~PoliceTargetBitrate()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::has_data() const
{
    return (police !=  nullptr && police->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::has_operation() const
{
    return is_set(yfilter)
	|| (police !=  nullptr && police->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-target-bitrate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police>();
        }
        return police;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(police != nullptr)
    {
        children["police"] = police;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "police")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Police()
    :
    bit_rate{YType::uint64, "bit-rate"},
    confirm_burst_byte{YType::uint64, "confirm_burst-byte"},
    conform_action{YType::empty, "conform-action"},
    drop{YType::empty, "drop"},
    dscp{YType::empty, "dscp"},
    exceed_action{YType::empty, "exceed-action"},
    excess_burst_byte{YType::uint64, "excess_burst-byte"},
    set_dscp_transmit{YType::empty, "set-dscp-transmit"},
    table{YType::str, "table"},
    transmit{YType::empty, "transmit"}
    	,
    actions(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions>())
{
    actions->parent = this;

    yang_name = "police"; yang_parent_name = "police-target-bitrate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::~Police()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::has_data() const
{
    return bit_rate.is_set
	|| confirm_burst_byte.is_set
	|| conform_action.is_set
	|| drop.is_set
	|| dscp.is_set
	|| exceed_action.is_set
	|| excess_burst_byte.is_set
	|| set_dscp_transmit.is_set
	|| table.is_set
	|| transmit.is_set
	|| (actions !=  nullptr && actions->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_rate.yfilter)
	|| ydk::is_set(confirm_burst_byte.yfilter)
	|| ydk::is_set(conform_action.yfilter)
	|| ydk::is_set(drop.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(exceed_action.yfilter)
	|| ydk::is_set(excess_burst_byte.yfilter)
	|| ydk::is_set(set_dscp_transmit.yfilter)
	|| ydk::is_set(table.yfilter)
	|| ydk::is_set(transmit.yfilter)
	|| (actions !=  nullptr && actions->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (confirm_burst_byte.is_set || is_set(confirm_burst_byte.yfilter)) leaf_name_data.push_back(confirm_burst_byte.get_name_leafdata());
    if (conform_action.is_set || is_set(conform_action.yfilter)) leaf_name_data.push_back(conform_action.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (exceed_action.is_set || is_set(exceed_action.yfilter)) leaf_name_data.push_back(exceed_action.get_name_leafdata());
    if (excess_burst_byte.is_set || is_set(excess_burst_byte.yfilter)) leaf_name_data.push_back(excess_burst_byte.get_name_leafdata());
    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.yfilter)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());
    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actions")
    {
        if(actions == nullptr)
        {
            actions = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions>();
        }
        return actions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(actions != nullptr)
    {
        children["actions"] = actions;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confirm_burst-byte")
    {
        confirm_burst_byte = value;
        confirm_burst_byte.value_namespace = name_space;
        confirm_burst_byte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform-action")
    {
        conform_action = value;
        conform_action.value_namespace = name_space;
        conform_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-action")
    {
        exceed_action = value;
        exceed_action.value_namespace = name_space;
        exceed_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess_burst-byte")
    {
        excess_burst_byte = value;
        excess_burst_byte.value_namespace = name_space;
        excess_burst_byte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit = value;
        set_dscp_transmit.value_namespace = name_space;
        set_dscp_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
    if(value_path == "confirm_burst-byte")
    {
        confirm_burst_byte.yfilter = yfilter;
    }
    if(value_path == "conform-action")
    {
        conform_action.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "exceed-action")
    {
        exceed_action.yfilter = yfilter;
    }
    if(value_path == "excess_burst-byte")
    {
        excess_burst_byte.yfilter = yfilter;
    }
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actions" || name == "bit-rate" || name == "confirm_burst-byte" || name == "conform-action" || name == "drop" || name == "dscp" || name == "exceed-action" || name == "excess_burst-byte" || name == "set-dscp-transmit" || name == "table" || name == "transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::Actions()
    :
    conform_drop(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop>())
	,conform_set_clp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit>())
	,conform_set_cos_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit>())
	,conform_set_cos_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable>())
	,conform_set_discard_class_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit>())
	,conform_set_dscp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit>())
	,conform_set_dscp_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable>())
	,conform_set_frde_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit>())
	,conform_set_mpls_exp_imposition_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit>())
	,conform_set_mpls_exp_imposition_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable>())
	,conform_set_mpls_exp_topmost_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit>())
	,conform_set_mpls_exp_topmost_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable>())
	,conform_set_prec_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit>())
	,conform_set_prec_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable>())
	,conform_set_qos_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit>())
	,conform_set_qos_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable>())
	,conform_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit>())
	,exceed_drop(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop>())
	,exceed_dscp(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp>())
	,exceed_set_clp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit>())
	,exceed_set_cos_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit>())
	,exceed_set_discard_class_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit>())
	,exceed_set_dscp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit>())
	,exceed_set_dscp_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable>())
	,exceed_set_frde_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit>())
	,exceed_set_mpls_exp_imposition_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit>())
	,exceed_set_mpls_exp_topmost_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit>())
	,exceed_set_prec_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit>())
	,exceed_set_qos_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit>())
	,exceed_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit>())
	,violate_drop(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop>())
	,violate_set_clp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit>())
	,violate_set_cos_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit>())
	,violate_set_discard_class_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit>())
	,violate_set_dscp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit>())
	,violate_set_frde_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit>())
	,violate_set_mpls_exp_imposition_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit>())
	,violate_set_mpls_exp_topmost_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit>())
	,violate_set_prec_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit>())
	,violate_set_qos_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit>())
	,violate_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit>())
{
    conform_drop->parent = this;
    conform_set_clp_transmit->parent = this;
    conform_set_cos_transmit->parent = this;
    conform_set_cos_transmit_table->parent = this;
    conform_set_discard_class_transmit->parent = this;
    conform_set_dscp_transmit->parent = this;
    conform_set_dscp_transmit_table->parent = this;
    conform_set_frde_transmit->parent = this;
    conform_set_mpls_exp_imposition_transmit->parent = this;
    conform_set_mpls_exp_imposition_transmit_table->parent = this;
    conform_set_mpls_exp_topmost_transmit->parent = this;
    conform_set_mpls_exp_topmost_transmit_table->parent = this;
    conform_set_prec_transmit->parent = this;
    conform_set_prec_transmit_table->parent = this;
    conform_set_qos_transmit->parent = this;
    conform_set_qos_transmit_table->parent = this;
    conform_transmit->parent = this;
    exceed_drop->parent = this;
    exceed_dscp->parent = this;
    exceed_set_clp_transmit->parent = this;
    exceed_set_cos_transmit->parent = this;
    exceed_set_discard_class_transmit->parent = this;
    exceed_set_dscp_transmit->parent = this;
    exceed_set_dscp_transmit_table->parent = this;
    exceed_set_frde_transmit->parent = this;
    exceed_set_mpls_exp_imposition_transmit->parent = this;
    exceed_set_mpls_exp_topmost_transmit->parent = this;
    exceed_set_prec_transmit->parent = this;
    exceed_set_qos_transmit->parent = this;
    exceed_transmit->parent = this;
    violate_drop->parent = this;
    violate_set_clp_transmit->parent = this;
    violate_set_cos_transmit->parent = this;
    violate_set_discard_class_transmit->parent = this;
    violate_set_dscp_transmit->parent = this;
    violate_set_frde_transmit->parent = this;
    violate_set_mpls_exp_imposition_transmit->parent = this;
    violate_set_mpls_exp_topmost_transmit->parent = this;
    violate_set_prec_transmit->parent = this;
    violate_set_qos_transmit->parent = this;
    violate_transmit->parent = this;

    yang_name = "actions"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::~Actions()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::has_data() const
{
    return (conform_drop !=  nullptr && conform_drop->has_data())
	|| (conform_set_clp_transmit !=  nullptr && conform_set_clp_transmit->has_data())
	|| (conform_set_cos_transmit !=  nullptr && conform_set_cos_transmit->has_data())
	|| (conform_set_cos_transmit_table !=  nullptr && conform_set_cos_transmit_table->has_data())
	|| (conform_set_discard_class_transmit !=  nullptr && conform_set_discard_class_transmit->has_data())
	|| (conform_set_dscp_transmit !=  nullptr && conform_set_dscp_transmit->has_data())
	|| (conform_set_dscp_transmit_table !=  nullptr && conform_set_dscp_transmit_table->has_data())
	|| (conform_set_frde_transmit !=  nullptr && conform_set_frde_transmit->has_data())
	|| (conform_set_mpls_exp_imposition_transmit !=  nullptr && conform_set_mpls_exp_imposition_transmit->has_data())
	|| (conform_set_mpls_exp_imposition_transmit_table !=  nullptr && conform_set_mpls_exp_imposition_transmit_table->has_data())
	|| (conform_set_mpls_exp_topmost_transmit !=  nullptr && conform_set_mpls_exp_topmost_transmit->has_data())
	|| (conform_set_mpls_exp_topmost_transmit_table !=  nullptr && conform_set_mpls_exp_topmost_transmit_table->has_data())
	|| (conform_set_prec_transmit !=  nullptr && conform_set_prec_transmit->has_data())
	|| (conform_set_prec_transmit_table !=  nullptr && conform_set_prec_transmit_table->has_data())
	|| (conform_set_qos_transmit !=  nullptr && conform_set_qos_transmit->has_data())
	|| (conform_set_qos_transmit_table !=  nullptr && conform_set_qos_transmit_table->has_data())
	|| (conform_transmit !=  nullptr && conform_transmit->has_data())
	|| (exceed_drop !=  nullptr && exceed_drop->has_data())
	|| (exceed_dscp !=  nullptr && exceed_dscp->has_data())
	|| (exceed_set_clp_transmit !=  nullptr && exceed_set_clp_transmit->has_data())
	|| (exceed_set_cos_transmit !=  nullptr && exceed_set_cos_transmit->has_data())
	|| (exceed_set_discard_class_transmit !=  nullptr && exceed_set_discard_class_transmit->has_data())
	|| (exceed_set_dscp_transmit !=  nullptr && exceed_set_dscp_transmit->has_data())
	|| (exceed_set_dscp_transmit_table !=  nullptr && exceed_set_dscp_transmit_table->has_data())
	|| (exceed_set_frde_transmit !=  nullptr && exceed_set_frde_transmit->has_data())
	|| (exceed_set_mpls_exp_imposition_transmit !=  nullptr && exceed_set_mpls_exp_imposition_transmit->has_data())
	|| (exceed_set_mpls_exp_topmost_transmit !=  nullptr && exceed_set_mpls_exp_topmost_transmit->has_data())
	|| (exceed_set_prec_transmit !=  nullptr && exceed_set_prec_transmit->has_data())
	|| (exceed_set_qos_transmit !=  nullptr && exceed_set_qos_transmit->has_data())
	|| (exceed_transmit !=  nullptr && exceed_transmit->has_data())
	|| (violate_drop !=  nullptr && violate_drop->has_data())
	|| (violate_set_clp_transmit !=  nullptr && violate_set_clp_transmit->has_data())
	|| (violate_set_cos_transmit !=  nullptr && violate_set_cos_transmit->has_data())
	|| (violate_set_discard_class_transmit !=  nullptr && violate_set_discard_class_transmit->has_data())
	|| (violate_set_dscp_transmit !=  nullptr && violate_set_dscp_transmit->has_data())
	|| (violate_set_frde_transmit !=  nullptr && violate_set_frde_transmit->has_data())
	|| (violate_set_mpls_exp_imposition_transmit !=  nullptr && violate_set_mpls_exp_imposition_transmit->has_data())
	|| (violate_set_mpls_exp_topmost_transmit !=  nullptr && violate_set_mpls_exp_topmost_transmit->has_data())
	|| (violate_set_prec_transmit !=  nullptr && violate_set_prec_transmit->has_data())
	|| (violate_set_qos_transmit !=  nullptr && violate_set_qos_transmit->has_data())
	|| (violate_transmit !=  nullptr && violate_transmit->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::has_operation() const
{
    return is_set(yfilter)
	|| (conform_drop !=  nullptr && conform_drop->has_operation())
	|| (conform_set_clp_transmit !=  nullptr && conform_set_clp_transmit->has_operation())
	|| (conform_set_cos_transmit !=  nullptr && conform_set_cos_transmit->has_operation())
	|| (conform_set_cos_transmit_table !=  nullptr && conform_set_cos_transmit_table->has_operation())
	|| (conform_set_discard_class_transmit !=  nullptr && conform_set_discard_class_transmit->has_operation())
	|| (conform_set_dscp_transmit !=  nullptr && conform_set_dscp_transmit->has_operation())
	|| (conform_set_dscp_transmit_table !=  nullptr && conform_set_dscp_transmit_table->has_operation())
	|| (conform_set_frde_transmit !=  nullptr && conform_set_frde_transmit->has_operation())
	|| (conform_set_mpls_exp_imposition_transmit !=  nullptr && conform_set_mpls_exp_imposition_transmit->has_operation())
	|| (conform_set_mpls_exp_imposition_transmit_table !=  nullptr && conform_set_mpls_exp_imposition_transmit_table->has_operation())
	|| (conform_set_mpls_exp_topmost_transmit !=  nullptr && conform_set_mpls_exp_topmost_transmit->has_operation())
	|| (conform_set_mpls_exp_topmost_transmit_table !=  nullptr && conform_set_mpls_exp_topmost_transmit_table->has_operation())
	|| (conform_set_prec_transmit !=  nullptr && conform_set_prec_transmit->has_operation())
	|| (conform_set_prec_transmit_table !=  nullptr && conform_set_prec_transmit_table->has_operation())
	|| (conform_set_qos_transmit !=  nullptr && conform_set_qos_transmit->has_operation())
	|| (conform_set_qos_transmit_table !=  nullptr && conform_set_qos_transmit_table->has_operation())
	|| (conform_transmit !=  nullptr && conform_transmit->has_operation())
	|| (exceed_drop !=  nullptr && exceed_drop->has_operation())
	|| (exceed_dscp !=  nullptr && exceed_dscp->has_operation())
	|| (exceed_set_clp_transmit !=  nullptr && exceed_set_clp_transmit->has_operation())
	|| (exceed_set_cos_transmit !=  nullptr && exceed_set_cos_transmit->has_operation())
	|| (exceed_set_discard_class_transmit !=  nullptr && exceed_set_discard_class_transmit->has_operation())
	|| (exceed_set_dscp_transmit !=  nullptr && exceed_set_dscp_transmit->has_operation())
	|| (exceed_set_dscp_transmit_table !=  nullptr && exceed_set_dscp_transmit_table->has_operation())
	|| (exceed_set_frde_transmit !=  nullptr && exceed_set_frde_transmit->has_operation())
	|| (exceed_set_mpls_exp_imposition_transmit !=  nullptr && exceed_set_mpls_exp_imposition_transmit->has_operation())
	|| (exceed_set_mpls_exp_topmost_transmit !=  nullptr && exceed_set_mpls_exp_topmost_transmit->has_operation())
	|| (exceed_set_prec_transmit !=  nullptr && exceed_set_prec_transmit->has_operation())
	|| (exceed_set_qos_transmit !=  nullptr && exceed_set_qos_transmit->has_operation())
	|| (exceed_transmit !=  nullptr && exceed_transmit->has_operation())
	|| (violate_drop !=  nullptr && violate_drop->has_operation())
	|| (violate_set_clp_transmit !=  nullptr && violate_set_clp_transmit->has_operation())
	|| (violate_set_cos_transmit !=  nullptr && violate_set_cos_transmit->has_operation())
	|| (violate_set_discard_class_transmit !=  nullptr && violate_set_discard_class_transmit->has_operation())
	|| (violate_set_dscp_transmit !=  nullptr && violate_set_dscp_transmit->has_operation())
	|| (violate_set_frde_transmit !=  nullptr && violate_set_frde_transmit->has_operation())
	|| (violate_set_mpls_exp_imposition_transmit !=  nullptr && violate_set_mpls_exp_imposition_transmit->has_operation())
	|| (violate_set_mpls_exp_topmost_transmit !=  nullptr && violate_set_mpls_exp_topmost_transmit->has_operation())
	|| (violate_set_prec_transmit !=  nullptr && violate_set_prec_transmit->has_operation())
	|| (violate_set_qos_transmit !=  nullptr && violate_set_qos_transmit->has_operation())
	|| (violate_transmit !=  nullptr && violate_transmit->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-drop")
    {
        if(conform_drop == nullptr)
        {
            conform_drop = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop>();
        }
        return conform_drop;
    }

    if(child_yang_name == "conform-set-clp-transmit")
    {
        if(conform_set_clp_transmit == nullptr)
        {
            conform_set_clp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit>();
        }
        return conform_set_clp_transmit;
    }

    if(child_yang_name == "conform-set-cos-transmit")
    {
        if(conform_set_cos_transmit == nullptr)
        {
            conform_set_cos_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit>();
        }
        return conform_set_cos_transmit;
    }

    if(child_yang_name == "conform-set-cos-transmit-table")
    {
        if(conform_set_cos_transmit_table == nullptr)
        {
            conform_set_cos_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable>();
        }
        return conform_set_cos_transmit_table;
    }

    if(child_yang_name == "conform-set-discard-class-transmit")
    {
        if(conform_set_discard_class_transmit == nullptr)
        {
            conform_set_discard_class_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit>();
        }
        return conform_set_discard_class_transmit;
    }

    if(child_yang_name == "conform-set-dscp-transmit")
    {
        if(conform_set_dscp_transmit == nullptr)
        {
            conform_set_dscp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit>();
        }
        return conform_set_dscp_transmit;
    }

    if(child_yang_name == "conform-set-dscp-transmit-table")
    {
        if(conform_set_dscp_transmit_table == nullptr)
        {
            conform_set_dscp_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable>();
        }
        return conform_set_dscp_transmit_table;
    }

    if(child_yang_name == "conform-set-frde-transmit")
    {
        if(conform_set_frde_transmit == nullptr)
        {
            conform_set_frde_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit>();
        }
        return conform_set_frde_transmit;
    }

    if(child_yang_name == "conform-set-mpls-exp-imposition-transmit")
    {
        if(conform_set_mpls_exp_imposition_transmit == nullptr)
        {
            conform_set_mpls_exp_imposition_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit>();
        }
        return conform_set_mpls_exp_imposition_transmit;
    }

    if(child_yang_name == "conform-set-mpls-exp-imposition-transmit-table")
    {
        if(conform_set_mpls_exp_imposition_transmit_table == nullptr)
        {
            conform_set_mpls_exp_imposition_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable>();
        }
        return conform_set_mpls_exp_imposition_transmit_table;
    }

    if(child_yang_name == "conform-set-mpls-exp-topmost-transmit")
    {
        if(conform_set_mpls_exp_topmost_transmit == nullptr)
        {
            conform_set_mpls_exp_topmost_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit>();
        }
        return conform_set_mpls_exp_topmost_transmit;
    }

    if(child_yang_name == "conform-set-mpls-exp-topmost-transmit-table")
    {
        if(conform_set_mpls_exp_topmost_transmit_table == nullptr)
        {
            conform_set_mpls_exp_topmost_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable>();
        }
        return conform_set_mpls_exp_topmost_transmit_table;
    }

    if(child_yang_name == "conform-set-prec-transmit")
    {
        if(conform_set_prec_transmit == nullptr)
        {
            conform_set_prec_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit>();
        }
        return conform_set_prec_transmit;
    }

    if(child_yang_name == "conform-set-prec-transmit-table")
    {
        if(conform_set_prec_transmit_table == nullptr)
        {
            conform_set_prec_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable>();
        }
        return conform_set_prec_transmit_table;
    }

    if(child_yang_name == "conform-set-qos-transmit")
    {
        if(conform_set_qos_transmit == nullptr)
        {
            conform_set_qos_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit>();
        }
        return conform_set_qos_transmit;
    }

    if(child_yang_name == "conform-set-qos-transmit-table")
    {
        if(conform_set_qos_transmit_table == nullptr)
        {
            conform_set_qos_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable>();
        }
        return conform_set_qos_transmit_table;
    }

    if(child_yang_name == "conform-transmit")
    {
        if(conform_transmit == nullptr)
        {
            conform_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit>();
        }
        return conform_transmit;
    }

    if(child_yang_name == "exceed-drop")
    {
        if(exceed_drop == nullptr)
        {
            exceed_drop = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop>();
        }
        return exceed_drop;
    }

    if(child_yang_name == "exceed-dscp")
    {
        if(exceed_dscp == nullptr)
        {
            exceed_dscp = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp>();
        }
        return exceed_dscp;
    }

    if(child_yang_name == "exceed-set-clp-transmit")
    {
        if(exceed_set_clp_transmit == nullptr)
        {
            exceed_set_clp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit>();
        }
        return exceed_set_clp_transmit;
    }

    if(child_yang_name == "exceed-set-cos-transmit")
    {
        if(exceed_set_cos_transmit == nullptr)
        {
            exceed_set_cos_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit>();
        }
        return exceed_set_cos_transmit;
    }

    if(child_yang_name == "exceed-set-discard-class-transmit")
    {
        if(exceed_set_discard_class_transmit == nullptr)
        {
            exceed_set_discard_class_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit>();
        }
        return exceed_set_discard_class_transmit;
    }

    if(child_yang_name == "exceed-set-dscp-transmit")
    {
        if(exceed_set_dscp_transmit == nullptr)
        {
            exceed_set_dscp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit>();
        }
        return exceed_set_dscp_transmit;
    }

    if(child_yang_name == "exceed-set-dscp-transmit-table")
    {
        if(exceed_set_dscp_transmit_table == nullptr)
        {
            exceed_set_dscp_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable>();
        }
        return exceed_set_dscp_transmit_table;
    }

    if(child_yang_name == "exceed-set-frde-transmit")
    {
        if(exceed_set_frde_transmit == nullptr)
        {
            exceed_set_frde_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit>();
        }
        return exceed_set_frde_transmit;
    }

    if(child_yang_name == "exceed-set-mpls-exp-imposition-transmit")
    {
        if(exceed_set_mpls_exp_imposition_transmit == nullptr)
        {
            exceed_set_mpls_exp_imposition_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit>();
        }
        return exceed_set_mpls_exp_imposition_transmit;
    }

    if(child_yang_name == "exceed-set-mpls-exp-topmost-transmit")
    {
        if(exceed_set_mpls_exp_topmost_transmit == nullptr)
        {
            exceed_set_mpls_exp_topmost_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit>();
        }
        return exceed_set_mpls_exp_topmost_transmit;
    }

    if(child_yang_name == "exceed-set-prec-transmit")
    {
        if(exceed_set_prec_transmit == nullptr)
        {
            exceed_set_prec_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit>();
        }
        return exceed_set_prec_transmit;
    }

    if(child_yang_name == "exceed-set-qos-transmit")
    {
        if(exceed_set_qos_transmit == nullptr)
        {
            exceed_set_qos_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit>();
        }
        return exceed_set_qos_transmit;
    }

    if(child_yang_name == "exceed-transmit")
    {
        if(exceed_transmit == nullptr)
        {
            exceed_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit>();
        }
        return exceed_transmit;
    }

    if(child_yang_name == "violate-drop")
    {
        if(violate_drop == nullptr)
        {
            violate_drop = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop>();
        }
        return violate_drop;
    }

    if(child_yang_name == "violate-set-clp-transmit")
    {
        if(violate_set_clp_transmit == nullptr)
        {
            violate_set_clp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit>();
        }
        return violate_set_clp_transmit;
    }

    if(child_yang_name == "violate-set-cos-transmit")
    {
        if(violate_set_cos_transmit == nullptr)
        {
            violate_set_cos_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit>();
        }
        return violate_set_cos_transmit;
    }

    if(child_yang_name == "violate-set-discard-class-transmit")
    {
        if(violate_set_discard_class_transmit == nullptr)
        {
            violate_set_discard_class_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit>();
        }
        return violate_set_discard_class_transmit;
    }

    if(child_yang_name == "violate-set-dscp-transmit")
    {
        if(violate_set_dscp_transmit == nullptr)
        {
            violate_set_dscp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit>();
        }
        return violate_set_dscp_transmit;
    }

    if(child_yang_name == "violate-set-frde-transmit")
    {
        if(violate_set_frde_transmit == nullptr)
        {
            violate_set_frde_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit>();
        }
        return violate_set_frde_transmit;
    }

    if(child_yang_name == "violate-set-mpls-exp-imposition-transmit")
    {
        if(violate_set_mpls_exp_imposition_transmit == nullptr)
        {
            violate_set_mpls_exp_imposition_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit>();
        }
        return violate_set_mpls_exp_imposition_transmit;
    }

    if(child_yang_name == "violate-set-mpls-exp-topmost-transmit")
    {
        if(violate_set_mpls_exp_topmost_transmit == nullptr)
        {
            violate_set_mpls_exp_topmost_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit>();
        }
        return violate_set_mpls_exp_topmost_transmit;
    }

    if(child_yang_name == "violate-set-prec-transmit")
    {
        if(violate_set_prec_transmit == nullptr)
        {
            violate_set_prec_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit>();
        }
        return violate_set_prec_transmit;
    }

    if(child_yang_name == "violate-set-qos-transmit")
    {
        if(violate_set_qos_transmit == nullptr)
        {
            violate_set_qos_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit>();
        }
        return violate_set_qos_transmit;
    }

    if(child_yang_name == "violate-transmit")
    {
        if(violate_transmit == nullptr)
        {
            violate_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit>();
        }
        return violate_transmit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_drop != nullptr)
    {
        children["conform-drop"] = conform_drop;
    }

    if(conform_set_clp_transmit != nullptr)
    {
        children["conform-set-clp-transmit"] = conform_set_clp_transmit;
    }

    if(conform_set_cos_transmit != nullptr)
    {
        children["conform-set-cos-transmit"] = conform_set_cos_transmit;
    }

    if(conform_set_cos_transmit_table != nullptr)
    {
        children["conform-set-cos-transmit-table"] = conform_set_cos_transmit_table;
    }

    if(conform_set_discard_class_transmit != nullptr)
    {
        children["conform-set-discard-class-transmit"] = conform_set_discard_class_transmit;
    }

    if(conform_set_dscp_transmit != nullptr)
    {
        children["conform-set-dscp-transmit"] = conform_set_dscp_transmit;
    }

    if(conform_set_dscp_transmit_table != nullptr)
    {
        children["conform-set-dscp-transmit-table"] = conform_set_dscp_transmit_table;
    }

    if(conform_set_frde_transmit != nullptr)
    {
        children["conform-set-frde-transmit"] = conform_set_frde_transmit;
    }

    if(conform_set_mpls_exp_imposition_transmit != nullptr)
    {
        children["conform-set-mpls-exp-imposition-transmit"] = conform_set_mpls_exp_imposition_transmit;
    }

    if(conform_set_mpls_exp_imposition_transmit_table != nullptr)
    {
        children["conform-set-mpls-exp-imposition-transmit-table"] = conform_set_mpls_exp_imposition_transmit_table;
    }

    if(conform_set_mpls_exp_topmost_transmit != nullptr)
    {
        children["conform-set-mpls-exp-topmost-transmit"] = conform_set_mpls_exp_topmost_transmit;
    }

    if(conform_set_mpls_exp_topmost_transmit_table != nullptr)
    {
        children["conform-set-mpls-exp-topmost-transmit-table"] = conform_set_mpls_exp_topmost_transmit_table;
    }

    if(conform_set_prec_transmit != nullptr)
    {
        children["conform-set-prec-transmit"] = conform_set_prec_transmit;
    }

    if(conform_set_prec_transmit_table != nullptr)
    {
        children["conform-set-prec-transmit-table"] = conform_set_prec_transmit_table;
    }

    if(conform_set_qos_transmit != nullptr)
    {
        children["conform-set-qos-transmit"] = conform_set_qos_transmit;
    }

    if(conform_set_qos_transmit_table != nullptr)
    {
        children["conform-set-qos-transmit-table"] = conform_set_qos_transmit_table;
    }

    if(conform_transmit != nullptr)
    {
        children["conform-transmit"] = conform_transmit;
    }

    if(exceed_drop != nullptr)
    {
        children["exceed-drop"] = exceed_drop;
    }

    if(exceed_dscp != nullptr)
    {
        children["exceed-dscp"] = exceed_dscp;
    }

    if(exceed_set_clp_transmit != nullptr)
    {
        children["exceed-set-clp-transmit"] = exceed_set_clp_transmit;
    }

    if(exceed_set_cos_transmit != nullptr)
    {
        children["exceed-set-cos-transmit"] = exceed_set_cos_transmit;
    }

    if(exceed_set_discard_class_transmit != nullptr)
    {
        children["exceed-set-discard-class-transmit"] = exceed_set_discard_class_transmit;
    }

    if(exceed_set_dscp_transmit != nullptr)
    {
        children["exceed-set-dscp-transmit"] = exceed_set_dscp_transmit;
    }

    if(exceed_set_dscp_transmit_table != nullptr)
    {
        children["exceed-set-dscp-transmit-table"] = exceed_set_dscp_transmit_table;
    }

    if(exceed_set_frde_transmit != nullptr)
    {
        children["exceed-set-frde-transmit"] = exceed_set_frde_transmit;
    }

    if(exceed_set_mpls_exp_imposition_transmit != nullptr)
    {
        children["exceed-set-mpls-exp-imposition-transmit"] = exceed_set_mpls_exp_imposition_transmit;
    }

    if(exceed_set_mpls_exp_topmost_transmit != nullptr)
    {
        children["exceed-set-mpls-exp-topmost-transmit"] = exceed_set_mpls_exp_topmost_transmit;
    }

    if(exceed_set_prec_transmit != nullptr)
    {
        children["exceed-set-prec-transmit"] = exceed_set_prec_transmit;
    }

    if(exceed_set_qos_transmit != nullptr)
    {
        children["exceed-set-qos-transmit"] = exceed_set_qos_transmit;
    }

    if(exceed_transmit != nullptr)
    {
        children["exceed-transmit"] = exceed_transmit;
    }

    if(violate_drop != nullptr)
    {
        children["violate-drop"] = violate_drop;
    }

    if(violate_set_clp_transmit != nullptr)
    {
        children["violate-set-clp-transmit"] = violate_set_clp_transmit;
    }

    if(violate_set_cos_transmit != nullptr)
    {
        children["violate-set-cos-transmit"] = violate_set_cos_transmit;
    }

    if(violate_set_discard_class_transmit != nullptr)
    {
        children["violate-set-discard-class-transmit"] = violate_set_discard_class_transmit;
    }

    if(violate_set_dscp_transmit != nullptr)
    {
        children["violate-set-dscp-transmit"] = violate_set_dscp_transmit;
    }

    if(violate_set_frde_transmit != nullptr)
    {
        children["violate-set-frde-transmit"] = violate_set_frde_transmit;
    }

    if(violate_set_mpls_exp_imposition_transmit != nullptr)
    {
        children["violate-set-mpls-exp-imposition-transmit"] = violate_set_mpls_exp_imposition_transmit;
    }

    if(violate_set_mpls_exp_topmost_transmit != nullptr)
    {
        children["violate-set-mpls-exp-topmost-transmit"] = violate_set_mpls_exp_topmost_transmit;
    }

    if(violate_set_prec_transmit != nullptr)
    {
        children["violate-set-prec-transmit"] = violate_set_prec_transmit;
    }

    if(violate_set_qos_transmit != nullptr)
    {
        children["violate-set-qos-transmit"] = violate_set_qos_transmit;
    }

    if(violate_transmit != nullptr)
    {
        children["violate-transmit"] = violate_transmit;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-drop" || name == "conform-set-clp-transmit" || name == "conform-set-cos-transmit" || name == "conform-set-cos-transmit-table" || name == "conform-set-discard-class-transmit" || name == "conform-set-dscp-transmit" || name == "conform-set-dscp-transmit-table" || name == "conform-set-frde-transmit" || name == "conform-set-mpls-exp-imposition-transmit" || name == "conform-set-mpls-exp-imposition-transmit-table" || name == "conform-set-mpls-exp-topmost-transmit" || name == "conform-set-mpls-exp-topmost-transmit-table" || name == "conform-set-prec-transmit" || name == "conform-set-prec-transmit-table" || name == "conform-set-qos-transmit" || name == "conform-set-qos-transmit-table" || name == "conform-transmit" || name == "exceed-drop" || name == "exceed-dscp" || name == "exceed-set-clp-transmit" || name == "exceed-set-cos-transmit" || name == "exceed-set-discard-class-transmit" || name == "exceed-set-dscp-transmit" || name == "exceed-set-dscp-transmit-table" || name == "exceed-set-frde-transmit" || name == "exceed-set-mpls-exp-imposition-transmit" || name == "exceed-set-mpls-exp-topmost-transmit" || name == "exceed-set-prec-transmit" || name == "exceed-set-qos-transmit" || name == "exceed-transmit" || name == "violate-drop" || name == "violate-set-clp-transmit" || name == "violate-set-cos-transmit" || name == "violate-set-discard-class-transmit" || name == "violate-set-dscp-transmit" || name == "violate-set-frde-transmit" || name == "violate-set-mpls-exp-imposition-transmit" || name == "violate-set-mpls-exp-topmost-transmit" || name == "violate-set-prec-transmit" || name == "violate-set-qos-transmit" || name == "violate-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::ConformDrop()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-drop"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::~ConformDrop()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::ConformAction::ConformAction()
    :
    drop{YType::empty, "drop"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-drop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::ConformAction::has_data() const
{
    return drop.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformDrop::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::ConformSetClpTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-clp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::~ConformSetClpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-clp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::ConformAction::ConformAction()
    :
    set_clp_transmit{YType::empty, "set-clp-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-clp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::ConformAction::has_data() const
{
    return set_clp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_clp_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_clp_transmit.is_set || is_set(set_clp_transmit.yfilter)) leaf_name_data.push_back(set_clp_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit = value;
        set_clp_transmit.value_namespace = name_space;
        set_clp_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetClpTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-clp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::ConformSetCosTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-cos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::~ConformSetCosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-cos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::ConformAction::ConformAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-cos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::ConformAction::has_data() const
{
    return set_cos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_cos_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.yfilter)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit = value;
        set_cos_transmit.value_namespace = name_space;
        set_cos_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-cos-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::ConformSetCosTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-cos-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::~ConformSetCosTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-cos-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::ConformAction::ConformAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-cos-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::ConformAction::has_data() const
{
    return set_cos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_cos_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.yfilter)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit = value;
        set_cos_transmit.value_namespace = name_space;
        set_cos_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetCosTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-cos-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::ConformSetDiscardClassTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-discard-class-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::~ConformSetDiscardClassTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-discard-class-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::ConformAction()
    :
    set_discard_class_transmit{YType::uint8, "set-discard-class-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-discard-class-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::has_data() const
{
    return set_discard_class_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_discard_class_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_discard_class_transmit.is_set || is_set(set_discard_class_transmit.yfilter)) leaf_name_data.push_back(set_discard_class_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit = value;
        set_discard_class_transmit.value_namespace = name_space;
        set_discard_class_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-discard-class-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::ConformSetDscpTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-dscp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::~ConformSetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-dscp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::ConformAction::ConformAction()
    :
    set_dscp_transmit{YType::str, "set-dscp-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-dscp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::ConformAction::has_data() const
{
    return set_dscp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_dscp_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.yfilter)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit = value;
        set_dscp_transmit.value_namespace = name_space;
        set_dscp_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-dscp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::ConformSetDscpTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-dscp-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::~ConformSetDscpTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-dscp-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::ConformAction::ConformAction()
    :
    set_dscp_transmit{YType::str, "set-dscp-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-dscp-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::ConformAction::has_data() const
{
    return set_dscp_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_dscp_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.yfilter)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit = value;
        set_dscp_transmit.value_namespace = name_space;
        set_dscp_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetDscpTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-dscp-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::ConformSetFrdeTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-frde-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::~ConformSetFrdeTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-frde-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::ConformAction::ConformAction()
    :
    set_frde_transmit{YType::empty, "set-frde-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-frde-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::ConformAction::has_data() const
{
    return set_frde_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_frde_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_frde_transmit.is_set || is_set(set_frde_transmit.yfilter)) leaf_name_data.push_back(set_frde_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit = value;
        set_frde_transmit.value_namespace = name_space;
        set_frde_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetFrdeTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-frde-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformSetMplsExpImpositionTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-imposition-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::~ConformSetMplsExpImpositionTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-imposition-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::ConformAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-imposition-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_imposition_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
        set_mpls_exp_imposition_transmit.value_namespace = name_space;
        set_mpls_exp_imposition_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-imposition-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformSetMplsExpImpositionTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-imposition-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::~ConformSetMplsExpImpositionTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-imposition-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::ConformAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-imposition-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_imposition_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
        set_mpls_exp_imposition_transmit.value_namespace = name_space;
        set_mpls_exp_imposition_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-imposition-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformSetMplsExpTopmostTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-topmost-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::~ConformSetMplsExpTopmostTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-topmost-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::ConformAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-topmost-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_topmost_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
        set_mpls_exp_topmost_transmit.value_namespace = name_space;
        set_mpls_exp_topmost_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-topmost-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformSetMplsExpTopmostTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-topmost-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::~ConformSetMplsExpTopmostTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-topmost-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::ConformAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-topmost-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_topmost_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
        set_mpls_exp_topmost_transmit.value_namespace = name_space;
        set_mpls_exp_topmost_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-topmost-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::ConformSetPrecTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-prec-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::~ConformSetPrecTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-prec-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit::Police::Rate::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::Table::policed_dscp {0, "policed-dscp"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::ExceedAction::drop {0, "drop"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::ExceedAction::policed_dscp_transmit {1, "policed-dscp-transmit"};


}
}

