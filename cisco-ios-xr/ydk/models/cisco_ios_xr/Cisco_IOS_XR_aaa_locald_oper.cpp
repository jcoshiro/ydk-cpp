
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_aaa_locald_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_aaa_locald_oper {

Aaa::Aaa()
    :
    all_tasks(std::make_shared<Aaa::AllTasks>())
	,authen_method(std::make_shared<Aaa::AuthenMethod>())
	,current_usergroup(std::make_shared<Aaa::CurrentUsergroup>())
	,currentuser_detail(std::make_shared<Aaa::CurrentuserDetail>())
	,diameter(std::make_shared<Aaa::Diameter>())
	,radius(std::make_shared<Aaa::Radius>())
	,tacacs(std::make_shared<Aaa::Tacacs>())
	,task_map(std::make_shared<Aaa::TaskMap>())
	,taskgroups(std::make_shared<Aaa::Taskgroups>())
	,usergroups(std::make_shared<Aaa::Usergroups>())
	,users(std::make_shared<Aaa::Users>())
{
    all_tasks->parent = this;
    children["all-tasks"] = all_tasks;

    authen_method->parent = this;
    children["authen-method"] = authen_method;

    current_usergroup->parent = this;
    children["current-usergroup"] = current_usergroup;

    currentuser_detail->parent = this;
    children["currentuser-detail"] = currentuser_detail;

    diameter->parent = this;
    children["diameter"] = diameter;

    radius->parent = this;
    children["radius"] = radius;

    tacacs->parent = this;
    children["tacacs"] = tacacs;

    task_map->parent = this;
    children["task-map"] = task_map;

    taskgroups->parent = this;
    children["taskgroups"] = taskgroups;

    usergroups->parent = this;
    children["usergroups"] = usergroups;

    users->parent = this;
    children["users"] = users;

    yang_name = "aaa"; yang_parent_name = "Cisco-IOS-XR-aaa-locald-oper";
}

Aaa::~Aaa()
{
}

bool Aaa::has_data() const
{
    return (all_tasks !=  nullptr && all_tasks->has_data())
	|| (authen_method !=  nullptr && authen_method->has_data())
	|| (current_usergroup !=  nullptr && current_usergroup->has_data())
	|| (currentuser_detail !=  nullptr && currentuser_detail->has_data())
	|| (diameter !=  nullptr && diameter->has_data())
	|| (radius !=  nullptr && radius->has_data())
	|| (tacacs !=  nullptr && tacacs->has_data())
	|| (task_map !=  nullptr && task_map->has_data())
	|| (taskgroups !=  nullptr && taskgroups->has_data())
	|| (usergroups !=  nullptr && usergroups->has_data())
	|| (users !=  nullptr && users->has_data());
}

bool Aaa::has_operation() const
{
    return is_set(operation)
	|| (all_tasks !=  nullptr && all_tasks->has_operation())
	|| (authen_method !=  nullptr && authen_method->has_operation())
	|| (current_usergroup !=  nullptr && current_usergroup->has_operation())
	|| (currentuser_detail !=  nullptr && currentuser_detail->has_operation())
	|| (diameter !=  nullptr && diameter->has_operation())
	|| (radius !=  nullptr && radius->has_operation())
	|| (tacacs !=  nullptr && tacacs->has_operation())
	|| (task_map !=  nullptr && task_map->has_operation())
	|| (taskgroups !=  nullptr && taskgroups->has_operation())
	|| (usergroups !=  nullptr && usergroups->has_operation())
	|| (users !=  nullptr && users->has_operation());
}

std::string Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa";

    return path_buffer.str();

}

EntityPath Aaa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "all-tasks")
    {
        if(all_tasks != nullptr)
        {
            children["all-tasks"] = all_tasks;
        }
        else
        {
            all_tasks = std::make_shared<Aaa::AllTasks>();
            all_tasks->parent = this;
            children["all-tasks"] = all_tasks;
        }
        return children.at("all-tasks");
    }

    if(child_yang_name == "authen-method")
    {
        if(authen_method != nullptr)
        {
            children["authen-method"] = authen_method;
        }
        else
        {
            authen_method = std::make_shared<Aaa::AuthenMethod>();
            authen_method->parent = this;
            children["authen-method"] = authen_method;
        }
        return children.at("authen-method");
    }

    if(child_yang_name == "current-usergroup")
    {
        if(current_usergroup != nullptr)
        {
            children["current-usergroup"] = current_usergroup;
        }
        else
        {
            current_usergroup = std::make_shared<Aaa::CurrentUsergroup>();
            current_usergroup->parent = this;
            children["current-usergroup"] = current_usergroup;
        }
        return children.at("current-usergroup");
    }

    if(child_yang_name == "currentuser-detail")
    {
        if(currentuser_detail != nullptr)
        {
            children["currentuser-detail"] = currentuser_detail;
        }
        else
        {
            currentuser_detail = std::make_shared<Aaa::CurrentuserDetail>();
            currentuser_detail->parent = this;
            children["currentuser-detail"] = currentuser_detail;
        }
        return children.at("currentuser-detail");
    }

    if(child_yang_name == "diameter")
    {
        if(diameter != nullptr)
        {
            children["diameter"] = diameter;
        }
        else
        {
            diameter = std::make_shared<Aaa::Diameter>();
            diameter->parent = this;
            children["diameter"] = diameter;
        }
        return children.at("diameter");
    }

    if(child_yang_name == "radius")
    {
        if(radius != nullptr)
        {
            children["radius"] = radius;
        }
        else
        {
            radius = std::make_shared<Aaa::Radius>();
            radius->parent = this;
            children["radius"] = radius;
        }
        return children.at("radius");
    }

    if(child_yang_name == "tacacs")
    {
        if(tacacs != nullptr)
        {
            children["tacacs"] = tacacs;
        }
        else
        {
            tacacs = std::make_shared<Aaa::Tacacs>();
            tacacs->parent = this;
            children["tacacs"] = tacacs;
        }
        return children.at("tacacs");
    }

    if(child_yang_name == "task-map")
    {
        if(task_map != nullptr)
        {
            children["task-map"] = task_map;
        }
        else
        {
            task_map = std::make_shared<Aaa::TaskMap>();
            task_map->parent = this;
            children["task-map"] = task_map;
        }
        return children.at("task-map");
    }

    if(child_yang_name == "taskgroups")
    {
        if(taskgroups != nullptr)
        {
            children["taskgroups"] = taskgroups;
        }
        else
        {
            taskgroups = std::make_shared<Aaa::Taskgroups>();
            taskgroups->parent = this;
            children["taskgroups"] = taskgroups;
        }
        return children.at("taskgroups");
    }

    if(child_yang_name == "usergroups")
    {
        if(usergroups != nullptr)
        {
            children["usergroups"] = usergroups;
        }
        else
        {
            usergroups = std::make_shared<Aaa::Usergroups>();
            usergroups->parent = this;
            children["usergroups"] = usergroups;
        }
        return children.at("usergroups");
    }

    if(child_yang_name == "users")
    {
        if(users != nullptr)
        {
            children["users"] = users;
        }
        else
        {
            users = std::make_shared<Aaa::Users>();
            users->parent = this;
            children["users"] = users;
        }
        return children.at("users");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::get_children()
{
    if(children.find("all-tasks") == children.end())
    {
        if(all_tasks != nullptr)
        {
            children["all-tasks"] = all_tasks;
        }
    }

    if(children.find("authen-method") == children.end())
    {
        if(authen_method != nullptr)
        {
            children["authen-method"] = authen_method;
        }
    }

    if(children.find("current-usergroup") == children.end())
    {
        if(current_usergroup != nullptr)
        {
            children["current-usergroup"] = current_usergroup;
        }
    }

    if(children.find("currentuser-detail") == children.end())
    {
        if(currentuser_detail != nullptr)
        {
            children["currentuser-detail"] = currentuser_detail;
        }
    }

    if(children.find("diameter") == children.end())
    {
        if(diameter != nullptr)
        {
            children["diameter"] = diameter;
        }
    }

    if(children.find("radius") == children.end())
    {
        if(radius != nullptr)
        {
            children["radius"] = radius;
        }
    }

    if(children.find("tacacs") == children.end())
    {
        if(tacacs != nullptr)
        {
            children["tacacs"] = tacacs;
        }
    }

    if(children.find("task-map") == children.end())
    {
        if(task_map != nullptr)
        {
            children["task-map"] = task_map;
        }
    }

    if(children.find("taskgroups") == children.end())
    {
        if(taskgroups != nullptr)
        {
            children["taskgroups"] = taskgroups;
        }
    }

    if(children.find("usergroups") == children.end())
    {
        if(usergroups != nullptr)
        {
            children["usergroups"] = usergroups;
        }
    }

    if(children.find("users") == children.end())
    {
        if(users != nullptr)
        {
            children["users"] = users;
        }
    }

    return children;
}

void Aaa::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Aaa::clone_ptr() const
{
    return std::make_shared<Aaa>();
}

std::string Aaa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Aaa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Aaa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Aaa::AllTasks::AllTasks()
    :
    task_id{YType::str, "task-id"}
{
    yang_name = "all-tasks"; yang_parent_name = "aaa";
}

Aaa::AllTasks::~AllTasks()
{
}

bool Aaa::AllTasks::has_data() const
{
    for (auto const & leaf : task_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Aaa::AllTasks::has_operation() const
{
    for (auto const & leaf : task_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(task_id.operation);
}

std::string Aaa::AllTasks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-tasks";

    return path_buffer.str();

}

EntityPath Aaa::AllTasks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto task_id_name_datas = task_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), task_id_name_datas.begin(), task_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::AllTasks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::AllTasks::get_children()
{
    return children;
}

void Aaa::AllTasks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "task-id")
    {
        task_id.append(value);
    }
}

Aaa::CurrentuserDetail::CurrentuserDetail()
    :
    authenmethod{YType::int32, "authenmethod"},
    name{YType::str, "name"},
    taskmap{YType::str, "taskmap"},
    usergroup{YType::str, "usergroup"}
{
    yang_name = "currentuser-detail"; yang_parent_name = "aaa";
}

Aaa::CurrentuserDetail::~CurrentuserDetail()
{
}

bool Aaa::CurrentuserDetail::has_data() const
{
    for (auto const & leaf : taskmap.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : usergroup.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return authenmethod.is_set
	|| name.is_set;
}

bool Aaa::CurrentuserDetail::has_operation() const
{
    for (auto const & leaf : taskmap.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : usergroup.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(authenmethod.operation)
	|| is_set(name.operation)
	|| is_set(taskmap.operation)
	|| is_set(usergroup.operation);
}

std::string Aaa::CurrentuserDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "currentuser-detail";

    return path_buffer.str();

}

EntityPath Aaa::CurrentuserDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenmethod.is_set || is_set(authenmethod.operation)) leaf_name_data.push_back(authenmethod.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());

    auto taskmap_name_datas = taskmap.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), taskmap_name_datas.begin(), taskmap_name_datas.end());
    auto usergroup_name_datas = usergroup.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), usergroup_name_datas.begin(), usergroup_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::CurrentuserDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::CurrentuserDetail::get_children()
{
    return children;
}

void Aaa::CurrentuserDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authenmethod")
    {
        authenmethod = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "taskmap")
    {
        taskmap.append(value);
    }
    if(value_path == "usergroup")
    {
        usergroup.append(value);
    }
}

Aaa::TaskMap::TaskMap()
    :
    authenmethod{YType::int32, "authenmethod"},
    name{YType::str, "name"},
    taskmap{YType::str, "taskmap"},
    usergroup{YType::str, "usergroup"}
{
    yang_name = "task-map"; yang_parent_name = "aaa";
}

Aaa::TaskMap::~TaskMap()
{
}

bool Aaa::TaskMap::has_data() const
{
    for (auto const & leaf : taskmap.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : usergroup.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return authenmethod.is_set
	|| name.is_set;
}

bool Aaa::TaskMap::has_operation() const
{
    for (auto const & leaf : taskmap.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : usergroup.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(authenmethod.operation)
	|| is_set(name.operation)
	|| is_set(taskmap.operation)
	|| is_set(usergroup.operation);
}

std::string Aaa::TaskMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "task-map";

    return path_buffer.str();

}

EntityPath Aaa::TaskMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenmethod.is_set || is_set(authenmethod.operation)) leaf_name_data.push_back(authenmethod.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());

    auto taskmap_name_datas = taskmap.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), taskmap_name_datas.begin(), taskmap_name_datas.end());
    auto usergroup_name_datas = usergroup.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), usergroup_name_datas.begin(), usergroup_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::TaskMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::TaskMap::get_children()
{
    return children;
}

void Aaa::TaskMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authenmethod")
    {
        authenmethod = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "taskmap")
    {
        taskmap.append(value);
    }
    if(value_path == "usergroup")
    {
        usergroup.append(value);
    }
}

Aaa::Taskgroups::Taskgroups()
{
    yang_name = "taskgroups"; yang_parent_name = "aaa";
}

Aaa::Taskgroups::~Taskgroups()
{
}

bool Aaa::Taskgroups::has_data() const
{
    for (std::size_t index=0; index<taskgroup.size(); index++)
    {
        if(taskgroup[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Taskgroups::has_operation() const
{
    for (std::size_t index=0; index<taskgroup.size(); index++)
    {
        if(taskgroup[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Taskgroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "taskgroups";

    return path_buffer.str();

}

EntityPath Aaa::Taskgroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Taskgroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "taskgroup")
    {
        for(auto const & c : taskgroup)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Taskgroups::Taskgroup>();
        c->parent = this;
        taskgroup.push_back(std::move(c));
        children[segment_path] = taskgroup.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Taskgroups::get_children()
{
    for (auto const & c : taskgroup)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Taskgroups::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Taskgroups::Taskgroup::Taskgroup()
    :
    name{YType::str, "name"},
    name_xr{YType::str, "name-xr"}
    	,
    included_task_ids(std::make_shared<Aaa::Taskgroups::Taskgroup::IncludedTaskIds>())
	,task_map(std::make_shared<Aaa::Taskgroups::Taskgroup::TaskMap>())
{
    included_task_ids->parent = this;
    children["included-task-ids"] = included_task_ids;

    task_map->parent = this;
    children["task-map"] = task_map;

    yang_name = "taskgroup"; yang_parent_name = "taskgroups";
}

Aaa::Taskgroups::Taskgroup::~Taskgroup()
{
}

bool Aaa::Taskgroups::Taskgroup::has_data() const
{
    return name.is_set
	|| name_xr.is_set
	|| (included_task_ids !=  nullptr && included_task_ids->has_data())
	|| (task_map !=  nullptr && task_map->has_data());
}

bool Aaa::Taskgroups::Taskgroup::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(name_xr.operation)
	|| (included_task_ids !=  nullptr && included_task_ids->has_operation())
	|| (task_map !=  nullptr && task_map->has_operation());
}

std::string Aaa::Taskgroups::Taskgroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "taskgroup" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Taskgroups::Taskgroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/taskgroups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (name_xr.is_set || is_set(name_xr.operation)) leaf_name_data.push_back(name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Taskgroups::Taskgroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "included-task-ids")
    {
        if(included_task_ids != nullptr)
        {
            children["included-task-ids"] = included_task_ids;
        }
        else
        {
            included_task_ids = std::make_shared<Aaa::Taskgroups::Taskgroup::IncludedTaskIds>();
            included_task_ids->parent = this;
            children["included-task-ids"] = included_task_ids;
        }
        return children.at("included-task-ids");
    }

    if(child_yang_name == "task-map")
    {
        if(task_map != nullptr)
        {
            children["task-map"] = task_map;
        }
        else
        {
            task_map = std::make_shared<Aaa::Taskgroups::Taskgroup::TaskMap>();
            task_map->parent = this;
            children["task-map"] = task_map;
        }
        return children.at("task-map");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Taskgroups::Taskgroup::get_children()
{
    if(children.find("included-task-ids") == children.end())
    {
        if(included_task_ids != nullptr)
        {
            children["included-task-ids"] = included_task_ids;
        }
    }

    if(children.find("task-map") == children.end())
    {
        if(task_map != nullptr)
        {
            children["task-map"] = task_map;
        }
    }

    return children;
}

void Aaa::Taskgroups::Taskgroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "name-xr")
    {
        name_xr = value;
    }
}

Aaa::Taskgroups::Taskgroup::IncludedTaskIds::IncludedTaskIds()
{
    yang_name = "included-task-ids"; yang_parent_name = "taskgroup";
}

Aaa::Taskgroups::Taskgroup::IncludedTaskIds::~IncludedTaskIds()
{
}

bool Aaa::Taskgroups::Taskgroup::IncludedTaskIds::has_data() const
{
    for (std::size_t index=0; index<tasks.size(); index++)
    {
        if(tasks[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Taskgroups::Taskgroup::IncludedTaskIds::has_operation() const
{
    for (std::size_t index=0; index<tasks.size(); index++)
    {
        if(tasks[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Taskgroups::Taskgroup::IncludedTaskIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "included-task-ids";

    return path_buffer.str();

}

EntityPath Aaa::Taskgroups::Taskgroup::IncludedTaskIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IncludedTaskIds' in Cisco_IOS_XR_aaa_locald_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Taskgroups::Taskgroup::IncludedTaskIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tasks")
    {
        for(auto const & c : tasks)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks>();
        c->parent = this;
        tasks.push_back(std::move(c));
        children[segment_path] = tasks.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Taskgroups::Taskgroup::IncludedTaskIds::get_children()
{
    for (auto const & c : tasks)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Taskgroups::Taskgroup::IncludedTaskIds::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks::Tasks()
    :
    debug{YType::boolean, "debug"},
    execute{YType::boolean, "execute"},
    read{YType::boolean, "read"},
    task_id{YType::str, "task-id"},
    write{YType::boolean, "write"}
{
    yang_name = "tasks"; yang_parent_name = "included-task-ids";
}

Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks::~Tasks()
{
}

bool Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks::has_data() const
{
    return debug.is_set
	|| execute.is_set
	|| read.is_set
	|| task_id.is_set
	|| write.is_set;
}

bool Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks::has_operation() const
{
    return is_set(operation)
	|| is_set(debug.operation)
	|| is_set(execute.operation)
	|| is_set(read.operation)
	|| is_set(task_id.operation)
	|| is_set(write.operation);
}

std::string Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tasks";

    return path_buffer.str();

}

EntityPath Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tasks' in Cisco_IOS_XR_aaa_locald_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (debug.is_set || is_set(debug.operation)) leaf_name_data.push_back(debug.get_name_leafdata());
    if (execute.is_set || is_set(execute.operation)) leaf_name_data.push_back(execute.get_name_leafdata());
    if (read.is_set || is_set(read.operation)) leaf_name_data.push_back(read.get_name_leafdata());
    if (task_id.is_set || is_set(task_id.operation)) leaf_name_data.push_back(task_id.get_name_leafdata());
    if (write.is_set || is_set(write.operation)) leaf_name_data.push_back(write.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks::get_children()
{
    return children;
}

void Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "debug")
    {
        debug = value;
    }
    if(value_path == "execute")
    {
        execute = value;
    }
    if(value_path == "read")
    {
        read = value;
    }
    if(value_path == "task-id")
    {
        task_id = value;
    }
    if(value_path == "write")
    {
        write = value;
    }
}

Aaa::Taskgroups::Taskgroup::TaskMap::TaskMap()
{
    yang_name = "task-map"; yang_parent_name = "taskgroup";
}

Aaa::Taskgroups::Taskgroup::TaskMap::~TaskMap()
{
}

bool Aaa::Taskgroups::Taskgroup::TaskMap::has_data() const
{
    for (std::size_t index=0; index<tasks.size(); index++)
    {
        if(tasks[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Taskgroups::Taskgroup::TaskMap::has_operation() const
{
    for (std::size_t index=0; index<tasks.size(); index++)
    {
        if(tasks[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Taskgroups::Taskgroup::TaskMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "task-map";

    return path_buffer.str();

}

EntityPath Aaa::Taskgroups::Taskgroup::TaskMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TaskMap' in Cisco_IOS_XR_aaa_locald_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Taskgroups::Taskgroup::TaskMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tasks")
    {
        for(auto const & c : tasks)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Taskgroups::Taskgroup::TaskMap::Tasks>();
        c->parent = this;
        tasks.push_back(std::move(c));
        children[segment_path] = tasks.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Taskgroups::Taskgroup::TaskMap::get_children()
{
    for (auto const & c : tasks)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Taskgroups::Taskgroup::TaskMap::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Taskgroups::Taskgroup::TaskMap::Tasks::Tasks()
    :
    debug{YType::boolean, "debug"},
    execute{YType::boolean, "execute"},
    read{YType::boolean, "read"},
    task_id{YType::str, "task-id"},
    write{YType::boolean, "write"}
{
    yang_name = "tasks"; yang_parent_name = "task-map";
}

Aaa::Taskgroups::Taskgroup::TaskMap::Tasks::~Tasks()
{
}

bool Aaa::Taskgroups::Taskgroup::TaskMap::Tasks::has_data() const
{
    return debug.is_set
	|| execute.is_set
	|| read.is_set
	|| task_id.is_set
	|| write.is_set;
}

bool Aaa::Taskgroups::Taskgroup::TaskMap::Tasks::has_operation() const
{
    return is_set(operation)
	|| is_set(debug.operation)
	|| is_set(execute.operation)
	|| is_set(read.operation)
	|| is_set(task_id.operation)
	|| is_set(write.operation);
}

std::string Aaa::Taskgroups::Taskgroup::TaskMap::Tasks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tasks";

    return path_buffer.str();

}

EntityPath Aaa::Taskgroups::Taskgroup::TaskMap::Tasks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tasks' in Cisco_IOS_XR_aaa_locald_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (debug.is_set || is_set(debug.operation)) leaf_name_data.push_back(debug.get_name_leafdata());
    if (execute.is_set || is_set(execute.operation)) leaf_name_data.push_back(execute.get_name_leafdata());
    if (read.is_set || is_set(read.operation)) leaf_name_data.push_back(read.get_name_leafdata());
    if (task_id.is_set || is_set(task_id.operation)) leaf_name_data.push_back(task_id.get_name_leafdata());
    if (write.is_set || is_set(write.operation)) leaf_name_data.push_back(write.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Taskgroups::Taskgroup::TaskMap::Tasks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Taskgroups::Taskgroup::TaskMap::Tasks::get_children()
{
    return children;
}

void Aaa::Taskgroups::Taskgroup::TaskMap::Tasks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "debug")
    {
        debug = value;
    }
    if(value_path == "execute")
    {
        execute = value;
    }
    if(value_path == "read")
    {
        read = value;
    }
    if(value_path == "task-id")
    {
        task_id = value;
    }
    if(value_path == "write")
    {
        write = value;
    }
}

Aaa::Users::Users()
{
    yang_name = "users"; yang_parent_name = "aaa";
}

Aaa::Users::~Users()
{
}

bool Aaa::Users::has_data() const
{
    for (std::size_t index=0; index<user.size(); index++)
    {
        if(user[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Users::has_operation() const
{
    for (std::size_t index=0; index<user.size(); index++)
    {
        if(user[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Users::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "users";

    return path_buffer.str();

}

EntityPath Aaa::Users::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Users::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "user")
    {
        for(auto const & c : user)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Users::User>();
        c->parent = this;
        user.push_back(std::move(c));
        children[segment_path] = user.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Users::get_children()
{
    for (auto const & c : user)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Users::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Users::User::User()
    :
    name{YType::str, "name"},
    admin_user{YType::boolean, "admin-user"},
    first_user{YType::boolean, "first-user"},
    name_xr{YType::str, "name-xr"},
    usergroup{YType::str, "usergroup"}
    	,
    task_map(std::make_shared<Aaa::Users::User::TaskMap>())
{
    task_map->parent = this;
    children["task-map"] = task_map;

    yang_name = "user"; yang_parent_name = "users";
}

Aaa::Users::User::~User()
{
}

bool Aaa::Users::User::has_data() const
{
    for (auto const & leaf : usergroup.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| admin_user.is_set
	|| first_user.is_set
	|| name_xr.is_set
	|| (task_map !=  nullptr && task_map->has_data());
}

bool Aaa::Users::User::has_operation() const
{
    for (auto const & leaf : usergroup.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(admin_user.operation)
	|| is_set(first_user.operation)
	|| is_set(name_xr.operation)
	|| is_set(usergroup.operation)
	|| (task_map !=  nullptr && task_map->has_operation());
}

std::string Aaa::Users::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Users::User::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/users/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (admin_user.is_set || is_set(admin_user.operation)) leaf_name_data.push_back(admin_user.get_name_leafdata());
    if (first_user.is_set || is_set(first_user.operation)) leaf_name_data.push_back(first_user.get_name_leafdata());
    if (name_xr.is_set || is_set(name_xr.operation)) leaf_name_data.push_back(name_xr.get_name_leafdata());

    auto usergroup_name_datas = usergroup.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), usergroup_name_datas.begin(), usergroup_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Users::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "task-map")
    {
        if(task_map != nullptr)
        {
            children["task-map"] = task_map;
        }
        else
        {
            task_map = std::make_shared<Aaa::Users::User::TaskMap>();
            task_map->parent = this;
            children["task-map"] = task_map;
        }
        return children.at("task-map");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Users::User::get_children()
{
    if(children.find("task-map") == children.end())
    {
        if(task_map != nullptr)
        {
            children["task-map"] = task_map;
        }
    }

    return children;
}

void Aaa::Users::User::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "admin-user")
    {
        admin_user = value;
    }
    if(value_path == "first-user")
    {
        first_user = value;
    }
    if(value_path == "name-xr")
    {
        name_xr = value;
    }
    if(value_path == "usergroup")
    {
        usergroup.append(value);
    }
}

Aaa::Users::User::TaskMap::TaskMap()
{
    yang_name = "task-map"; yang_parent_name = "user";
}

Aaa::Users::User::TaskMap::~TaskMap()
{
}

bool Aaa::Users::User::TaskMap::has_data() const
{
    for (std::size_t index=0; index<tasks.size(); index++)
    {
        if(tasks[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Users::User::TaskMap::has_operation() const
{
    for (std::size_t index=0; index<tasks.size(); index++)
    {
        if(tasks[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Users::User::TaskMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "task-map";

    return path_buffer.str();

}

EntityPath Aaa::Users::User::TaskMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TaskMap' in Cisco_IOS_XR_aaa_locald_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Users::User::TaskMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tasks")
    {
        for(auto const & c : tasks)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Users::User::TaskMap::Tasks>();
        c->parent = this;
        tasks.push_back(std::move(c));
        children[segment_path] = tasks.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Users::User::TaskMap::get_children()
{
    for (auto const & c : tasks)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Users::User::TaskMap::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Users::User::TaskMap::Tasks::Tasks()
    :
    debug{YType::boolean, "debug"},
    execute{YType::boolean, "execute"},
    read{YType::boolean, "read"},
    task_id{YType::str, "task-id"},
    write{YType::boolean, "write"}
{
    yang_name = "tasks"; yang_parent_name = "task-map";
}

Aaa::Users::User::TaskMap::Tasks::~Tasks()
{
}

bool Aaa::Users::User::TaskMap::Tasks::has_data() const
{
    return debug.is_set
	|| execute.is_set
	|| read.is_set
	|| task_id.is_set
	|| write.is_set;
}

bool Aaa::Users::User::TaskMap::Tasks::has_operation() const
{
    return is_set(operation)
	|| is_set(debug.operation)
	|| is_set(execute.operation)
	|| is_set(read.operation)
	|| is_set(task_id.operation)
	|| is_set(write.operation);
}

std::string Aaa::Users::User::TaskMap::Tasks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tasks";

    return path_buffer.str();

}

EntityPath Aaa::Users::User::TaskMap::Tasks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tasks' in Cisco_IOS_XR_aaa_locald_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (debug.is_set || is_set(debug.operation)) leaf_name_data.push_back(debug.get_name_leafdata());
    if (execute.is_set || is_set(execute.operation)) leaf_name_data.push_back(execute.get_name_leafdata());
    if (read.is_set || is_set(read.operation)) leaf_name_data.push_back(read.get_name_leafdata());
    if (task_id.is_set || is_set(task_id.operation)) leaf_name_data.push_back(task_id.get_name_leafdata());
    if (write.is_set || is_set(write.operation)) leaf_name_data.push_back(write.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Users::User::TaskMap::Tasks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Users::User::TaskMap::Tasks::get_children()
{
    return children;
}

void Aaa::Users::User::TaskMap::Tasks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "debug")
    {
        debug = value;
    }
    if(value_path == "execute")
    {
        execute = value;
    }
    if(value_path == "read")
    {
        read = value;
    }
    if(value_path == "task-id")
    {
        task_id = value;
    }
    if(value_path == "write")
    {
        write = value;
    }
}

Aaa::Usergroups::Usergroups()
{
    yang_name = "usergroups"; yang_parent_name = "aaa";
}

Aaa::Usergroups::~Usergroups()
{
}

bool Aaa::Usergroups::has_data() const
{
    for (std::size_t index=0; index<usergroup.size(); index++)
    {
        if(usergroup[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Usergroups::has_operation() const
{
    for (std::size_t index=0; index<usergroup.size(); index++)
    {
        if(usergroup[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Usergroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usergroups";

    return path_buffer.str();

}

EntityPath Aaa::Usergroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Usergroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "usergroup")
    {
        for(auto const & c : usergroup)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Usergroups::Usergroup>();
        c->parent = this;
        usergroup.push_back(std::move(c));
        children[segment_path] = usergroup.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Usergroups::get_children()
{
    for (auto const & c : usergroup)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Usergroups::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Usergroups::Usergroup::Usergroup()
    :
    name{YType::str, "name"},
    name_xr{YType::str, "name-xr"}
    	,
    task_map(std::make_shared<Aaa::Usergroups::Usergroup::TaskMap>())
{
    task_map->parent = this;
    children["task-map"] = task_map;

    yang_name = "usergroup"; yang_parent_name = "usergroups";
}

Aaa::Usergroups::Usergroup::~Usergroup()
{
}

bool Aaa::Usergroups::Usergroup::has_data() const
{
    for (std::size_t index=0; index<taskgroup.size(); index++)
    {
        if(taskgroup[index]->has_data())
            return true;
    }
    return name.is_set
	|| name_xr.is_set
	|| (task_map !=  nullptr && task_map->has_data());
}

bool Aaa::Usergroups::Usergroup::has_operation() const
{
    for (std::size_t index=0; index<taskgroup.size(); index++)
    {
        if(taskgroup[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(name_xr.operation)
	|| (task_map !=  nullptr && task_map->has_operation());
}

std::string Aaa::Usergroups::Usergroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usergroup" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Usergroups::Usergroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/usergroups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (name_xr.is_set || is_set(name_xr.operation)) leaf_name_data.push_back(name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Usergroups::Usergroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "task-map")
    {
        if(task_map != nullptr)
        {
            children["task-map"] = task_map;
        }
        else
        {
            task_map = std::make_shared<Aaa::Usergroups::Usergroup::TaskMap>();
            task_map->parent = this;
            children["task-map"] = task_map;
        }
        return children.at("task-map");
    }

    if(child_yang_name == "taskgroup")
    {
        for(auto const & c : taskgroup)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Usergroups::Usergroup::Taskgroup>();
        c->parent = this;
        taskgroup.push_back(std::move(c));
        children[segment_path] = taskgroup.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Usergroups::Usergroup::get_children()
{
    if(children.find("task-map") == children.end())
    {
        if(task_map != nullptr)
        {
            children["task-map"] = task_map;
        }
    }

    for (auto const & c : taskgroup)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Usergroups::Usergroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "name-xr")
    {
        name_xr = value;
    }
}

Aaa::Usergroups::Usergroup::TaskMap::TaskMap()
{
    yang_name = "task-map"; yang_parent_name = "usergroup";
}

Aaa::Usergroups::Usergroup::TaskMap::~TaskMap()
{
}

bool Aaa::Usergroups::Usergroup::TaskMap::has_data() const
{
    for (std::size_t index=0; index<tasks.size(); index++)
    {
        if(tasks[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Usergroups::Usergroup::TaskMap::has_operation() const
{
    for (std::size_t index=0; index<tasks.size(); index++)
    {
        if(tasks[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Usergroups::Usergroup::TaskMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "task-map";

    return path_buffer.str();

}

EntityPath Aaa::Usergroups::Usergroup::TaskMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TaskMap' in Cisco_IOS_XR_aaa_locald_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Usergroups::Usergroup::TaskMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tasks")
    {
        for(auto const & c : tasks)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Usergroups::Usergroup::TaskMap::Tasks>();
        c->parent = this;
        tasks.push_back(std::move(c));
        children[segment_path] = tasks.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Usergroups::Usergroup::TaskMap::get_children()
{
    for (auto const & c : tasks)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Usergroups::Usergroup::TaskMap::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Usergroups::Usergroup::TaskMap::Tasks::Tasks()
    :
    debug{YType::boolean, "debug"},
    execute{YType::boolean, "execute"},
    read{YType::boolean, "read"},
    task_id{YType::str, "task-id"},
    write{YType::boolean, "write"}
{
    yang_name = "tasks"; yang_parent_name = "task-map";
}

Aaa::Usergroups::Usergroup::TaskMap::Tasks::~Tasks()
{
}

bool Aaa::Usergroups::Usergroup::TaskMap::Tasks::has_data() const
{
    return debug.is_set
	|| execute.is_set
	|| read.is_set
	|| task_id.is_set
	|| write.is_set;
}

bool Aaa::Usergroups::Usergroup::TaskMap::Tasks::has_operation() const
{
    return is_set(operation)
	|| is_set(debug.operation)
	|| is_set(execute.operation)
	|| is_set(read.operation)
	|| is_set(task_id.operation)
	|| is_set(write.operation);
}

std::string Aaa::Usergroups::Usergroup::TaskMap::Tasks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tasks";

    return path_buffer.str();

}

EntityPath Aaa::Usergroups::Usergroup::TaskMap::Tasks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tasks' in Cisco_IOS_XR_aaa_locald_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (debug.is_set || is_set(debug.operation)) leaf_name_data.push_back(debug.get_name_leafdata());
    if (execute.is_set || is_set(execute.operation)) leaf_name_data.push_back(execute.get_name_leafdata());
    if (read.is_set || is_set(read.operation)) leaf_name_data.push_back(read.get_name_leafdata());
    if (task_id.is_set || is_set(task_id.operation)) leaf_name_data.push_back(task_id.get_name_leafdata());
    if (write.is_set || is_set(write.operation)) leaf_name_data.push_back(write.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Usergroups::Usergroup::TaskMap::Tasks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Usergroups::Usergroup::TaskMap::Tasks::get_children()
{
    return children;
}

void Aaa::Usergroups::Usergroup::TaskMap::Tasks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "debug")
    {
        debug = value;
    }
    if(value_path == "execute")
    {
        execute = value;
    }
    if(value_path == "read")
    {
        read = value;
    }
    if(value_path == "task-id")
    {
        task_id = value;
    }
    if(value_path == "write")
    {
        write = value;
    }
}

Aaa::Usergroups::Usergroup::Taskgroup::Taskgroup()
    :
    name_xr{YType::str, "name-xr"}
    	,
    included_task_ids(std::make_shared<Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds>())
	,task_map(std::make_shared<Aaa::Usergroups::Usergroup::Taskgroup::TaskMap>())
{
    included_task_ids->parent = this;
    children["included-task-ids"] = included_task_ids;

    task_map->parent = this;
    children["task-map"] = task_map;

    yang_name = "taskgroup"; yang_parent_name = "usergroup";
}

Aaa::Usergroups::Usergroup::Taskgroup::~Taskgroup()
{
}

bool Aaa::Usergroups::Usergroup::Taskgroup::has_data() const
{
    return name_xr.is_set
	|| (included_task_ids !=  nullptr && included_task_ids->has_data())
	|| (task_map !=  nullptr && task_map->has_data());
}

bool Aaa::Usergroups::Usergroup::Taskgroup::has_operation() const
{
    return is_set(operation)
	|| is_set(name_xr.operation)
	|| (included_task_ids !=  nullptr && included_task_ids->has_operation())
	|| (task_map !=  nullptr && task_map->has_operation());
}

std::string Aaa::Usergroups::Usergroup::Taskgroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "taskgroup";

    return path_buffer.str();

}

EntityPath Aaa::Usergroups::Usergroup::Taskgroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Taskgroup' in Cisco_IOS_XR_aaa_locald_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_xr.is_set || is_set(name_xr.operation)) leaf_name_data.push_back(name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Usergroups::Usergroup::Taskgroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "included-task-ids")
    {
        if(included_task_ids != nullptr)
        {
            children["included-task-ids"] = included_task_ids;
        }
        else
        {
            included_task_ids = std::make_shared<Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds>();
            included_task_ids->parent = this;
            children["included-task-ids"] = included_task_ids;
        }
        return children.at("included-task-ids");
    }

    if(child_yang_name == "task-map")
    {
        if(task_map != nullptr)
        {
            children["task-map"] = task_map;
        }
        else
        {
            task_map = std::make_shared<Aaa::Usergroups::Usergroup::Taskgroup::TaskMap>();
            task_map->parent = this;
            children["task-map"] = task_map;
        }
        return children.at("task-map");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Usergroups::Usergroup::Taskgroup::get_children()
{
    if(children.find("included-task-ids") == children.end())
    {
        if(included_task_ids != nullptr)
        {
            children["included-task-ids"] = included_task_ids;
        }
    }

    if(children.find("task-map") == children.end())
    {
        if(task_map != nullptr)
        {
            children["task-map"] = task_map;
        }
    }

    return children;
}

void Aaa::Usergroups::Usergroup::Taskgroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name-xr")
    {
        name_xr = value;
    }
}

Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::IncludedTaskIds()
{
    yang_name = "included-task-ids"; yang_parent_name = "taskgroup";
}

Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::~IncludedTaskIds()
{
}

bool Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::has_data() const
{
    for (std::size_t index=0; index<tasks.size(); index++)
    {
        if(tasks[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::has_operation() const
{
    for (std::size_t index=0; index<tasks.size(); index++)
    {
        if(tasks[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "included-task-ids";

    return path_buffer.str();

}

EntityPath Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IncludedTaskIds' in Cisco_IOS_XR_aaa_locald_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tasks")
    {
        for(auto const & c : tasks)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks>();
        c->parent = this;
        tasks.push_back(std::move(c));
        children[segment_path] = tasks.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::get_children()
{
    for (auto const & c : tasks)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks::Tasks()
    :
    debug{YType::boolean, "debug"},
    execute{YType::boolean, "execute"},
    read{YType::boolean, "read"},
    task_id{YType::str, "task-id"},
    write{YType::boolean, "write"}
{
    yang_name = "tasks"; yang_parent_name = "included-task-ids";
}

Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks::~Tasks()
{
}

bool Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks::has_data() const
{
    return debug.is_set
	|| execute.is_set
	|| read.is_set
	|| task_id.is_set
	|| write.is_set;
}

bool Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks::has_operation() const
{
    return is_set(operation)
	|| is_set(debug.operation)
	|| is_set(execute.operation)
	|| is_set(read.operation)
	|| is_set(task_id.operation)
	|| is_set(write.operation);
}

std::string Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tasks";

    return path_buffer.str();

}

EntityPath Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tasks' in Cisco_IOS_XR_aaa_locald_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (debug.is_set || is_set(debug.operation)) leaf_name_data.push_back(debug.get_name_leafdata());
    if (execute.is_set || is_set(execute.operation)) leaf_name_data.push_back(execute.get_name_leafdata());
    if (read.is_set || is_set(read.operation)) leaf_name_data.push_back(read.get_name_leafdata());
    if (task_id.is_set || is_set(task_id.operation)) leaf_name_data.push_back(task_id.get_name_leafdata());
    if (write.is_set || is_set(write.operation)) leaf_name_data.push_back(write.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks::get_children()
{
    return children;
}

void Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "debug")
    {
        debug = value;
    }
    if(value_path == "execute")
    {
        execute = value;
    }
    if(value_path == "read")
    {
        read = value;
    }
    if(value_path == "task-id")
    {
        task_id = value;
    }
    if(value_path == "write")
    {
        write = value;
    }
}

Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::TaskMap()
{
    yang_name = "task-map"; yang_parent_name = "taskgroup";
}

Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::~TaskMap()
{
}

bool Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::has_data() const
{
    for (std::size_t index=0; index<tasks.size(); index++)
    {
        if(tasks[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::has_operation() const
{
    for (std::size_t index=0; index<tasks.size(); index++)
    {
        if(tasks[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "task-map";

    return path_buffer.str();

}

EntityPath Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TaskMap' in Cisco_IOS_XR_aaa_locald_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tasks")
    {
        for(auto const & c : tasks)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks>();
        c->parent = this;
        tasks.push_back(std::move(c));
        children[segment_path] = tasks.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::get_children()
{
    for (auto const & c : tasks)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks::Tasks()
    :
    debug{YType::boolean, "debug"},
    execute{YType::boolean, "execute"},
    read{YType::boolean, "read"},
    task_id{YType::str, "task-id"},
    write{YType::boolean, "write"}
{
    yang_name = "tasks"; yang_parent_name = "task-map";
}

Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks::~Tasks()
{
}

bool Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks::has_data() const
{
    return debug.is_set
	|| execute.is_set
	|| read.is_set
	|| task_id.is_set
	|| write.is_set;
}

bool Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks::has_operation() const
{
    return is_set(operation)
	|| is_set(debug.operation)
	|| is_set(execute.operation)
	|| is_set(read.operation)
	|| is_set(task_id.operation)
	|| is_set(write.operation);
}

std::string Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tasks";

    return path_buffer.str();

}

EntityPath Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tasks' in Cisco_IOS_XR_aaa_locald_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (debug.is_set || is_set(debug.operation)) leaf_name_data.push_back(debug.get_name_leafdata());
    if (execute.is_set || is_set(execute.operation)) leaf_name_data.push_back(execute.get_name_leafdata());
    if (read.is_set || is_set(read.operation)) leaf_name_data.push_back(read.get_name_leafdata());
    if (task_id.is_set || is_set(task_id.operation)) leaf_name_data.push_back(task_id.get_name_leafdata());
    if (write.is_set || is_set(write.operation)) leaf_name_data.push_back(write.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks::get_children()
{
    return children;
}

void Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "debug")
    {
        debug = value;
    }
    if(value_path == "execute")
    {
        execute = value;
    }
    if(value_path == "read")
    {
        read = value;
    }
    if(value_path == "task-id")
    {
        task_id = value;
    }
    if(value_path == "write")
    {
        write = value;
    }
}

Aaa::AuthenMethod::AuthenMethod()
    :
    authenmethod{YType::int32, "authenmethod"},
    name{YType::str, "name"},
    taskmap{YType::str, "taskmap"},
    usergroup{YType::str, "usergroup"}
{
    yang_name = "authen-method"; yang_parent_name = "aaa";
}

Aaa::AuthenMethod::~AuthenMethod()
{
}

bool Aaa::AuthenMethod::has_data() const
{
    for (auto const & leaf : taskmap.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : usergroup.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return authenmethod.is_set
	|| name.is_set;
}

bool Aaa::AuthenMethod::has_operation() const
{
    for (auto const & leaf : taskmap.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : usergroup.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(authenmethod.operation)
	|| is_set(name.operation)
	|| is_set(taskmap.operation)
	|| is_set(usergroup.operation);
}

std::string Aaa::AuthenMethod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authen-method";

    return path_buffer.str();

}

EntityPath Aaa::AuthenMethod::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenmethod.is_set || is_set(authenmethod.operation)) leaf_name_data.push_back(authenmethod.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());

    auto taskmap_name_datas = taskmap.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), taskmap_name_datas.begin(), taskmap_name_datas.end());
    auto usergroup_name_datas = usergroup.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), usergroup_name_datas.begin(), usergroup_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::AuthenMethod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::AuthenMethod::get_children()
{
    return children;
}

void Aaa::AuthenMethod::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authenmethod")
    {
        authenmethod = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "taskmap")
    {
        taskmap.append(value);
    }
    if(value_path == "usergroup")
    {
        usergroup.append(value);
    }
}

Aaa::CurrentUsergroup::CurrentUsergroup()
    :
    authenmethod{YType::int32, "authenmethod"},
    name{YType::str, "name"},
    taskmap{YType::str, "taskmap"},
    usergroup{YType::str, "usergroup"}
{
    yang_name = "current-usergroup"; yang_parent_name = "aaa";
}

Aaa::CurrentUsergroup::~CurrentUsergroup()
{
}

bool Aaa::CurrentUsergroup::has_data() const
{
    for (auto const & leaf : taskmap.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : usergroup.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return authenmethod.is_set
	|| name.is_set;
}

bool Aaa::CurrentUsergroup::has_operation() const
{
    for (auto const & leaf : taskmap.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : usergroup.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(authenmethod.operation)
	|| is_set(name.operation)
	|| is_set(taskmap.operation)
	|| is_set(usergroup.operation);
}

std::string Aaa::CurrentUsergroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-usergroup";

    return path_buffer.str();

}

EntityPath Aaa::CurrentUsergroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenmethod.is_set || is_set(authenmethod.operation)) leaf_name_data.push_back(authenmethod.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());

    auto taskmap_name_datas = taskmap.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), taskmap_name_datas.begin(), taskmap_name_datas.end());
    auto usergroup_name_datas = usergroup.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), usergroup_name_datas.begin(), usergroup_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::CurrentUsergroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::CurrentUsergroup::get_children()
{
    return children;
}

void Aaa::CurrentUsergroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authenmethod")
    {
        authenmethod = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "taskmap")
    {
        taskmap.append(value);
    }
    if(value_path == "usergroup")
    {
        usergroup.append(value);
    }
}

Aaa::Tacacs::Tacacs()
    :
    requests(std::make_shared<Aaa::Tacacs::Requests>())
	,server_groups(std::make_shared<Aaa::Tacacs::ServerGroups>())
	,servers(std::make_shared<Aaa::Tacacs::Servers>())
{
    requests->parent = this;
    children["requests"] = requests;

    server_groups->parent = this;
    children["server-groups"] = server_groups;

    servers->parent = this;
    children["servers"] = servers;

    yang_name = "tacacs"; yang_parent_name = "aaa";
}

Aaa::Tacacs::~Tacacs()
{
}

bool Aaa::Tacacs::has_data() const
{
    return (requests !=  nullptr && requests->has_data())
	|| (server_groups !=  nullptr && server_groups->has_data())
	|| (servers !=  nullptr && servers->has_data());
}

bool Aaa::Tacacs::has_operation() const
{
    return is_set(operation)
	|| (requests !=  nullptr && requests->has_operation())
	|| (server_groups !=  nullptr && server_groups->has_operation())
	|| (servers !=  nullptr && servers->has_operation());
}

std::string Aaa::Tacacs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-tacacs-oper:tacacs";

    return path_buffer.str();

}

EntityPath Aaa::Tacacs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Tacacs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "requests")
    {
        if(requests != nullptr)
        {
            children["requests"] = requests;
        }
        else
        {
            requests = std::make_shared<Aaa::Tacacs::Requests>();
            requests->parent = this;
            children["requests"] = requests;
        }
        return children.at("requests");
    }

    if(child_yang_name == "server-groups")
    {
        if(server_groups != nullptr)
        {
            children["server-groups"] = server_groups;
        }
        else
        {
            server_groups = std::make_shared<Aaa::Tacacs::ServerGroups>();
            server_groups->parent = this;
            children["server-groups"] = server_groups;
        }
        return children.at("server-groups");
    }

    if(child_yang_name == "servers")
    {
        if(servers != nullptr)
        {
            children["servers"] = servers;
        }
        else
        {
            servers = std::make_shared<Aaa::Tacacs::Servers>();
            servers->parent = this;
            children["servers"] = servers;
        }
        return children.at("servers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Tacacs::get_children()
{
    if(children.find("requests") == children.end())
    {
        if(requests != nullptr)
        {
            children["requests"] = requests;
        }
    }

    if(children.find("server-groups") == children.end())
    {
        if(server_groups != nullptr)
        {
            children["server-groups"] = server_groups;
        }
    }

    if(children.find("servers") == children.end())
    {
        if(servers != nullptr)
        {
            children["servers"] = servers;
        }
    }

    return children;
}

void Aaa::Tacacs::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Tacacs::Requests::Requests()
{
    yang_name = "requests"; yang_parent_name = "tacacs";
}

Aaa::Tacacs::Requests::~Requests()
{
}

bool Aaa::Tacacs::Requests::has_data() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Tacacs::Requests::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Tacacs::Requests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "requests";

    return path_buffer.str();

}

EntityPath Aaa::Tacacs::Requests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-tacacs-oper:tacacs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Tacacs::Requests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "request")
    {
        for(auto const & c : request)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Tacacs::Requests::Request>();
        c->parent = this;
        request.push_back(std::move(c));
        children[segment_path] = request.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Tacacs::Requests::get_children()
{
    for (auto const & c : request)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Tacacs::Requests::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Tacacs::Requests::Request::Request()
{
    yang_name = "request"; yang_parent_name = "requests";
}

Aaa::Tacacs::Requests::Request::~Request()
{
}

bool Aaa::Tacacs::Requests::Request::has_data() const
{
    for (std::size_t index=0; index<tacacs_requestbag.size(); index++)
    {
        if(tacacs_requestbag[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Tacacs::Requests::Request::has_operation() const
{
    for (std::size_t index=0; index<tacacs_requestbag.size(); index++)
    {
        if(tacacs_requestbag[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Tacacs::Requests::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";

    return path_buffer.str();

}

EntityPath Aaa::Tacacs::Requests::Request::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-tacacs-oper:tacacs/requests/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Tacacs::Requests::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tacacs-requestbag")
    {
        for(auto const & c : tacacs_requestbag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Tacacs::Requests::Request::TacacsRequestbag>();
        c->parent = this;
        tacacs_requestbag.push_back(std::move(c));
        children[segment_path] = tacacs_requestbag.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Tacacs::Requests::Request::get_children()
{
    for (auto const & c : tacacs_requestbag)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Tacacs::Requests::Request::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Tacacs::Requests::Request::TacacsRequestbag::TacacsRequestbag()
    :
    bytes_in{YType::uint32, "bytes-in"},
    bytes_out{YType::uint32, "bytes-out"},
    in_pak_size{YType::uint32, "in-pak-size"},
    out_pak_size{YType::uint32, "out-pak-size"},
    pak_type{YType::str, "pak-type"},
    session_id{YType::int32, "session-id"},
    sock{YType::int32, "sock"},
    time_remaining{YType::uint32, "time-remaining"}
{
    yang_name = "tacacs-requestbag"; yang_parent_name = "request";
}

Aaa::Tacacs::Requests::Request::TacacsRequestbag::~TacacsRequestbag()
{
}

bool Aaa::Tacacs::Requests::Request::TacacsRequestbag::has_data() const
{
    return bytes_in.is_set
	|| bytes_out.is_set
	|| in_pak_size.is_set
	|| out_pak_size.is_set
	|| pak_type.is_set
	|| session_id.is_set
	|| sock.is_set
	|| time_remaining.is_set;
}

bool Aaa::Tacacs::Requests::Request::TacacsRequestbag::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes_in.operation)
	|| is_set(bytes_out.operation)
	|| is_set(in_pak_size.operation)
	|| is_set(out_pak_size.operation)
	|| is_set(pak_type.operation)
	|| is_set(session_id.operation)
	|| is_set(sock.operation)
	|| is_set(time_remaining.operation);
}

std::string Aaa::Tacacs::Requests::Request::TacacsRequestbag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacs-requestbag";

    return path_buffer.str();

}

EntityPath Aaa::Tacacs::Requests::Request::TacacsRequestbag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-tacacs-oper:tacacs/requests/request/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes_in.is_set || is_set(bytes_in.operation)) leaf_name_data.push_back(bytes_in.get_name_leafdata());
    if (bytes_out.is_set || is_set(bytes_out.operation)) leaf_name_data.push_back(bytes_out.get_name_leafdata());
    if (in_pak_size.is_set || is_set(in_pak_size.operation)) leaf_name_data.push_back(in_pak_size.get_name_leafdata());
    if (out_pak_size.is_set || is_set(out_pak_size.operation)) leaf_name_data.push_back(out_pak_size.get_name_leafdata());
    if (pak_type.is_set || is_set(pak_type.operation)) leaf_name_data.push_back(pak_type.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (sock.is_set || is_set(sock.operation)) leaf_name_data.push_back(sock.get_name_leafdata());
    if (time_remaining.is_set || is_set(time_remaining.operation)) leaf_name_data.push_back(time_remaining.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Tacacs::Requests::Request::TacacsRequestbag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Tacacs::Requests::Request::TacacsRequestbag::get_children()
{
    return children;
}

void Aaa::Tacacs::Requests::Request::TacacsRequestbag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes-in")
    {
        bytes_in = value;
    }
    if(value_path == "bytes-out")
    {
        bytes_out = value;
    }
    if(value_path == "in-pak-size")
    {
        in_pak_size = value;
    }
    if(value_path == "out-pak-size")
    {
        out_pak_size = value;
    }
    if(value_path == "pak-type")
    {
        pak_type = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "sock")
    {
        sock = value;
    }
    if(value_path == "time-remaining")
    {
        time_remaining = value;
    }
}

Aaa::Tacacs::Servers::Servers()
{
    yang_name = "servers"; yang_parent_name = "tacacs";
}

Aaa::Tacacs::Servers::~Servers()
{
}

bool Aaa::Tacacs::Servers::has_data() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Tacacs::Servers::has_operation() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Tacacs::Servers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "servers";

    return path_buffer.str();

}

EntityPath Aaa::Tacacs::Servers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-tacacs-oper:tacacs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Tacacs::Servers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "server")
    {
        for(auto const & c : server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Tacacs::Servers::Server>();
        c->parent = this;
        server.push_back(std::move(c));
        children[segment_path] = server.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Tacacs::Servers::get_children()
{
    for (auto const & c : server)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Tacacs::Servers::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Tacacs::Servers::Server::Server()
    :
    aborts{YType::uint32, "aborts"},
    addr{YType::str, "addr"},
    addr_buf{YType::str, "addr-buf"},
    bytes_in{YType::uint32, "bytes-in"},
    bytes_out{YType::uint32, "bytes-out"},
    closes{YType::uint32, "closes"},
    conn_up{YType::boolean, "conn-up"},
    errors{YType::uint32, "errors"},
    family{YType::str, "family"},
    is_private{YType::boolean, "is-private"},
    opens{YType::uint32, "opens"},
    paks_in{YType::uint32, "paks-in"},
    paks_out{YType::uint32, "paks-out"},
    port{YType::uint32, "port"},
    replies_expected{YType::uint32, "replies-expected"},
    single_connect{YType::boolean, "single-connect"},
    timeout{YType::uint32, "timeout"},
    up{YType::boolean, "up"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "server"; yang_parent_name = "servers";
}

Aaa::Tacacs::Servers::Server::~Server()
{
}

bool Aaa::Tacacs::Servers::Server::has_data() const
{
    return aborts.is_set
	|| addr.is_set
	|| addr_buf.is_set
	|| bytes_in.is_set
	|| bytes_out.is_set
	|| closes.is_set
	|| conn_up.is_set
	|| errors.is_set
	|| family.is_set
	|| is_private.is_set
	|| opens.is_set
	|| paks_in.is_set
	|| paks_out.is_set
	|| port.is_set
	|| replies_expected.is_set
	|| single_connect.is_set
	|| timeout.is_set
	|| up.is_set
	|| vrf_name.is_set;
}

bool Aaa::Tacacs::Servers::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(aborts.operation)
	|| is_set(addr.operation)
	|| is_set(addr_buf.operation)
	|| is_set(bytes_in.operation)
	|| is_set(bytes_out.operation)
	|| is_set(closes.operation)
	|| is_set(conn_up.operation)
	|| is_set(errors.operation)
	|| is_set(family.operation)
	|| is_set(is_private.operation)
	|| is_set(opens.operation)
	|| is_set(paks_in.operation)
	|| is_set(paks_out.operation)
	|| is_set(port.operation)
	|| is_set(replies_expected.operation)
	|| is_set(single_connect.operation)
	|| is_set(timeout.operation)
	|| is_set(up.operation)
	|| is_set(vrf_name.operation);
}

std::string Aaa::Tacacs::Servers::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

EntityPath Aaa::Tacacs::Servers::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-tacacs-oper:tacacs/servers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aborts.is_set || is_set(aborts.operation)) leaf_name_data.push_back(aborts.get_name_leafdata());
    if (addr.is_set || is_set(addr.operation)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (addr_buf.is_set || is_set(addr_buf.operation)) leaf_name_data.push_back(addr_buf.get_name_leafdata());
    if (bytes_in.is_set || is_set(bytes_in.operation)) leaf_name_data.push_back(bytes_in.get_name_leafdata());
    if (bytes_out.is_set || is_set(bytes_out.operation)) leaf_name_data.push_back(bytes_out.get_name_leafdata());
    if (closes.is_set || is_set(closes.operation)) leaf_name_data.push_back(closes.get_name_leafdata());
    if (conn_up.is_set || is_set(conn_up.operation)) leaf_name_data.push_back(conn_up.get_name_leafdata());
    if (errors.is_set || is_set(errors.operation)) leaf_name_data.push_back(errors.get_name_leafdata());
    if (family.is_set || is_set(family.operation)) leaf_name_data.push_back(family.get_name_leafdata());
    if (is_private.is_set || is_set(is_private.operation)) leaf_name_data.push_back(is_private.get_name_leafdata());
    if (opens.is_set || is_set(opens.operation)) leaf_name_data.push_back(opens.get_name_leafdata());
    if (paks_in.is_set || is_set(paks_in.operation)) leaf_name_data.push_back(paks_in.get_name_leafdata());
    if (paks_out.is_set || is_set(paks_out.operation)) leaf_name_data.push_back(paks_out.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (replies_expected.is_set || is_set(replies_expected.operation)) leaf_name_data.push_back(replies_expected.get_name_leafdata());
    if (single_connect.is_set || is_set(single_connect.operation)) leaf_name_data.push_back(single_connect.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (up.is_set || is_set(up.operation)) leaf_name_data.push_back(up.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Tacacs::Servers::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Tacacs::Servers::Server::get_children()
{
    return children;
}

void Aaa::Tacacs::Servers::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aborts")
    {
        aborts = value;
    }
    if(value_path == "addr")
    {
        addr = value;
    }
    if(value_path == "addr-buf")
    {
        addr_buf = value;
    }
    if(value_path == "bytes-in")
    {
        bytes_in = value;
    }
    if(value_path == "bytes-out")
    {
        bytes_out = value;
    }
    if(value_path == "closes")
    {
        closes = value;
    }
    if(value_path == "conn-up")
    {
        conn_up = value;
    }
    if(value_path == "errors")
    {
        errors = value;
    }
    if(value_path == "family")
    {
        family = value;
    }
    if(value_path == "is-private")
    {
        is_private = value;
    }
    if(value_path == "opens")
    {
        opens = value;
    }
    if(value_path == "paks-in")
    {
        paks_in = value;
    }
    if(value_path == "paks-out")
    {
        paks_out = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "replies-expected")
    {
        replies_expected = value;
    }
    if(value_path == "single-connect")
    {
        single_connect = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
    if(value_path == "up")
    {
        up = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Aaa::Tacacs::ServerGroups::ServerGroups()
{
    yang_name = "server-groups"; yang_parent_name = "tacacs";
}

Aaa::Tacacs::ServerGroups::~ServerGroups()
{
}

bool Aaa::Tacacs::ServerGroups::has_data() const
{
    for (std::size_t index=0; index<server_group.size(); index++)
    {
        if(server_group[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Tacacs::ServerGroups::has_operation() const
{
    for (std::size_t index=0; index<server_group.size(); index++)
    {
        if(server_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Tacacs::ServerGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-groups";

    return path_buffer.str();

}

EntityPath Aaa::Tacacs::ServerGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-tacacs-oper:tacacs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Tacacs::ServerGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "server-group")
    {
        for(auto const & c : server_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Tacacs::ServerGroups::ServerGroup>();
        c->parent = this;
        server_group.push_back(std::move(c));
        children[segment_path] = server_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Tacacs::ServerGroups::get_children()
{
    for (auto const & c : server_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Tacacs::ServerGroups::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Tacacs::ServerGroups::ServerGroup::ServerGroup()
    :
    group_name{YType::str, "group-name"},
    sg_map_num{YType::uint32, "sg-map-num"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "server-group"; yang_parent_name = "server-groups";
}

Aaa::Tacacs::ServerGroups::ServerGroup::~ServerGroup()
{
}

bool Aaa::Tacacs::ServerGroups::ServerGroup::has_data() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return group_name.is_set
	|| sg_map_num.is_set
	|| vrf_name.is_set;
}

bool Aaa::Tacacs::ServerGroups::ServerGroup::has_operation() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(group_name.operation)
	|| is_set(sg_map_num.operation)
	|| is_set(vrf_name.operation);
}

std::string Aaa::Tacacs::ServerGroups::ServerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-group";

    return path_buffer.str();

}

EntityPath Aaa::Tacacs::ServerGroups::ServerGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-tacacs-oper:tacacs/server-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (sg_map_num.is_set || is_set(sg_map_num.operation)) leaf_name_data.push_back(sg_map_num.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Tacacs::ServerGroups::ServerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "server")
    {
        for(auto const & c : server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Tacacs::ServerGroups::ServerGroup::Server>();
        c->parent = this;
        server.push_back(std::move(c));
        children[segment_path] = server.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Tacacs::ServerGroups::ServerGroup::get_children()
{
    for (auto const & c : server)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Tacacs::ServerGroups::ServerGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "sg-map-num")
    {
        sg_map_num = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Aaa::Tacacs::ServerGroups::ServerGroup::Server::Server()
    :
    aborts{YType::uint32, "aborts"},
    addr{YType::str, "addr"},
    addr_buf{YType::str, "addr-buf"},
    bytes_in{YType::uint32, "bytes-in"},
    bytes_out{YType::uint32, "bytes-out"},
    closes{YType::uint32, "closes"},
    conn_up{YType::boolean, "conn-up"},
    errors{YType::uint32, "errors"},
    family{YType::str, "family"},
    is_private{YType::boolean, "is-private"},
    opens{YType::uint32, "opens"},
    paks_in{YType::uint32, "paks-in"},
    paks_out{YType::uint32, "paks-out"},
    port{YType::uint32, "port"},
    replies_expected{YType::uint32, "replies-expected"},
    single_connect{YType::boolean, "single-connect"},
    timeout{YType::uint32, "timeout"},
    up{YType::boolean, "up"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "server"; yang_parent_name = "server-group";
}

Aaa::Tacacs::ServerGroups::ServerGroup::Server::~Server()
{
}

bool Aaa::Tacacs::ServerGroups::ServerGroup::Server::has_data() const
{
    return aborts.is_set
	|| addr.is_set
	|| addr_buf.is_set
	|| bytes_in.is_set
	|| bytes_out.is_set
	|| closes.is_set
	|| conn_up.is_set
	|| errors.is_set
	|| family.is_set
	|| is_private.is_set
	|| opens.is_set
	|| paks_in.is_set
	|| paks_out.is_set
	|| port.is_set
	|| replies_expected.is_set
	|| single_connect.is_set
	|| timeout.is_set
	|| up.is_set
	|| vrf_name.is_set;
}

bool Aaa::Tacacs::ServerGroups::ServerGroup::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(aborts.operation)
	|| is_set(addr.operation)
	|| is_set(addr_buf.operation)
	|| is_set(bytes_in.operation)
	|| is_set(bytes_out.operation)
	|| is_set(closes.operation)
	|| is_set(conn_up.operation)
	|| is_set(errors.operation)
	|| is_set(family.operation)
	|| is_set(is_private.operation)
	|| is_set(opens.operation)
	|| is_set(paks_in.operation)
	|| is_set(paks_out.operation)
	|| is_set(port.operation)
	|| is_set(replies_expected.operation)
	|| is_set(single_connect.operation)
	|| is_set(timeout.operation)
	|| is_set(up.operation)
	|| is_set(vrf_name.operation);
}

std::string Aaa::Tacacs::ServerGroups::ServerGroup::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

EntityPath Aaa::Tacacs::ServerGroups::ServerGroup::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-tacacs-oper:tacacs/server-groups/server-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aborts.is_set || is_set(aborts.operation)) leaf_name_data.push_back(aborts.get_name_leafdata());
    if (addr.is_set || is_set(addr.operation)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (addr_buf.is_set || is_set(addr_buf.operation)) leaf_name_data.push_back(addr_buf.get_name_leafdata());
    if (bytes_in.is_set || is_set(bytes_in.operation)) leaf_name_data.push_back(bytes_in.get_name_leafdata());
    if (bytes_out.is_set || is_set(bytes_out.operation)) leaf_name_data.push_back(bytes_out.get_name_leafdata());
    if (closes.is_set || is_set(closes.operation)) leaf_name_data.push_back(closes.get_name_leafdata());
    if (conn_up.is_set || is_set(conn_up.operation)) leaf_name_data.push_back(conn_up.get_name_leafdata());
    if (errors.is_set || is_set(errors.operation)) leaf_name_data.push_back(errors.get_name_leafdata());
    if (family.is_set || is_set(family.operation)) leaf_name_data.push_back(family.get_name_leafdata());
    if (is_private.is_set || is_set(is_private.operation)) leaf_name_data.push_back(is_private.get_name_leafdata());
    if (opens.is_set || is_set(opens.operation)) leaf_name_data.push_back(opens.get_name_leafdata());
    if (paks_in.is_set || is_set(paks_in.operation)) leaf_name_data.push_back(paks_in.get_name_leafdata());
    if (paks_out.is_set || is_set(paks_out.operation)) leaf_name_data.push_back(paks_out.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (replies_expected.is_set || is_set(replies_expected.operation)) leaf_name_data.push_back(replies_expected.get_name_leafdata());
    if (single_connect.is_set || is_set(single_connect.operation)) leaf_name_data.push_back(single_connect.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (up.is_set || is_set(up.operation)) leaf_name_data.push_back(up.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Tacacs::ServerGroups::ServerGroup::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Tacacs::ServerGroups::ServerGroup::Server::get_children()
{
    return children;
}

void Aaa::Tacacs::ServerGroups::ServerGroup::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aborts")
    {
        aborts = value;
    }
    if(value_path == "addr")
    {
        addr = value;
    }
    if(value_path == "addr-buf")
    {
        addr_buf = value;
    }
    if(value_path == "bytes-in")
    {
        bytes_in = value;
    }
    if(value_path == "bytes-out")
    {
        bytes_out = value;
    }
    if(value_path == "closes")
    {
        closes = value;
    }
    if(value_path == "conn-up")
    {
        conn_up = value;
    }
    if(value_path == "errors")
    {
        errors = value;
    }
    if(value_path == "family")
    {
        family = value;
    }
    if(value_path == "is-private")
    {
        is_private = value;
    }
    if(value_path == "opens")
    {
        opens = value;
    }
    if(value_path == "paks-in")
    {
        paks_in = value;
    }
    if(value_path == "paks-out")
    {
        paks_out = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "replies-expected")
    {
        replies_expected = value;
    }
    if(value_path == "single-connect")
    {
        single_connect = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
    if(value_path == "up")
    {
        up = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Aaa::Diameter::Diameter()
    :
    gx(std::make_shared<Aaa::Diameter::Gx>())
	,gx_session_ids(std::make_shared<Aaa::Diameter::GxSessionIds>())
	,gx_statistics(std::make_shared<Aaa::Diameter::GxStatistics>())
	,gy(std::make_shared<Aaa::Diameter::Gy>())
	,gy_session_ids(std::make_shared<Aaa::Diameter::GySessionIds>())
	,gy_statistics(std::make_shared<Aaa::Diameter::GyStatistics>())
	,nas(std::make_shared<Aaa::Diameter::Nas>())
	,nas_session(std::make_shared<Aaa::Diameter::NasSession>())
	,nas_summary(std::make_shared<Aaa::Diameter::NasSummary>())
	,peers(std::make_shared<Aaa::Diameter::Peers>())
{
    gx->parent = this;
    children["gx"] = gx;

    gx_session_ids->parent = this;
    children["gx-session-ids"] = gx_session_ids;

    gx_statistics->parent = this;
    children["gx-statistics"] = gx_statistics;

    gy->parent = this;
    children["gy"] = gy;

    gy_session_ids->parent = this;
    children["gy-session-ids"] = gy_session_ids;

    gy_statistics->parent = this;
    children["gy-statistics"] = gy_statistics;

    nas->parent = this;
    children["nas"] = nas;

    nas_session->parent = this;
    children["nas-session"] = nas_session;

    nas_summary->parent = this;
    children["nas-summary"] = nas_summary;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "diameter"; yang_parent_name = "aaa";
}

Aaa::Diameter::~Diameter()
{
}

bool Aaa::Diameter::has_data() const
{
    return (gx !=  nullptr && gx->has_data())
	|| (gx_session_ids !=  nullptr && gx_session_ids->has_data())
	|| (gx_statistics !=  nullptr && gx_statistics->has_data())
	|| (gy !=  nullptr && gy->has_data())
	|| (gy_session_ids !=  nullptr && gy_session_ids->has_data())
	|| (gy_statistics !=  nullptr && gy_statistics->has_data())
	|| (nas !=  nullptr && nas->has_data())
	|| (nas_session !=  nullptr && nas_session->has_data())
	|| (nas_summary !=  nullptr && nas_summary->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool Aaa::Diameter::has_operation() const
{
    return is_set(operation)
	|| (gx !=  nullptr && gx->has_operation())
	|| (gx_session_ids !=  nullptr && gx_session_ids->has_operation())
	|| (gx_statistics !=  nullptr && gx_statistics->has_operation())
	|| (gy !=  nullptr && gy->has_operation())
	|| (gy_session_ids !=  nullptr && gy_session_ids->has_operation())
	|| (gy_statistics !=  nullptr && gy_statistics->has_operation())
	|| (nas !=  nullptr && nas->has_operation())
	|| (nas_session !=  nullptr && nas_session->has_operation())
	|| (nas_summary !=  nullptr && nas_summary->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string Aaa::Diameter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-diameter-oper:diameter";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "gx")
    {
        if(gx != nullptr)
        {
            children["gx"] = gx;
        }
        else
        {
            gx = std::make_shared<Aaa::Diameter::Gx>();
            gx->parent = this;
            children["gx"] = gx;
        }
        return children.at("gx");
    }

    if(child_yang_name == "gx-session-ids")
    {
        if(gx_session_ids != nullptr)
        {
            children["gx-session-ids"] = gx_session_ids;
        }
        else
        {
            gx_session_ids = std::make_shared<Aaa::Diameter::GxSessionIds>();
            gx_session_ids->parent = this;
            children["gx-session-ids"] = gx_session_ids;
        }
        return children.at("gx-session-ids");
    }

    if(child_yang_name == "gx-statistics")
    {
        if(gx_statistics != nullptr)
        {
            children["gx-statistics"] = gx_statistics;
        }
        else
        {
            gx_statistics = std::make_shared<Aaa::Diameter::GxStatistics>();
            gx_statistics->parent = this;
            children["gx-statistics"] = gx_statistics;
        }
        return children.at("gx-statistics");
    }

    if(child_yang_name == "gy")
    {
        if(gy != nullptr)
        {
            children["gy"] = gy;
        }
        else
        {
            gy = std::make_shared<Aaa::Diameter::Gy>();
            gy->parent = this;
            children["gy"] = gy;
        }
        return children.at("gy");
    }

    if(child_yang_name == "gy-session-ids")
    {
        if(gy_session_ids != nullptr)
        {
            children["gy-session-ids"] = gy_session_ids;
        }
        else
        {
            gy_session_ids = std::make_shared<Aaa::Diameter::GySessionIds>();
            gy_session_ids->parent = this;
            children["gy-session-ids"] = gy_session_ids;
        }
        return children.at("gy-session-ids");
    }

    if(child_yang_name == "gy-statistics")
    {
        if(gy_statistics != nullptr)
        {
            children["gy-statistics"] = gy_statistics;
        }
        else
        {
            gy_statistics = std::make_shared<Aaa::Diameter::GyStatistics>();
            gy_statistics->parent = this;
            children["gy-statistics"] = gy_statistics;
        }
        return children.at("gy-statistics");
    }

    if(child_yang_name == "nas")
    {
        if(nas != nullptr)
        {
            children["nas"] = nas;
        }
        else
        {
            nas = std::make_shared<Aaa::Diameter::Nas>();
            nas->parent = this;
            children["nas"] = nas;
        }
        return children.at("nas");
    }

    if(child_yang_name == "nas-session")
    {
        if(nas_session != nullptr)
        {
            children["nas-session"] = nas_session;
        }
        else
        {
            nas_session = std::make_shared<Aaa::Diameter::NasSession>();
            nas_session->parent = this;
            children["nas-session"] = nas_session;
        }
        return children.at("nas-session");
    }

    if(child_yang_name == "nas-summary")
    {
        if(nas_summary != nullptr)
        {
            children["nas-summary"] = nas_summary;
        }
        else
        {
            nas_summary = std::make_shared<Aaa::Diameter::NasSummary>();
            nas_summary->parent = this;
            children["nas-summary"] = nas_summary;
        }
        return children.at("nas-summary");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<Aaa::Diameter::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::get_children()
{
    if(children.find("gx") == children.end())
    {
        if(gx != nullptr)
        {
            children["gx"] = gx;
        }
    }

    if(children.find("gx-session-ids") == children.end())
    {
        if(gx_session_ids != nullptr)
        {
            children["gx-session-ids"] = gx_session_ids;
        }
    }

    if(children.find("gx-statistics") == children.end())
    {
        if(gx_statistics != nullptr)
        {
            children["gx-statistics"] = gx_statistics;
        }
    }

    if(children.find("gy") == children.end())
    {
        if(gy != nullptr)
        {
            children["gy"] = gy;
        }
    }

    if(children.find("gy-session-ids") == children.end())
    {
        if(gy_session_ids != nullptr)
        {
            children["gy-session-ids"] = gy_session_ids;
        }
    }

    if(children.find("gy-statistics") == children.end())
    {
        if(gy_statistics != nullptr)
        {
            children["gy-statistics"] = gy_statistics;
        }
    }

    if(children.find("nas") == children.end())
    {
        if(nas != nullptr)
        {
            children["nas"] = nas;
        }
    }

    if(children.find("nas-session") == children.end())
    {
        if(nas_session != nullptr)
        {
            children["nas-session"] = nas_session;
        }
    }

    if(children.find("nas-summary") == children.end())
    {
        if(nas_summary != nullptr)
        {
            children["nas-summary"] = nas_summary;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void Aaa::Diameter::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Diameter::Gy::Gy()
    :
    is_enabled{YType::boolean, "is-enabled"},
    retransmits{YType::uint32, "retransmits"},
    tx_timer{YType::uint32, "tx-timer"}
{
    yang_name = "gy"; yang_parent_name = "diameter";
}

Aaa::Diameter::Gy::~Gy()
{
}

bool Aaa::Diameter::Gy::has_data() const
{
    return is_enabled.is_set
	|| retransmits.is_set
	|| tx_timer.is_set;
}

bool Aaa::Diameter::Gy::has_operation() const
{
    return is_set(operation)
	|| is_set(is_enabled.operation)
	|| is_set(retransmits.operation)
	|| is_set(tx_timer.operation);
}

std::string Aaa::Diameter::Gy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gy";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::Gy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-diameter-oper:diameter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_enabled.is_set || is_set(is_enabled.operation)) leaf_name_data.push_back(is_enabled.get_name_leafdata());
    if (retransmits.is_set || is_set(retransmits.operation)) leaf_name_data.push_back(retransmits.get_name_leafdata());
    if (tx_timer.is_set || is_set(tx_timer.operation)) leaf_name_data.push_back(tx_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::Gy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::Gy::get_children()
{
    return children;
}

void Aaa::Diameter::Gy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-enabled")
    {
        is_enabled = value;
    }
    if(value_path == "retransmits")
    {
        retransmits = value;
    }
    if(value_path == "tx-timer")
    {
        tx_timer = value;
    }
}

Aaa::Diameter::GxStatistics::GxStatistics()
    :
    active_sessions{YType::uint32, "active-sessions"},
    asa_sent_error_messages{YType::uint32, "asa-sent-error-messages"},
    asa_sent_messsages{YType::uint32, "asa-sent-messsages"},
    asr_received_error_messages{YType::uint32, "asr-received-error-messages"},
    asr_received_messages{YType::uint32, "asr-received-messages"},
    cca_final_error_messages{YType::uint32, "cca-final-error-messages"},
    cca_final_messages{YType::uint32, "cca-final-messages"},
    cca_init_error_messages{YType::uint32, "cca-init-error-messages"},
    cca_init_messages{YType::uint32, "cca-init-messages"},
    cca_update_error_messages{YType::uint32, "cca-update-error-messages"},
    cca_update_messages{YType::uint32, "cca-update-messages"},
    ccr_final_failed_messages{YType::uint32, "ccr-final-failed-messages"},
    ccr_final_messages{YType::uint32, "ccr-final-messages"},
    ccr_final_retry_messages{YType::uint32, "ccr-final-retry-messages"},
    ccr_final_timed_out_messages{YType::uint32, "ccr-final-timed-out-messages"},
    ccr_init_failed_messages{YType::uint32, "ccr-init-failed-messages"},
    ccr_init_messages{YType::uint32, "ccr-init-messages"},
    ccr_init_retry_messages{YType::uint32, "ccr-init-retry-messages"},
    ccr_init_timed_out_messages{YType::uint32, "ccr-init-timed-out-messages"},
    ccr_update_failed_messages{YType::uint32, "ccr-update-failed-messages"},
    ccr_update_messages{YType::uint32, "ccr-update-messages"},
    ccr_update_retry_messages{YType::uint32, "ccr-update-retry-messages"},
    ccr_update_timed_out_messages{YType::uint32, "ccr-update-timed-out-messages"},
    close_sessions{YType::uint32, "close-sessions"},
    open_sessions{YType::uint32, "open-sessions"},
    raa_sent_error_messages{YType::uint32, "raa-sent-error-messages"},
    raa_sent_messages{YType::uint32, "raa-sent-messages"},
    rar_received_error_messages{YType::uint32, "rar-received-error-messages"},
    rar_received_messages{YType::uint32, "rar-received-messages"},
    restore_sessions{YType::uint32, "restore-sessions"},
    session_termination_messages{YType::uint32, "session-termination-messages"},
    unknown_request_messages{YType::uint32, "unknown-request-messages"}
{
    yang_name = "gx-statistics"; yang_parent_name = "diameter";
}

Aaa::Diameter::GxStatistics::~GxStatistics()
{
}

bool Aaa::Diameter::GxStatistics::has_data() const
{
    return active_sessions.is_set
	|| asa_sent_error_messages.is_set
	|| asa_sent_messsages.is_set
	|| asr_received_error_messages.is_set
	|| asr_received_messages.is_set
	|| cca_final_error_messages.is_set
	|| cca_final_messages.is_set
	|| cca_init_error_messages.is_set
	|| cca_init_messages.is_set
	|| cca_update_error_messages.is_set
	|| cca_update_messages.is_set
	|| ccr_final_failed_messages.is_set
	|| ccr_final_messages.is_set
	|| ccr_final_retry_messages.is_set
	|| ccr_final_timed_out_messages.is_set
	|| ccr_init_failed_messages.is_set
	|| ccr_init_messages.is_set
	|| ccr_init_retry_messages.is_set
	|| ccr_init_timed_out_messages.is_set
	|| ccr_update_failed_messages.is_set
	|| ccr_update_messages.is_set
	|| ccr_update_retry_messages.is_set
	|| ccr_update_timed_out_messages.is_set
	|| close_sessions.is_set
	|| open_sessions.is_set
	|| raa_sent_error_messages.is_set
	|| raa_sent_messages.is_set
	|| rar_received_error_messages.is_set
	|| rar_received_messages.is_set
	|| restore_sessions.is_set
	|| session_termination_messages.is_set
	|| unknown_request_messages.is_set;
}

bool Aaa::Diameter::GxStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(active_sessions.operation)
	|| is_set(asa_sent_error_messages.operation)
	|| is_set(asa_sent_messsages.operation)
	|| is_set(asr_received_error_messages.operation)
	|| is_set(asr_received_messages.operation)
	|| is_set(cca_final_error_messages.operation)
	|| is_set(cca_final_messages.operation)
	|| is_set(cca_init_error_messages.operation)
	|| is_set(cca_init_messages.operation)
	|| is_set(cca_update_error_messages.operation)
	|| is_set(cca_update_messages.operation)
	|| is_set(ccr_final_failed_messages.operation)
	|| is_set(ccr_final_messages.operation)
	|| is_set(ccr_final_retry_messages.operation)
	|| is_set(ccr_final_timed_out_messages.operation)
	|| is_set(ccr_init_failed_messages.operation)
	|| is_set(ccr_init_messages.operation)
	|| is_set(ccr_init_retry_messages.operation)
	|| is_set(ccr_init_timed_out_messages.operation)
	|| is_set(ccr_update_failed_messages.operation)
	|| is_set(ccr_update_messages.operation)
	|| is_set(ccr_update_retry_messages.operation)
	|| is_set(ccr_update_timed_out_messages.operation)
	|| is_set(close_sessions.operation)
	|| is_set(open_sessions.operation)
	|| is_set(raa_sent_error_messages.operation)
	|| is_set(raa_sent_messages.operation)
	|| is_set(rar_received_error_messages.operation)
	|| is_set(rar_received_messages.operation)
	|| is_set(restore_sessions.operation)
	|| is_set(session_termination_messages.operation)
	|| is_set(unknown_request_messages.operation);
}

std::string Aaa::Diameter::GxStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gx-statistics";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::GxStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-diameter-oper:diameter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_sessions.is_set || is_set(active_sessions.operation)) leaf_name_data.push_back(active_sessions.get_name_leafdata());
    if (asa_sent_error_messages.is_set || is_set(asa_sent_error_messages.operation)) leaf_name_data.push_back(asa_sent_error_messages.get_name_leafdata());
    if (asa_sent_messsages.is_set || is_set(asa_sent_messsages.operation)) leaf_name_data.push_back(asa_sent_messsages.get_name_leafdata());
    if (asr_received_error_messages.is_set || is_set(asr_received_error_messages.operation)) leaf_name_data.push_back(asr_received_error_messages.get_name_leafdata());
    if (asr_received_messages.is_set || is_set(asr_received_messages.operation)) leaf_name_data.push_back(asr_received_messages.get_name_leafdata());
    if (cca_final_error_messages.is_set || is_set(cca_final_error_messages.operation)) leaf_name_data.push_back(cca_final_error_messages.get_name_leafdata());
    if (cca_final_messages.is_set || is_set(cca_final_messages.operation)) leaf_name_data.push_back(cca_final_messages.get_name_leafdata());
    if (cca_init_error_messages.is_set || is_set(cca_init_error_messages.operation)) leaf_name_data.push_back(cca_init_error_messages.get_name_leafdata());
    if (cca_init_messages.is_set || is_set(cca_init_messages.operation)) leaf_name_data.push_back(cca_init_messages.get_name_leafdata());
    if (cca_update_error_messages.is_set || is_set(cca_update_error_messages.operation)) leaf_name_data.push_back(cca_update_error_messages.get_name_leafdata());
    if (cca_update_messages.is_set || is_set(cca_update_messages.operation)) leaf_name_data.push_back(cca_update_messages.get_name_leafdata());
    if (ccr_final_failed_messages.is_set || is_set(ccr_final_failed_messages.operation)) leaf_name_data.push_back(ccr_final_failed_messages.get_name_leafdata());
    if (ccr_final_messages.is_set || is_set(ccr_final_messages.operation)) leaf_name_data.push_back(ccr_final_messages.get_name_leafdata());
    if (ccr_final_retry_messages.is_set || is_set(ccr_final_retry_messages.operation)) leaf_name_data.push_back(ccr_final_retry_messages.get_name_leafdata());
    if (ccr_final_timed_out_messages.is_set || is_set(ccr_final_timed_out_messages.operation)) leaf_name_data.push_back(ccr_final_timed_out_messages.get_name_leafdata());
    if (ccr_init_failed_messages.is_set || is_set(ccr_init_failed_messages.operation)) leaf_name_data.push_back(ccr_init_failed_messages.get_name_leafdata());
    if (ccr_init_messages.is_set || is_set(ccr_init_messages.operation)) leaf_name_data.push_back(ccr_init_messages.get_name_leafdata());
    if (ccr_init_retry_messages.is_set || is_set(ccr_init_retry_messages.operation)) leaf_name_data.push_back(ccr_init_retry_messages.get_name_leafdata());
    if (ccr_init_timed_out_messages.is_set || is_set(ccr_init_timed_out_messages.operation)) leaf_name_data.push_back(ccr_init_timed_out_messages.get_name_leafdata());
    if (ccr_update_failed_messages.is_set || is_set(ccr_update_failed_messages.operation)) leaf_name_data.push_back(ccr_update_failed_messages.get_name_leafdata());
    if (ccr_update_messages.is_set || is_set(ccr_update_messages.operation)) leaf_name_data.push_back(ccr_update_messages.get_name_leafdata());
    if (ccr_update_retry_messages.is_set || is_set(ccr_update_retry_messages.operation)) leaf_name_data.push_back(ccr_update_retry_messages.get_name_leafdata());
    if (ccr_update_timed_out_messages.is_set || is_set(ccr_update_timed_out_messages.operation)) leaf_name_data.push_back(ccr_update_timed_out_messages.get_name_leafdata());
    if (close_sessions.is_set || is_set(close_sessions.operation)) leaf_name_data.push_back(close_sessions.get_name_leafdata());
    if (open_sessions.is_set || is_set(open_sessions.operation)) leaf_name_data.push_back(open_sessions.get_name_leafdata());
    if (raa_sent_error_messages.is_set || is_set(raa_sent_error_messages.operation)) leaf_name_data.push_back(raa_sent_error_messages.get_name_leafdata());
    if (raa_sent_messages.is_set || is_set(raa_sent_messages.operation)) leaf_name_data.push_back(raa_sent_messages.get_name_leafdata());
    if (rar_received_error_messages.is_set || is_set(rar_received_error_messages.operation)) leaf_name_data.push_back(rar_received_error_messages.get_name_leafdata());
    if (rar_received_messages.is_set || is_set(rar_received_messages.operation)) leaf_name_data.push_back(rar_received_messages.get_name_leafdata());
    if (restore_sessions.is_set || is_set(restore_sessions.operation)) leaf_name_data.push_back(restore_sessions.get_name_leafdata());
    if (session_termination_messages.is_set || is_set(session_termination_messages.operation)) leaf_name_data.push_back(session_termination_messages.get_name_leafdata());
    if (unknown_request_messages.is_set || is_set(unknown_request_messages.operation)) leaf_name_data.push_back(unknown_request_messages.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::GxStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::GxStatistics::get_children()
{
    return children;
}

void Aaa::Diameter::GxStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-sessions")
    {
        active_sessions = value;
    }
    if(value_path == "asa-sent-error-messages")
    {
        asa_sent_error_messages = value;
    }
    if(value_path == "asa-sent-messsages")
    {
        asa_sent_messsages = value;
    }
    if(value_path == "asr-received-error-messages")
    {
        asr_received_error_messages = value;
    }
    if(value_path == "asr-received-messages")
    {
        asr_received_messages = value;
    }
    if(value_path == "cca-final-error-messages")
    {
        cca_final_error_messages = value;
    }
    if(value_path == "cca-final-messages")
    {
        cca_final_messages = value;
    }
    if(value_path == "cca-init-error-messages")
    {
        cca_init_error_messages = value;
    }
    if(value_path == "cca-init-messages")
    {
        cca_init_messages = value;
    }
    if(value_path == "cca-update-error-messages")
    {
        cca_update_error_messages = value;
    }
    if(value_path == "cca-update-messages")
    {
        cca_update_messages = value;
    }
    if(value_path == "ccr-final-failed-messages")
    {
        ccr_final_failed_messages = value;
    }
    if(value_path == "ccr-final-messages")
    {
        ccr_final_messages = value;
    }
    if(value_path == "ccr-final-retry-messages")
    {
        ccr_final_retry_messages = value;
    }
    if(value_path == "ccr-final-timed-out-messages")
    {
        ccr_final_timed_out_messages = value;
    }
    if(value_path == "ccr-init-failed-messages")
    {
        ccr_init_failed_messages = value;
    }
    if(value_path == "ccr-init-messages")
    {
        ccr_init_messages = value;
    }
    if(value_path == "ccr-init-retry-messages")
    {
        ccr_init_retry_messages = value;
    }
    if(value_path == "ccr-init-timed-out-messages")
    {
        ccr_init_timed_out_messages = value;
    }
    if(value_path == "ccr-update-failed-messages")
    {
        ccr_update_failed_messages = value;
    }
    if(value_path == "ccr-update-messages")
    {
        ccr_update_messages = value;
    }
    if(value_path == "ccr-update-retry-messages")
    {
        ccr_update_retry_messages = value;
    }
    if(value_path == "ccr-update-timed-out-messages")
    {
        ccr_update_timed_out_messages = value;
    }
    if(value_path == "close-sessions")
    {
        close_sessions = value;
    }
    if(value_path == "open-sessions")
    {
        open_sessions = value;
    }
    if(value_path == "raa-sent-error-messages")
    {
        raa_sent_error_messages = value;
    }
    if(value_path == "raa-sent-messages")
    {
        raa_sent_messages = value;
    }
    if(value_path == "rar-received-error-messages")
    {
        rar_received_error_messages = value;
    }
    if(value_path == "rar-received-messages")
    {
        rar_received_messages = value;
    }
    if(value_path == "restore-sessions")
    {
        restore_sessions = value;
    }
    if(value_path == "session-termination-messages")
    {
        session_termination_messages = value;
    }
    if(value_path == "unknown-request-messages")
    {
        unknown_request_messages = value;
    }
}

Aaa::Diameter::Gx::Gx()
    :
    is_enabled{YType::boolean, "is-enabled"},
    retransmits{YType::uint32, "retransmits"},
    tx_timer{YType::uint32, "tx-timer"}
{
    yang_name = "gx"; yang_parent_name = "diameter";
}

Aaa::Diameter::Gx::~Gx()
{
}

bool Aaa::Diameter::Gx::has_data() const
{
    return is_enabled.is_set
	|| retransmits.is_set
	|| tx_timer.is_set;
}

bool Aaa::Diameter::Gx::has_operation() const
{
    return is_set(operation)
	|| is_set(is_enabled.operation)
	|| is_set(retransmits.operation)
	|| is_set(tx_timer.operation);
}

std::string Aaa::Diameter::Gx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gx";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::Gx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-diameter-oper:diameter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_enabled.is_set || is_set(is_enabled.operation)) leaf_name_data.push_back(is_enabled.get_name_leafdata());
    if (retransmits.is_set || is_set(retransmits.operation)) leaf_name_data.push_back(retransmits.get_name_leafdata());
    if (tx_timer.is_set || is_set(tx_timer.operation)) leaf_name_data.push_back(tx_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::Gx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::Gx::get_children()
{
    return children;
}

void Aaa::Diameter::Gx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-enabled")
    {
        is_enabled = value;
    }
    if(value_path == "retransmits")
    {
        retransmits = value;
    }
    if(value_path == "tx-timer")
    {
        tx_timer = value;
    }
}

Aaa::Diameter::Peers::Peers()
    :
    conn_retry_timer{YType::uint32, "conn-retry-timer"},
    origin_host{YType::str, "origin-host"},
    origin_realm{YType::str, "origin-realm"},
    source_interface{YType::str, "source-interface"},
    tls_trustpoint{YType::str, "tls-trustpoint"},
    trans_max{YType::uint32, "trans-max"},
    trans_total{YType::uint32, "trans-total"},
    transaction_timer{YType::uint32, "transaction-timer"},
    watchdog_timer{YType::uint32, "watchdog-timer"}
{
    yang_name = "peers"; yang_parent_name = "diameter";
}

Aaa::Diameter::Peers::~Peers()
{
}

bool Aaa::Diameter::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return conn_retry_timer.is_set
	|| origin_host.is_set
	|| origin_realm.is_set
	|| source_interface.is_set
	|| tls_trustpoint.is_set
	|| trans_max.is_set
	|| trans_total.is_set
	|| transaction_timer.is_set
	|| watchdog_timer.is_set;
}

bool Aaa::Diameter::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(conn_retry_timer.operation)
	|| is_set(origin_host.operation)
	|| is_set(origin_realm.operation)
	|| is_set(source_interface.operation)
	|| is_set(tls_trustpoint.operation)
	|| is_set(trans_max.operation)
	|| is_set(trans_total.operation)
	|| is_set(transaction_timer.operation)
	|| is_set(watchdog_timer.operation);
}

std::string Aaa::Diameter::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-diameter-oper:diameter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conn_retry_timer.is_set || is_set(conn_retry_timer.operation)) leaf_name_data.push_back(conn_retry_timer.get_name_leafdata());
    if (origin_host.is_set || is_set(origin_host.operation)) leaf_name_data.push_back(origin_host.get_name_leafdata());
    if (origin_realm.is_set || is_set(origin_realm.operation)) leaf_name_data.push_back(origin_realm.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (tls_trustpoint.is_set || is_set(tls_trustpoint.operation)) leaf_name_data.push_back(tls_trustpoint.get_name_leafdata());
    if (trans_max.is_set || is_set(trans_max.operation)) leaf_name_data.push_back(trans_max.get_name_leafdata());
    if (trans_total.is_set || is_set(trans_total.operation)) leaf_name_data.push_back(trans_total.get_name_leafdata());
    if (transaction_timer.is_set || is_set(transaction_timer.operation)) leaf_name_data.push_back(transaction_timer.get_name_leafdata());
    if (watchdog_timer.is_set || is_set(watchdog_timer.operation)) leaf_name_data.push_back(watchdog_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Diameter::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Diameter::Peers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conn-retry-timer")
    {
        conn_retry_timer = value;
    }
    if(value_path == "origin-host")
    {
        origin_host = value;
    }
    if(value_path == "origin-realm")
    {
        origin_realm = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
    if(value_path == "tls-trustpoint")
    {
        tls_trustpoint = value;
    }
    if(value_path == "trans-max")
    {
        trans_max = value;
    }
    if(value_path == "trans-total")
    {
        trans_total = value;
    }
    if(value_path == "transaction-timer")
    {
        transaction_timer = value;
    }
    if(value_path == "watchdog-timer")
    {
        watchdog_timer = value;
    }
}

Aaa::Diameter::Peers::Peer::Peer()
    :
    address{YType::str, "address"},
    conn_retry_timer{YType::uint32, "conn-retry-timer"},
    destination_host{YType::str, "destination-host"},
    destination_realm{YType::str, "destination-realm"},
    firmware_revision{YType::uint32, "firmware-revision"},
    in_aa_as{YType::uint32, "in-aa-as"},
    in_ac_as{YType::uint32, "in-ac-as"},
    in_ac_rs{YType::uint32, "in-ac-rs"},
    in_as_as{YType::uint32, "in-as-as"},
    in_as_rs{YType::uint32, "in-as-rs"},
    in_cc_as{YType::uint32, "in-cc-as"},
    in_cc_rs{YType::uint32, "in-cc-rs"},
    in_ce_as{YType::uint32, "in-ce-as"},
    in_ce_rs{YType::uint32, "in-ce-rs"},
    in_dp_as{YType::uint32, "in-dp-as"},
    in_dp_rs{YType::uint32, "in-dp-rs"},
    in_dw_as{YType::uint32, "in-dw-as"},
    in_dw_rs{YType::uint32, "in-dw-rs"},
    in_ra_as{YType::uint32, "in-ra-as"},
    in_ra_rs{YType::uint32, "in-ra-rs"},
    in_st_as{YType::uint32, "in-st-as"},
    in_st_rs{YType::uint32, "in-st-rs"},
    last_disconnect_cause{YType::enumeration, "last-disconnect-cause"},
    malformed_requests{YType::uint32, "malformed-requests"},
    out_aa_rs{YType::uint32, "out-aa-rs"},
    out_ac_as{YType::uint32, "out-ac-as"},
    out_ac_rs{YType::uint32, "out-ac-rs"},
    out_as_as{YType::uint32, "out-as-as"},
    out_as_rs{YType::uint32, "out-as-rs"},
    out_cc_as{YType::uint32, "out-cc-as"},
    out_cc_rs{YType::uint32, "out-cc-rs"},
    out_ce_as{YType::uint32, "out-ce-as"},
    out_ce_rs{YType::uint32, "out-ce-rs"},
    out_dp_as{YType::uint32, "out-dp-as"},
    out_dp_rs{YType::uint32, "out-dp-rs"},
    out_dw_as{YType::uint32, "out-dw-as"},
    out_dw_rs{YType::uint32, "out-dw-rs"},
    out_ra_as{YType::uint32, "out-ra-as"},
    out_ra_rs{YType::uint32, "out-ra-rs"},
    out_st_as{YType::uint32, "out-st-as"},
    out_st_rs{YType::uint32, "out-st-rs"},
    peer_index{YType::uint32, "peer-index"},
    peer_name{YType::str, "peer-name"},
    peer_type{YType::enumeration, "peer-type"},
    port{YType::uint32, "port"},
    port_connect{YType::uint32, "port-connect"},
    protocol_type{YType::enumeration, "protocol-type"},
    received_permanent_fails{YType::uint32, "received-permanent-fails"},
    received_proto_errors{YType::uint32, "received-proto-errors"},
    received_transient_fails{YType::uint32, "received-transient-fails"},
    security_type{YType::enumeration, "security-type"},
    sent_permanent_fails{YType::uint32, "sent-permanent-fails"},
    sent_proto_errors{YType::uint32, "sent-proto-errors"},
    sent_transient_fails{YType::uint32, "sent-transient-fails"},
    source_interface{YType::str, "source-interface"},
    state{YType::enumeration, "state"},
    state_duration{YType::uint32, "state-duration"},
    transaction_timer{YType::uint32, "transaction-timer"},
    transport_down{YType::uint32, "transport-down"},
    vrf_name{YType::str, "vrf-name"},
    watchdog_timer{YType::uint32, "watchdog-timer"},
    who_init_disconnect{YType::enumeration, "who-init-disconnect"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

Aaa::Diameter::Peers::Peer::~Peer()
{
}

bool Aaa::Diameter::Peers::Peer::has_data() const
{
    return address.is_set
	|| conn_retry_timer.is_set
	|| destination_host.is_set
	|| destination_realm.is_set
	|| firmware_revision.is_set
	|| in_aa_as.is_set
	|| in_ac_as.is_set
	|| in_ac_rs.is_set
	|| in_as_as.is_set
	|| in_as_rs.is_set
	|| in_cc_as.is_set
	|| in_cc_rs.is_set
	|| in_ce_as.is_set
	|| in_ce_rs.is_set
	|| in_dp_as.is_set
	|| in_dp_rs.is_set
	|| in_dw_as.is_set
	|| in_dw_rs.is_set
	|| in_ra_as.is_set
	|| in_ra_rs.is_set
	|| in_st_as.is_set
	|| in_st_rs.is_set
	|| last_disconnect_cause.is_set
	|| malformed_requests.is_set
	|| out_aa_rs.is_set
	|| out_ac_as.is_set
	|| out_ac_rs.is_set
	|| out_as_as.is_set
	|| out_as_rs.is_set
	|| out_cc_as.is_set
	|| out_cc_rs.is_set
	|| out_ce_as.is_set
	|| out_ce_rs.is_set
	|| out_dp_as.is_set
	|| out_dp_rs.is_set
	|| out_dw_as.is_set
	|| out_dw_rs.is_set
	|| out_ra_as.is_set
	|| out_ra_rs.is_set
	|| out_st_as.is_set
	|| out_st_rs.is_set
	|| peer_index.is_set
	|| peer_name.is_set
	|| peer_type.is_set
	|| port.is_set
	|| port_connect.is_set
	|| protocol_type.is_set
	|| received_permanent_fails.is_set
	|| received_proto_errors.is_set
	|| received_transient_fails.is_set
	|| security_type.is_set
	|| sent_permanent_fails.is_set
	|| sent_proto_errors.is_set
	|| sent_transient_fails.is_set
	|| source_interface.is_set
	|| state.is_set
	|| state_duration.is_set
	|| transaction_timer.is_set
	|| transport_down.is_set
	|| vrf_name.is_set
	|| watchdog_timer.is_set
	|| who_init_disconnect.is_set;
}

bool Aaa::Diameter::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(conn_retry_timer.operation)
	|| is_set(destination_host.operation)
	|| is_set(destination_realm.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(in_aa_as.operation)
	|| is_set(in_ac_as.operation)
	|| is_set(in_ac_rs.operation)
	|| is_set(in_as_as.operation)
	|| is_set(in_as_rs.operation)
	|| is_set(in_cc_as.operation)
	|| is_set(in_cc_rs.operation)
	|| is_set(in_ce_as.operation)
	|| is_set(in_ce_rs.operation)
	|| is_set(in_dp_as.operation)
	|| is_set(in_dp_rs.operation)
	|| is_set(in_dw_as.operation)
	|| is_set(in_dw_rs.operation)
	|| is_set(in_ra_as.operation)
	|| is_set(in_ra_rs.operation)
	|| is_set(in_st_as.operation)
	|| is_set(in_st_rs.operation)
	|| is_set(last_disconnect_cause.operation)
	|| is_set(malformed_requests.operation)
	|| is_set(out_aa_rs.operation)
	|| is_set(out_ac_as.operation)
	|| is_set(out_ac_rs.operation)
	|| is_set(out_as_as.operation)
	|| is_set(out_as_rs.operation)
	|| is_set(out_cc_as.operation)
	|| is_set(out_cc_rs.operation)
	|| is_set(out_ce_as.operation)
	|| is_set(out_ce_rs.operation)
	|| is_set(out_dp_as.operation)
	|| is_set(out_dp_rs.operation)
	|| is_set(out_dw_as.operation)
	|| is_set(out_dw_rs.operation)
	|| is_set(out_ra_as.operation)
	|| is_set(out_ra_rs.operation)
	|| is_set(out_st_as.operation)
	|| is_set(out_st_rs.operation)
	|| is_set(peer_index.operation)
	|| is_set(peer_name.operation)
	|| is_set(peer_type.operation)
	|| is_set(port.operation)
	|| is_set(port_connect.operation)
	|| is_set(protocol_type.operation)
	|| is_set(received_permanent_fails.operation)
	|| is_set(received_proto_errors.operation)
	|| is_set(received_transient_fails.operation)
	|| is_set(security_type.operation)
	|| is_set(sent_permanent_fails.operation)
	|| is_set(sent_proto_errors.operation)
	|| is_set(sent_transient_fails.operation)
	|| is_set(source_interface.operation)
	|| is_set(state.operation)
	|| is_set(state_duration.operation)
	|| is_set(transaction_timer.operation)
	|| is_set(transport_down.operation)
	|| is_set(vrf_name.operation)
	|| is_set(watchdog_timer.operation)
	|| is_set(who_init_disconnect.operation);
}

std::string Aaa::Diameter::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-diameter-oper:diameter/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (conn_retry_timer.is_set || is_set(conn_retry_timer.operation)) leaf_name_data.push_back(conn_retry_timer.get_name_leafdata());
    if (destination_host.is_set || is_set(destination_host.operation)) leaf_name_data.push_back(destination_host.get_name_leafdata());
    if (destination_realm.is_set || is_set(destination_realm.operation)) leaf_name_data.push_back(destination_realm.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (in_aa_as.is_set || is_set(in_aa_as.operation)) leaf_name_data.push_back(in_aa_as.get_name_leafdata());
    if (in_ac_as.is_set || is_set(in_ac_as.operation)) leaf_name_data.push_back(in_ac_as.get_name_leafdata());
    if (in_ac_rs.is_set || is_set(in_ac_rs.operation)) leaf_name_data.push_back(in_ac_rs.get_name_leafdata());
    if (in_as_as.is_set || is_set(in_as_as.operation)) leaf_name_data.push_back(in_as_as.get_name_leafdata());
    if (in_as_rs.is_set || is_set(in_as_rs.operation)) leaf_name_data.push_back(in_as_rs.get_name_leafdata());
    if (in_cc_as.is_set || is_set(in_cc_as.operation)) leaf_name_data.push_back(in_cc_as.get_name_leafdata());
    if (in_cc_rs.is_set || is_set(in_cc_rs.operation)) leaf_name_data.push_back(in_cc_rs.get_name_leafdata());
    if (in_ce_as.is_set || is_set(in_ce_as.operation)) leaf_name_data.push_back(in_ce_as.get_name_leafdata());
    if (in_ce_rs.is_set || is_set(in_ce_rs.operation)) leaf_name_data.push_back(in_ce_rs.get_name_leafdata());
    if (in_dp_as.is_set || is_set(in_dp_as.operation)) leaf_name_data.push_back(in_dp_as.get_name_leafdata());
    if (in_dp_rs.is_set || is_set(in_dp_rs.operation)) leaf_name_data.push_back(in_dp_rs.get_name_leafdata());
    if (in_dw_as.is_set || is_set(in_dw_as.operation)) leaf_name_data.push_back(in_dw_as.get_name_leafdata());
    if (in_dw_rs.is_set || is_set(in_dw_rs.operation)) leaf_name_data.push_back(in_dw_rs.get_name_leafdata());
    if (in_ra_as.is_set || is_set(in_ra_as.operation)) leaf_name_data.push_back(in_ra_as.get_name_leafdata());
    if (in_ra_rs.is_set || is_set(in_ra_rs.operation)) leaf_name_data.push_back(in_ra_rs.get_name_leafdata());
    if (in_st_as.is_set || is_set(in_st_as.operation)) leaf_name_data.push_back(in_st_as.get_name_leafdata());
    if (in_st_rs.is_set || is_set(in_st_rs.operation)) leaf_name_data.push_back(in_st_rs.get_name_leafdata());
    if (last_disconnect_cause.is_set || is_set(last_disconnect_cause.operation)) leaf_name_data.push_back(last_disconnect_cause.get_name_leafdata());
    if (malformed_requests.is_set || is_set(malformed_requests.operation)) leaf_name_data.push_back(malformed_requests.get_name_leafdata());
    if (out_aa_rs.is_set || is_set(out_aa_rs.operation)) leaf_name_data.push_back(out_aa_rs.get_name_leafdata());
    if (out_ac_as.is_set || is_set(out_ac_as.operation)) leaf_name_data.push_back(out_ac_as.get_name_leafdata());
    if (out_ac_rs.is_set || is_set(out_ac_rs.operation)) leaf_name_data.push_back(out_ac_rs.get_name_leafdata());
    if (out_as_as.is_set || is_set(out_as_as.operation)) leaf_name_data.push_back(out_as_as.get_name_leafdata());
    if (out_as_rs.is_set || is_set(out_as_rs.operation)) leaf_name_data.push_back(out_as_rs.get_name_leafdata());
    if (out_cc_as.is_set || is_set(out_cc_as.operation)) leaf_name_data.push_back(out_cc_as.get_name_leafdata());
    if (out_cc_rs.is_set || is_set(out_cc_rs.operation)) leaf_name_data.push_back(out_cc_rs.get_name_leafdata());
    if (out_ce_as.is_set || is_set(out_ce_as.operation)) leaf_name_data.push_back(out_ce_as.get_name_leafdata());
    if (out_ce_rs.is_set || is_set(out_ce_rs.operation)) leaf_name_data.push_back(out_ce_rs.get_name_leafdata());
    if (out_dp_as.is_set || is_set(out_dp_as.operation)) leaf_name_data.push_back(out_dp_as.get_name_leafdata());
    if (out_dp_rs.is_set || is_set(out_dp_rs.operation)) leaf_name_data.push_back(out_dp_rs.get_name_leafdata());
    if (out_dw_as.is_set || is_set(out_dw_as.operation)) leaf_name_data.push_back(out_dw_as.get_name_leafdata());
    if (out_dw_rs.is_set || is_set(out_dw_rs.operation)) leaf_name_data.push_back(out_dw_rs.get_name_leafdata());
    if (out_ra_as.is_set || is_set(out_ra_as.operation)) leaf_name_data.push_back(out_ra_as.get_name_leafdata());
    if (out_ra_rs.is_set || is_set(out_ra_rs.operation)) leaf_name_data.push_back(out_ra_rs.get_name_leafdata());
    if (out_st_as.is_set || is_set(out_st_as.operation)) leaf_name_data.push_back(out_st_as.get_name_leafdata());
    if (out_st_rs.is_set || is_set(out_st_rs.operation)) leaf_name_data.push_back(out_st_rs.get_name_leafdata());
    if (peer_index.is_set || is_set(peer_index.operation)) leaf_name_data.push_back(peer_index.get_name_leafdata());
    if (peer_name.is_set || is_set(peer_name.operation)) leaf_name_data.push_back(peer_name.get_name_leafdata());
    if (peer_type.is_set || is_set(peer_type.operation)) leaf_name_data.push_back(peer_type.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (port_connect.is_set || is_set(port_connect.operation)) leaf_name_data.push_back(port_connect.get_name_leafdata());
    if (protocol_type.is_set || is_set(protocol_type.operation)) leaf_name_data.push_back(protocol_type.get_name_leafdata());
    if (received_permanent_fails.is_set || is_set(received_permanent_fails.operation)) leaf_name_data.push_back(received_permanent_fails.get_name_leafdata());
    if (received_proto_errors.is_set || is_set(received_proto_errors.operation)) leaf_name_data.push_back(received_proto_errors.get_name_leafdata());
    if (received_transient_fails.is_set || is_set(received_transient_fails.operation)) leaf_name_data.push_back(received_transient_fails.get_name_leafdata());
    if (security_type.is_set || is_set(security_type.operation)) leaf_name_data.push_back(security_type.get_name_leafdata());
    if (sent_permanent_fails.is_set || is_set(sent_permanent_fails.operation)) leaf_name_data.push_back(sent_permanent_fails.get_name_leafdata());
    if (sent_proto_errors.is_set || is_set(sent_proto_errors.operation)) leaf_name_data.push_back(sent_proto_errors.get_name_leafdata());
    if (sent_transient_fails.is_set || is_set(sent_transient_fails.operation)) leaf_name_data.push_back(sent_transient_fails.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_duration.is_set || is_set(state_duration.operation)) leaf_name_data.push_back(state_duration.get_name_leafdata());
    if (transaction_timer.is_set || is_set(transaction_timer.operation)) leaf_name_data.push_back(transaction_timer.get_name_leafdata());
    if (transport_down.is_set || is_set(transport_down.operation)) leaf_name_data.push_back(transport_down.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (watchdog_timer.is_set || is_set(watchdog_timer.operation)) leaf_name_data.push_back(watchdog_timer.get_name_leafdata());
    if (who_init_disconnect.is_set || is_set(who_init_disconnect.operation)) leaf_name_data.push_back(who_init_disconnect.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::Peers::Peer::get_children()
{
    return children;
}

void Aaa::Diameter::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "conn-retry-timer")
    {
        conn_retry_timer = value;
    }
    if(value_path == "destination-host")
    {
        destination_host = value;
    }
    if(value_path == "destination-realm")
    {
        destination_realm = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "in-aa-as")
    {
        in_aa_as = value;
    }
    if(value_path == "in-ac-as")
    {
        in_ac_as = value;
    }
    if(value_path == "in-ac-rs")
    {
        in_ac_rs = value;
    }
    if(value_path == "in-as-as")
    {
        in_as_as = value;
    }
    if(value_path == "in-as-rs")
    {
        in_as_rs = value;
    }
    if(value_path == "in-cc-as")
    {
        in_cc_as = value;
    }
    if(value_path == "in-cc-rs")
    {
        in_cc_rs = value;
    }
    if(value_path == "in-ce-as")
    {
        in_ce_as = value;
    }
    if(value_path == "in-ce-rs")
    {
        in_ce_rs = value;
    }
    if(value_path == "in-dp-as")
    {
        in_dp_as = value;
    }
    if(value_path == "in-dp-rs")
    {
        in_dp_rs = value;
    }
    if(value_path == "in-dw-as")
    {
        in_dw_as = value;
    }
    if(value_path == "in-dw-rs")
    {
        in_dw_rs = value;
    }
    if(value_path == "in-ra-as")
    {
        in_ra_as = value;
    }
    if(value_path == "in-ra-rs")
    {
        in_ra_rs = value;
    }
    if(value_path == "in-st-as")
    {
        in_st_as = value;
    }
    if(value_path == "in-st-rs")
    {
        in_st_rs = value;
    }
    if(value_path == "last-disconnect-cause")
    {
        last_disconnect_cause = value;
    }
    if(value_path == "malformed-requests")
    {
        malformed_requests = value;
    }
    if(value_path == "out-aa-rs")
    {
        out_aa_rs = value;
    }
    if(value_path == "out-ac-as")
    {
        out_ac_as = value;
    }
    if(value_path == "out-ac-rs")
    {
        out_ac_rs = value;
    }
    if(value_path == "out-as-as")
    {
        out_as_as = value;
    }
    if(value_path == "out-as-rs")
    {
        out_as_rs = value;
    }
    if(value_path == "out-cc-as")
    {
        out_cc_as = value;
    }
    if(value_path == "out-cc-rs")
    {
        out_cc_rs = value;
    }
    if(value_path == "out-ce-as")
    {
        out_ce_as = value;
    }
    if(value_path == "out-ce-rs")
    {
        out_ce_rs = value;
    }
    if(value_path == "out-dp-as")
    {
        out_dp_as = value;
    }
    if(value_path == "out-dp-rs")
    {
        out_dp_rs = value;
    }
    if(value_path == "out-dw-as")
    {
        out_dw_as = value;
    }
    if(value_path == "out-dw-rs")
    {
        out_dw_rs = value;
    }
    if(value_path == "out-ra-as")
    {
        out_ra_as = value;
    }
    if(value_path == "out-ra-rs")
    {
        out_ra_rs = value;
    }
    if(value_path == "out-st-as")
    {
        out_st_as = value;
    }
    if(value_path == "out-st-rs")
    {
        out_st_rs = value;
    }
    if(value_path == "peer-index")
    {
        peer_index = value;
    }
    if(value_path == "peer-name")
    {
        peer_name = value;
    }
    if(value_path == "peer-type")
    {
        peer_type = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "port-connect")
    {
        port_connect = value;
    }
    if(value_path == "protocol-type")
    {
        protocol_type = value;
    }
    if(value_path == "received-permanent-fails")
    {
        received_permanent_fails = value;
    }
    if(value_path == "received-proto-errors")
    {
        received_proto_errors = value;
    }
    if(value_path == "received-transient-fails")
    {
        received_transient_fails = value;
    }
    if(value_path == "security-type")
    {
        security_type = value;
    }
    if(value_path == "sent-permanent-fails")
    {
        sent_permanent_fails = value;
    }
    if(value_path == "sent-proto-errors")
    {
        sent_proto_errors = value;
    }
    if(value_path == "sent-transient-fails")
    {
        sent_transient_fails = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "state-duration")
    {
        state_duration = value;
    }
    if(value_path == "transaction-timer")
    {
        transaction_timer = value;
    }
    if(value_path == "transport-down")
    {
        transport_down = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "watchdog-timer")
    {
        watchdog_timer = value;
    }
    if(value_path == "who-init-disconnect")
    {
        who_init_disconnect = value;
    }
}

Aaa::Diameter::Nas::Nas()
    :
    aaanas_id{YType::str, "aaanas-id"}
{
    yang_name = "nas"; yang_parent_name = "diameter";
}

Aaa::Diameter::Nas::~Nas()
{
}

bool Aaa::Diameter::Nas::has_data() const
{
    for (std::size_t index=0; index<list_of_nas.size(); index++)
    {
        if(list_of_nas[index]->has_data())
            return true;
    }
    return aaanas_id.is_set;
}

bool Aaa::Diameter::Nas::has_operation() const
{
    for (std::size_t index=0; index<list_of_nas.size(); index++)
    {
        if(list_of_nas[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(aaanas_id.operation);
}

std::string Aaa::Diameter::Nas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nas";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::Nas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-diameter-oper:diameter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaanas_id.is_set || is_set(aaanas_id.operation)) leaf_name_data.push_back(aaanas_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::Nas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "list-of-nas")
    {
        for(auto const & c : list_of_nas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Diameter::Nas::ListOfNas>();
        c->parent = this;
        list_of_nas.push_back(std::move(c));
        children[segment_path] = list_of_nas.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::Nas::get_children()
{
    for (auto const & c : list_of_nas)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Diameter::Nas::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaanas-id")
    {
        aaanas_id = value;
    }
}

Aaa::Diameter::Nas::ListOfNas::ListOfNas()
    :
    aaa_session_id{YType::str, "aaa-session-id"},
    accounting_intrim_in_packets{YType::uint32, "accounting-intrim-in-packets"},
    accounting_intrim_out_packets{YType::uint32, "accounting-intrim-out-packets"},
    accounting_status{YType::uint32, "accounting-status"},
    accounting_status_stop{YType::uint32, "accounting-status-stop"},
    authentication_status{YType::uint32, "authentication-status"},
    authorization_status{YType::uint32, "authorization-status"},
    diameter_session_id{YType::str, "diameter-session-id"},
    disconnect_status{YType::uint32, "disconnect-status"},
    method_list{YType::str, "method-list"},
    server_used_list{YType::str, "server-used-list"}
{
    yang_name = "list-of-nas"; yang_parent_name = "nas";
}

Aaa::Diameter::Nas::ListOfNas::~ListOfNas()
{
}

bool Aaa::Diameter::Nas::ListOfNas::has_data() const
{
    return aaa_session_id.is_set
	|| accounting_intrim_in_packets.is_set
	|| accounting_intrim_out_packets.is_set
	|| accounting_status.is_set
	|| accounting_status_stop.is_set
	|| authentication_status.is_set
	|| authorization_status.is_set
	|| diameter_session_id.is_set
	|| disconnect_status.is_set
	|| method_list.is_set
	|| server_used_list.is_set;
}

bool Aaa::Diameter::Nas::ListOfNas::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_session_id.operation)
	|| is_set(accounting_intrim_in_packets.operation)
	|| is_set(accounting_intrim_out_packets.operation)
	|| is_set(accounting_status.operation)
	|| is_set(accounting_status_stop.operation)
	|| is_set(authentication_status.operation)
	|| is_set(authorization_status.operation)
	|| is_set(diameter_session_id.operation)
	|| is_set(disconnect_status.operation)
	|| is_set(method_list.operation)
	|| is_set(server_used_list.operation);
}

std::string Aaa::Diameter::Nas::ListOfNas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list-of-nas";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::Nas::ListOfNas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-diameter-oper:diameter/nas/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_session_id.is_set || is_set(aaa_session_id.operation)) leaf_name_data.push_back(aaa_session_id.get_name_leafdata());
    if (accounting_intrim_in_packets.is_set || is_set(accounting_intrim_in_packets.operation)) leaf_name_data.push_back(accounting_intrim_in_packets.get_name_leafdata());
    if (accounting_intrim_out_packets.is_set || is_set(accounting_intrim_out_packets.operation)) leaf_name_data.push_back(accounting_intrim_out_packets.get_name_leafdata());
    if (accounting_status.is_set || is_set(accounting_status.operation)) leaf_name_data.push_back(accounting_status.get_name_leafdata());
    if (accounting_status_stop.is_set || is_set(accounting_status_stop.operation)) leaf_name_data.push_back(accounting_status_stop.get_name_leafdata());
    if (authentication_status.is_set || is_set(authentication_status.operation)) leaf_name_data.push_back(authentication_status.get_name_leafdata());
    if (authorization_status.is_set || is_set(authorization_status.operation)) leaf_name_data.push_back(authorization_status.get_name_leafdata());
    if (diameter_session_id.is_set || is_set(diameter_session_id.operation)) leaf_name_data.push_back(diameter_session_id.get_name_leafdata());
    if (disconnect_status.is_set || is_set(disconnect_status.operation)) leaf_name_data.push_back(disconnect_status.get_name_leafdata());
    if (method_list.is_set || is_set(method_list.operation)) leaf_name_data.push_back(method_list.get_name_leafdata());
    if (server_used_list.is_set || is_set(server_used_list.operation)) leaf_name_data.push_back(server_used_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::Nas::ListOfNas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::Nas::ListOfNas::get_children()
{
    return children;
}

void Aaa::Diameter::Nas::ListOfNas::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-session-id")
    {
        aaa_session_id = value;
    }
    if(value_path == "accounting-intrim-in-packets")
    {
        accounting_intrim_in_packets = value;
    }
    if(value_path == "accounting-intrim-out-packets")
    {
        accounting_intrim_out_packets = value;
    }
    if(value_path == "accounting-status")
    {
        accounting_status = value;
    }
    if(value_path == "accounting-status-stop")
    {
        accounting_status_stop = value;
    }
    if(value_path == "authentication-status")
    {
        authentication_status = value;
    }
    if(value_path == "authorization-status")
    {
        authorization_status = value;
    }
    if(value_path == "diameter-session-id")
    {
        diameter_session_id = value;
    }
    if(value_path == "disconnect-status")
    {
        disconnect_status = value;
    }
    if(value_path == "method-list")
    {
        method_list = value;
    }
    if(value_path == "server-used-list")
    {
        server_used_list = value;
    }
}

Aaa::Diameter::NasSummary::NasSummary()
    :
    accounting_interim_failed_packets{YType::uint32, "accounting-interim-failed-packets"},
    accounting_interim_request_in_packets{YType::uint32, "accounting-interim-request-in-packets"},
    accounting_interim_request_out_packets{YType::uint32, "accounting-interim-request-out-packets"},
    accounting_interim_response_out_packets{YType::uint32, "accounting-interim-response-out-packets"},
    accounting_interim_success_packets{YType::uint32, "accounting-interim-success-packets"},
    accounting_intrim_response_in_packets{YType::uint32, "accounting-intrim-response-in-packets"},
    accounting_request_out_packets{YType::uint32, "accounting-request-out-packets"},
    accounting_response_in_packets{YType::uint32, "accounting-response-in-packets"},
    accounting_start_failed_packets{YType::uint32, "accounting-start-failed-packets"},
    accounting_start_request_packets{YType::uint32, "accounting-start-request-packets"},
    accounting_start_response_packets{YType::uint32, "accounting-start-response-packets"},
    accounting_start_success_packets{YType::uint32, "accounting-start-success-packets"},
    accounting_stop_failed_packets{YType::uint32, "accounting-stop-failed-packets"},
    accounting_stop_request_in_packets{YType::uint32, "accounting-stop-request-in-packets"},
    accounting_stop_request_out_packets{YType::uint32, "accounting-stop-request-out-packets"},
    accounting_stop_response_in_packets{YType::uint32, "accounting-stop-response-in-packets"},
    accounting_stop_response_out_packets{YType::uint32, "accounting-stop-response-out-packets"},
    accounting_stop_success_response_packets{YType::uint32, "accounting-stop-success-response-packets"},
    authen_request_in_packets{YType::uint32, "authen-request-in-packets"},
    authen_request_out_packets{YType::uint32, "authen-request-out-packets"},
    authen_response_fail_packets{YType::uint32, "authen-response-fail-packets"},
    authen_response_in_packets{YType::uint32, "authen-response-in-packets"},
    authen_response_out_packets{YType::uint32, "authen-response-out-packets"},
    authen_success_packets{YType::uint32, "authen-success-packets"},
    authorization_in_packets{YType::uint32, "authorization-in-packets"},
    authorization_out_packets{YType::uint32, "authorization-out-packets"},
    authorization_request_in_packets{YType::uint32, "authorization-request-in-packets"},
    authorization_response_fail_packets{YType::uint32, "authorization-response-fail-packets"},
    authorization_response_out_packets{YType::uint32, "authorization-response-out-packets"},
    authorization_response_success_packets{YType::uint32, "authorization-response-success-packets"},
    coa_failed_packets{YType::uint32, "coa-failed-packets"},
    coa_request_in_packets{YType::uint32, "coa-request-in-packets"},
    coa_request_packets{YType::uint32, "coa-request-packets"},
    coa_response_out_packets{YType::uint32, "coa-response-out-packets"},
    coa_response_packets{YType::uint32, "coa-response-packets"},
    coa_success_packets{YType::uint32, "coa-success-packets"},
    disconnect_failed_response_packets{YType::uint32, "disconnect-failed-response-packets"},
    disconnect_request_in_packets{YType::uint32, "disconnect-request-in-packets"},
    disconnect_request_out_packets{YType::uint32, "disconnect-request-out-packets"},
    disconnect_response_in_packets{YType::uint32, "disconnect-response-in-packets"},
    disconnect_response_out_packets{YType::uint32, "disconnect-response-out-packets"},
    disconnect_success_response_packets{YType::uint32, "disconnect-success-response-packets"},
    pod_failed_packets{YType::uint32, "pod-failed-packets"},
    pod_in_packets{YType::uint32, "pod-in-packets"},
    pod_out_packets{YType::uint32, "pod-out-packets"},
    pod_request_in_packets{YType::uint32, "pod-request-in-packets"},
    pod_response_out_packets{YType::uint32, "pod-response-out-packets"},
    pod_success_packets{YType::uint32, "pod-success-packets"}
{
    yang_name = "nas-summary"; yang_parent_name = "diameter";
}

Aaa::Diameter::NasSummary::~NasSummary()
{
}

bool Aaa::Diameter::NasSummary::has_data() const
{
    return accounting_interim_failed_packets.is_set
	|| accounting_interim_request_in_packets.is_set
	|| accounting_interim_request_out_packets.is_set
	|| accounting_interim_response_out_packets.is_set
	|| accounting_interim_success_packets.is_set
	|| accounting_intrim_response_in_packets.is_set
	|| accounting_request_out_packets.is_set
	|| accounting_response_in_packets.is_set
	|| accounting_start_failed_packets.is_set
	|| accounting_start_request_packets.is_set
	|| accounting_start_response_packets.is_set
	|| accounting_start_success_packets.is_set
	|| accounting_stop_failed_packets.is_set
	|| accounting_stop_request_in_packets.is_set
	|| accounting_stop_request_out_packets.is_set
	|| accounting_stop_response_in_packets.is_set
	|| accounting_stop_response_out_packets.is_set
	|| accounting_stop_success_response_packets.is_set
	|| authen_request_in_packets.is_set
	|| authen_request_out_packets.is_set
	|| authen_response_fail_packets.is_set
	|| authen_response_in_packets.is_set
	|| authen_response_out_packets.is_set
	|| authen_success_packets.is_set
	|| authorization_in_packets.is_set
	|| authorization_out_packets.is_set
	|| authorization_request_in_packets.is_set
	|| authorization_response_fail_packets.is_set
	|| authorization_response_out_packets.is_set
	|| authorization_response_success_packets.is_set
	|| coa_failed_packets.is_set
	|| coa_request_in_packets.is_set
	|| coa_request_packets.is_set
	|| coa_response_out_packets.is_set
	|| coa_response_packets.is_set
	|| coa_success_packets.is_set
	|| disconnect_failed_response_packets.is_set
	|| disconnect_request_in_packets.is_set
	|| disconnect_request_out_packets.is_set
	|| disconnect_response_in_packets.is_set
	|| disconnect_response_out_packets.is_set
	|| disconnect_success_response_packets.is_set
	|| pod_failed_packets.is_set
	|| pod_in_packets.is_set
	|| pod_out_packets.is_set
	|| pod_request_in_packets.is_set
	|| pod_response_out_packets.is_set
	|| pod_success_packets.is_set;
}

bool Aaa::Diameter::NasSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(accounting_interim_failed_packets.operation)
	|| is_set(accounting_interim_request_in_packets.operation)
	|| is_set(accounting_interim_request_out_packets.operation)
	|| is_set(accounting_interim_response_out_packets.operation)
	|| is_set(accounting_interim_success_packets.operation)
	|| is_set(accounting_intrim_response_in_packets.operation)
	|| is_set(accounting_request_out_packets.operation)
	|| is_set(accounting_response_in_packets.operation)
	|| is_set(accounting_start_failed_packets.operation)
	|| is_set(accounting_start_request_packets.operation)
	|| is_set(accounting_start_response_packets.operation)
	|| is_set(accounting_start_success_packets.operation)
	|| is_set(accounting_stop_failed_packets.operation)
	|| is_set(accounting_stop_request_in_packets.operation)
	|| is_set(accounting_stop_request_out_packets.operation)
	|| is_set(accounting_stop_response_in_packets.operation)
	|| is_set(accounting_stop_response_out_packets.operation)
	|| is_set(accounting_stop_success_response_packets.operation)
	|| is_set(authen_request_in_packets.operation)
	|| is_set(authen_request_out_packets.operation)
	|| is_set(authen_response_fail_packets.operation)
	|| is_set(authen_response_in_packets.operation)
	|| is_set(authen_response_out_packets.operation)
	|| is_set(authen_success_packets.operation)
	|| is_set(authorization_in_packets.operation)
	|| is_set(authorization_out_packets.operation)
	|| is_set(authorization_request_in_packets.operation)
	|| is_set(authorization_response_fail_packets.operation)
	|| is_set(authorization_response_out_packets.operation)
	|| is_set(authorization_response_success_packets.operation)
	|| is_set(coa_failed_packets.operation)
	|| is_set(coa_request_in_packets.operation)
	|| is_set(coa_request_packets.operation)
	|| is_set(coa_response_out_packets.operation)
	|| is_set(coa_response_packets.operation)
	|| is_set(coa_success_packets.operation)
	|| is_set(disconnect_failed_response_packets.operation)
	|| is_set(disconnect_request_in_packets.operation)
	|| is_set(disconnect_request_out_packets.operation)
	|| is_set(disconnect_response_in_packets.operation)
	|| is_set(disconnect_response_out_packets.operation)
	|| is_set(disconnect_success_response_packets.operation)
	|| is_set(pod_failed_packets.operation)
	|| is_set(pod_in_packets.operation)
	|| is_set(pod_out_packets.operation)
	|| is_set(pod_request_in_packets.operation)
	|| is_set(pod_response_out_packets.operation)
	|| is_set(pod_success_packets.operation);
}

std::string Aaa::Diameter::NasSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nas-summary";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::NasSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-diameter-oper:diameter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting_interim_failed_packets.is_set || is_set(accounting_interim_failed_packets.operation)) leaf_name_data.push_back(accounting_interim_failed_packets.get_name_leafdata());
    if (accounting_interim_request_in_packets.is_set || is_set(accounting_interim_request_in_packets.operation)) leaf_name_data.push_back(accounting_interim_request_in_packets.get_name_leafdata());
    if (accounting_interim_request_out_packets.is_set || is_set(accounting_interim_request_out_packets.operation)) leaf_name_data.push_back(accounting_interim_request_out_packets.get_name_leafdata());
    if (accounting_interim_response_out_packets.is_set || is_set(accounting_interim_response_out_packets.operation)) leaf_name_data.push_back(accounting_interim_response_out_packets.get_name_leafdata());
    if (accounting_interim_success_packets.is_set || is_set(accounting_interim_success_packets.operation)) leaf_name_data.push_back(accounting_interim_success_packets.get_name_leafdata());
    if (accounting_intrim_response_in_packets.is_set || is_set(accounting_intrim_response_in_packets.operation)) leaf_name_data.push_back(accounting_intrim_response_in_packets.get_name_leafdata());
    if (accounting_request_out_packets.is_set || is_set(accounting_request_out_packets.operation)) leaf_name_data.push_back(accounting_request_out_packets.get_name_leafdata());
    if (accounting_response_in_packets.is_set || is_set(accounting_response_in_packets.operation)) leaf_name_data.push_back(accounting_response_in_packets.get_name_leafdata());
    if (accounting_start_failed_packets.is_set || is_set(accounting_start_failed_packets.operation)) leaf_name_data.push_back(accounting_start_failed_packets.get_name_leafdata());
    if (accounting_start_request_packets.is_set || is_set(accounting_start_request_packets.operation)) leaf_name_data.push_back(accounting_start_request_packets.get_name_leafdata());
    if (accounting_start_response_packets.is_set || is_set(accounting_start_response_packets.operation)) leaf_name_data.push_back(accounting_start_response_packets.get_name_leafdata());
    if (accounting_start_success_packets.is_set || is_set(accounting_start_success_packets.operation)) leaf_name_data.push_back(accounting_start_success_packets.get_name_leafdata());
    if (accounting_stop_failed_packets.is_set || is_set(accounting_stop_failed_packets.operation)) leaf_name_data.push_back(accounting_stop_failed_packets.get_name_leafdata());
    if (accounting_stop_request_in_packets.is_set || is_set(accounting_stop_request_in_packets.operation)) leaf_name_data.push_back(accounting_stop_request_in_packets.get_name_leafdata());
    if (accounting_stop_request_out_packets.is_set || is_set(accounting_stop_request_out_packets.operation)) leaf_name_data.push_back(accounting_stop_request_out_packets.get_name_leafdata());
    if (accounting_stop_response_in_packets.is_set || is_set(accounting_stop_response_in_packets.operation)) leaf_name_data.push_back(accounting_stop_response_in_packets.get_name_leafdata());
    if (accounting_stop_response_out_packets.is_set || is_set(accounting_stop_response_out_packets.operation)) leaf_name_data.push_back(accounting_stop_response_out_packets.get_name_leafdata());
    if (accounting_stop_success_response_packets.is_set || is_set(accounting_stop_success_response_packets.operation)) leaf_name_data.push_back(accounting_stop_success_response_packets.get_name_leafdata());
    if (authen_request_in_packets.is_set || is_set(authen_request_in_packets.operation)) leaf_name_data.push_back(authen_request_in_packets.get_name_leafdata());
    if (authen_request_out_packets.is_set || is_set(authen_request_out_packets.operation)) leaf_name_data.push_back(authen_request_out_packets.get_name_leafdata());
    if (authen_response_fail_packets.is_set || is_set(authen_response_fail_packets.operation)) leaf_name_data.push_back(authen_response_fail_packets.get_name_leafdata());
    if (authen_response_in_packets.is_set || is_set(authen_response_in_packets.operation)) leaf_name_data.push_back(authen_response_in_packets.get_name_leafdata());
    if (authen_response_out_packets.is_set || is_set(authen_response_out_packets.operation)) leaf_name_data.push_back(authen_response_out_packets.get_name_leafdata());
    if (authen_success_packets.is_set || is_set(authen_success_packets.operation)) leaf_name_data.push_back(authen_success_packets.get_name_leafdata());
    if (authorization_in_packets.is_set || is_set(authorization_in_packets.operation)) leaf_name_data.push_back(authorization_in_packets.get_name_leafdata());
    if (authorization_out_packets.is_set || is_set(authorization_out_packets.operation)) leaf_name_data.push_back(authorization_out_packets.get_name_leafdata());
    if (authorization_request_in_packets.is_set || is_set(authorization_request_in_packets.operation)) leaf_name_data.push_back(authorization_request_in_packets.get_name_leafdata());
    if (authorization_response_fail_packets.is_set || is_set(authorization_response_fail_packets.operation)) leaf_name_data.push_back(authorization_response_fail_packets.get_name_leafdata());
    if (authorization_response_out_packets.is_set || is_set(authorization_response_out_packets.operation)) leaf_name_data.push_back(authorization_response_out_packets.get_name_leafdata());
    if (authorization_response_success_packets.is_set || is_set(authorization_response_success_packets.operation)) leaf_name_data.push_back(authorization_response_success_packets.get_name_leafdata());
    if (coa_failed_packets.is_set || is_set(coa_failed_packets.operation)) leaf_name_data.push_back(coa_failed_packets.get_name_leafdata());
    if (coa_request_in_packets.is_set || is_set(coa_request_in_packets.operation)) leaf_name_data.push_back(coa_request_in_packets.get_name_leafdata());
    if (coa_request_packets.is_set || is_set(coa_request_packets.operation)) leaf_name_data.push_back(coa_request_packets.get_name_leafdata());
    if (coa_response_out_packets.is_set || is_set(coa_response_out_packets.operation)) leaf_name_data.push_back(coa_response_out_packets.get_name_leafdata());
    if (coa_response_packets.is_set || is_set(coa_response_packets.operation)) leaf_name_data.push_back(coa_response_packets.get_name_leafdata());
    if (coa_success_packets.is_set || is_set(coa_success_packets.operation)) leaf_name_data.push_back(coa_success_packets.get_name_leafdata());
    if (disconnect_failed_response_packets.is_set || is_set(disconnect_failed_response_packets.operation)) leaf_name_data.push_back(disconnect_failed_response_packets.get_name_leafdata());
    if (disconnect_request_in_packets.is_set || is_set(disconnect_request_in_packets.operation)) leaf_name_data.push_back(disconnect_request_in_packets.get_name_leafdata());
    if (disconnect_request_out_packets.is_set || is_set(disconnect_request_out_packets.operation)) leaf_name_data.push_back(disconnect_request_out_packets.get_name_leafdata());
    if (disconnect_response_in_packets.is_set || is_set(disconnect_response_in_packets.operation)) leaf_name_data.push_back(disconnect_response_in_packets.get_name_leafdata());
    if (disconnect_response_out_packets.is_set || is_set(disconnect_response_out_packets.operation)) leaf_name_data.push_back(disconnect_response_out_packets.get_name_leafdata());
    if (disconnect_success_response_packets.is_set || is_set(disconnect_success_response_packets.operation)) leaf_name_data.push_back(disconnect_success_response_packets.get_name_leafdata());
    if (pod_failed_packets.is_set || is_set(pod_failed_packets.operation)) leaf_name_data.push_back(pod_failed_packets.get_name_leafdata());
    if (pod_in_packets.is_set || is_set(pod_in_packets.operation)) leaf_name_data.push_back(pod_in_packets.get_name_leafdata());
    if (pod_out_packets.is_set || is_set(pod_out_packets.operation)) leaf_name_data.push_back(pod_out_packets.get_name_leafdata());
    if (pod_request_in_packets.is_set || is_set(pod_request_in_packets.operation)) leaf_name_data.push_back(pod_request_in_packets.get_name_leafdata());
    if (pod_response_out_packets.is_set || is_set(pod_response_out_packets.operation)) leaf_name_data.push_back(pod_response_out_packets.get_name_leafdata());
    if (pod_success_packets.is_set || is_set(pod_success_packets.operation)) leaf_name_data.push_back(pod_success_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::NasSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::NasSummary::get_children()
{
    return children;
}

void Aaa::Diameter::NasSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accounting-interim-failed-packets")
    {
        accounting_interim_failed_packets = value;
    }
    if(value_path == "accounting-interim-request-in-packets")
    {
        accounting_interim_request_in_packets = value;
    }
    if(value_path == "accounting-interim-request-out-packets")
    {
        accounting_interim_request_out_packets = value;
    }
    if(value_path == "accounting-interim-response-out-packets")
    {
        accounting_interim_response_out_packets = value;
    }
    if(value_path == "accounting-interim-success-packets")
    {
        accounting_interim_success_packets = value;
    }
    if(value_path == "accounting-intrim-response-in-packets")
    {
        accounting_intrim_response_in_packets = value;
    }
    if(value_path == "accounting-request-out-packets")
    {
        accounting_request_out_packets = value;
    }
    if(value_path == "accounting-response-in-packets")
    {
        accounting_response_in_packets = value;
    }
    if(value_path == "accounting-start-failed-packets")
    {
        accounting_start_failed_packets = value;
    }
    if(value_path == "accounting-start-request-packets")
    {
        accounting_start_request_packets = value;
    }
    if(value_path == "accounting-start-response-packets")
    {
        accounting_start_response_packets = value;
    }
    if(value_path == "accounting-start-success-packets")
    {
        accounting_start_success_packets = value;
    }
    if(value_path == "accounting-stop-failed-packets")
    {
        accounting_stop_failed_packets = value;
    }
    if(value_path == "accounting-stop-request-in-packets")
    {
        accounting_stop_request_in_packets = value;
    }
    if(value_path == "accounting-stop-request-out-packets")
    {
        accounting_stop_request_out_packets = value;
    }
    if(value_path == "accounting-stop-response-in-packets")
    {
        accounting_stop_response_in_packets = value;
    }
    if(value_path == "accounting-stop-response-out-packets")
    {
        accounting_stop_response_out_packets = value;
    }
    if(value_path == "accounting-stop-success-response-packets")
    {
        accounting_stop_success_response_packets = value;
    }
    if(value_path == "authen-request-in-packets")
    {
        authen_request_in_packets = value;
    }
    if(value_path == "authen-request-out-packets")
    {
        authen_request_out_packets = value;
    }
    if(value_path == "authen-response-fail-packets")
    {
        authen_response_fail_packets = value;
    }
    if(value_path == "authen-response-in-packets")
    {
        authen_response_in_packets = value;
    }
    if(value_path == "authen-response-out-packets")
    {
        authen_response_out_packets = value;
    }
    if(value_path == "authen-success-packets")
    {
        authen_success_packets = value;
    }
    if(value_path == "authorization-in-packets")
    {
        authorization_in_packets = value;
    }
    if(value_path == "authorization-out-packets")
    {
        authorization_out_packets = value;
    }
    if(value_path == "authorization-request-in-packets")
    {
        authorization_request_in_packets = value;
    }
    if(value_path == "authorization-response-fail-packets")
    {
        authorization_response_fail_packets = value;
    }
    if(value_path == "authorization-response-out-packets")
    {
        authorization_response_out_packets = value;
    }
    if(value_path == "authorization-response-success-packets")
    {
        authorization_response_success_packets = value;
    }
    if(value_path == "coa-failed-packets")
    {
        coa_failed_packets = value;
    }
    if(value_path == "coa-request-in-packets")
    {
        coa_request_in_packets = value;
    }
    if(value_path == "coa-request-packets")
    {
        coa_request_packets = value;
    }
    if(value_path == "coa-response-out-packets")
    {
        coa_response_out_packets = value;
    }
    if(value_path == "coa-response-packets")
    {
        coa_response_packets = value;
    }
    if(value_path == "coa-success-packets")
    {
        coa_success_packets = value;
    }
    if(value_path == "disconnect-failed-response-packets")
    {
        disconnect_failed_response_packets = value;
    }
    if(value_path == "disconnect-request-in-packets")
    {
        disconnect_request_in_packets = value;
    }
    if(value_path == "disconnect-request-out-packets")
    {
        disconnect_request_out_packets = value;
    }
    if(value_path == "disconnect-response-in-packets")
    {
        disconnect_response_in_packets = value;
    }
    if(value_path == "disconnect-response-out-packets")
    {
        disconnect_response_out_packets = value;
    }
    if(value_path == "disconnect-success-response-packets")
    {
        disconnect_success_response_packets = value;
    }
    if(value_path == "pod-failed-packets")
    {
        pod_failed_packets = value;
    }
    if(value_path == "pod-in-packets")
    {
        pod_in_packets = value;
    }
    if(value_path == "pod-out-packets")
    {
        pod_out_packets = value;
    }
    if(value_path == "pod-request-in-packets")
    {
        pod_request_in_packets = value;
    }
    if(value_path == "pod-response-out-packets")
    {
        pod_response_out_packets = value;
    }
    if(value_path == "pod-success-packets")
    {
        pod_success_packets = value;
    }
}

Aaa::Diameter::GySessionIds::GySessionIds()
{
    yang_name = "gy-session-ids"; yang_parent_name = "diameter";
}

Aaa::Diameter::GySessionIds::~GySessionIds()
{
}

bool Aaa::Diameter::GySessionIds::has_data() const
{
    for (std::size_t index=0; index<gy_session_id.size(); index++)
    {
        if(gy_session_id[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Diameter::GySessionIds::has_operation() const
{
    for (std::size_t index=0; index<gy_session_id.size(); index++)
    {
        if(gy_session_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Diameter::GySessionIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gy-session-ids";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::GySessionIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-diameter-oper:diameter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::GySessionIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "gy-session-id")
    {
        for(auto const & c : gy_session_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Diameter::GySessionIds::GySessionId>();
        c->parent = this;
        gy_session_id.push_back(std::move(c));
        children[segment_path] = gy_session_id.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::GySessionIds::get_children()
{
    for (auto const & c : gy_session_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Diameter::GySessionIds::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Diameter::GySessionIds::GySessionId::GySessionId()
    :
    session_id{YType::int32, "session-id"},
    aaa_session_id{YType::uint32, "aaa-session-id"},
    diameter_session_id{YType::str, "diameter-session-id"},
    parent_aaa_session_id{YType::uint32, "parent-aaa-session-id"},
    request_number{YType::uint32, "request-number"},
    request_type{YType::str, "request-type"},
    retry_count{YType::uint32, "retry-count"},
    session_state{YType::str, "session-state"}
{
    yang_name = "gy-session-id"; yang_parent_name = "gy-session-ids";
}

Aaa::Diameter::GySessionIds::GySessionId::~GySessionId()
{
}

bool Aaa::Diameter::GySessionIds::GySessionId::has_data() const
{
    return session_id.is_set
	|| aaa_session_id.is_set
	|| diameter_session_id.is_set
	|| parent_aaa_session_id.is_set
	|| request_number.is_set
	|| request_type.is_set
	|| retry_count.is_set
	|| session_state.is_set;
}

bool Aaa::Diameter::GySessionIds::GySessionId::has_operation() const
{
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(aaa_session_id.operation)
	|| is_set(diameter_session_id.operation)
	|| is_set(parent_aaa_session_id.operation)
	|| is_set(request_number.operation)
	|| is_set(request_type.operation)
	|| is_set(retry_count.operation)
	|| is_set(session_state.operation);
}

std::string Aaa::Diameter::GySessionIds::GySessionId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gy-session-id" <<"[session-id='" <<session_id <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::GySessionIds::GySessionId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-diameter-oper:diameter/gy-session-ids/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (aaa_session_id.is_set || is_set(aaa_session_id.operation)) leaf_name_data.push_back(aaa_session_id.get_name_leafdata());
    if (diameter_session_id.is_set || is_set(diameter_session_id.operation)) leaf_name_data.push_back(diameter_session_id.get_name_leafdata());
    if (parent_aaa_session_id.is_set || is_set(parent_aaa_session_id.operation)) leaf_name_data.push_back(parent_aaa_session_id.get_name_leafdata());
    if (request_number.is_set || is_set(request_number.operation)) leaf_name_data.push_back(request_number.get_name_leafdata());
    if (request_type.is_set || is_set(request_type.operation)) leaf_name_data.push_back(request_type.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.operation)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.operation)) leaf_name_data.push_back(session_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::GySessionIds::GySessionId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::GySessionIds::GySessionId::get_children()
{
    return children;
}

void Aaa::Diameter::GySessionIds::GySessionId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "aaa-session-id")
    {
        aaa_session_id = value;
    }
    if(value_path == "diameter-session-id")
    {
        diameter_session_id = value;
    }
    if(value_path == "parent-aaa-session-id")
    {
        parent_aaa_session_id = value;
    }
    if(value_path == "request-number")
    {
        request_number = value;
    }
    if(value_path == "request-type")
    {
        request_type = value;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
    }
    if(value_path == "session-state")
    {
        session_state = value;
    }
}

Aaa::Diameter::GyStatistics::GyStatistics()
    :
    active_sessions{YType::uint32, "active-sessions"},
    asa_sent_error_messages{YType::uint32, "asa-sent-error-messages"},
    asa_sent_messages{YType::uint32, "asa-sent-messages"},
    asr_received_error_messages{YType::uint32, "asr-received-error-messages"},
    asr_received_messages{YType::uint32, "asr-received-messages"},
    cca_final_error_messages{YType::uint32, "cca-final-error-messages"},
    cca_final_messages{YType::uint32, "cca-final-messages"},
    cca_init_error_messages{YType::uint32, "cca-init-error-messages"},
    cca_init_messages{YType::uint32, "cca-init-messages"},
    cca_update_error_messages{YType::uint32, "cca-update-error-messages"},
    cca_update_messages{YType::uint32, "cca-update-messages"},
    ccr_final_failed_messages{YType::uint32, "ccr-final-failed-messages"},
    ccr_final_messages{YType::uint32, "ccr-final-messages"},
    ccr_final_retry_messages{YType::uint32, "ccr-final-retry-messages"},
    ccr_final_timed_out_messages{YType::uint32, "ccr-final-timed-out-messages"},
    ccr_init_failed_messages{YType::uint32, "ccr-init-failed-messages"},
    ccr_init_messages{YType::uint32, "ccr-init-messages"},
    ccr_init_retry_messages{YType::uint32, "ccr-init-retry-messages"},
    ccr_init_timed_out_messages{YType::uint32, "ccr-init-timed-out-messages"},
    ccr_update_failed_messages{YType::uint32, "ccr-update-failed-messages"},
    ccr_update_messages{YType::uint32, "ccr-update-messages"},
    ccr_update_retry_messages{YType::uint32, "ccr-update-retry-messages"},
    ccr_update_timed_out_messages{YType::uint32, "ccr-update-timed-out-messages"},
    close_sessions{YType::uint32, "close-sessions"},
    open_sessions{YType::uint32, "open-sessions"},
    raa_sent_error_messages{YType::uint32, "raa-sent-error-messages"},
    raa_sent_messages{YType::uint32, "raa-sent-messages"},
    rar_received_error_messages{YType::uint32, "rar-received-error-messages"},
    rar_received_messages{YType::uint32, "rar-received-messages"},
    restore_sessions{YType::uint32, "restore-sessions"},
    unknown_request_messages{YType::uint32, "unknown-request-messages"}
{
    yang_name = "gy-statistics"; yang_parent_name = "diameter";
}

Aaa::Diameter::GyStatistics::~GyStatistics()
{
}

bool Aaa::Diameter::GyStatistics::has_data() const
{
    return active_sessions.is_set
	|| asa_sent_error_messages.is_set
	|| asa_sent_messages.is_set
	|| asr_received_error_messages.is_set
	|| asr_received_messages.is_set
	|| cca_final_error_messages.is_set
	|| cca_final_messages.is_set
	|| cca_init_error_messages.is_set
	|| cca_init_messages.is_set
	|| cca_update_error_messages.is_set
	|| cca_update_messages.is_set
	|| ccr_final_failed_messages.is_set
	|| ccr_final_messages.is_set
	|| ccr_final_retry_messages.is_set
	|| ccr_final_timed_out_messages.is_set
	|| ccr_init_failed_messages.is_set
	|| ccr_init_messages.is_set
	|| ccr_init_retry_messages.is_set
	|| ccr_init_timed_out_messages.is_set
	|| ccr_update_failed_messages.is_set
	|| ccr_update_messages.is_set
	|| ccr_update_retry_messages.is_set
	|| ccr_update_timed_out_messages.is_set
	|| close_sessions.is_set
	|| open_sessions.is_set
	|| raa_sent_error_messages.is_set
	|| raa_sent_messages.is_set
	|| rar_received_error_messages.is_set
	|| rar_received_messages.is_set
	|| restore_sessions.is_set
	|| unknown_request_messages.is_set;
}

bool Aaa::Diameter::GyStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(active_sessions.operation)
	|| is_set(asa_sent_error_messages.operation)
	|| is_set(asa_sent_messages.operation)
	|| is_set(asr_received_error_messages.operation)
	|| is_set(asr_received_messages.operation)
	|| is_set(cca_final_error_messages.operation)
	|| is_set(cca_final_messages.operation)
	|| is_set(cca_init_error_messages.operation)
	|| is_set(cca_init_messages.operation)
	|| is_set(cca_update_error_messages.operation)
	|| is_set(cca_update_messages.operation)
	|| is_set(ccr_final_failed_messages.operation)
	|| is_set(ccr_final_messages.operation)
	|| is_set(ccr_final_retry_messages.operation)
	|| is_set(ccr_final_timed_out_messages.operation)
	|| is_set(ccr_init_failed_messages.operation)
	|| is_set(ccr_init_messages.operation)
	|| is_set(ccr_init_retry_messages.operation)
	|| is_set(ccr_init_timed_out_messages.operation)
	|| is_set(ccr_update_failed_messages.operation)
	|| is_set(ccr_update_messages.operation)
	|| is_set(ccr_update_retry_messages.operation)
	|| is_set(ccr_update_timed_out_messages.operation)
	|| is_set(close_sessions.operation)
	|| is_set(open_sessions.operation)
	|| is_set(raa_sent_error_messages.operation)
	|| is_set(raa_sent_messages.operation)
	|| is_set(rar_received_error_messages.operation)
	|| is_set(rar_received_messages.operation)
	|| is_set(restore_sessions.operation)
	|| is_set(unknown_request_messages.operation);
}

std::string Aaa::Diameter::GyStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gy-statistics";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::GyStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-diameter-oper:diameter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_sessions.is_set || is_set(active_sessions.operation)) leaf_name_data.push_back(active_sessions.get_name_leafdata());
    if (asa_sent_error_messages.is_set || is_set(asa_sent_error_messages.operation)) leaf_name_data.push_back(asa_sent_error_messages.get_name_leafdata());
    if (asa_sent_messages.is_set || is_set(asa_sent_messages.operation)) leaf_name_data.push_back(asa_sent_messages.get_name_leafdata());
    if (asr_received_error_messages.is_set || is_set(asr_received_error_messages.operation)) leaf_name_data.push_back(asr_received_error_messages.get_name_leafdata());
    if (asr_received_messages.is_set || is_set(asr_received_messages.operation)) leaf_name_data.push_back(asr_received_messages.get_name_leafdata());
    if (cca_final_error_messages.is_set || is_set(cca_final_error_messages.operation)) leaf_name_data.push_back(cca_final_error_messages.get_name_leafdata());
    if (cca_final_messages.is_set || is_set(cca_final_messages.operation)) leaf_name_data.push_back(cca_final_messages.get_name_leafdata());
    if (cca_init_error_messages.is_set || is_set(cca_init_error_messages.operation)) leaf_name_data.push_back(cca_init_error_messages.get_name_leafdata());
    if (cca_init_messages.is_set || is_set(cca_init_messages.operation)) leaf_name_data.push_back(cca_init_messages.get_name_leafdata());
    if (cca_update_error_messages.is_set || is_set(cca_update_error_messages.operation)) leaf_name_data.push_back(cca_update_error_messages.get_name_leafdata());
    if (cca_update_messages.is_set || is_set(cca_update_messages.operation)) leaf_name_data.push_back(cca_update_messages.get_name_leafdata());
    if (ccr_final_failed_messages.is_set || is_set(ccr_final_failed_messages.operation)) leaf_name_data.push_back(ccr_final_failed_messages.get_name_leafdata());
    if (ccr_final_messages.is_set || is_set(ccr_final_messages.operation)) leaf_name_data.push_back(ccr_final_messages.get_name_leafdata());
    if (ccr_final_retry_messages.is_set || is_set(ccr_final_retry_messages.operation)) leaf_name_data.push_back(ccr_final_retry_messages.get_name_leafdata());
    if (ccr_final_timed_out_messages.is_set || is_set(ccr_final_timed_out_messages.operation)) leaf_name_data.push_back(ccr_final_timed_out_messages.get_name_leafdata());
    if (ccr_init_failed_messages.is_set || is_set(ccr_init_failed_messages.operation)) leaf_name_data.push_back(ccr_init_failed_messages.get_name_leafdata());
    if (ccr_init_messages.is_set || is_set(ccr_init_messages.operation)) leaf_name_data.push_back(ccr_init_messages.get_name_leafdata());
    if (ccr_init_retry_messages.is_set || is_set(ccr_init_retry_messages.operation)) leaf_name_data.push_back(ccr_init_retry_messages.get_name_leafdata());
    if (ccr_init_timed_out_messages.is_set || is_set(ccr_init_timed_out_messages.operation)) leaf_name_data.push_back(ccr_init_timed_out_messages.get_name_leafdata());
    if (ccr_update_failed_messages.is_set || is_set(ccr_update_failed_messages.operation)) leaf_name_data.push_back(ccr_update_failed_messages.get_name_leafdata());
    if (ccr_update_messages.is_set || is_set(ccr_update_messages.operation)) leaf_name_data.push_back(ccr_update_messages.get_name_leafdata());
    if (ccr_update_retry_messages.is_set || is_set(ccr_update_retry_messages.operation)) leaf_name_data.push_back(ccr_update_retry_messages.get_name_leafdata());
    if (ccr_update_timed_out_messages.is_set || is_set(ccr_update_timed_out_messages.operation)) leaf_name_data.push_back(ccr_update_timed_out_messages.get_name_leafdata());
    if (close_sessions.is_set || is_set(close_sessions.operation)) leaf_name_data.push_back(close_sessions.get_name_leafdata());
    if (open_sessions.is_set || is_set(open_sessions.operation)) leaf_name_data.push_back(open_sessions.get_name_leafdata());
    if (raa_sent_error_messages.is_set || is_set(raa_sent_error_messages.operation)) leaf_name_data.push_back(raa_sent_error_messages.get_name_leafdata());
    if (raa_sent_messages.is_set || is_set(raa_sent_messages.operation)) leaf_name_data.push_back(raa_sent_messages.get_name_leafdata());
    if (rar_received_error_messages.is_set || is_set(rar_received_error_messages.operation)) leaf_name_data.push_back(rar_received_error_messages.get_name_leafdata());
    if (rar_received_messages.is_set || is_set(rar_received_messages.operation)) leaf_name_data.push_back(rar_received_messages.get_name_leafdata());
    if (restore_sessions.is_set || is_set(restore_sessions.operation)) leaf_name_data.push_back(restore_sessions.get_name_leafdata());
    if (unknown_request_messages.is_set || is_set(unknown_request_messages.operation)) leaf_name_data.push_back(unknown_request_messages.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::GyStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::GyStatistics::get_children()
{
    return children;
}

void Aaa::Diameter::GyStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-sessions")
    {
        active_sessions = value;
    }
    if(value_path == "asa-sent-error-messages")
    {
        asa_sent_error_messages = value;
    }
    if(value_path == "asa-sent-messages")
    {
        asa_sent_messages = value;
    }
    if(value_path == "asr-received-error-messages")
    {
        asr_received_error_messages = value;
    }
    if(value_path == "asr-received-messages")
    {
        asr_received_messages = value;
    }
    if(value_path == "cca-final-error-messages")
    {
        cca_final_error_messages = value;
    }
    if(value_path == "cca-final-messages")
    {
        cca_final_messages = value;
    }
    if(value_path == "cca-init-error-messages")
    {
        cca_init_error_messages = value;
    }
    if(value_path == "cca-init-messages")
    {
        cca_init_messages = value;
    }
    if(value_path == "cca-update-error-messages")
    {
        cca_update_error_messages = value;
    }
    if(value_path == "cca-update-messages")
    {
        cca_update_messages = value;
    }
    if(value_path == "ccr-final-failed-messages")
    {
        ccr_final_failed_messages = value;
    }
    if(value_path == "ccr-final-messages")
    {
        ccr_final_messages = value;
    }
    if(value_path == "ccr-final-retry-messages")
    {
        ccr_final_retry_messages = value;
    }
    if(value_path == "ccr-final-timed-out-messages")
    {
        ccr_final_timed_out_messages = value;
    }
    if(value_path == "ccr-init-failed-messages")
    {
        ccr_init_failed_messages = value;
    }
    if(value_path == "ccr-init-messages")
    {
        ccr_init_messages = value;
    }
    if(value_path == "ccr-init-retry-messages")
    {
        ccr_init_retry_messages = value;
    }
    if(value_path == "ccr-init-timed-out-messages")
    {
        ccr_init_timed_out_messages = value;
    }
    if(value_path == "ccr-update-failed-messages")
    {
        ccr_update_failed_messages = value;
    }
    if(value_path == "ccr-update-messages")
    {
        ccr_update_messages = value;
    }
    if(value_path == "ccr-update-retry-messages")
    {
        ccr_update_retry_messages = value;
    }
    if(value_path == "ccr-update-timed-out-messages")
    {
        ccr_update_timed_out_messages = value;
    }
    if(value_path == "close-sessions")
    {
        close_sessions = value;
    }
    if(value_path == "open-sessions")
    {
        open_sessions = value;
    }
    if(value_path == "raa-sent-error-messages")
    {
        raa_sent_error_messages = value;
    }
    if(value_path == "raa-sent-messages")
    {
        raa_sent_messages = value;
    }
    if(value_path == "rar-received-error-messages")
    {
        rar_received_error_messages = value;
    }
    if(value_path == "rar-received-messages")
    {
        rar_received_messages = value;
    }
    if(value_path == "restore-sessions")
    {
        restore_sessions = value;
    }
    if(value_path == "unknown-request-messages")
    {
        unknown_request_messages = value;
    }
}

Aaa::Diameter::GxSessionIds::GxSessionIds()
{
    yang_name = "gx-session-ids"; yang_parent_name = "diameter";
}

Aaa::Diameter::GxSessionIds::~GxSessionIds()
{
}

bool Aaa::Diameter::GxSessionIds::has_data() const
{
    for (std::size_t index=0; index<gx_session_id.size(); index++)
    {
        if(gx_session_id[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Diameter::GxSessionIds::has_operation() const
{
    for (std::size_t index=0; index<gx_session_id.size(); index++)
    {
        if(gx_session_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Diameter::GxSessionIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gx-session-ids";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::GxSessionIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-diameter-oper:diameter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::GxSessionIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "gx-session-id")
    {
        for(auto const & c : gx_session_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Diameter::GxSessionIds::GxSessionId>();
        c->parent = this;
        gx_session_id.push_back(std::move(c));
        children[segment_path] = gx_session_id.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::GxSessionIds::get_children()
{
    for (auto const & c : gx_session_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Diameter::GxSessionIds::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Diameter::GxSessionIds::GxSessionId::GxSessionId()
    :
    session_id{YType::int32, "session-id"},
    aaa_session_id{YType::uint32, "aaa-session-id"},
    diameter_session_id{YType::str, "diameter-session-id"},
    request_number{YType::uint32, "request-number"},
    request_type{YType::str, "request-type"},
    retry_count{YType::uint32, "retry-count"},
    session_state{YType::str, "session-state"}
{
    yang_name = "gx-session-id"; yang_parent_name = "gx-session-ids";
}

Aaa::Diameter::GxSessionIds::GxSessionId::~GxSessionId()
{
}

bool Aaa::Diameter::GxSessionIds::GxSessionId::has_data() const
{
    return session_id.is_set
	|| aaa_session_id.is_set
	|| diameter_session_id.is_set
	|| request_number.is_set
	|| request_type.is_set
	|| retry_count.is_set
	|| session_state.is_set;
}

bool Aaa::Diameter::GxSessionIds::GxSessionId::has_operation() const
{
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(aaa_session_id.operation)
	|| is_set(diameter_session_id.operation)
	|| is_set(request_number.operation)
	|| is_set(request_type.operation)
	|| is_set(retry_count.operation)
	|| is_set(session_state.operation);
}

std::string Aaa::Diameter::GxSessionIds::GxSessionId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gx-session-id" <<"[session-id='" <<session_id <<"']";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::GxSessionIds::GxSessionId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-diameter-oper:diameter/gx-session-ids/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (aaa_session_id.is_set || is_set(aaa_session_id.operation)) leaf_name_data.push_back(aaa_session_id.get_name_leafdata());
    if (diameter_session_id.is_set || is_set(diameter_session_id.operation)) leaf_name_data.push_back(diameter_session_id.get_name_leafdata());
    if (request_number.is_set || is_set(request_number.operation)) leaf_name_data.push_back(request_number.get_name_leafdata());
    if (request_type.is_set || is_set(request_type.operation)) leaf_name_data.push_back(request_type.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.operation)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.operation)) leaf_name_data.push_back(session_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::GxSessionIds::GxSessionId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::GxSessionIds::GxSessionId::get_children()
{
    return children;
}

void Aaa::Diameter::GxSessionIds::GxSessionId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "aaa-session-id")
    {
        aaa_session_id = value;
    }
    if(value_path == "diameter-session-id")
    {
        diameter_session_id = value;
    }
    if(value_path == "request-number")
    {
        request_number = value;
    }
    if(value_path == "request-type")
    {
        request_type = value;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
    }
    if(value_path == "session-state")
    {
        session_state = value;
    }
}

Aaa::Diameter::NasSession::NasSession()
    :
    aaanas_id{YType::str, "aaanas-id"}
{
    yang_name = "nas-session"; yang_parent_name = "diameter";
}

Aaa::Diameter::NasSession::~NasSession()
{
}

bool Aaa::Diameter::NasSession::has_data() const
{
    for (std::size_t index=0; index<list_of_nas.size(); index++)
    {
        if(list_of_nas[index]->has_data())
            return true;
    }
    return aaanas_id.is_set;
}

bool Aaa::Diameter::NasSession::has_operation() const
{
    for (std::size_t index=0; index<list_of_nas.size(); index++)
    {
        if(list_of_nas[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(aaanas_id.operation);
}

std::string Aaa::Diameter::NasSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nas-session";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::NasSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-diameter-oper:diameter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaanas_id.is_set || is_set(aaanas_id.operation)) leaf_name_data.push_back(aaanas_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::NasSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "list-of-nas")
    {
        for(auto const & c : list_of_nas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Diameter::NasSession::ListOfNas>();
        c->parent = this;
        list_of_nas.push_back(std::move(c));
        children[segment_path] = list_of_nas.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::NasSession::get_children()
{
    for (auto const & c : list_of_nas)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Diameter::NasSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaanas-id")
    {
        aaanas_id = value;
    }
}

Aaa::Diameter::NasSession::ListOfNas::ListOfNas()
    :
    aaa_session_id{YType::str, "aaa-session-id"},
    accounting_intrim_in_packets{YType::uint32, "accounting-intrim-in-packets"},
    accounting_intrim_out_packets{YType::uint32, "accounting-intrim-out-packets"},
    accounting_status{YType::uint32, "accounting-status"},
    accounting_status_stop{YType::uint32, "accounting-status-stop"},
    authentication_status{YType::uint32, "authentication-status"},
    authorization_status{YType::uint32, "authorization-status"},
    diameter_session_id{YType::str, "diameter-session-id"},
    disconnect_status{YType::uint32, "disconnect-status"},
    method_list{YType::str, "method-list"},
    server_used_list{YType::str, "server-used-list"}
{
    yang_name = "list-of-nas"; yang_parent_name = "nas-session";
}

Aaa::Diameter::NasSession::ListOfNas::~ListOfNas()
{
}

bool Aaa::Diameter::NasSession::ListOfNas::has_data() const
{
    return aaa_session_id.is_set
	|| accounting_intrim_in_packets.is_set
	|| accounting_intrim_out_packets.is_set
	|| accounting_status.is_set
	|| accounting_status_stop.is_set
	|| authentication_status.is_set
	|| authorization_status.is_set
	|| diameter_session_id.is_set
	|| disconnect_status.is_set
	|| method_list.is_set
	|| server_used_list.is_set;
}

bool Aaa::Diameter::NasSession::ListOfNas::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_session_id.operation)
	|| is_set(accounting_intrim_in_packets.operation)
	|| is_set(accounting_intrim_out_packets.operation)
	|| is_set(accounting_status.operation)
	|| is_set(accounting_status_stop.operation)
	|| is_set(authentication_status.operation)
	|| is_set(authorization_status.operation)
	|| is_set(diameter_session_id.operation)
	|| is_set(disconnect_status.operation)
	|| is_set(method_list.operation)
	|| is_set(server_used_list.operation);
}

std::string Aaa::Diameter::NasSession::ListOfNas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list-of-nas";

    return path_buffer.str();

}

EntityPath Aaa::Diameter::NasSession::ListOfNas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-diameter-oper:diameter/nas-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_session_id.is_set || is_set(aaa_session_id.operation)) leaf_name_data.push_back(aaa_session_id.get_name_leafdata());
    if (accounting_intrim_in_packets.is_set || is_set(accounting_intrim_in_packets.operation)) leaf_name_data.push_back(accounting_intrim_in_packets.get_name_leafdata());
    if (accounting_intrim_out_packets.is_set || is_set(accounting_intrim_out_packets.operation)) leaf_name_data.push_back(accounting_intrim_out_packets.get_name_leafdata());
    if (accounting_status.is_set || is_set(accounting_status.operation)) leaf_name_data.push_back(accounting_status.get_name_leafdata());
    if (accounting_status_stop.is_set || is_set(accounting_status_stop.operation)) leaf_name_data.push_back(accounting_status_stop.get_name_leafdata());
    if (authentication_status.is_set || is_set(authentication_status.operation)) leaf_name_data.push_back(authentication_status.get_name_leafdata());
    if (authorization_status.is_set || is_set(authorization_status.operation)) leaf_name_data.push_back(authorization_status.get_name_leafdata());
    if (diameter_session_id.is_set || is_set(diameter_session_id.operation)) leaf_name_data.push_back(diameter_session_id.get_name_leafdata());
    if (disconnect_status.is_set || is_set(disconnect_status.operation)) leaf_name_data.push_back(disconnect_status.get_name_leafdata());
    if (method_list.is_set || is_set(method_list.operation)) leaf_name_data.push_back(method_list.get_name_leafdata());
    if (server_used_list.is_set || is_set(server_used_list.operation)) leaf_name_data.push_back(server_used_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Diameter::NasSession::ListOfNas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Diameter::NasSession::ListOfNas::get_children()
{
    return children;
}

void Aaa::Diameter::NasSession::ListOfNas::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-session-id")
    {
        aaa_session_id = value;
    }
    if(value_path == "accounting-intrim-in-packets")
    {
        accounting_intrim_in_packets = value;
    }
    if(value_path == "accounting-intrim-out-packets")
    {
        accounting_intrim_out_packets = value;
    }
    if(value_path == "accounting-status")
    {
        accounting_status = value;
    }
    if(value_path == "accounting-status-stop")
    {
        accounting_status_stop = value;
    }
    if(value_path == "authentication-status")
    {
        authentication_status = value;
    }
    if(value_path == "authorization-status")
    {
        authorization_status = value;
    }
    if(value_path == "diameter-session-id")
    {
        diameter_session_id = value;
    }
    if(value_path == "disconnect-status")
    {
        disconnect_status = value;
    }
    if(value_path == "method-list")
    {
        method_list = value;
    }
    if(value_path == "server-used-list")
    {
        server_used_list = value;
    }
}

Aaa::Radius::Radius()
    :
    global(std::make_shared<Aaa::Radius::Global>())
	,radius_source_interface(std::make_shared<Aaa::Radius::RadiusSourceInterface>())
	,servers(std::make_shared<Aaa::Radius::Servers>())
{
    global->parent = this;
    children["global"] = global;

    radius_source_interface->parent = this;
    children["radius-source-interface"] = radius_source_interface;

    servers->parent = this;
    children["servers"] = servers;

    yang_name = "radius"; yang_parent_name = "aaa";
}

Aaa::Radius::~Radius()
{
}

bool Aaa::Radius::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (radius_source_interface !=  nullptr && radius_source_interface->has_data())
	|| (servers !=  nullptr && servers->has_data());
}

bool Aaa::Radius::has_operation() const
{
    return is_set(operation)
	|| (global !=  nullptr && global->has_operation())
	|| (radius_source_interface !=  nullptr && radius_source_interface->has_operation())
	|| (servers !=  nullptr && servers->has_operation());
}

std::string Aaa::Radius::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-protocol-radius-oper:radius";

    return path_buffer.str();

}

EntityPath Aaa::Radius::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
        else
        {
            global = std::make_shared<Aaa::Radius::Global>();
            global->parent = this;
            children["global"] = global;
        }
        return children.at("global");
    }

    if(child_yang_name == "radius-source-interface")
    {
        if(radius_source_interface != nullptr)
        {
            children["radius-source-interface"] = radius_source_interface;
        }
        else
        {
            radius_source_interface = std::make_shared<Aaa::Radius::RadiusSourceInterface>();
            radius_source_interface->parent = this;
            children["radius-source-interface"] = radius_source_interface;
        }
        return children.at("radius-source-interface");
    }

    if(child_yang_name == "servers")
    {
        if(servers != nullptr)
        {
            children["servers"] = servers;
        }
        else
        {
            servers = std::make_shared<Aaa::Radius::Servers>();
            servers->parent = this;
            children["servers"] = servers;
        }
        return children.at("servers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::get_children()
{
    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
    }

    if(children.find("radius-source-interface") == children.end())
    {
        if(radius_source_interface != nullptr)
        {
            children["radius-source-interface"] = radius_source_interface;
        }
    }

    if(children.find("servers") == children.end())
    {
        if(servers != nullptr)
        {
            children["servers"] = servers;
        }
    }

    return children;
}

void Aaa::Radius::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Radius::Servers::Servers()
{
    yang_name = "servers"; yang_parent_name = "radius";
}

Aaa::Radius::Servers::~Servers()
{
}

bool Aaa::Radius::Servers::has_data() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Radius::Servers::has_operation() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Radius::Servers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "servers";

    return path_buffer.str();

}

EntityPath Aaa::Radius::Servers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-protocol-radius-oper:radius/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::Servers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "server")
    {
        for(auto const & c : server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Radius::Servers::Server>();
        c->parent = this;
        server.push_back(std::move(c));
        children[segment_path] = server.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::Servers::get_children()
{
    for (auto const & c : server)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Radius::Servers::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Radius::Servers::Server::Server()
    :
    aborts{YType::uint32, "aborts"},
    access_accepts{YType::uint32, "access-accepts"},
    access_challenges{YType::uint32, "access-challenges"},
    access_rejects{YType::uint32, "access-rejects"},
    access_request_retransmits{YType::uint32, "access-request-retransmits"},
    access_requests{YType::uint32, "access-requests"},
    access_timeouts{YType::uint32, "access-timeouts"},
    accounting_port{YType::uint32, "accounting-port"},
    accounting_requests{YType::uint32, "accounting-requests"},
    accounting_responses{YType::uint32, "accounting-responses"},
    accounting_retransmits{YType::uint32, "accounting-retransmits"},
    accounting_rtt{YType::uint32, "accounting-rtt"},
    accounting_timeouts{YType::uint32, "accounting-timeouts"},
    acct_incorrect_responses{YType::uint32, "acct-incorrect-responses"},
    acct_port_number{YType::uint32, "acct-port-number"},
    acct_response_time{YType::uint32, "acct-response-time"},
    acct_server_error_responses{YType::uint32, "acct-server-error-responses"},
    acct_transaction_failure{YType::uint32, "acct-transaction-failure"},
    acct_transaction_successess{YType::uint32, "acct-transaction-successess"},
    acct_unexpected_responses{YType::uint32, "acct-unexpected-responses"},
    auth_port_number{YType::uint32, "auth-port-number"},
    authen_incorrect_responses{YType::uint32, "authen-incorrect-responses"},
    authen_response_time{YType::uint32, "authen-response-time"},
    authen_server_error_responses{YType::uint32, "authen-server-error-responses"},
    authen_transaction_failure{YType::uint32, "authen-transaction-failure"},
    authen_transaction_successess{YType::uint32, "authen-transaction-successess"},
    authen_unexpected_responses{YType::uint32, "authen-unexpected-responses"},
    authentication_port{YType::uint32, "authentication-port"},
    authentication_rtt{YType::uint32, "authentication-rtt"},
    author_incorrect_responses{YType::uint32, "author-incorrect-responses"},
    author_request_timeouts{YType::uint32, "author-request-timeouts"},
    author_requests{YType::uint32, "author-requests"},
    author_response_time{YType::uint32, "author-response-time"},
    author_server_error_responses{YType::uint32, "author-server-error-responses"},
    author_transaction_failure{YType::uint32, "author-transaction-failure"},
    author_transaction_successess{YType::uint32, "author-transaction-successess"},
    author_unexpected_responses{YType::uint32, "author-unexpected-responses"},
    bad_access_authenticators{YType::uint32, "bad-access-authenticators"},
    bad_access_responses{YType::uint32, "bad-access-responses"},
    bad_accounting_authenticators{YType::uint32, "bad-accounting-authenticators"},
    bad_accounting_responses{YType::uint32, "bad-accounting-responses"},
    current_state_duration{YType::uint32, "current-state-duration"},
    currently_throttled_access_reqs{YType::uint32, "currently-throttled-access-reqs"},
    dead_detect_time{YType::uint32, "dead-detect-time"},
    dead_detect_tries{YType::uint32, "dead-detect-tries"},
    dead_time{YType::uint32, "dead-time"},
    dropped_access_responses{YType::uint32, "dropped-access-responses"},
    dropped_accounting_responses{YType::uint32, "dropped-accounting-responses"},
    family{YType::str, "family"},
    group_name{YType::str, "group-name"},
    ip_address{YType::str, "ip-address"},
    ip_address_xr{YType::str, "ip-address-xr"},
    ipv4_address{YType::str, "ipv4-address"},
    is_a_private_server{YType::boolean, "is-a-private-server"},
    is_quarantined{YType::boolean, "is-quarantined"},
    last_deadtime{YType::uint32, "last-deadtime"},
    max_acct_throttled{YType::uint32, "max-acct-throttled"},
    max_throttled_access_reqs{YType::uint32, "max-throttled-access-reqs"},
    packets_in{YType::uint32, "packets-in"},
    packets_out{YType::uint32, "packets-out"},
    pending_access_requests{YType::uint32, "pending-access-requests"},
    pending_accounting_requets{YType::uint32, "pending-accounting-requets"},
    previous_state_duration{YType::uint32, "previous-state-duration"},
    priority{YType::uint32, "priority"},
    redirected_requests{YType::uint32, "redirected-requests"},
    replies_expected{YType::uint32, "replies-expected"},
    retransmit{YType::uint32, "retransmit"},
    state{YType::str, "state"},
    throttled_access_reqs{YType::uint32, "throttled-access-reqs"},
    throttled_acct_failures_stats{YType::uint32, "throttled-acct-failures-stats"},
    throttled_acct_timed_out_stats{YType::uint32, "throttled-acct-timed-out-stats"},
    throttled_acct_transactions{YType::uint32, "throttled-acct-transactions"},
    throttled_dropped_reqs{YType::uint32, "throttled-dropped-reqs"},
    throttled_timed_out_reqs{YType::uint32, "throttled-timed-out-reqs"},
    throttleda_acct_transactions{YType::uint32, "throttleda-acct-transactions"},
    timeout_xr{YType::uint32, "timeout-xr"},
    timeouts{YType::uint32, "timeouts"},
    total_deadtime{YType::uint32, "total-deadtime"},
    total_test_acct_pending{YType::uint32, "total-test-acct-pending"},
    total_test_acct_reqs{YType::uint32, "total-test-acct-reqs"},
    total_test_acct_response{YType::uint32, "total-test-acct-response"},
    total_test_acct_timeouts{YType::uint32, "total-test-acct-timeouts"},
    total_test_auth_pending{YType::uint32, "total-test-auth-pending"},
    total_test_auth_reqs{YType::uint32, "total-test-auth-reqs"},
    total_test_auth_response{YType::uint32, "total-test-auth-response"},
    total_test_auth_timeouts{YType::uint32, "total-test-auth-timeouts"},
    unknown_access_types{YType::uint32, "unknown-access-types"},
    unknown_accounting_types{YType::uint32, "unknown-accounting-types"}
{
    yang_name = "server"; yang_parent_name = "servers";
}

Aaa::Radius::Servers::Server::~Server()
{
}

bool Aaa::Radius::Servers::Server::has_data() const
{
    return aborts.is_set
	|| access_accepts.is_set
	|| access_challenges.is_set
	|| access_rejects.is_set
	|| access_request_retransmits.is_set
	|| access_requests.is_set
	|| access_timeouts.is_set
	|| accounting_port.is_set
	|| accounting_requests.is_set
	|| accounting_responses.is_set
	|| accounting_retransmits.is_set
	|| accounting_rtt.is_set
	|| accounting_timeouts.is_set
	|| acct_incorrect_responses.is_set
	|| acct_port_number.is_set
	|| acct_response_time.is_set
	|| acct_server_error_responses.is_set
	|| acct_transaction_failure.is_set
	|| acct_transaction_successess.is_set
	|| acct_unexpected_responses.is_set
	|| auth_port_number.is_set
	|| authen_incorrect_responses.is_set
	|| authen_response_time.is_set
	|| authen_server_error_responses.is_set
	|| authen_transaction_failure.is_set
	|| authen_transaction_successess.is_set
	|| authen_unexpected_responses.is_set
	|| authentication_port.is_set
	|| authentication_rtt.is_set
	|| author_incorrect_responses.is_set
	|| author_request_timeouts.is_set
	|| author_requests.is_set
	|| author_response_time.is_set
	|| author_server_error_responses.is_set
	|| author_transaction_failure.is_set
	|| author_transaction_successess.is_set
	|| author_unexpected_responses.is_set
	|| bad_access_authenticators.is_set
	|| bad_access_responses.is_set
	|| bad_accounting_authenticators.is_set
	|| bad_accounting_responses.is_set
	|| current_state_duration.is_set
	|| currently_throttled_access_reqs.is_set
	|| dead_detect_time.is_set
	|| dead_detect_tries.is_set
	|| dead_time.is_set
	|| dropped_access_responses.is_set
	|| dropped_accounting_responses.is_set
	|| family.is_set
	|| group_name.is_set
	|| ip_address.is_set
	|| ip_address_xr.is_set
	|| ipv4_address.is_set
	|| is_a_private_server.is_set
	|| is_quarantined.is_set
	|| last_deadtime.is_set
	|| max_acct_throttled.is_set
	|| max_throttled_access_reqs.is_set
	|| packets_in.is_set
	|| packets_out.is_set
	|| pending_access_requests.is_set
	|| pending_accounting_requets.is_set
	|| previous_state_duration.is_set
	|| priority.is_set
	|| redirected_requests.is_set
	|| replies_expected.is_set
	|| retransmit.is_set
	|| state.is_set
	|| throttled_access_reqs.is_set
	|| throttled_acct_failures_stats.is_set
	|| throttled_acct_timed_out_stats.is_set
	|| throttled_acct_transactions.is_set
	|| throttled_dropped_reqs.is_set
	|| throttled_timed_out_reqs.is_set
	|| throttleda_acct_transactions.is_set
	|| timeout_xr.is_set
	|| timeouts.is_set
	|| total_deadtime.is_set
	|| total_test_acct_pending.is_set
	|| total_test_acct_reqs.is_set
	|| total_test_acct_response.is_set
	|| total_test_acct_timeouts.is_set
	|| total_test_auth_pending.is_set
	|| total_test_auth_reqs.is_set
	|| total_test_auth_response.is_set
	|| total_test_auth_timeouts.is_set
	|| unknown_access_types.is_set
	|| unknown_accounting_types.is_set;
}

bool Aaa::Radius::Servers::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(aborts.operation)
	|| is_set(access_accepts.operation)
	|| is_set(access_challenges.operation)
	|| is_set(access_rejects.operation)
	|| is_set(access_request_retransmits.operation)
	|| is_set(access_requests.operation)
	|| is_set(access_timeouts.operation)
	|| is_set(accounting_port.operation)
	|| is_set(accounting_requests.operation)
	|| is_set(accounting_responses.operation)
	|| is_set(accounting_retransmits.operation)
	|| is_set(accounting_rtt.operation)
	|| is_set(accounting_timeouts.operation)
	|| is_set(acct_incorrect_responses.operation)
	|| is_set(acct_port_number.operation)
	|| is_set(acct_response_time.operation)
	|| is_set(acct_server_error_responses.operation)
	|| is_set(acct_transaction_failure.operation)
	|| is_set(acct_transaction_successess.operation)
	|| is_set(acct_unexpected_responses.operation)
	|| is_set(auth_port_number.operation)
	|| is_set(authen_incorrect_responses.operation)
	|| is_set(authen_response_time.operation)
	|| is_set(authen_server_error_responses.operation)
	|| is_set(authen_transaction_failure.operation)
	|| is_set(authen_transaction_successess.operation)
	|| is_set(authen_unexpected_responses.operation)
	|| is_set(authentication_port.operation)
	|| is_set(authentication_rtt.operation)
	|| is_set(author_incorrect_responses.operation)
	|| is_set(author_request_timeouts.operation)
	|| is_set(author_requests.operation)
	|| is_set(author_response_time.operation)
	|| is_set(author_server_error_responses.operation)
	|| is_set(author_transaction_failure.operation)
	|| is_set(author_transaction_successess.operation)
	|| is_set(author_unexpected_responses.operation)
	|| is_set(bad_access_authenticators.operation)
	|| is_set(bad_access_responses.operation)
	|| is_set(bad_accounting_authenticators.operation)
	|| is_set(bad_accounting_responses.operation)
	|| is_set(current_state_duration.operation)
	|| is_set(currently_throttled_access_reqs.operation)
	|| is_set(dead_detect_time.operation)
	|| is_set(dead_detect_tries.operation)
	|| is_set(dead_time.operation)
	|| is_set(dropped_access_responses.operation)
	|| is_set(dropped_accounting_responses.operation)
	|| is_set(family.operation)
	|| is_set(group_name.operation)
	|| is_set(ip_address.operation)
	|| is_set(ip_address_xr.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(is_a_private_server.operation)
	|| is_set(is_quarantined.operation)
	|| is_set(last_deadtime.operation)
	|| is_set(max_acct_throttled.operation)
	|| is_set(max_throttled_access_reqs.operation)
	|| is_set(packets_in.operation)
	|| is_set(packets_out.operation)
	|| is_set(pending_access_requests.operation)
	|| is_set(pending_accounting_requets.operation)
	|| is_set(previous_state_duration.operation)
	|| is_set(priority.operation)
	|| is_set(redirected_requests.operation)
	|| is_set(replies_expected.operation)
	|| is_set(retransmit.operation)
	|| is_set(state.operation)
	|| is_set(throttled_access_reqs.operation)
	|| is_set(throttled_acct_failures_stats.operation)
	|| is_set(throttled_acct_timed_out_stats.operation)
	|| is_set(throttled_acct_transactions.operation)
	|| is_set(throttled_dropped_reqs.operation)
	|| is_set(throttled_timed_out_reqs.operation)
	|| is_set(throttleda_acct_transactions.operation)
	|| is_set(timeout_xr.operation)
	|| is_set(timeouts.operation)
	|| is_set(total_deadtime.operation)
	|| is_set(total_test_acct_pending.operation)
	|| is_set(total_test_acct_reqs.operation)
	|| is_set(total_test_acct_response.operation)
	|| is_set(total_test_acct_timeouts.operation)
	|| is_set(total_test_auth_pending.operation)
	|| is_set(total_test_auth_reqs.operation)
	|| is_set(total_test_auth_response.operation)
	|| is_set(total_test_auth_timeouts.operation)
	|| is_set(unknown_access_types.operation)
	|| is_set(unknown_accounting_types.operation);
}

std::string Aaa::Radius::Servers::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

EntityPath Aaa::Radius::Servers::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-protocol-radius-oper:radius/servers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aborts.is_set || is_set(aborts.operation)) leaf_name_data.push_back(aborts.get_name_leafdata());
    if (access_accepts.is_set || is_set(access_accepts.operation)) leaf_name_data.push_back(access_accepts.get_name_leafdata());
    if (access_challenges.is_set || is_set(access_challenges.operation)) leaf_name_data.push_back(access_challenges.get_name_leafdata());
    if (access_rejects.is_set || is_set(access_rejects.operation)) leaf_name_data.push_back(access_rejects.get_name_leafdata());
    if (access_request_retransmits.is_set || is_set(access_request_retransmits.operation)) leaf_name_data.push_back(access_request_retransmits.get_name_leafdata());
    if (access_requests.is_set || is_set(access_requests.operation)) leaf_name_data.push_back(access_requests.get_name_leafdata());
    if (access_timeouts.is_set || is_set(access_timeouts.operation)) leaf_name_data.push_back(access_timeouts.get_name_leafdata());
    if (accounting_port.is_set || is_set(accounting_port.operation)) leaf_name_data.push_back(accounting_port.get_name_leafdata());
    if (accounting_requests.is_set || is_set(accounting_requests.operation)) leaf_name_data.push_back(accounting_requests.get_name_leafdata());
    if (accounting_responses.is_set || is_set(accounting_responses.operation)) leaf_name_data.push_back(accounting_responses.get_name_leafdata());
    if (accounting_retransmits.is_set || is_set(accounting_retransmits.operation)) leaf_name_data.push_back(accounting_retransmits.get_name_leafdata());
    if (accounting_rtt.is_set || is_set(accounting_rtt.operation)) leaf_name_data.push_back(accounting_rtt.get_name_leafdata());
    if (accounting_timeouts.is_set || is_set(accounting_timeouts.operation)) leaf_name_data.push_back(accounting_timeouts.get_name_leafdata());
    if (acct_incorrect_responses.is_set || is_set(acct_incorrect_responses.operation)) leaf_name_data.push_back(acct_incorrect_responses.get_name_leafdata());
    if (acct_port_number.is_set || is_set(acct_port_number.operation)) leaf_name_data.push_back(acct_port_number.get_name_leafdata());
    if (acct_response_time.is_set || is_set(acct_response_time.operation)) leaf_name_data.push_back(acct_response_time.get_name_leafdata());
    if (acct_server_error_responses.is_set || is_set(acct_server_error_responses.operation)) leaf_name_data.push_back(acct_server_error_responses.get_name_leafdata());
    if (acct_transaction_failure.is_set || is_set(acct_transaction_failure.operation)) leaf_name_data.push_back(acct_transaction_failure.get_name_leafdata());
    if (acct_transaction_successess.is_set || is_set(acct_transaction_successess.operation)) leaf_name_data.push_back(acct_transaction_successess.get_name_leafdata());
    if (acct_unexpected_responses.is_set || is_set(acct_unexpected_responses.operation)) leaf_name_data.push_back(acct_unexpected_responses.get_name_leafdata());
    if (auth_port_number.is_set || is_set(auth_port_number.operation)) leaf_name_data.push_back(auth_port_number.get_name_leafdata());
    if (authen_incorrect_responses.is_set || is_set(authen_incorrect_responses.operation)) leaf_name_data.push_back(authen_incorrect_responses.get_name_leafdata());
    if (authen_response_time.is_set || is_set(authen_response_time.operation)) leaf_name_data.push_back(authen_response_time.get_name_leafdata());
    if (authen_server_error_responses.is_set || is_set(authen_server_error_responses.operation)) leaf_name_data.push_back(authen_server_error_responses.get_name_leafdata());
    if (authen_transaction_failure.is_set || is_set(authen_transaction_failure.operation)) leaf_name_data.push_back(authen_transaction_failure.get_name_leafdata());
    if (authen_transaction_successess.is_set || is_set(authen_transaction_successess.operation)) leaf_name_data.push_back(authen_transaction_successess.get_name_leafdata());
    if (authen_unexpected_responses.is_set || is_set(authen_unexpected_responses.operation)) leaf_name_data.push_back(authen_unexpected_responses.get_name_leafdata());
    if (authentication_port.is_set || is_set(authentication_port.operation)) leaf_name_data.push_back(authentication_port.get_name_leafdata());
    if (authentication_rtt.is_set || is_set(authentication_rtt.operation)) leaf_name_data.push_back(authentication_rtt.get_name_leafdata());
    if (author_incorrect_responses.is_set || is_set(author_incorrect_responses.operation)) leaf_name_data.push_back(author_incorrect_responses.get_name_leafdata());
    if (author_request_timeouts.is_set || is_set(author_request_timeouts.operation)) leaf_name_data.push_back(author_request_timeouts.get_name_leafdata());
    if (author_requests.is_set || is_set(author_requests.operation)) leaf_name_data.push_back(author_requests.get_name_leafdata());
    if (author_response_time.is_set || is_set(author_response_time.operation)) leaf_name_data.push_back(author_response_time.get_name_leafdata());
    if (author_server_error_responses.is_set || is_set(author_server_error_responses.operation)) leaf_name_data.push_back(author_server_error_responses.get_name_leafdata());
    if (author_transaction_failure.is_set || is_set(author_transaction_failure.operation)) leaf_name_data.push_back(author_transaction_failure.get_name_leafdata());
    if (author_transaction_successess.is_set || is_set(author_transaction_successess.operation)) leaf_name_data.push_back(author_transaction_successess.get_name_leafdata());
    if (author_unexpected_responses.is_set || is_set(author_unexpected_responses.operation)) leaf_name_data.push_back(author_unexpected_responses.get_name_leafdata());
    if (bad_access_authenticators.is_set || is_set(bad_access_authenticators.operation)) leaf_name_data.push_back(bad_access_authenticators.get_name_leafdata());
    if (bad_access_responses.is_set || is_set(bad_access_responses.operation)) leaf_name_data.push_back(bad_access_responses.get_name_leafdata());
    if (bad_accounting_authenticators.is_set || is_set(bad_accounting_authenticators.operation)) leaf_name_data.push_back(bad_accounting_authenticators.get_name_leafdata());
    if (bad_accounting_responses.is_set || is_set(bad_accounting_responses.operation)) leaf_name_data.push_back(bad_accounting_responses.get_name_leafdata());
    if (current_state_duration.is_set || is_set(current_state_duration.operation)) leaf_name_data.push_back(current_state_duration.get_name_leafdata());
    if (currently_throttled_access_reqs.is_set || is_set(currently_throttled_access_reqs.operation)) leaf_name_data.push_back(currently_throttled_access_reqs.get_name_leafdata());
    if (dead_detect_time.is_set || is_set(dead_detect_time.operation)) leaf_name_data.push_back(dead_detect_time.get_name_leafdata());
    if (dead_detect_tries.is_set || is_set(dead_detect_tries.operation)) leaf_name_data.push_back(dead_detect_tries.get_name_leafdata());
    if (dead_time.is_set || is_set(dead_time.operation)) leaf_name_data.push_back(dead_time.get_name_leafdata());
    if (dropped_access_responses.is_set || is_set(dropped_access_responses.operation)) leaf_name_data.push_back(dropped_access_responses.get_name_leafdata());
    if (dropped_accounting_responses.is_set || is_set(dropped_accounting_responses.operation)) leaf_name_data.push_back(dropped_accounting_responses.get_name_leafdata());
    if (family.is_set || is_set(family.operation)) leaf_name_data.push_back(family.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_xr.is_set || is_set(ip_address_xr.operation)) leaf_name_data.push_back(ip_address_xr.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (is_a_private_server.is_set || is_set(is_a_private_server.operation)) leaf_name_data.push_back(is_a_private_server.get_name_leafdata());
    if (is_quarantined.is_set || is_set(is_quarantined.operation)) leaf_name_data.push_back(is_quarantined.get_name_leafdata());
    if (last_deadtime.is_set || is_set(last_deadtime.operation)) leaf_name_data.push_back(last_deadtime.get_name_leafdata());
    if (max_acct_throttled.is_set || is_set(max_acct_throttled.operation)) leaf_name_data.push_back(max_acct_throttled.get_name_leafdata());
    if (max_throttled_access_reqs.is_set || is_set(max_throttled_access_reqs.operation)) leaf_name_data.push_back(max_throttled_access_reqs.get_name_leafdata());
    if (packets_in.is_set || is_set(packets_in.operation)) leaf_name_data.push_back(packets_in.get_name_leafdata());
    if (packets_out.is_set || is_set(packets_out.operation)) leaf_name_data.push_back(packets_out.get_name_leafdata());
    if (pending_access_requests.is_set || is_set(pending_access_requests.operation)) leaf_name_data.push_back(pending_access_requests.get_name_leafdata());
    if (pending_accounting_requets.is_set || is_set(pending_accounting_requets.operation)) leaf_name_data.push_back(pending_accounting_requets.get_name_leafdata());
    if (previous_state_duration.is_set || is_set(previous_state_duration.operation)) leaf_name_data.push_back(previous_state_duration.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (redirected_requests.is_set || is_set(redirected_requests.operation)) leaf_name_data.push_back(redirected_requests.get_name_leafdata());
    if (replies_expected.is_set || is_set(replies_expected.operation)) leaf_name_data.push_back(replies_expected.get_name_leafdata());
    if (retransmit.is_set || is_set(retransmit.operation)) leaf_name_data.push_back(retransmit.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (throttled_access_reqs.is_set || is_set(throttled_access_reqs.operation)) leaf_name_data.push_back(throttled_access_reqs.get_name_leafdata());
    if (throttled_acct_failures_stats.is_set || is_set(throttled_acct_failures_stats.operation)) leaf_name_data.push_back(throttled_acct_failures_stats.get_name_leafdata());
    if (throttled_acct_timed_out_stats.is_set || is_set(throttled_acct_timed_out_stats.operation)) leaf_name_data.push_back(throttled_acct_timed_out_stats.get_name_leafdata());
    if (throttled_acct_transactions.is_set || is_set(throttled_acct_transactions.operation)) leaf_name_data.push_back(throttled_acct_transactions.get_name_leafdata());
    if (throttled_dropped_reqs.is_set || is_set(throttled_dropped_reqs.operation)) leaf_name_data.push_back(throttled_dropped_reqs.get_name_leafdata());
    if (throttled_timed_out_reqs.is_set || is_set(throttled_timed_out_reqs.operation)) leaf_name_data.push_back(throttled_timed_out_reqs.get_name_leafdata());
    if (throttleda_acct_transactions.is_set || is_set(throttleda_acct_transactions.operation)) leaf_name_data.push_back(throttleda_acct_transactions.get_name_leafdata());
    if (timeout_xr.is_set || is_set(timeout_xr.operation)) leaf_name_data.push_back(timeout_xr.get_name_leafdata());
    if (timeouts.is_set || is_set(timeouts.operation)) leaf_name_data.push_back(timeouts.get_name_leafdata());
    if (total_deadtime.is_set || is_set(total_deadtime.operation)) leaf_name_data.push_back(total_deadtime.get_name_leafdata());
    if (total_test_acct_pending.is_set || is_set(total_test_acct_pending.operation)) leaf_name_data.push_back(total_test_acct_pending.get_name_leafdata());
    if (total_test_acct_reqs.is_set || is_set(total_test_acct_reqs.operation)) leaf_name_data.push_back(total_test_acct_reqs.get_name_leafdata());
    if (total_test_acct_response.is_set || is_set(total_test_acct_response.operation)) leaf_name_data.push_back(total_test_acct_response.get_name_leafdata());
    if (total_test_acct_timeouts.is_set || is_set(total_test_acct_timeouts.operation)) leaf_name_data.push_back(total_test_acct_timeouts.get_name_leafdata());
    if (total_test_auth_pending.is_set || is_set(total_test_auth_pending.operation)) leaf_name_data.push_back(total_test_auth_pending.get_name_leafdata());
    if (total_test_auth_reqs.is_set || is_set(total_test_auth_reqs.operation)) leaf_name_data.push_back(total_test_auth_reqs.get_name_leafdata());
    if (total_test_auth_response.is_set || is_set(total_test_auth_response.operation)) leaf_name_data.push_back(total_test_auth_response.get_name_leafdata());
    if (total_test_auth_timeouts.is_set || is_set(total_test_auth_timeouts.operation)) leaf_name_data.push_back(total_test_auth_timeouts.get_name_leafdata());
    if (unknown_access_types.is_set || is_set(unknown_access_types.operation)) leaf_name_data.push_back(unknown_access_types.get_name_leafdata());
    if (unknown_accounting_types.is_set || is_set(unknown_accounting_types.operation)) leaf_name_data.push_back(unknown_accounting_types.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::Servers::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::Servers::Server::get_children()
{
    return children;
}

void Aaa::Radius::Servers::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aborts")
    {
        aborts = value;
    }
    if(value_path == "access-accepts")
    {
        access_accepts = value;
    }
    if(value_path == "access-challenges")
    {
        access_challenges = value;
    }
    if(value_path == "access-rejects")
    {
        access_rejects = value;
    }
    if(value_path == "access-request-retransmits")
    {
        access_request_retransmits = value;
    }
    if(value_path == "access-requests")
    {
        access_requests = value;
    }
    if(value_path == "access-timeouts")
    {
        access_timeouts = value;
    }
    if(value_path == "accounting-port")
    {
        accounting_port = value;
    }
    if(value_path == "accounting-requests")
    {
        accounting_requests = value;
    }
    if(value_path == "accounting-responses")
    {
        accounting_responses = value;
    }
    if(value_path == "accounting-retransmits")
    {
        accounting_retransmits = value;
    }
    if(value_path == "accounting-rtt")
    {
        accounting_rtt = value;
    }
    if(value_path == "accounting-timeouts")
    {
        accounting_timeouts = value;
    }
    if(value_path == "acct-incorrect-responses")
    {
        acct_incorrect_responses = value;
    }
    if(value_path == "acct-port-number")
    {
        acct_port_number = value;
    }
    if(value_path == "acct-response-time")
    {
        acct_response_time = value;
    }
    if(value_path == "acct-server-error-responses")
    {
        acct_server_error_responses = value;
    }
    if(value_path == "acct-transaction-failure")
    {
        acct_transaction_failure = value;
    }
    if(value_path == "acct-transaction-successess")
    {
        acct_transaction_successess = value;
    }
    if(value_path == "acct-unexpected-responses")
    {
        acct_unexpected_responses = value;
    }
    if(value_path == "auth-port-number")
    {
        auth_port_number = value;
    }
    if(value_path == "authen-incorrect-responses")
    {
        authen_incorrect_responses = value;
    }
    if(value_path == "authen-response-time")
    {
        authen_response_time = value;
    }
    if(value_path == "authen-server-error-responses")
    {
        authen_server_error_responses = value;
    }
    if(value_path == "authen-transaction-failure")
    {
        authen_transaction_failure = value;
    }
    if(value_path == "authen-transaction-successess")
    {
        authen_transaction_successess = value;
    }
    if(value_path == "authen-unexpected-responses")
    {
        authen_unexpected_responses = value;
    }
    if(value_path == "authentication-port")
    {
        authentication_port = value;
    }
    if(value_path == "authentication-rtt")
    {
        authentication_rtt = value;
    }
    if(value_path == "author-incorrect-responses")
    {
        author_incorrect_responses = value;
    }
    if(value_path == "author-request-timeouts")
    {
        author_request_timeouts = value;
    }
    if(value_path == "author-requests")
    {
        author_requests = value;
    }
    if(value_path == "author-response-time")
    {
        author_response_time = value;
    }
    if(value_path == "author-server-error-responses")
    {
        author_server_error_responses = value;
    }
    if(value_path == "author-transaction-failure")
    {
        author_transaction_failure = value;
    }
    if(value_path == "author-transaction-successess")
    {
        author_transaction_successess = value;
    }
    if(value_path == "author-unexpected-responses")
    {
        author_unexpected_responses = value;
    }
    if(value_path == "bad-access-authenticators")
    {
        bad_access_authenticators = value;
    }
    if(value_path == "bad-access-responses")
    {
        bad_access_responses = value;
    }
    if(value_path == "bad-accounting-authenticators")
    {
        bad_accounting_authenticators = value;
    }
    if(value_path == "bad-accounting-responses")
    {
        bad_accounting_responses = value;
    }
    if(value_path == "current-state-duration")
    {
        current_state_duration = value;
    }
    if(value_path == "currently-throttled-access-reqs")
    {
        currently_throttled_access_reqs = value;
    }
    if(value_path == "dead-detect-time")
    {
        dead_detect_time = value;
    }
    if(value_path == "dead-detect-tries")
    {
        dead_detect_tries = value;
    }
    if(value_path == "dead-time")
    {
        dead_time = value;
    }
    if(value_path == "dropped-access-responses")
    {
        dropped_access_responses = value;
    }
    if(value_path == "dropped-accounting-responses")
    {
        dropped_accounting_responses = value;
    }
    if(value_path == "family")
    {
        family = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "ip-address-xr")
    {
        ip_address_xr = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "is-a-private-server")
    {
        is_a_private_server = value;
    }
    if(value_path == "is-quarantined")
    {
        is_quarantined = value;
    }
    if(value_path == "last-deadtime")
    {
        last_deadtime = value;
    }
    if(value_path == "max-acct-throttled")
    {
        max_acct_throttled = value;
    }
    if(value_path == "max-throttled-access-reqs")
    {
        max_throttled_access_reqs = value;
    }
    if(value_path == "packets-in")
    {
        packets_in = value;
    }
    if(value_path == "packets-out")
    {
        packets_out = value;
    }
    if(value_path == "pending-access-requests")
    {
        pending_access_requests = value;
    }
    if(value_path == "pending-accounting-requets")
    {
        pending_accounting_requets = value;
    }
    if(value_path == "previous-state-duration")
    {
        previous_state_duration = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "redirected-requests")
    {
        redirected_requests = value;
    }
    if(value_path == "replies-expected")
    {
        replies_expected = value;
    }
    if(value_path == "retransmit")
    {
        retransmit = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "throttled-access-reqs")
    {
        throttled_access_reqs = value;
    }
    if(value_path == "throttled-acct-failures-stats")
    {
        throttled_acct_failures_stats = value;
    }
    if(value_path == "throttled-acct-timed-out-stats")
    {
        throttled_acct_timed_out_stats = value;
    }
    if(value_path == "throttled-acct-transactions")
    {
        throttled_acct_transactions = value;
    }
    if(value_path == "throttled-dropped-reqs")
    {
        throttled_dropped_reqs = value;
    }
    if(value_path == "throttled-timed-out-reqs")
    {
        throttled_timed_out_reqs = value;
    }
    if(value_path == "throttleda-acct-transactions")
    {
        throttleda_acct_transactions = value;
    }
    if(value_path == "timeout-xr")
    {
        timeout_xr = value;
    }
    if(value_path == "timeouts")
    {
        timeouts = value;
    }
    if(value_path == "total-deadtime")
    {
        total_deadtime = value;
    }
    if(value_path == "total-test-acct-pending")
    {
        total_test_acct_pending = value;
    }
    if(value_path == "total-test-acct-reqs")
    {
        total_test_acct_reqs = value;
    }
    if(value_path == "total-test-acct-response")
    {
        total_test_acct_response = value;
    }
    if(value_path == "total-test-acct-timeouts")
    {
        total_test_acct_timeouts = value;
    }
    if(value_path == "total-test-auth-pending")
    {
        total_test_auth_pending = value;
    }
    if(value_path == "total-test-auth-reqs")
    {
        total_test_auth_reqs = value;
    }
    if(value_path == "total-test-auth-response")
    {
        total_test_auth_response = value;
    }
    if(value_path == "total-test-auth-timeouts")
    {
        total_test_auth_timeouts = value;
    }
    if(value_path == "unknown-access-types")
    {
        unknown_access_types = value;
    }
    if(value_path == "unknown-accounting-types")
    {
        unknown_accounting_types = value;
    }
}

Aaa::Radius::RadiusSourceInterface::RadiusSourceInterface()
{
    yang_name = "radius-source-interface"; yang_parent_name = "radius";
}

Aaa::Radius::RadiusSourceInterface::~RadiusSourceInterface()
{
}

bool Aaa::Radius::RadiusSourceInterface::has_data() const
{
    for (std::size_t index=0; index<list_of_source_interface.size(); index++)
    {
        if(list_of_source_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Aaa::Radius::RadiusSourceInterface::has_operation() const
{
    for (std::size_t index=0; index<list_of_source_interface.size(); index++)
    {
        if(list_of_source_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Aaa::Radius::RadiusSourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius-source-interface";

    return path_buffer.str();

}

EntityPath Aaa::Radius::RadiusSourceInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-protocol-radius-oper:radius/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::RadiusSourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "list-of-source-interface")
    {
        for(auto const & c : list_of_source_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Aaa::Radius::RadiusSourceInterface::ListOfSourceInterface>();
        c->parent = this;
        list_of_source_interface.push_back(std::move(c));
        children[segment_path] = list_of_source_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::RadiusSourceInterface::get_children()
{
    for (auto const & c : list_of_source_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Aaa::Radius::RadiusSourceInterface::set_value(const std::string & value_path, std::string value)
{
}

Aaa::Radius::RadiusSourceInterface::ListOfSourceInterface::ListOfSourceInterface()
    :
    interface_name{YType::str, "interface-name"},
    ipaddrv4{YType::str, "ipaddrv4"},
    ipaddrv6{YType::str, "ipaddrv6"},
    vrfid{YType::uint32, "vrfid"}
{
    yang_name = "list-of-source-interface"; yang_parent_name = "radius-source-interface";
}

Aaa::Radius::RadiusSourceInterface::ListOfSourceInterface::~ListOfSourceInterface()
{
}

bool Aaa::Radius::RadiusSourceInterface::ListOfSourceInterface::has_data() const
{
    return interface_name.is_set
	|| ipaddrv4.is_set
	|| ipaddrv6.is_set
	|| vrfid.is_set;
}

bool Aaa::Radius::RadiusSourceInterface::ListOfSourceInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(ipaddrv4.operation)
	|| is_set(ipaddrv6.operation)
	|| is_set(vrfid.operation);
}

std::string Aaa::Radius::RadiusSourceInterface::ListOfSourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list-of-source-interface";

    return path_buffer.str();

}

EntityPath Aaa::Radius::RadiusSourceInterface::ListOfSourceInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-protocol-radius-oper:radius/radius-source-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ipaddrv4.is_set || is_set(ipaddrv4.operation)) leaf_name_data.push_back(ipaddrv4.get_name_leafdata());
    if (ipaddrv6.is_set || is_set(ipaddrv6.operation)) leaf_name_data.push_back(ipaddrv6.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.operation)) leaf_name_data.push_back(vrfid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::RadiusSourceInterface::ListOfSourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::RadiusSourceInterface::ListOfSourceInterface::get_children()
{
    return children;
}

void Aaa::Radius::RadiusSourceInterface::ListOfSourceInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "ipaddrv4")
    {
        ipaddrv4 = value;
    }
    if(value_path == "ipaddrv6")
    {
        ipaddrv6 = value;
    }
    if(value_path == "vrfid")
    {
        vrfid = value;
    }
}

Aaa::Radius::Global::Global()
    :
    accounting_nas_id{YType::str, "accounting-nas-id"},
    authentication_nas_id{YType::str, "authentication-nas-id"},
    unknown_accounting_response{YType::uint32, "unknown-accounting-response"},
    unknown_authentication_response{YType::uint32, "unknown-authentication-response"}
{
    yang_name = "global"; yang_parent_name = "radius";
}

Aaa::Radius::Global::~Global()
{
}

bool Aaa::Radius::Global::has_data() const
{
    return accounting_nas_id.is_set
	|| authentication_nas_id.is_set
	|| unknown_accounting_response.is_set
	|| unknown_authentication_response.is_set;
}

bool Aaa::Radius::Global::has_operation() const
{
    return is_set(operation)
	|| is_set(accounting_nas_id.operation)
	|| is_set(authentication_nas_id.operation)
	|| is_set(unknown_accounting_response.operation)
	|| is_set(unknown_authentication_response.operation);
}

std::string Aaa::Radius::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath Aaa::Radius::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-locald-oper:aaa/Cisco-IOS-XR-aaa-protocol-radius-oper:radius/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting_nas_id.is_set || is_set(accounting_nas_id.operation)) leaf_name_data.push_back(accounting_nas_id.get_name_leafdata());
    if (authentication_nas_id.is_set || is_set(authentication_nas_id.operation)) leaf_name_data.push_back(authentication_nas_id.get_name_leafdata());
    if (unknown_accounting_response.is_set || is_set(unknown_accounting_response.operation)) leaf_name_data.push_back(unknown_accounting_response.get_name_leafdata());
    if (unknown_authentication_response.is_set || is_set(unknown_authentication_response.operation)) leaf_name_data.push_back(unknown_authentication_response.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Aaa::Radius::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Aaa::Radius::Global::get_children()
{
    return children;
}

void Aaa::Radius::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accounting-nas-id")
    {
        accounting_nas_id = value;
    }
    if(value_path == "authentication-nas-id")
    {
        authentication_nas_id = value;
    }
    if(value_path == "unknown-accounting-response")
    {
        unknown_accounting_response = value;
    }
    if(value_path == "unknown-authentication-response")
    {
        unknown_authentication_response = value;
    }
}


}
}
