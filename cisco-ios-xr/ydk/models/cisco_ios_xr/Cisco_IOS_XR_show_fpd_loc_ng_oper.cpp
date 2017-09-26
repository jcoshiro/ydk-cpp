
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_show_fpd_loc_ng_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_show_fpd_loc_ng_oper {

ShowFpd::ShowFpd()
    :
    help_locations(std::make_shared<ShowFpd::HelpLocations>())
	,hw_module_fpd(std::make_shared<ShowFpd::HwModuleFpd>())
	,hw_module_fpd_help_fpd(std::make_shared<ShowFpd::HwModuleFpdHelpFpd>())
	,location_help(std::make_shared<ShowFpd::LocationHelp>())
	,locations(std::make_shared<ShowFpd::Locations>())
	,package(std::make_shared<ShowFpd::Package>())
{
    help_locations->parent = this;
    hw_module_fpd->parent = this;
    hw_module_fpd_help_fpd->parent = this;
    location_help->parent = this;
    locations->parent = this;
    package->parent = this;

    yang_name = "show-fpd"; yang_parent_name = "Cisco-IOS-XR-show-fpd-loc-ng-oper"; is_top_level_class = true; has_list_ancestor = false;
}

ShowFpd::~ShowFpd()
{
}

bool ShowFpd::has_data() const
{
    return (help_locations !=  nullptr && help_locations->has_data())
	|| (hw_module_fpd !=  nullptr && hw_module_fpd->has_data())
	|| (hw_module_fpd_help_fpd !=  nullptr && hw_module_fpd_help_fpd->has_data())
	|| (location_help !=  nullptr && location_help->has_data())
	|| (locations !=  nullptr && locations->has_data())
	|| (package !=  nullptr && package->has_data());
}

bool ShowFpd::has_operation() const
{
    return is_set(yfilter)
	|| (help_locations !=  nullptr && help_locations->has_operation())
	|| (hw_module_fpd !=  nullptr && hw_module_fpd->has_operation())
	|| (hw_module_fpd_help_fpd !=  nullptr && hw_module_fpd_help_fpd->has_operation())
	|| (location_help !=  nullptr && location_help->has_operation())
	|| (locations !=  nullptr && locations->has_operation())
	|| (package !=  nullptr && package->has_operation());
}

std::string ShowFpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ShowFpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "help-locations")
    {
        if(help_locations == nullptr)
        {
            help_locations = std::make_shared<ShowFpd::HelpLocations>();
        }
        return help_locations;
    }

    if(child_yang_name == "hw-module-fpd")
    {
        if(hw_module_fpd == nullptr)
        {
            hw_module_fpd = std::make_shared<ShowFpd::HwModuleFpd>();
        }
        return hw_module_fpd;
    }

    if(child_yang_name == "hw-module-fpd-help-fpd")
    {
        if(hw_module_fpd_help_fpd == nullptr)
        {
            hw_module_fpd_help_fpd = std::make_shared<ShowFpd::HwModuleFpdHelpFpd>();
        }
        return hw_module_fpd_help_fpd;
    }

    if(child_yang_name == "location-help")
    {
        if(location_help == nullptr)
        {
            location_help = std::make_shared<ShowFpd::LocationHelp>();
        }
        return location_help;
    }

    if(child_yang_name == "locations")
    {
        if(locations == nullptr)
        {
            locations = std::make_shared<ShowFpd::Locations>();
        }
        return locations;
    }

    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<ShowFpd::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(help_locations != nullptr)
    {
        children["help-locations"] = help_locations;
    }

    if(hw_module_fpd != nullptr)
    {
        children["hw-module-fpd"] = hw_module_fpd;
    }

    if(hw_module_fpd_help_fpd != nullptr)
    {
        children["hw-module-fpd-help-fpd"] = hw_module_fpd_help_fpd;
    }

    if(location_help != nullptr)
    {
        children["location-help"] = location_help;
    }

    if(locations != nullptr)
    {
        children["locations"] = locations;
    }

    if(package != nullptr)
    {
        children["package"] = package;
    }

    return children;
}

void ShowFpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ShowFpd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ShowFpd::clone_ptr() const
{
    return std::make_shared<ShowFpd>();
}

std::string ShowFpd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ShowFpd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ShowFpd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ShowFpd::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ShowFpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "help-locations" || name == "hw-module-fpd" || name == "hw-module-fpd-help-fpd" || name == "location-help" || name == "locations" || name == "package")
        return true;
    return false;
}

ShowFpd::HelpLocations::HelpLocations()
{

    yang_name = "help-locations"; yang_parent_name = "show-fpd"; is_top_level_class = false; has_list_ancestor = false;
}

ShowFpd::HelpLocations::~HelpLocations()
{
}

bool ShowFpd::HelpLocations::has_data() const
{
    for (std::size_t index=0; index<help_location.size(); index++)
    {
        if(help_location[index]->has_data())
            return true;
    }
    return false;
}

bool ShowFpd::HelpLocations::has_operation() const
{
    for (std::size_t index=0; index<help_location.size(); index++)
    {
        if(help_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ShowFpd::HelpLocations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowFpd::HelpLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "help-locations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::HelpLocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ShowFpd::HelpLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "help-location")
    {
        for(auto const & c : help_location)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ShowFpd::HelpLocations::HelpLocation>();
        c->parent = this;
        help_location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::HelpLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : help_location)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ShowFpd::HelpLocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ShowFpd::HelpLocations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ShowFpd::HelpLocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "help-location")
        return true;
    return false;
}

ShowFpd::HelpLocations::HelpLocation::HelpLocation()
    :
    location_name{YType::str, "location-name"}
    	,
    help_fpd(std::make_shared<ShowFpd::HelpLocations::HelpLocation::HelpFpd>())
{
    help_fpd->parent = this;

    yang_name = "help-location"; yang_parent_name = "help-locations"; is_top_level_class = false; has_list_ancestor = false;
}

ShowFpd::HelpLocations::HelpLocation::~HelpLocation()
{
}

bool ShowFpd::HelpLocations::HelpLocation::has_data() const
{
    return location_name.is_set
	|| (help_fpd !=  nullptr && help_fpd->has_data());
}

bool ShowFpd::HelpLocations::HelpLocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter)
	|| (help_fpd !=  nullptr && help_fpd->has_operation());
}

std::string ShowFpd::HelpLocations::HelpLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/help-locations/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowFpd::HelpLocations::HelpLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "help-location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::HelpLocations::HelpLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ShowFpd::HelpLocations::HelpLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "help-fpd")
    {
        if(help_fpd == nullptr)
        {
            help_fpd = std::make_shared<ShowFpd::HelpLocations::HelpLocation::HelpFpd>();
        }
        return help_fpd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::HelpLocations::HelpLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(help_fpd != nullptr)
    {
        children["help-fpd"] = help_fpd;
    }

    return children;
}

void ShowFpd::HelpLocations::HelpLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void ShowFpd::HelpLocations::HelpLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool ShowFpd::HelpLocations::HelpLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "help-fpd" || name == "location-name")
        return true;
    return false;
}

ShowFpd::HelpLocations::HelpLocation::HelpFpd::HelpFpd()
{

    yang_name = "help-fpd"; yang_parent_name = "help-location"; is_top_level_class = false; has_list_ancestor = true;
}

ShowFpd::HelpLocations::HelpLocation::HelpFpd::~HelpFpd()
{
}

bool ShowFpd::HelpLocations::HelpLocation::HelpFpd::has_data() const
{
    for (std::size_t index=0; index<fpd_name.size(); index++)
    {
        if(fpd_name[index]->has_data())
            return true;
    }
    return false;
}

bool ShowFpd::HelpLocations::HelpLocation::HelpFpd::has_operation() const
{
    for (std::size_t index=0; index<fpd_name.size(); index++)
    {
        if(fpd_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ShowFpd::HelpLocations::HelpLocation::HelpFpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "help-fpd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::HelpLocations::HelpLocation::HelpFpd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ShowFpd::HelpLocations::HelpLocation::HelpFpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpd-name")
    {
        for(auto const & c : fpd_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName>();
        c->parent = this;
        fpd_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::HelpLocations::HelpLocation::HelpFpd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fpd_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ShowFpd::HelpLocations::HelpLocation::HelpFpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ShowFpd::HelpLocations::HelpLocation::HelpFpd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ShowFpd::HelpLocations::HelpLocation::HelpFpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpd-name")
        return true;
    return false;
}

ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::FpdName()
    :
    fpd_name{YType::str, "fpd-name"},
    location{YType::str, "location"}
{

    yang_name = "fpd-name"; yang_parent_name = "help-fpd"; is_top_level_class = false; has_list_ancestor = true;
}

ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::~FpdName()
{
}

bool ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::has_data() const
{
    return fpd_name.is_set
	|| location.is_set;
}

bool ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fpd_name.yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fpd_name.is_set || is_set(fpd_name.yfilter)) leaf_name_data.push_back(fpd_name.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fpd-name")
    {
        fpd_name = value;
        fpd_name.value_namespace = name_space;
        fpd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fpd-name")
    {
        fpd_name.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpd-name" || name == "location")
        return true;
    return false;
}

ShowFpd::HwModuleFpd::HwModuleFpd()
{

    yang_name = "hw-module-fpd"; yang_parent_name = "show-fpd"; is_top_level_class = false; has_list_ancestor = false;
}

ShowFpd::HwModuleFpd::~HwModuleFpd()
{
}

bool ShowFpd::HwModuleFpd::has_data() const
{
    for (std::size_t index=0; index<fpd_info_detaile.size(); index++)
    {
        if(fpd_info_detaile[index]->has_data())
            return true;
    }
    return false;
}

bool ShowFpd::HwModuleFpd::has_operation() const
{
    for (std::size_t index=0; index<fpd_info_detaile.size(); index++)
    {
        if(fpd_info_detaile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ShowFpd::HwModuleFpd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowFpd::HwModuleFpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-module-fpd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::HwModuleFpd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ShowFpd::HwModuleFpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpd-info-detaile")
    {
        for(auto const & c : fpd_info_detaile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ShowFpd::HwModuleFpd::FpdInfoDetaile>();
        c->parent = this;
        fpd_info_detaile.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::HwModuleFpd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fpd_info_detaile)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ShowFpd::HwModuleFpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ShowFpd::HwModuleFpd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ShowFpd::HwModuleFpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpd-info-detaile")
        return true;
    return false;
}

ShowFpd::HwModuleFpd::FpdInfoDetaile::FpdInfoDetaile()
    :
    card_name{YType::str, "card-name"},
    fpd_name{YType::str, "fpd-name"},
    hw_version{YType::str, "hw-version"},
    location{YType::str, "location"},
    programd_version{YType::str, "programd-version"},
    running_version{YType::str, "running-version"},
    secure_boot_attr{YType::str, "secure-boot-attr"},
    status{YType::str, "status"}
{

    yang_name = "fpd-info-detaile"; yang_parent_name = "hw-module-fpd"; is_top_level_class = false; has_list_ancestor = false;
}

ShowFpd::HwModuleFpd::FpdInfoDetaile::~FpdInfoDetaile()
{
}

bool ShowFpd::HwModuleFpd::FpdInfoDetaile::has_data() const
{
    return card_name.is_set
	|| fpd_name.is_set
	|| hw_version.is_set
	|| location.is_set
	|| programd_version.is_set
	|| running_version.is_set
	|| secure_boot_attr.is_set
	|| status.is_set;
}

bool ShowFpd::HwModuleFpd::FpdInfoDetaile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_name.yfilter)
	|| ydk::is_set(fpd_name.yfilter)
	|| ydk::is_set(hw_version.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(programd_version.yfilter)
	|| ydk::is_set(running_version.yfilter)
	|| ydk::is_set(secure_boot_attr.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string ShowFpd::HwModuleFpd::FpdInfoDetaile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/hw-module-fpd/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowFpd::HwModuleFpd::FpdInfoDetaile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-info-detaile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::HwModuleFpd::FpdInfoDetaile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_name.is_set || is_set(card_name.yfilter)) leaf_name_data.push_back(card_name.get_name_leafdata());
    if (fpd_name.is_set || is_set(fpd_name.yfilter)) leaf_name_data.push_back(fpd_name.get_name_leafdata());
    if (hw_version.is_set || is_set(hw_version.yfilter)) leaf_name_data.push_back(hw_version.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (programd_version.is_set || is_set(programd_version.yfilter)) leaf_name_data.push_back(programd_version.get_name_leafdata());
    if (running_version.is_set || is_set(running_version.yfilter)) leaf_name_data.push_back(running_version.get_name_leafdata());
    if (secure_boot_attr.is_set || is_set(secure_boot_attr.yfilter)) leaf_name_data.push_back(secure_boot_attr.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ShowFpd::HwModuleFpd::FpdInfoDetaile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::HwModuleFpd::FpdInfoDetaile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ShowFpd::HwModuleFpd::FpdInfoDetaile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-name")
    {
        card_name = value;
        card_name.value_namespace = name_space;
        card_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-name")
    {
        fpd_name = value;
        fpd_name.value_namespace = name_space;
        fpd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-version")
    {
        hw_version = value;
        hw_version.value_namespace = name_space;
        hw_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "programd-version")
    {
        programd_version = value;
        programd_version.value_namespace = name_space;
        programd_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running-version")
    {
        running_version = value;
        running_version.value_namespace = name_space;
        running_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-boot-attr")
    {
        secure_boot_attr = value;
        secure_boot_attr.value_namespace = name_space;
        secure_boot_attr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void ShowFpd::HwModuleFpd::FpdInfoDetaile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-name")
    {
        card_name.yfilter = yfilter;
    }
    if(value_path == "fpd-name")
    {
        fpd_name.yfilter = yfilter;
    }
    if(value_path == "hw-version")
    {
        hw_version.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "programd-version")
    {
        programd_version.yfilter = yfilter;
    }
    if(value_path == "running-version")
    {
        running_version.yfilter = yfilter;
    }
    if(value_path == "secure-boot-attr")
    {
        secure_boot_attr.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool ShowFpd::HwModuleFpd::FpdInfoDetaile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card-name" || name == "fpd-name" || name == "hw-version" || name == "location" || name == "programd-version" || name == "running-version" || name == "secure-boot-attr" || name == "status")
        return true;
    return false;
}

ShowFpd::HwModuleFpdHelpFpd::HwModuleFpdHelpFpd()
{

    yang_name = "hw-module-fpd-help-fpd"; yang_parent_name = "show-fpd"; is_top_level_class = false; has_list_ancestor = false;
}

ShowFpd::HwModuleFpdHelpFpd::~HwModuleFpdHelpFpd()
{
}

bool ShowFpd::HwModuleFpdHelpFpd::has_data() const
{
    for (std::size_t index=0; index<fpd_name.size(); index++)
    {
        if(fpd_name[index]->has_data())
            return true;
    }
    return false;
}

bool ShowFpd::HwModuleFpdHelpFpd::has_operation() const
{
    for (std::size_t index=0; index<fpd_name.size(); index++)
    {
        if(fpd_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ShowFpd::HwModuleFpdHelpFpd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowFpd::HwModuleFpdHelpFpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-module-fpd-help-fpd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::HwModuleFpdHelpFpd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ShowFpd::HwModuleFpdHelpFpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpd-name")
    {
        for(auto const & c : fpd_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ShowFpd::HwModuleFpdHelpFpd::FpdName>();
        c->parent = this;
        fpd_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::HwModuleFpdHelpFpd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fpd_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ShowFpd::HwModuleFpdHelpFpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ShowFpd::HwModuleFpdHelpFpd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ShowFpd::HwModuleFpdHelpFpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpd-name")
        return true;
    return false;
}

ShowFpd::HwModuleFpdHelpFpd::FpdName::FpdName()
    :
    fpd_name{YType::str, "fpd-name"},
    location{YType::str, "location"}
{

    yang_name = "fpd-name"; yang_parent_name = "hw-module-fpd-help-fpd"; is_top_level_class = false; has_list_ancestor = false;
}

ShowFpd::HwModuleFpdHelpFpd::FpdName::~FpdName()
{
}

bool ShowFpd::HwModuleFpdHelpFpd::FpdName::has_data() const
{
    return fpd_name.is_set
	|| location.is_set;
}

bool ShowFpd::HwModuleFpdHelpFpd::FpdName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fpd_name.yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string ShowFpd::HwModuleFpdHelpFpd::FpdName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/hw-module-fpd-help-fpd/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowFpd::HwModuleFpdHelpFpd::FpdName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::HwModuleFpdHelpFpd::FpdName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fpd_name.is_set || is_set(fpd_name.yfilter)) leaf_name_data.push_back(fpd_name.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ShowFpd::HwModuleFpdHelpFpd::FpdName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::HwModuleFpdHelpFpd::FpdName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ShowFpd::HwModuleFpdHelpFpd::FpdName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fpd-name")
    {
        fpd_name = value;
        fpd_name.value_namespace = name_space;
        fpd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void ShowFpd::HwModuleFpdHelpFpd::FpdName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fpd-name")
    {
        fpd_name.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool ShowFpd::HwModuleFpdHelpFpd::FpdName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpd-name" || name == "location")
        return true;
    return false;
}

ShowFpd::LocationHelp::LocationHelp()
{

    yang_name = "location-help"; yang_parent_name = "show-fpd"; is_top_level_class = false; has_list_ancestor = false;
}

ShowFpd::LocationHelp::~LocationHelp()
{
}

bool ShowFpd::LocationHelp::has_data() const
{
    for (std::size_t index=0; index<location_name.size(); index++)
    {
        if(location_name[index]->has_data())
            return true;
    }
    return false;
}

bool ShowFpd::LocationHelp::has_operation() const
{
    for (std::size_t index=0; index<location_name.size(); index++)
    {
        if(location_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ShowFpd::LocationHelp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowFpd::LocationHelp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location-help";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::LocationHelp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ShowFpd::LocationHelp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location-name")
    {
        for(auto const & c : location_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ShowFpd::LocationHelp::LocationName>();
        c->parent = this;
        location_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::LocationHelp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : location_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ShowFpd::LocationHelp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ShowFpd::LocationHelp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ShowFpd::LocationHelp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

ShowFpd::LocationHelp::LocationName::LocationName()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location-name"; yang_parent_name = "location-help"; is_top_level_class = false; has_list_ancestor = false;
}

ShowFpd::LocationHelp::LocationName::~LocationName()
{
}

bool ShowFpd::LocationHelp::LocationName::has_data() const
{
    return location_name.is_set;
}

bool ShowFpd::LocationHelp::LocationName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string ShowFpd::LocationHelp::LocationName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/location-help/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowFpd::LocationHelp::LocationName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::LocationHelp::LocationName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ShowFpd::LocationHelp::LocationName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::LocationHelp::LocationName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ShowFpd::LocationHelp::LocationName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void ShowFpd::LocationHelp::LocationName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool ShowFpd::LocationHelp::LocationName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

ShowFpd::Locations::Locations()
{

    yang_name = "locations"; yang_parent_name = "show-fpd"; is_top_level_class = false; has_list_ancestor = false;
}

ShowFpd::Locations::~Locations()
{
}

bool ShowFpd::Locations::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool ShowFpd::Locations::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ShowFpd::Locations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowFpd::Locations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::Locations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ShowFpd::Locations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        for(auto const & c : location)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ShowFpd::Locations::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::Locations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : location)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ShowFpd::Locations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ShowFpd::Locations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ShowFpd::Locations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

ShowFpd::Locations::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "locations"; is_top_level_class = false; has_list_ancestor = false;
}

ShowFpd::Locations::Location::~Location()
{
}

bool ShowFpd::Locations::Location::has_data() const
{
    for (std::size_t index=0; index<fpd.size(); index++)
    {
        if(fpd[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool ShowFpd::Locations::Location::has_operation() const
{
    for (std::size_t index=0; index<fpd.size(); index++)
    {
        if(fpd[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string ShowFpd::Locations::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/locations/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowFpd::Locations::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::Locations::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ShowFpd::Locations::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpd")
    {
        for(auto const & c : fpd)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ShowFpd::Locations::Location::Fpd>();
        c->parent = this;
        fpd.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::Locations::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fpd)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ShowFpd::Locations::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void ShowFpd::Locations::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool ShowFpd::Locations::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpd" || name == "location-name")
        return true;
    return false;
}

ShowFpd::Locations::Location::Fpd::Fpd()
    :
    fpd_name{YType::str, "fpd-name"}
{

    yang_name = "fpd"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

ShowFpd::Locations::Location::Fpd::~Fpd()
{
}

bool ShowFpd::Locations::Location::Fpd::has_data() const
{
    for (std::size_t index=0; index<fpd_info_detaile.size(); index++)
    {
        if(fpd_info_detaile[index]->has_data())
            return true;
    }
    return fpd_name.is_set;
}

bool ShowFpd::Locations::Location::Fpd::has_operation() const
{
    for (std::size_t index=0; index<fpd_info_detaile.size(); index++)
    {
        if(fpd_info_detaile[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fpd_name.yfilter);
}

std::string ShowFpd::Locations::Location::Fpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd" <<"[fpd-name='" <<fpd_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::Locations::Location::Fpd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fpd_name.is_set || is_set(fpd_name.yfilter)) leaf_name_data.push_back(fpd_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ShowFpd::Locations::Location::Fpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpd-info-detaile")
    {
        for(auto const & c : fpd_info_detaile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ShowFpd::Locations::Location::Fpd::FpdInfoDetaile>();
        c->parent = this;
        fpd_info_detaile.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::Locations::Location::Fpd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fpd_info_detaile)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ShowFpd::Locations::Location::Fpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fpd-name")
    {
        fpd_name = value;
        fpd_name.value_namespace = name_space;
        fpd_name.value_namespace_prefix = name_space_prefix;
    }
}

void ShowFpd::Locations::Location::Fpd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fpd-name")
    {
        fpd_name.yfilter = yfilter;
    }
}

bool ShowFpd::Locations::Location::Fpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpd-info-detaile" || name == "fpd-name")
        return true;
    return false;
}

ShowFpd::Locations::Location::Fpd::FpdInfoDetaile::FpdInfoDetaile()
    :
    card_name{YType::str, "card-name"},
    fpd_name{YType::str, "fpd-name"},
    hw_version{YType::str, "hw-version"},
    location{YType::str, "location"},
    programd_version{YType::str, "programd-version"},
    running_version{YType::str, "running-version"},
    secure_boot_attr{YType::str, "secure-boot-attr"},
    status{YType::str, "status"}
{

    yang_name = "fpd-info-detaile"; yang_parent_name = "fpd"; is_top_level_class = false; has_list_ancestor = true;
}

ShowFpd::Locations::Location::Fpd::FpdInfoDetaile::~FpdInfoDetaile()
{
}

bool ShowFpd::Locations::Location::Fpd::FpdInfoDetaile::has_data() const
{
    return card_name.is_set
	|| fpd_name.is_set
	|| hw_version.is_set
	|| location.is_set
	|| programd_version.is_set
	|| running_version.is_set
	|| secure_boot_attr.is_set
	|| status.is_set;
}

bool ShowFpd::Locations::Location::Fpd::FpdInfoDetaile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_name.yfilter)
	|| ydk::is_set(fpd_name.yfilter)
	|| ydk::is_set(hw_version.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(programd_version.yfilter)
	|| ydk::is_set(running_version.yfilter)
	|| ydk::is_set(secure_boot_attr.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string ShowFpd::Locations::Location::Fpd::FpdInfoDetaile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-info-detaile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::Locations::Location::Fpd::FpdInfoDetaile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_name.is_set || is_set(card_name.yfilter)) leaf_name_data.push_back(card_name.get_name_leafdata());
    if (fpd_name.is_set || is_set(fpd_name.yfilter)) leaf_name_data.push_back(fpd_name.get_name_leafdata());
    if (hw_version.is_set || is_set(hw_version.yfilter)) leaf_name_data.push_back(hw_version.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (programd_version.is_set || is_set(programd_version.yfilter)) leaf_name_data.push_back(programd_version.get_name_leafdata());
    if (running_version.is_set || is_set(running_version.yfilter)) leaf_name_data.push_back(running_version.get_name_leafdata());
    if (secure_boot_attr.is_set || is_set(secure_boot_attr.yfilter)) leaf_name_data.push_back(secure_boot_attr.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ShowFpd::Locations::Location::Fpd::FpdInfoDetaile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::Locations::Location::Fpd::FpdInfoDetaile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ShowFpd::Locations::Location::Fpd::FpdInfoDetaile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-name")
    {
        card_name = value;
        card_name.value_namespace = name_space;
        card_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-name")
    {
        fpd_name = value;
        fpd_name.value_namespace = name_space;
        fpd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-version")
    {
        hw_version = value;
        hw_version.value_namespace = name_space;
        hw_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "programd-version")
    {
        programd_version = value;
        programd_version.value_namespace = name_space;
        programd_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running-version")
    {
        running_version = value;
        running_version.value_namespace = name_space;
        running_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-boot-attr")
    {
        secure_boot_attr = value;
        secure_boot_attr.value_namespace = name_space;
        secure_boot_attr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void ShowFpd::Locations::Location::Fpd::FpdInfoDetaile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-name")
    {
        card_name.yfilter = yfilter;
    }
    if(value_path == "fpd-name")
    {
        fpd_name.yfilter = yfilter;
    }
    if(value_path == "hw-version")
    {
        hw_version.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "programd-version")
    {
        programd_version.yfilter = yfilter;
    }
    if(value_path == "running-version")
    {
        running_version.yfilter = yfilter;
    }
    if(value_path == "secure-boot-attr")
    {
        secure_boot_attr.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool ShowFpd::Locations::Location::Fpd::FpdInfoDetaile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card-name" || name == "fpd-name" || name == "hw-version" || name == "location" || name == "programd-version" || name == "running-version" || name == "secure-boot-attr" || name == "status")
        return true;
    return false;
}

ShowFpd::Package::Package()
{

    yang_name = "package"; yang_parent_name = "show-fpd"; is_top_level_class = false; has_list_ancestor = false;
}

ShowFpd::Package::~Package()
{
}

bool ShowFpd::Package::has_data() const
{
    for (std::size_t index=0; index<fpd_pkg_data.size(); index++)
    {
        if(fpd_pkg_data[index]->has_data())
            return true;
    }
    return false;
}

bool ShowFpd::Package::has_operation() const
{
    for (std::size_t index=0; index<fpd_pkg_data.size(); index++)
    {
        if(fpd_pkg_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ShowFpd::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowFpd::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ShowFpd::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpd-pkg-data")
    {
        for(auto const & c : fpd_pkg_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ShowFpd::Package::FpdPkgData>();
        c->parent = this;
        fpd_pkg_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fpd_pkg_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ShowFpd::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ShowFpd::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ShowFpd::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpd-pkg-data")
        return true;
    return false;
}

ShowFpd::Package::FpdPkgData::FpdPkgData()
    :
    card_type{YType::str, "card-type"},
    fpd_desc{YType::str, "fpd-desc"},
    fpd_ver{YType::str, "fpd-ver"},
    min_hw_ver{YType::str, "min-hw-ver"},
    min_sw_ver{YType::str, "min-sw-ver"},
    upgrade_method{YType::str, "upgrade-method"}
{

    yang_name = "fpd-pkg-data"; yang_parent_name = "package"; is_top_level_class = false; has_list_ancestor = false;
}

ShowFpd::Package::FpdPkgData::~FpdPkgData()
{
}

bool ShowFpd::Package::FpdPkgData::has_data() const
{
    return card_type.is_set
	|| fpd_desc.is_set
	|| fpd_ver.is_set
	|| min_hw_ver.is_set
	|| min_sw_ver.is_set
	|| upgrade_method.is_set;
}

bool ShowFpd::Package::FpdPkgData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_type.yfilter)
	|| ydk::is_set(fpd_desc.yfilter)
	|| ydk::is_set(fpd_ver.yfilter)
	|| ydk::is_set(min_hw_ver.yfilter)
	|| ydk::is_set(min_sw_ver.yfilter)
	|| ydk::is_set(upgrade_method.yfilter);
}

std::string ShowFpd::Package::FpdPkgData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/package/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowFpd::Package::FpdPkgData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-pkg-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::Package::FpdPkgData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_type.is_set || is_set(card_type.yfilter)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (fpd_desc.is_set || is_set(fpd_desc.yfilter)) leaf_name_data.push_back(fpd_desc.get_name_leafdata());
    if (fpd_ver.is_set || is_set(fpd_ver.yfilter)) leaf_name_data.push_back(fpd_ver.get_name_leafdata());
    if (min_hw_ver.is_set || is_set(min_hw_ver.yfilter)) leaf_name_data.push_back(min_hw_ver.get_name_leafdata());
    if (min_sw_ver.is_set || is_set(min_sw_ver.yfilter)) leaf_name_data.push_back(min_sw_ver.get_name_leafdata());
    if (upgrade_method.is_set || is_set(upgrade_method.yfilter)) leaf_name_data.push_back(upgrade_method.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ShowFpd::Package::FpdPkgData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::Package::FpdPkgData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ShowFpd::Package::FpdPkgData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-type")
    {
        card_type = value;
        card_type.value_namespace = name_space;
        card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-desc")
    {
        fpd_desc = value;
        fpd_desc.value_namespace = name_space;
        fpd_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-ver")
    {
        fpd_ver = value;
        fpd_ver.value_namespace = name_space;
        fpd_ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-hw-ver")
    {
        min_hw_ver = value;
        min_hw_ver.value_namespace = name_space;
        min_hw_ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-sw-ver")
    {
        min_sw_ver = value;
        min_sw_ver.value_namespace = name_space;
        min_sw_ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upgrade-method")
    {
        upgrade_method = value;
        upgrade_method.value_namespace = name_space;
        upgrade_method.value_namespace_prefix = name_space_prefix;
    }
}

void ShowFpd::Package::FpdPkgData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-type")
    {
        card_type.yfilter = yfilter;
    }
    if(value_path == "fpd-desc")
    {
        fpd_desc.yfilter = yfilter;
    }
    if(value_path == "fpd-ver")
    {
        fpd_ver.yfilter = yfilter;
    }
    if(value_path == "min-hw-ver")
    {
        min_hw_ver.yfilter = yfilter;
    }
    if(value_path == "min-sw-ver")
    {
        min_sw_ver.yfilter = yfilter;
    }
    if(value_path == "upgrade-method")
    {
        upgrade_method.yfilter = yfilter;
    }
}

bool ShowFpd::Package::FpdPkgData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card-type" || name == "fpd-desc" || name == "fpd-ver" || name == "min-hw-ver" || name == "min-sw-ver" || name == "upgrade-method")
        return true;
    return false;
}


}
}

